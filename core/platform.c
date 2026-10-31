/* 平台抽象层：WASM 入口 + 内存 / 输入 / 存档接口
 *
 * 约定：
 *   - 所有 tww_* 都是 JS 侧的导出接口，签名变更要同步
 *     .github/workflows/build.yml 的 EXPORTED_FUNCTIONS 和 web/main.js
 *   - 地址参数是 GC 物理地址（0x80000000 起），内部转成偏移量再访问
 *   - 多字节读写统一按大端序（GC 是 PowerPC）
 */
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

typedef uint8_t  u8;  typedef uint16_t u16; typedef uint32_t u32; typedef uint64_t u64;
typedef int8_t   s8;  typedef int16_t  s16; typedef int32_t  s32; typedef int64_t  s64;
typedef float    f32; typedef double   f64;

/* GX 适配层入口（实现在 gx/gx2gl.cpp）。这里只用裸声明，
   避免把 gx2gl.h 的 typedef 带进平台层造成重复定义 */
extern void gx2gl_set_output_size(u32 w, u32 h);
extern void gx2gl_set_aspect_mode(int mode);

/* GameCube 物理内存（WASM 中模拟为线性内存） */
#define GC_MEM_SIZE  (64u * 1024u * 1024u)
#define GC_MEM_BASE  0x80000000u

/* 分辨率上下限：下限位防止除零/无意义画面，上限位 8K */
#define RES_MIN_W 160
#define RES_MIN_H 120
#define RES_MAX_W 7680
#define RES_MAX_H 4320

/* 存档卡：2 个槽位，各 32KB（GC 记忆卡扇区规格） */
#define CARD_SLOTS 2
#define CARD_SIZE  0x8000u

/* ---- 输入状态 ----
   不加 static：dolphin_stub.c 的 PADRead() 要读它们，
   否则 JUTGamePad::read() 永远拿到空输入，手柄完全失效 */
typedef struct {
    u32 buttons;      /* PAD_BUTTON_* 位掩码 */
    s8  stick[4];     /* [0]=主X [1]=主Y [2]=C摇杆X [3]=C摇杆Y */
    u8  trigger[2];   /* [0]=L [1]=R */
} PadState;

PadState g_pad = {0, {0, 0, 0, 0}, {0, 0}};

/* ---- 平台状态（内部） ---- */
static u8* g_mem = NULL;                    /* 模拟主存，tww_init 时分配 */
static u32 g_frame = 0;
static u32 g_res_w = 640, g_res_h = 480;    /* 渲染分辨率，可运行时改 */
static int g_aspect_mode = 0;               /* 0=4:3 1=16:9 2=铺满 */
static int g_skip_req = 0;                  /* 跳过过场请求，由主循环消费 */
static u8  g_card[CARD_SLOTS][CARD_SIZE];   /* 模拟记忆卡 */

f32 g_frameScale = 1.0f;   /* 物理步长倍率 = 60 / 目标帧率 */
int g_targetFps  = 60;

/* decomp 入口的 C 链接包装（实现见 core/recomp_entry.cpp）。
   fapGm_Create / fapGm_Execute 是 C++ 符号、做了名字改编，
   platform.c 按 C 编译，只能调包装函数。

   必须在这里调用：wasm-ld 从 EXPORTED_FUNCTIONS 出发做可达性分析，
   只有被导出符号直接或间接引用到的代码才进最终产物。
   532 个 recomp .o 不在引用链上就会被整体 DCE 掉
   —— 曾经链出 57KB 空壳就是这个原因。 */
extern void tww_recomp_create(void);
extern void tww_recomp_frame(void);
/* 启动/每帧阶段位掩码开关，见 recomp_entry.cpp 的 BOOT_* / FRAME_*。
   WASM 里线程、DVD、记忆卡这类硬件模块很可能跑不通，
   能逐个关掉才能二分定位崩溃发生在哪一步 */
extern void tww_recomp_set_boot_mask(int bootMask, int frameMask);
extern int  tww_recomp_booted(void);

/* ------------------------------------------------------------------
 * 内部辅助
 * ------------------------------------------------------------------ */

/* GC 物理地址 -> 线性偏移。高位掩码掉，等价于 addr - 0x80000000 */
static inline u32 addr_to_offset(u32 addr) {
    return addr & 0x7FFFFFFFu;
}

/* 区间是否完全落在 [0, size) 内。
   先做加法再比较会溢出（addr 接近 0xFFFFFFFF 时 addr+len 回绕），
   所以改成移项比较 */
static inline int range_valid(u32 off, u32 len, u32 size) {
    return off <= size && len <= size - off;
}

/* 大端序读写。抽出来而不是每处手写移位，避免写错字节序 */
static inline void store_be32(u8* p, u32 v) {
    p[0] = (u8)(v >> 24); p[1] = (u8)(v >> 16);
    p[2] = (u8)(v >> 8);  p[3] = (u8)(v);
}
static inline u32 load_be32(const u8* p) {
    return ((u32)p[0] << 24) | ((u32)p[1] << 16) |
           ((u32)p[2] << 8)  | (u32)p[3];
}

static inline int clamp_int(int v, int lo, int hi) {
    return v < lo ? lo : (v > hi ? hi : v);
}

/* ------------------------------------------------------------------
 * 生命周期
 * ------------------------------------------------------------------ */

void tww_init(void) {
    if (!g_mem) {
        g_mem = (u8*)malloc(GC_MEM_SIZE);
        if (g_mem) memset(g_mem, 0, GC_MEM_SIZE);
    }
    g_frame = 0;
    tww_recomp_create();
}

u8* tww_memory(void)     { return g_mem; }
u32 tww_mem_size(void)   { return GC_MEM_SIZE; }

/* ------------------------------------------------------------------
 * 输入
 * ------------------------------------------------------------------ */

void tww_input(u32 buttons, s8 sx, s8 sy, s8 cx, s8 cy, u8 lt, u8 rt) {
    g_pad.buttons    = buttons;
    g_pad.stick[0]   = sx;
    g_pad.stick[1]   = sy;
    g_pad.stick[2]   = cx;
    g_pad.stick[3]   = cy;
    g_pad.trigger[0] = lt;
    g_pad.trigger[1] = rt;
}

/* ------------------------------------------------------------------
 * 每帧驱动
 *
 * 注意 tww_step 与 tww_frame 都调 recomp_frame：
 * main.js 的 draw() 里写的是
 *     if (_tww_step) _tww_step(); else _tww_frame();
 * 因为 _tww_step 存在，_tww_frame 永远不会被调用到，
 * 真正的每帧驱动点是 tww_step。两边都接上，避免以后改前端时漏掉。
 * ------------------------------------------------------------------ */

static void advance_frame(void) {
    g_frame++;
    tww_recomp_frame();
}

void tww_frame(void) {
    /* TODO 1. 把 g_pad 写入 PAD 状态区（目前由 dolphin_stub 的 PADRead 直接读）
       TODO 2. XFB 帧缓冲拷贝给 JS */
    advance_frame();
}

/* 物理逻辑单步：与渲染帧解耦，JS 按 60Hz 补足步数，
   保证移动速度/重力/摆荡周期不随渲染帧率变化 */
void tww_step(void) {
    advance_frame();
}

/* 仅呈现当前帧（不推进逻辑），供高刷新率下重复绘制 */
void tww_present(void) {
    /* TODO: 提交 GX 命令流到 GL，不调用逻辑更新 */
}

/* ------------------------------------------------------------------
 * 启动阶段开关
 * ------------------------------------------------------------------ */

void tww_set_boot_mask(int bootMask, int frameMask) {
    tww_recomp_set_boot_mask(bootMask, frameMask);
}
int tww_booted(void) { return tww_recomp_booted(); }

/* ------------------------------------------------------------------
 * 帧率
 * ------------------------------------------------------------------ */

#define FPS_MIN 30
#define FPS_MAX 120

/* 把物理步长按 60fps 基准缩放，30~120 帧都保持原速 */
f32 tww_frame_scale(void) { return g_frameScale; }

void tww_set_frame_rate(int fps) {
    fps = clamp_int(fps, FPS_MIN, FPS_MAX);
    g_targetFps  = fps;
    g_frameScale = 60.0f / (f32)fps;
}

/* ------------------------------------------------------------------
 * 分辨率与宽高比
 *
 * 内部逻辑仍按 640x480 EFB 布局，GX 层只放大视口并修正横向 FOV，
 * 这样 480P~4K 都不破坏游戏的坐标假设。
 * ------------------------------------------------------------------ */

void tww_set_res(u32 w, u32 h) {
    if (w < RES_MIN_W) w = RES_MIN_W;
    if (h < RES_MIN_H) h = RES_MIN_H;
    if (w > RES_MAX_W) w = RES_MAX_W;
    if (h > RES_MAX_H) h = RES_MAX_H;
    g_res_w = w;
    g_res_h = h;
    gx2gl_set_output_size(w, h);
}

/* 0=4:3  1=真·宽屏16:9  2=铺满（拉伸） */
void tww_set_aspect(int mode) {
    g_aspect_mode = clamp_int(mode, 0, 2);
    gx2gl_set_aspect_mode(g_aspect_mode);
}

int  tww_get_aspect(void) { return g_aspect_mode; }
u32  tww_get_res_w(void)  { return g_res_w; }
u32  tww_get_res_h(void)  { return g_res_h; }
u32  tww_get_frame(void)  { return g_frame; }

/* ------------------------------------------------------------------
 * 跳过过场：main.js 连按 START 会调它
 * 只是置位，由游戏主循环轮询消费；没有主循环时也不会崩
 * ------------------------------------------------------------------ */

void tww_skip(void)         { g_skip_req = 1; }
int  tww_skip_peek(void)    { return g_skip_req; }
void tww_skip_clear(void)   { g_skip_req = 0; }

/* ------------------------------------------------------------------
 * 金手指：直接读写模拟内存
 * ------------------------------------------------------------------ */

void tww_poke32(u32 addr, u32 val) {
    u32 off = addr_to_offset(addr);
    if (!g_mem || !range_valid(off, 4, GC_MEM_SIZE)) return;
    store_be32(g_mem + off, val);
}

u32 tww_peek32(u32 addr) {
    u32 off = addr_to_offset(addr);
    if (!g_mem || !range_valid(off, 4, GC_MEM_SIZE)) return 0;
    return load_be32(g_mem + off);
}

void tww_poke8(u32 addr, u8 val) {
    u32 off = addr_to_offset(addr);
    if (!g_mem || !range_valid(off, 1, GC_MEM_SIZE)) return;
    g_mem[off] = val;
}

u8 tww_peek8(u32 addr) {
    u32 off = addr_to_offset(addr);
    if (!g_mem || !range_valid(off, 1, GC_MEM_SIZE)) return 0;
    return g_mem[off];
}

/* ------------------------------------------------------------------
 * 存档（模拟 memcard）
 * ------------------------------------------------------------------ */

static int card_slot_valid(int slot) {
    return slot >= 0 && slot < (int)CARD_SLOTS;
}

int tww_card_write(int slot, u32 addr, const u8* data, u32 len) {
    if (!card_slot_valid(slot) || !data) return -1;
    if (!range_valid(addr, len, CARD_SIZE)) return -1;
    memcpy(g_card[slot] + addr, data, len);
    return 0;
}

int tww_card_read(int slot, u32 addr, u8* out, u32 len) {
    if (!card_slot_valid(slot) || !out) return -1;
    if (!range_valid(addr, len, CARD_SIZE)) return -1;
    memcpy(out, g_card[slot] + addr, len);
    return 0;
}

u8* tww_card_ptr(int slot) {
    return card_slot_valid(slot) ? g_card[slot] : NULL;
}
