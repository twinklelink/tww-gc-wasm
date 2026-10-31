/* dolphin 硬件层符号的实体定义
 *
 * 为什么需要这个文件：
 *   CI 排除了整个 tww-decomp-src/dolphin/ 目录（GameCube SDK），
 *   因为里面的 GX* 函数与我们的 gx/gx2gl.cpp 重复。
 *   但 dolphin 头里有一批 extern 声明，实体原本定义在 dolphin 的 .c 里：
 *
 *     dolphin/gx/GX.h:73       extern volatile PPCWGPipe GXFIFO;
 *     dolphin/os/OSTime.h:36   extern u32 __OSBusClock AT_ADDRESS(0x800000F8);
 *
 *   排除 dolphin 后这些只有声明没有定义，链接期报 undefined symbol。
 *   J3DShape.cpp / CARDWrite 相关代码会引用它们。
 *
 * 为什么不用 AT_ADDRESS：
 *   那个宏在 MWERKS（GC 官方编译器）下展开成 `:(addr)` 把变量钉在硬件地址；
 *   GCC/Clang 下展开为空（types.h:39 有注释说明要改用 linker script）。
 *   WASM 里没有内存映射寄存器，直接当普通全局变量，值由 platform.c 填。
 *
 * 类型一致性：
 *   这里不 include dolphin 头（会与 gx2gl.h 的类型定义打架），
 *   手写等价定义。PPCWGPipe 是 8 字节 union（含 u64/f64 成员），
 *   大小和 8 字节对齐必须与 dolphin 的完全一致，否则链接期符号尺寸不匹配。
 */
#include <stdint.h>
#include <time.h>

typedef uint8_t  u8;   typedef int8_t   s8;
typedef uint16_t u16;  typedef int16_t  s16;
typedef uint32_t u32;  typedef int32_t  s32;
typedef uint64_t u64;  typedef int64_t  s64;
typedef float    f32;  typedef double   f64;

/* dolphin/types.h 里 BOOL 是 s32，这里保持一致 */
typedef s32 BOOL;
#ifndef TRUE
#define TRUE 1
#endif
#ifndef FALSE
#define FALSE 0
#endif

/* 与 dolphin/gx/GX.h 的 PPCWGPipe 逐成员对应 */
typedef union {
    u8  u8;   u16 u16;  u32 u32;  u64 u64;
    s8  s8;   s16 s16;  s32 s32;  s64 s64;
    f32 f32;  f64 f64;
} PPCWGPipe;

/* GX 命令 FIFO。游戏通过 GXFIFO.u8 / .u32 等直接写硬件寄存器。
   我们的 gx2gl.cpp 用记录式 API 拦截 GX 调用，不走硬件写路径，
   所以这里只是个占位，保证符号存在、可读写、不崩 */
volatile PPCWGPipe GXFIFO;

/* 总线时钟（Hz）。GC 上由 OSInit 从硬件读出，约 162MHz。
   代码用它换算时间（如 CARDWrite.c 里的 `OSGetTime()/(__OSBusClock/4)`）。
   给 GC 的实际值，避免除零 */
u32 __OSBusClock = 162000000u;

/* ------------------------------------------------------------------
 * 手柄（PAD）
 *
 * JUTGamePad::read() 调 PADRead() / PADClamp()，这两个原本在
 * dolphin/pad/Pad.c，随 dolphin 目录一起被排除。
 * 没有它们的话，--allow-undefined 会把调用变成 import，
 * 运行时要么崩、要么永远读到空输入 —— 手柄彻底失效。
 *
 * 这里把 JS 通过 tww_input() 传进来的状态喂给游戏。
 * 输入状态定义在 core/platform.c（非 static，本文件 extern 引用）。
 * ------------------------------------------------------------------ */

/* 与 dolphin/pad/Pad.h 的 PADStatus 逐字段对应 */
typedef struct PADStatus {
    u16 button;
    s8  stickX;
    s8  stickY;
    s8  substickX;
    s8  substickY;
    u8  triggerLeft;
    u8  triggerRight;
    u8  analogA;
    u8  analogB;
    s8  err;
} PADStatus;

/* 由 core/platform.c 的 tww_input() 写入。
   用同一个 PadState 结构体定义，两边字段改动会一起编译失败，
   比散落的三个全局变量更安全 */
typedef struct {
    u32 buttons;
    s8  stick[4];     /* [0]=主X [1]=主Y [2]=C X [3]=C Y */
    u8  trigger[2];   /* [0]=L [1]=R */
} PadState;

extern PadState g_pad;

/* 只接 1P：WASM 里没有多手柄概念，其余通道报"无控制器" */
u32 PADRead(PADStatus* status) {
    if (!status) return 0;

    status[0].button       = (u16)g_pad.buttons;
    status[0].stickX       = g_pad.stick[0];
    status[0].stickY       = g_pad.stick[1];
    status[0].substickX    = g_pad.stick[2];
    status[0].substickY    = g_pad.stick[3];
    status[0].triggerLeft  = g_pad.trigger[0];
    status[0].triggerRight = g_pad.trigger[1];
    status[0].analogA      = (g_pad.buttons & 0x0100) ? 255 : 0;  /* A */
    status[0].analogB      = (g_pad.buttons & 0x0200) ? 255 : 0;  /* B */
    status[0].err          = 0;                                   /* PAD_ERR_NONE */

    /* 2P~4P 报"无控制器"：WASM 里没有多手柄概念 */
    for (int i = 1; i < 4; i++) {
        status[i].button = 0;
        status[i].stickX = status[i].stickY = 0;
        status[i].substickX = status[i].substickY = 0;
        status[i].triggerLeft = status[i].triggerRight = 0;
        status[i].analogA = status[i].analogB = 0;
        status[i].err = -1;                        /* PAD_ERR_NO_CONTROLLER */
    }
    return 1;   /* 非 0 表示读取成功 */
}

/* 死区/范围钳制。原版会按 PADClampRegion 校正，
   这里做最小实现：摇杆值已在 JS 侧归一化到 -128..127，只需夹紧 */
void PADClamp(PADStatus* status) {
    if (!status) return;
    for (int i = 0; i < 4; i++) {
        if (status[i].err != 0) continue;
        /* 中心小死区，避免摇杆漂移 */
        if (status[i].stickX > -8 && status[i].stickX < 8)  status[i].stickX = 0;
        if (status[i].stickY > -8 && status[i].stickY < 8)  status[i].stickY = 0;
        if (status[i].substickX > -8 && status[i].substickX < 8) status[i].substickX = 0;
        if (status[i].substickY > -8 && status[i].substickY < 8) status[i].substickY = 0;
    }
}

void PADClampCircle(PADStatus* status) { PADClamp(status); }

BOOL PADInit(void)            { return 1; }
BOOL PADReset(u32 mask)       { (void)mask; return 1; }
BOOL PADRecalibrate(u32 mask)  { (void)mask; return 1; }
void PADSetAnalogMode(u32 m)   { (void)m; }
void PADSetSpec(u32 s)         { (void)s; }
void PADControlMotor(s32 chan, u32 cmd) { (void)chan; (void)cmd; }
void* PADSetSamplingCallback(void* cb)  { (void)cb; return 0; }

/* ------------------------------------------------------------------
 * OS 层时间（dolphin/os/OSTime.c 被排除后缺失）
 *
 * GC 的 TB（Time Base）寄存器以总线时钟 1/4 频率递增：
 *   OSGetTime 单位 = 1/4 总线时钟 = 40.5MHz
 *   OSGetTick = OSGetTime
 * 游戏用它算帧间隔、做超时判断。这里用墙钟换算，保持同一量纲，
 * 否则所有基于时间的逻辑（过场计时、动画步进）都会错乱或除零。
 * ------------------------------------------------------------------ */
#define OS_TIMEBASE_HZ  (__OSBusClock / 4)   /* 40.5 MHz */

/* 单调时间（毫秒）。Emscripten 下 clock() 是 CPU 时间，
   但 WASM 单线程且我们只关心差值，够用且不需要额外头文件 */
static u64 now_ms(void) {
    return (u64)((double)clock() * 1000.0 / (double)CLOCKS_PER_SEC);
}

static u64 g_tbBase = 0;   /* 首次调用时的墙钟，用作 TB 原点 */
static int g_tbInit = 0;

u64 OSGetTime(void) {
    u64 ms = now_ms();
    if (!g_tbInit) { g_tbBase = ms; g_tbInit = 1; }
    /* 毫秒 -> TB 计数（40.5MHz => 每毫秒 40500 个计数） */
    return (ms - g_tbBase) * (OS_TIMEBASE_HZ / 1000);
}

u32 OSGetTick(void) {
    return (u32)OSGetTime();
}

/* OSTicksToMilliseconds / Microseconds / Seconds：dolphin 里是宏，
   但部分代码当函数用（声明在 OSTime.h），补上实体 */
u64 __OSGetSystemTime(void) { return OSGetTime(); }
