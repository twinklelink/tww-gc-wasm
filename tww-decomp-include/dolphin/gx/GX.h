#ifndef GX_H_
#define GX_H_

#include "dolphin/gx/GXAttr.h" // IWYU pragma: export
#include "dolphin/gx/GXBump.h" // IWYU pragma: export
#include "dolphin/gx/GXDisplayList.h" // IWYU pragma: export
#include "dolphin/gx/GXEnum.h" // IWYU pragma: export
#include "dolphin/gx/GXFifo.h" // IWYU pragma: export
#include "dolphin/gx/GXFrameBuf.h" // IWYU pragma: export
#include "dolphin/gx/GXGeometry.h" // IWYU pragma: export
#include "dolphin/gx/GXInit.h" // IWYU pragma: export
#include "dolphin/gx/GXLight.h" // IWYU pragma: export
#include "dolphin/gx/GXMisc.h" // IWYU pragma: export
#include "dolphin/gx/GXPerf.h" // IWYU pragma: export
#include "dolphin/gx/GXPixel.h" // IWYU pragma: export
#include "dolphin/gx/GXStruct.h" // IWYU pragma: export
#include "dolphin/gx/GXTev.h" // IWYU pragma: export
#include "dolphin/gx/GXTexture.h" // IWYU pragma: export
#include "dolphin/gx/GXTransform.h" // IWYU pragma: export
#include "dolphin/gx/GXDraw.h" // IWYU pragma: export

#include "dolphin/os/OSUtil.h"

#ifdef __cplusplus
extern "C" {
#endif

#ifdef TWW_PORT
void port_gx_set_array(unsigned attr, const void* base, unsigned stride);
#endif

// Pack value into bitfield
#define GX_BITFIELD_SET(field, pos, size, value)                                                   \
    (field) =                                                                                      \
    (field & ~(((1 << (size)) - 1) << (31 - (pos) - (size) + 1))) |                                \
    ((int)(value) << (31 - (pos) - (size) + 1))
#define GX_BITFIELD_TRUNC(field, pos, size, value) (__rlwimi((field), (value), 0, (pos), (pos) + (size)-1))

#define GX_BITGET(field, pos, size)              ((field) >> (31 - (pos) - (size) + 1) & ((1 << (size)) - 1))
#define GX_GET_REG(reg, st, end)    GX_BITGET(reg, st, (end - st + 1))
#define GX_SET_REG(reg, x, st, end) GX_BITFIELD_SET(reg, st, (end - st + 1), x)
#define GX_SET_TRUNC(reg, x, st, end) GX_BITFIELD_TRUNC((reg), (st), ((end) - (st) + 1), (x))

#define GXCOLOR_AS_U32(color) (*((u32*)&(color)))

#define INSERT_FIELD(reg, value, nbits, shift)                                 \
    (reg) = ((u32) (reg) & ~(((1 << (nbits)) - 1) << (shift))) |               \
            ((u32) (value) << (shift));

#define GET_REG_FIELD(reg, size, shift) ((int)((reg) >> (shift)) & ((1 << (size)) - 1))

#define SET_REG_FIELD(reg, size, shift, val) \
    (reg) = ((u32)(reg) & ~(((1 << (size)) - 1) << (shift))) | ((u32)(val) << (shift)); \

#define GX_LOAD_BP_REG 0x61
#define GX_NOP 0

typedef union {
    u8 u8;
    u16 u16;
    u32 u32;
    u64 u64;
    s8 s8;
    s16 s16;
    s32 s32;
    s64 s64;
    f32 f32;
    f64 f64;
} PPCWGPipe;

#define GXFIFO_ADDR 0xCC008000
#ifndef TWW_PORT
extern volatile PPCWGPipe GXFIFO;
#endif

#ifdef TWW_PORT
#include "port/gx/gx_fifo.h"
#define PORT_GX_WRITE_U8(v) port_gx_write_u8((u8)(v))
#define PORT_GX_WRITE_S8(v) port_gx_write_s8((s8)(v))
#define PORT_GX_WRITE_U16(v) port_gx_write_u16((u16)(v))
#define PORT_GX_WRITE_S16(v) port_gx_write_s16((s16)(v))
#define PORT_GX_WRITE_U32(v) port_gx_write_u32((u32)(v))
#define PORT_GX_WRITE_S32(v) port_gx_write_s32((s32)(v))
#define PORT_GX_WRITE_F32(v) port_gx_write_f32((f32)(v))
#else
#define PORT_GX_WRITE_U8(v) (GXFIFO.u8 = (u8)(v))
#define PORT_GX_WRITE_S8(v) (GXFIFO.s8 = (s8)(v))
#define PORT_GX_WRITE_U16(v) (GXFIFO.u16 = (u16)(v))
#define PORT_GX_WRITE_S16(v) (GXFIFO.s16 = (s16)(v))
#define PORT_GX_WRITE_U32(v) (GXFIFO.u32 = (u32)(v))
#define PORT_GX_WRITE_S32(v) (GXFIFO.s32 = (s32)(v))
#define PORT_GX_WRITE_F32(v) (GXFIFO.f32 = (f32)(v))
#endif

#define GX_CP_LOAD_REG(addr, data)                                                                 \
    PORT_GX_WRITE_S8(GX_FIFO_CMD_LOAD_CP_REG);                                                         \
    PORT_GX_WRITE_S8((addr));                                                                          \
    PORT_GX_WRITE_S32((data));

/**
 * Header for an XF register load
 */
#define GX_XF_LOAD_REG_HDR(addr)                                                                   \
    PORT_GX_WRITE_S8(GX_FIFO_CMD_LOAD_XF_REG);                                                           \
    PORT_GX_WRITE_S32((addr));

/**
 * Load immediate value into XF register
 */
#define GX_XF_LOAD_REG(addr, data)                                                                 \
    GX_XF_LOAD_REG_HDR(addr);                                                                      \
    PORT_GX_WRITE_S32((data));

/**
 * Load immediate value into BP register
 */
#define GX_BP_LOAD_REG(data)                                                                       \
    PORT_GX_WRITE_S8(GX_FIFO_CMD_LOAD_BP_REG);                                                           \
    PORT_GX_WRITE_S32((data));

/**
 * Load immediate values into multiple XF registers
 */
#define GX_XF_LOAD_REGS(size, addr)                                                                \
    {                                                                                              \
        u32 cmd = (size) << 16 | addr;                                                             \
        GX_XF_LOAD_REG_HDR(cmd);                                                                   \
    }

// Direct
inline void GXCmd1u8(const u8 x) {
    PORT_GX_WRITE_U8(x);
}

inline void GXCmd1u16(const u16 x) {
    PORT_GX_WRITE_U16(x);
}

inline void GXCmd1u32(const u32 x) {
    PORT_GX_WRITE_U32(x);
}

inline void GXPosition2f32(f32 x, f32 z) {
    PORT_GX_WRITE_F32(x);
    PORT_GX_WRITE_F32(z);
}

inline void GXPosition3f32(f32 x, f32 y, f32 z) {
    PORT_GX_WRITE_F32(x);
    PORT_GX_WRITE_F32(y);
    PORT_GX_WRITE_F32(z);
}

inline void GXPosition2s8(s8 x, s8 y) {
    PORT_GX_WRITE_S8(x);
    PORT_GX_WRITE_S8(y);
}

inline void GXPosition3s8(s8 x, s8 y, s8 z) {
    PORT_GX_WRITE_S8(x);
    PORT_GX_WRITE_S8(y);
    PORT_GX_WRITE_S8(z);
}

inline void GXPosition2u16(u16 x, u16 y) {
    PORT_GX_WRITE_U16(x);
    PORT_GX_WRITE_U16(y);
}

inline void GXPosition2s16(s16 x, s16 y) {
    PORT_GX_WRITE_S16(x);
    PORT_GX_WRITE_S16(y);
}

inline void GXPosition3s16(s16 x, s16 y, s16 z) {
    PORT_GX_WRITE_S16(x);
    PORT_GX_WRITE_S16(y);
    PORT_GX_WRITE_S16(z);
}

inline void GXNormal3f32(f32 x, f32 y, f32 z) {
    PORT_GX_WRITE_F32(x);
    PORT_GX_WRITE_F32(y);
    PORT_GX_WRITE_F32(z);
}

inline void GXColor1u32(u32 c) {
    PORT_GX_WRITE_U32(c);
}

inline void GXTexCoord2f32(f32 s, f32 t) {
    PORT_GX_WRITE_F32(s);
    PORT_GX_WRITE_F32(t);
}

inline void GXTexCoord2u8(u8 s, u8 t) {
    PORT_GX_WRITE_U8(s);
    PORT_GX_WRITE_U8(t);
}

inline void GXTexCoord1x8(u8 s) {
    PORT_GX_WRITE_U8(s);
}

inline void GXTexCoord2s8(s8 x, s8 y) {
    PORT_GX_WRITE_S8(x);
    PORT_GX_WRITE_S8(y);
}

inline void GXTexCoord2u16(u16 x, u16 y) {
    PORT_GX_WRITE_U16(x);
    PORT_GX_WRITE_U16(y);
}

inline void GXTexCoord2s16(const s16 u, const s16 v) {
    PORT_GX_WRITE_S16(u);
    PORT_GX_WRITE_S16(v);
}

// Indexed
inline void GXPosition1x8(u8 x) {
    PORT_GX_WRITE_U8(x);
}

inline void GXPosition1x16(u16 x) {
    PORT_GX_WRITE_U16(x);
}

inline void GXNormal1x8(u8 x) {
    PORT_GX_WRITE_U8(x);
}

inline void GXNormal1x16(u16 x) {
    PORT_GX_WRITE_U16(x);
}

inline void GXColor1x16(u16 x) {
    PORT_GX_WRITE_U16(x);
}

inline void GXColor3x8(u8 r, u8 g, u8 b) {
    PORT_GX_WRITE_U8(r);
    PORT_GX_WRITE_U8(g);
    PORT_GX_WRITE_U8(b);
}

inline void GXColor4u8(u8 r, u8 g, u8 b, u8 a) {
    PORT_GX_WRITE_U8(r);
    PORT_GX_WRITE_U8(g);
    PORT_GX_WRITE_U8(b);
    PORT_GX_WRITE_U8(a);
}

inline void GXTexCoord1x16(u16 x) {
    PORT_GX_WRITE_U16(x);
}

inline void GXEnd() {}

#define GX_WRITE_U8(ub)     \
    PORT_GX_WRITE_U8((u8)(ub))

#define GX_WRITE_U16(us)    \
    PORT_GX_WRITE_U16((u16)(us))

#define GX_WRITE_U32(ui)    \
    PORT_GX_WRITE_U32((u32)(ui))

#define GX_WRITE_F32(f)     \
    PORT_GX_WRITE_F32((f32)(f))

#define VERIF_RAS_REG(v)
#define VERIF_XF_REG(r, v)

#define GX_WRITE_XF_REG(addr, value) \
do { \
    GX_WRITE_U8(0x10); \
    GX_WRITE_U32(0x1000 + (addr)); \
    GX_WRITE_U32(value); \
    VERIF_XF_REG(addr, value); \
} while (0)

#if DEBUG
#define GX_WRITE_XF_REG_2(addr, value) \
do { \
    u32 xfData = (value); &xfData; \
    GX_WRITE_U32(value); \
    VERIF_XF_REG_alt(addr, xfData); \
} while (0)
#define GX_WRITE_XF_REG_F(addr, value) \
do { \
    f32 xfData = (value); \
    GX_WRITE_F32(value); \
    VERIF_XF_REG_alt(addr, *(u32 *)&xfData); \
} while (0)
#else
#define GX_WRITE_XF_REG_2(addr, value) \
do { \
    GX_WRITE_U32(value); \
} while (0)
#define GX_WRITE_XF_REG_F(addr, value) \
do { \
    GX_WRITE_F32(value); \
} while (0)
#endif

#define GX_WRITE_RAS_REG(value) \
do { \
    GX_WRITE_U8(0x61); \
    GX_WRITE_U32(value); \
    VERIF_RAS_REG(value); \
} while (0)

#define GX_WRITE_SOME_REG2(a, b, c, addr) \
do { \
    long regAddr; \
    GX_WRITE_U8(a); \
    GX_WRITE_U8(b); \
    GX_WRITE_U32(c); \
    regAddr = addr; \
    if (regAddr >= 0 && regAddr < 4) { \
        gx->indexBase[regAddr] = c; \
    } \
} while (0)
#define GX_WRITE_SOME_REG3(a, b, c, addr) \
do { \
    long regAddr; \
    GX_WRITE_U8(a); \
    GX_WRITE_U8(b); \
    GX_WRITE_U32(c); \
    regAddr = addr; \
    if (regAddr >= 0 && regAddr < 4) { \
        gx->indexStride[regAddr] = c; \
    } \
} while (0)
#define GX_WRITE_SOME_REG4(a, b, c, addr) \
do { \
    long regAddr; \
    GX_WRITE_U8(a); \
    GX_WRITE_U8(b); \
    GX_WRITE_U32(c); \
    regAddr = addr; \
} while (0)

static inline u32 __GXReadCPCounterU32(u32 regAddrL, u32 regAddrH) {
    u32 ctrH0;
    u32 ctrH1;
    u32 ctrL;

    ctrH0 = GX_GET_CP_REG(regAddrH);

    do {
        ctrH1 = ctrH0;
        ctrL = GX_GET_CP_REG(regAddrL);
        ctrH0 = GX_GET_CP_REG(regAddrH);
    } while (ctrH0 != ctrH1);

    return (ctrH0 << 0x10) | ctrL;
}

#ifdef __cplusplus
};
#endif

#endif
