/* GX -> WebGL 中间兼容层
 * 拦截游戏的 251 个 GX 调用，翻译成 WebGL 指令。
 * 设计：记录式 —— 游戏正常调用 GX API，本层把调用记录为渲染包，
 *       每帧结束时一次性翻译成 WebGL，避免逐调用开销。
 */
#ifndef GX2GL_H
#define GX2GL_H
#include <stdint.h>
typedef uint8_t u8; typedef uint16_t u16; typedef uint32_t u32;
typedef int8_t s8; typedef int16_t s16; typedef int32_t s32;
typedef float f32;

/* ---- GX 枚举（与 dolphin GXEnum.h 对齐）---- */
/* 与 dolphin GXEnum.h 对齐（原值 0x98/0x99 写错，实际是 0x90/0x98） */
enum {
  GX_POINTS=0xB8, GX_LINES=0xA8, GX_LINESTRIP=0xB0,
  GX_TRIANGLES=0x90, GX_TRIANGLESTRIP=0x98, GX_TRIANGLEFAN=0xA0,
  GX_QUADS=0x80,
};
enum { GX_VA_PNMTX=0, GX_VA_TEX0MTX, GX_VA_POS, GX_VA_NRM, GX_VA_CLR0,
       GX_VA_CLR1, GX_VA_TEX0, GX_VA_TEX1, GX_VA_TEX2, GX_VA_TEX3,
       GX_VA_TEX4, GX_VA_TEX5, GX_VA_TEX6, GX_VA_TEX7, GX_VA_MAXATTR=0xF };
enum { GX_NONE=0, GX_DIRECT=1, GX_INDEX8=2, GX_INDEX16=3 };
enum { GX_F32=4, GX_RGB8=5, GX_RGB565=0, GX_RGBA8=6 };

/* TEV */
enum { GX_TEVSTAGE0=0, GX_MAXTEVSTAGE=16 };
enum { GX_CC_ZERO=0, GX_CC_CPREV, GX_CC_APREV, GX_CC_C0, GX_CC_A0, GX_CC_C1,
       GX_CC_A1, GX_CC_C2, GX_CC_A2, GX_CC_TEXC, GX_CC_TEXA, GX_CC_RASC,
       GX_CC_RASA, GX_CC_ONE, GX_CC_HALF, GX_CC_KONST, GX_CC_NUM };
enum { GX_CA_ZERO=0, GX_CA_APREV, GX_CA_A0, GX_CA_A1, GX_CA_A2, GX_CA_TEXA,
       GX_CA_RASA, GX_CA_ONE, GX_CA_NUM };

/* 混合 */
enum { GX_BL_ZERO=0, GX_BL_ONE, GX_BL_SRCCLR, GX_BL_INVSRCCLR,
       GX_BL_SRCALPHA, GX_BL_INVSRCALPHA, GX_BL_DSTALPHA, GX_BL_INVDSTALPHA };
enum { GX_NEVER=0, GX_LESS, GX_EQUAL, GX_LEQUAL, GX_GREATER, GX_NEQUAL, GX_GEQUAL, GX_ALWAYS };
enum { GX_LO_CLEAR=0, GX_LO_AND=1, GX_LO_REVAND=2, GX_LO_COPY=3, GX_LO_INVAND=4,
       GX_LO_REVOR=5, GX_LO_NOR=6, GX_LO_XOR=7, GX_LO_EQUV=8, GX_LO_INV=9,
       GX_LO_OR=10, GX_LO_INVOR=11, GX_LO_NAND=12, GX_LO_SET=13 };

/* 渲染包（Record-then-translate）
 * 编号显式写出：JS 侧 gx2gl.js 的 switch 必须与此表逐项对齐 */
enum GX2GLOp {
  OP_Begin=1,       /* u8 prim, u8 vtxfmt, u16 nverts */
  OP_End=2,         /* - */
  OP_VertexF=3,     /* f32 x3 */
  OP_VertexS=4,     /* s16 x3 */
  OP_Color=5,       /* u8 x4 */
  OP_TexCoord=6,    /* f32 x2 / s16 x2 */
  OP_Matrix=7,      /* f32 x16 (position mtx) */
  OP_TexBind=8,
  OP_State=9,
  OP_TevStage=10,
  OP_Clear=11,
  OP_Swap=12,       /* 帧结束 */
  OP_VtxDesc=13,
  OP_VtxAttrFmt=14,
  OP_CullMode=15,   /* u8 */
  OP_BlendMode=16,  /* u8 x4 */
  OP_ZMode=17,      /* u8 x3 */
  OP_Chan=18,
  OP_TexGen=19,
  OP_NumTev=20,
  OP_NumTex=21,
  OP_NumChan=22,
  OP_LoadTexObj=23,
  OP_CallDL=24,
  OP_Clip=25,
  OP_Fog=26,
  OP_AlphaComp=27,
  OP_LineWidth=28,
  OP_PointSize=29,
  OP_Projection=30, /* u8 type + f32 x16（已按宽高比修正） */
  OP_Viewport=31,   /* f32 x6 (x,y,w,h,near,far)，EFB 坐标 */
  OP_Scissor=32,    /* u32 x4 */
  OP_Normal=33,     /* f32 x3（仅占位，简化管线不使用） */
};
struct GX2GLCmd { u16 op; u16 len; };

/* 宽高比模式 */
enum {
  TWW_ASPECT_4_3  = 0,  /* 强制 4:3，画布两侧留边 */
  TWW_ASPECT_16_9 = 1,  /* 真·宽屏：横向 FOV 增大，UI 保持 4:3 居中 */
  TWW_ASPECT_FILL = 2,  /* 铺满画布（等同旧版拉伸行为） */
};

/* GC 硬件 EFB 上限，游戏逻辑按此布局，不能超 */
#define GX_EFB_MAX_W 640
#define GX_EFB_MAX_H 528

/* API：与游戏调用的 GX 函数同名（C 导出）*/
#ifdef __cplusplus
extern "C" {
#endif
/* 返回类型必须与 dolphin 的 GXInit.h 一致 —— 那边是
   `GXFifoObj* GXInit(void*, u32)`，JSystem/JUtility/JUTGraphFifo.cpp 里
   有 `mFifo = GXInit(mBase, mSize);` 依赖返回值。
   这里不 include dolphin 头（会引入类型冲突），用 void* 代替 GXFifoObj*：
   两者在 wasm 层面都是 i32，链接期签名一致。 */
void* GXInit(void* base, u32 size);
void GXBegin(u8 prim, u8 vtxfmt, u16 nverts);
void GXEnd(void);
void GXPosition3f32(f32 x, f32 y, f32 z);
void GXPosition2f32(f32 x, f32 y);
void GXNormal3f32(f32 x, f32 y, f32 z);
void GXTexCoord2f32(f32 s, f32 t);
void GXTexCoord2s16(s16 s, s16 t);
void GXColor4u8(u8 r, u8 g, u8 b, u8 a);
void GXColor3u8(u8 r, u8 g, u8 b);
void GXSetVtxDesc(u8 attr, u8 type);
void GXSetVtxAttrFmt(u8 vtxfmt, u32 attr, u8 vat, u8 comp, u8 shift);
void GXClearVtxDesc(void);
void GXLoadPosMtxImm(const f32* m, u32 id);
void GXLoadTexObj(void* obj, u32 id);
void GXSetNumTexGens(u8 n);
void GXSetNumTevStages(u8 n);
void GXSetNumChans(u8 n);
void GXSetTevOrder(u8 stage, u8 texcoord, u32 texmap, u8 color);
void GXSetTevColorIn(u8 stage, u8 a, u8 b, u8 c, u8 d);
void GXSetTevAlphaIn(u8 stage, u8 a, u8 b, u8 c, u8 d);
void GXSetTevColorOp(u8 stage, u8 op, u8 bias, u8 scale, u8 clamp, u8 out);
void GXSetTevAlphaOp(u8 stage, u8 op, u8 bias, u8 scale, u8 clamp, u8 out);
void GXSetTevColor(u8 id, u32 color);
void GXSetBlendMode(u8 type, u8 src, u8 dst, u8 op);
void GXSetZMode(u8 enable, u8 func, u8 update);
void GXSetCullMode(u8 mode);
void GXSetCurrentMtx(u32 id);
void GXSetTexCoordGen(u16 tcoord, u8 tgen, u8 src, u8 mtx);
void GXSetNumChans_n(u8 n);
void GXCallDisplayList(const void* dl, u32 bytes);
void GXDrawDone(void);
void GXCopyDisp(void* dest, u8 clear);
void GXSetDispCopyYScale(f32 scale);
void GXSetClipMode(u8 mode);
void GXPixModeSync(void);
void GXSetFog(u8 type, f32 a, f32 b, f32 c, f32 d, u32 color);
void GXSetAlphaCompare(u8 comp0, u8 ref0, u8 op, u8 comp1, u8 ref1);
void GXSetLineWidth(u8 w, u8 fmt);
void GXSetPointSize(u8 s, u8 fmt);

/* ---- 宽屏 / 分辨率适配（拦截点） ---- */
void GXSetProjection(const f32 mtx[4][4], u8 type);
void GXSetViewport(f32 x, f32 y, f32 w, f32 h, f32 near, f32 far);
void GXSetScissor(u32 x, u32 y, u32 w, u32 h);
#ifdef __cplusplus
}
#endif

/* ---- 供 platform.c / JS 调用的适配接口 ---- */
#ifdef __cplusplus
extern "C" {
#endif
void gx2gl_set_output_size(u32 w, u32 h);  /* 画布像素尺寸 */
void gx2gl_set_efb_size(u32 w, u32 h);     /* 内部 EFB 逻辑尺寸（上限 640x528） */
void gx2gl_set_aspect_mode(int mode);      /* TWW_ASPECT_* */
u32  gx2gl_out_w(void);
u32  gx2gl_out_h(void);
u32  gx2gl_efb_w(void);
u32  gx2gl_efb_h(void);
f32  gx2gl_aspect_scale(void);             /* 投影 m[0][0] 的横向修正系数 */
f32  gx2gl_vp_scale_x(void);               /* EFB -> 画布 的 X 缩放 */
f32  gx2gl_vp_scale_y(void);

/* 命令流读取（JS 每帧取一次）。必须在此声明：
   缺失时 C 侧会把它们隐式声明成返回 int，64 位下指针被截断直接段错误 */
u32       gx2gl_stream_len(void);
const u8* gx2gl_stream_data(void);
void      gx2gl_stream_reset(void);
u32       gx2gl_state(u32 which);
#ifdef __cplusplus
}
#endif
#endif
