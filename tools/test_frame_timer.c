/* FRAME_TIMER_DEC / INC 宏的正确性测试
 *
 * 要点：
 *  1. 120fps（dt=0.5）下不能因为 (int)0.5==0 而让计时器停住
 *  2. 同一函数内多个计时器，累加器变量名不能冲突（## 阻止 __LINE__ 展开的坑）
 *  3. 长时间平均速率必须精确等于 1/dt 格每秒
 *
 * 编译运行：
 *   cd source/GitHub
 *   gcc -I tww-decomp-include -Wall tools/test_frame_timer.c -o /tmp/tft && /tmp/tft
 */
#include <stdio.h>
#include <math.h>
#include "frame_rate.h"

float g_frameScale = 1.0f;
int   g_targetFps  = 60;

struct S { int mTimer; int mWaitTimer; float mFTimer; };

/* 同一函数内两个计时器：验证累加器变量名不冲突 */
static void step(struct S* s){
    FRAME_TIMER_DEC(s->mTimer);
    FRAME_TIMER_INC(s->mWaitTimer);
    FRAME_TIMER_DEC(s->mTimer);
    FRAME_TIMER_DEC_F(s->mFTimer);
}

static int fails = 0;
static void expect(const char* name, int got, int want){
    printf("  %-38s got=%-6d want=%-6d %s\n", name, got, want,
           got == want ? "PASS" : "FAIL");
    if (got != want) fails++;
}
static void expectf(const char* name, float got, float want){
    printf("  %-38s got=%-8.2f want=%-8.2f %s\n", name, got, want,
           fabsf(got - want) < 0.01f ? "PASS" : "FAIL");
    if (fabsf(got - want) >= 0.01f) fails++;
}

int main(void){
    struct S s;

    /* 每秒速率恒定 = 60fps 原速。step() 里 mTimer 有两个递减点、
       mWaitTimer 有一个递增点，所以每帧平均变化量 = 点数 * dt */
    s.mTimer = 100; s.mWaitTimer = 0; s.mFTimer = 100.0f;
    g_frameScale = 0.5f;                 /* 120fps：2点*0.5*10帧 = 10 */
    for (int i = 0; i < 10; i++) step(&s);
    expect("120fps 10步 mTimer(2点*dt)", s.mTimer, 100 - 10);
    expect("120fps 10步 mWaitTimer(1点*dt)", s.mWaitTimer, 5);
    expectf("120fps 10步 mFTimer(浮点)", s.mFTimer, 95.0f);

    s.mTimer = 100; s.mWaitTimer = 0; s.mFTimer = 100.0f;
    g_frameScale = 2.0f;                 /* 30fps */
    for (int i = 0; i < 10; i++) step(&s);
    expect("30fps 10步 mTimer", s.mTimer, 100 - 40);
    expect("30fps 10步 mWaitTimer", s.mWaitTimer, 20);
    expectf("30fps 10步 mFTimer", s.mFTimer, 80.0f);

    s.mTimer = 100; s.mWaitTimer = 0; s.mFTimer = 100.0f;
    g_frameScale = 1.0f;                 /* 60fps：与原来逐帧一致 */
    for (int i = 0; i < 10; i++) step(&s);
    expect("60fps 10步 mTimer(应为原速)", s.mTimer, 100 - 20);
    expect("60fps 10步 mWaitTimer", s.mWaitTimer, 10);
    expectf("60fps 10步 mFTimer", s.mFTimer, 90.0f);

    /* 45fps（dt=1.333）：小数累加，不能因为截断变慢 */
    s.mTimer = 1000; s.mWaitTimer = 0; s.mFTimer = 1000.0f;
    g_frameScale = 60.0f / 45.0f;
    for (int i = 0; i < 45; i++) step(&s);
    /* 45 步 = 1 秒，应恰好走 60 格 x2 = 120 */
    expect("45fps 45步(1秒) mTimer 走120格", 1000 - s.mTimer, 120);
    expect("45fps 45步(1秒) mWaitTimer 走60格", s.mWaitTimer, 60);

    printf(fails ? "\n%d FAILED\n" : "\nALL PASS\n", fails);
    return fails ? 1 : 0;
}
