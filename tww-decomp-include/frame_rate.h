#ifndef FRAME_RATE_H
#define FRAME_RATE_H
/* 可调帧率：物理步长按 60fps 基准缩放
   scale = 60 / targetFps
   30fps -> 2.0, 60fps -> 1.0, 120fps -> 0.5 */
#ifdef __cplusplus
extern "C" {
#endif
extern float g_frameScale;          /* 步长倍率 */
extern int   g_targetFps;           /* 目标帧率 30..120 */
float tww_frame_scale(void);
void  tww_set_frame_rate(int fps);
#ifdef __cplusplus
}
#endif
#define FRAME_SCALE (g_frameScale)

/* ------------------------------------------------------------------
 * 整型计时器的安全递减/递增
 *
 * 陷阱：直接写 mTimer -= (int)FRAME_SCALE 在 120fps 下等于 -= 0
 *       （(int)0.5 == 0），计时器永远不动，游戏会卡在等待状态。
 *       反过来 30fps 下 -= 2 是对的，但 45fps 的 1.33 又会被截断成 1。
 *
 * 做法：每个调用点一个小数累加器，累计够 1 才真的走整格。
 *       长时间平均速率精确等于 1/dt 格每秒，且不丢小数。
 *
 * 用法：把 `mTimer--;`       改成 `FRAME_TIMER_DEC(mTimer);`
 *       把 `mTimer++;`       改成 `FRAME_TIMER_INC(mTimer);`
 *
 * 注意：只用于"按帧倒数的计时器"，不要用于数组下标、
 *       循环计数、状态机枚举——那些不是时间量。
 * ------------------------------------------------------------------ */
#define _FR_CAT2(a, b) a##b
/* 两层拼接：直接用 a##__LINE__ 会得到 _frTimerAcc___LINE__
   （## 阻止参数展开），同一函数内多个计时器会共用同一个累加器。
   必须先让 __LINE__ 展开成数字 */
#define _FR_CAT(a, b) _FR_CAT2(a, b)
#define _FR_ACC_NAME(n) _FR_CAT(_frTimerAcc_, n)

#define FRAME_TIMER_DEC(t)                                  \
    do {                                                    \
        static float _FR_ACC_NAME(__LINE__) = 0.0f;         \
        _FR_ACC_NAME(__LINE__) += (FRAME_SCALE);            \
        if (_FR_ACC_NAME(__LINE__) >= 1.0f) {               \
            int _n = (int)_FR_ACC_NAME(__LINE__);           \
            _FR_ACC_NAME(__LINE__) -= (float)_n;            \
            (t) -= _n;                                      \
        }                                                   \
    } while (0)

#define FRAME_TIMER_INC(t)                                  \
    do {                                                    \
        static float _FR_ACC_NAME(__LINE__) = 0.0f;         \
        _FR_ACC_NAME(__LINE__) += (FRAME_SCALE);            \
        if (_FR_ACC_NAME(__LINE__) >= 1.0f) {               \
            int _n = (int)_FR_ACC_NAME(__LINE__);           \
            _FR_ACC_NAME(__LINE__) -= (float)_n;            \
            (t) += _n;                                      \
        }                                                   \
    } while (0)

/* 浮点计时器：直接按 dt 走，没有截断问题，优先用这个 */
#define FRAME_TIMER_DEC_F(t) ((t) -= (FRAME_SCALE))
#define FRAME_TIMER_INC_F(t) ((t) += (FRAME_SCALE))

/* 每 N 帧触发一次（如 `% 60`）：周期按真实时间伸缩 */
#define FRAME_EVERY(n)  ((int)((n) * (FRAME_SCALE)) > 0 ? (int)((n) * (FRAME_SCALE)) : 1)

#endif
