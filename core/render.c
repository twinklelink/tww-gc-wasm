/* 渲染输出：XFB 双缓冲 + YUV 平面，供 JS 侧取帧
 *
 * 分工：C 侧只维护缓冲，YUV->RGB 转换由 JS 侧用 GPU 做。
 *
 * 缓冲规格（GC XFB）：640x480，YUV422 交错，每像素 2 字节。
 * 双缓冲：一份给游戏写（back），一份给 JS 读（front），
 *         render_flip() 交换，避免读写同一块造成撕裂。
 */
#include <stdint.h>
#include <string.h>

typedef uint8_t  u8;  typedef uint16_t u16; typedef uint32_t u32;
typedef int8_t   s8;  typedef int16_t  s16; typedef int32_t  s32;
typedef float    f32;

#define FB_W 640
#define FB_H 480

/* 单缓冲像素数 / 字节数 */
#define FB_PIXELS    (FB_W * FB_H)
#define FB_BYTES     (FB_PIXELS * 2)      /* YUV422：2 字节/像素 */

/* YUV420 的色度平面是 2x2 采样，宽高各减半 */
#define FB_C_W       (FB_W / 2)
#define FB_C_H       (FB_H / 2)
#define FB_C_BYTES   (FB_C_W * FB_C_H)

/* 一帧的所有缓冲。收在一起而不是散成全局数组，
   便于整体清零、也避免以后加平面时漏掉某一处 memset */
typedef struct {
    u16 xfb[2][FB_PIXELS];     /* XFB 双缓冲（YUV422 交错） */
    u8  y[FB_PIXELS];          /* Y 平面 */
    u8  u[FB_C_BYTES];         /* U 平面 */
    u8  v[FB_C_BYTES];         /* V 平面 */
    int front;                 /* 当前前台缓冲下标 0/1 */
} FrameBuffer;

static FrameBuffer g_fb;

/* 后台缓冲（游戏写入侧）。back ^ front 得到另一块 */
static u16* back_buffer(void) {
    return g_fb.xfb[g_fb.front ^ 1];
}

/* ---- 对外访问 ---- */

/* 后台 XFB，游戏渲染写入这里 */
u16* render_xfb(int back) {
    return back ? back_buffer() : g_fb.xfb[g_fb.front];
}

/* 交换前后台。写完一帧调用一次 */
void render_flip(void) {
    g_fb.front ^= 1;
}

int render_front(void) { return g_fb.front; }

u32 render_fb_size(void) { return FB_BYTES; }   /* 单缓冲字节数 */
u32 render_fb_w(void)    { return FB_W; }
u32 render_fb_h(void)    { return FB_H; }

u8* render_y(void) { return g_fb.y; }
u8* render_u(void) { return g_fb.u; }
u8* render_v(void) { return g_fb.v; }

/* 清屏：y/u/v 三分量分别填同一个值 */
void render_clear(u8 y, u8 u, u8 v) {
    memset(g_fb.y, y, sizeof(g_fb.y));
    memset(g_fb.u, u, sizeof(g_fb.u));
    memset(g_fb.v, v, sizeof(g_fb.v));
}

/* 整体复位（换盘/重启动时用） */
void render_reset(void) {
    memset(&g_fb, 0, sizeof(g_fb));
}
