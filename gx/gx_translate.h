#ifndef GX_TRANSLATE_H
#define GX_TRANSLATE_H
/* GX -> Vulkan / OpenGL 转译层
 *
 * 目标：把 GameCube/Wii 的 GX 图形调用提前转换成标准图形 API 调用，
 * 避免在运行时做仿真（提升性能）。
 *
 * 三种模式：
 *   GX_MODE_RECORD  记录 GX 调用序列（离线预转换用）
 *   GX_MODE_VULKAN  直接发出 Vulkan 命令
 *   GX_MODE_GL      直接发出 OpenGL / GLES 命令
 */
#include <cstdint>
#include <cstddef>

typedef uint8_t  u8;  typedef uint16_t u16; typedef uint32_t u32; typedef uint64_t u64;
typedef int8_t   s8;  typedef int16_t  s16; typedef int32_t  s32; typedef int64_t  s64;
typedef float    f32; typedef double   f64;

enum GXMode { GX_MODE_RECORD = 0, GX_MODE_VULKAN = 1, GX_MODE_GL = 2 };

/* ---- GX 枚举（精简，与 dolphin/gx/GXEnum.h 对齐） ---- */
enum GXPrimitive {
  GX_QUADS = 0, GX_TRIANGLES = 2, GX_TRIANGLE_STRIP = 3,
  GX_TRIANGLE_FAN = 4, GX_LINES = 5, GX_LINE_STRIP = 6, GX_POINTS = 7,
};
enum GXAttrib { GX_VA_POS = 0, GX_VA_NRM = 1, GX_VA_CLR0 = 2, GX_VA_CLR1 = 3,
                GX_VA_TEX0 = 4, GX_VA_TEX1 = 5, GX_VA_TEX2 = 6, GX_VA_TEX3 = 7,
                GX_VA_TEX4 = 8, GX_VA_TEX5 = 9, GX_VA_TEX6 = 10, GX_VA_TEX7 = 11,
                GX_VA_MAX = 16 };
enum GXCompType { GX_U8 = 0, GX_S8 = 1, GX_U16 = 2, GX_S16 = 3, GX_F32 = 4 };
enum GXAlphaOp { GX_AOP_AND = 0, GX_AOP_OR = 1, GX_AOP_XOR = 2, GX_AOP_XNOR = 3 };
enum GXCompare { GX_NEVER = 0, GX_LESS = 1, GX_EQUAL = 2, GX_LEQUAL = 3,
                 GX_GREATER = 4, GX_NEQUAL = 5, GX_GEQUAL = 6, GX_ALWAYS = 7 };
enum GXBlendFactor { GX_BL_ZERO = 0, GX_BL_ONE = 1, GX_BL_SRCCLR = 2, GX_BL_INVSRCCLR = 3,
                     GX_BL_SRCALPHA = 4, GX_BL_INVSRCALPHA = 5, GX_BL_DSTALPHA = 6,
                     GX_BL_INVDSTALPHA = 7 };
enum GXLogicOp { GX_LO_CLEAR = 0, GX_LO_COPY = 3, GX_LO_NOOP = 5, GX_LO_SET = 15 };
enum GXTexFmt { GX_TF_I4 = 0, GX_TF_I8 = 1, GX_TF_IA4 = 2, GX_TF_IA8 = 3,
                GX_TF_RGB565 = 4, GX_TF_RGB5A3 = 5, GX_TF_RGBA8 = 6,
                GX_TF_CMPR = 14 };
enum GXWrapMode { GX_CLAMP = 0, GX_REPEAT = 1, GX_MIRROR = 2 };

/* ---- 转译后的状态（可直接喂给 Vulkan/GL） ---- */
struct GXState {
  /* 顶点格式 */
  struct Attrib { u8 enabled; u8 compType; u8 compCount; u8 stride; } attribs[GX_VA_MAX];
  /* 矩阵 */
  f32 posMtx[16]; f32 nrmMtx[12]; f32 texMtx[10][16];
  /* 混合 */
  u8  blendEnable; GXBlendFactor srcFactor, dstFactor; GXLogicOp logicOp;
  u8  colorUpdate, alphaUpdate;
  /* 深度 */
  u8  depthTest, depthUpdate; GXCompare depthFunc;
  /* 剔除 */
  u8  cullEnable; u8 cullFront, cullBack;
  /* 纹理 (8 单元) */
  struct Tex { u32 texObjId; GXTexFmt fmt; GXWrapMode wrapS, wrapT; u8 minFilt, magFilt; } tex[8];
  /* 视口 */
  f32 vpX, vpY, vpW, vpH; f32 vpNear, vpFar;
  /* 清屏 */
  u32 clearColor; f32 clearDepth;
};

/* ---- 转译层接口 ---- */
#ifdef __cplusplus
extern "C" {
#endif
void gx_set_mode(GXMode mode);
GXMode gx_get_mode(void);
GXState* gx_state(void);

/* 记录模式：导出调用序列（可离线预编译成 Vulkan/GL 指令流） */
void gx_record_begin(void);
const u8* gx_record_data(size_t* outSize);
void gx_record_end(void);

/* 批量应用：把 GXState 一次性下发到后端（避免逐调用开销） */
void gx_flush_vulkan(void* cmdBuf, void* pipelineLayout);
void gx_flush_gl(void);
#ifdef __cplusplus
}
#endif
#endif
