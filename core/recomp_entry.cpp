/* C 链接包装层：让 platform.c（按 C 编译）能驱动 decomp 的启动与主循环
 *
 * 为什么需要这一层
 * ----------------
 * mDoMch_Create / fapGm_Create 等在 decomp 头文件里没有 extern "C"，
 * C++ 编译器会做名字改编，platform.c（.c）无法直接引用它们。
 *
 * 更关键的作用：建立 wasm-ld 的引用链
 * -----------------------------------
 * wasm-ld 从 -sEXPORTED_FUNCTIONS 出发做可达性分析，
 * 只有被导出符号**直接或间接**引用到的代码才会进最终产物，其余当垃圾回收。
 *
 * 之前 tww_frame 是空的 TODO（只做 g_frame++），532 个 .o 不在引用链上，
 * 被整体 DCE 掉 —— 产物只有 57KB 空壳。
 *
 * 引用链：
 *   _tww_init  -> tww_recomp_create -> mDoMch_Create / ... / fapGm_Create
 *   _tww_step  -> tww_recomp_frame  -> mDoCPd_Read / fapGm_Execute
 *
 * 启动序列不是随便挑的，是对着 m_Do_main.cpp 的 main01() 抄的：
 *
 *   main01() {
 *       mDoMch_Create();     // 堆、异常、RNG、DVD 线程、记忆卡线程
 *       mDoGph_Create();     // 帧缓冲 / Z 缓冲 / 显示列表
 *       mDoCPd_Create();     // 手柄
 *       ... 堆检查 / 控制台 ...
 *       fapGm_Create();      // 框架 + 首个场景(LOGO)
 *       cDyl_InitAsync();    // 加载 REL 动态模块（actor 都在里面）
 *       do {
 *           mDoCPd_Read();       // 读输入
 *           mDoAud_Execute();    // 音频
 *           fapGm_Execute();     // 游戏逻辑
 *       } while (...)
 *   }
 *
 * 只调 fapGm_Create() 是不够的：它内部会 mDoHIO_createChild（要分配内存），
 * 没有堆初始化会直接崩。所以必须把前面的 mDoMch/Gph/CPd 一起带上。
 *
 * 每个阶段可独立跳过（tww_recomp_set_boot_mask），因为在 WASM 里
 * 线程 / DVD / 记忆卡这些硬件相关模块很可能跑不通，需要逐个隔离调试。
 */
#include "m_Do/m_Do_machine.h"
#include "m_Do/m_Do_graphic.h"
#include "m_Do/m_Do_controller_pad.h"
#include "m_Do/m_Do_audio.h"
#include "c/c_dylink.h"
#include "f_ap/f_ap_game.h"

extern "C" {

/* 启动阶段位掩码 */
enum {
    BOOT_MCH   = 1 << 0,   /* mDoMch_Create  堆/异常/RNG/线程 */
    BOOT_GPH   = 1 << 1,   /* mDoGph_Create  帧缓冲/GX */
    BOOT_CPD   = 1 << 2,   /* mDoCPd_Create  手柄 */
    BOOT_GM    = 1 << 3,   /* fapGm_Create   框架+场景 */
    BOOT_DYL   = 1 << 4,   /* cDyl_InitAsync REL 模块 */
    BOOT_ALL   = 0x1F,
};

/* 每帧阶段位掩码 */
enum {
    FRAME_PAD  = 1 << 0,   /* mDoCPd_Read     读输入 */
    FRAME_AUD  = 1 << 1,   /* mDoAud_Execute  音频 */
    FRAME_GM   = 1 << 2,   /* fapGm_Execute   游戏逻辑 */
    FRAME_ALL  = 0x07,
};

static int g_bootMask  = BOOT_ALL;
static int g_frameMask = FRAME_ALL;
static int g_booted = 0;

void tww_recomp_set_boot_mask(int bootMask, int frameMask) {
    g_bootMask  = bootMask;
    g_frameMask = frameMask;
}

int tww_recomp_booted(void) { return g_booted; }

void tww_recomp_create(void) {
    if (g_booted) return;

    if (g_bootMask & BOOT_MCH) mDoMch_Create();
    if (g_bootMask & BOOT_GPH) mDoGph_Create();
    if (g_bootMask & BOOT_CPD) mDoCPd_Create();
    if (g_bootMask & BOOT_GM)  fapGm_Create();
    if (g_bootMask & BOOT_DYL) cDyl_InitAsync();

    g_booted = 1;
}

void tww_recomp_frame(void) {
    if (!g_booted) return;      /* 没启动就别跑，避免空堆访问 */

    if (g_frameMask & FRAME_PAD) mDoCPd_Read();
    if (g_frameMask & FRAME_AUD) mDoAud_Execute();
    if (g_frameMask & FRAME_GM)  fapGm_Execute();
}

}
