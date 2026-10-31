/* GX -> WebGL 中间层实现
 *
 * 记录式：GX 调用 -> 命令流 -> 帧末由 JS 侧（gx/gx2gl.js）翻译成 WebGL。
 * C 侧只负责记录与打包，不做任何 GL 调用。
 *
 * 流格式：[op:u16][len:u16][payload...]，len 只计 payload。
 * 用长度前缀而不是定长编码，是因为 TEV 系列与 GXCallDisplayList 天然变长；
 * 定长编码下 JS 侧遇到未实现的 op 无法知道该跳多远，整条流会错位。
 *
 * 组织方式：
 *   - 所有可变状态收在两个 struct（GxState / ViewCfg）里，不用散落的全局量
 *   - 命令写入走 emit(op, args...)，长度前缀由 Cmd 的 RAII 负责，
 *     不需要手工配对 begin/end，也不会漏写或嵌套覆盖
 *   - 裸指针只出现在 extern "C" 的 ABI 边界（游戏调用签名固定），
 *     内部一律用 std::array 传值
 */
#include <algorithm>
#include <array>
#include <cstring>
#include <vector>

#include "gx2gl.h"

namespace {

/* ---- 命令流 ---- */
std::vector<u8> g_stream;
bool g_recording = false;

void put_bytes(const void* p, u32 n) {
    const u8* b = static_cast<const u8*>(p);
    g_stream.insert(g_stream.end(), b, b + n);
}

/* 按类型分发的小端写入。重载决议在编译期完成，
   调用处写 emit(OP_X, a, b) 即可，不用手动挑 put8/put16/putf */
void put(u8 v)  { g_stream.push_back(v); }
void put(u16 v) { put(static_cast<u8>(v & 0xFF)); put(static_cast<u8>(v >> 8)); }
void put(u32 v) {
    put(static_cast<u8>(v & 0xFF));
    put(static_cast<u8>((v >> 8) & 0xFF));
    put(static_cast<u8>((v >> 16) & 0xFF));
    put(static_cast<u8>((v >> 24) & 0xFF));
}
void put(f32 v) { u32 u; std::memcpy(&u, &v, sizeof(u)); put(u); }
void put(s16 v) { put(static_cast<f32>(v)); }   /* s16 归一化成浮点 */

/* 一条命令的生命周期：构造写 op + 占位长度，析构回填真实长度。
   用 RAII 而不是手工 begin/end 配对：
     1. 不会忘记 end（早期版本靠人工，漏一个整条流就废）
     2. 不会互相覆盖（早期版本用单一全局 g_lenPos，嵌套写入必错）
     3. 变长 payload 也无需维护长度表 */
class Cmd {
public:
    explicit Cmd(u16 op) {
        put(op);
        put(static_cast<u16>(0));           /* 长度占位 */
        len_pos_ = g_stream.size() - 2;
    }
    ~Cmd() {
        const u32 len = static_cast<u32>(g_stream.size() - (len_pos_ + 2));
        g_stream[len_pos_]     = static_cast<u8>(len & 0xFF);
        g_stream[len_pos_ + 1] = static_cast<u8>((len >> 8) & 0xFF);
    }
    Cmd(const Cmd&)            = delete;
    Cmd& operator=(const Cmd&) = delete;

private:
    size_t len_pos_;
};

/* 固定参数列表的命令 */
template <typename... Args>
void emit(u16 op, Args... args) {
    Cmd cmd(op);
    (put(args), ...);                        /* C++17 fold expression */
}

/* payload 需要条件分支时用这个（如 GXCallDisplayList 超限截断） */
template <typename Body>
void emit_with(u16 op, Body body) {
    Cmd cmd(op);
    body();
}

/* ---- 可变状态 ---- */
struct GxState {
    std::array<u8, 16>  vtxDesc{};      /* 顶点属性描述 */
    std::array<u8, 128> vat{};          /* 8 组 x 16 属性的顶点属性表 */
    std::array<u32, 4>  tevColor{};
    std::array<u32, 8>  texObjs{};
    std::array<f32, 16> posMtx{};
    std::array<f32, 16> projRaw{};      /* 游戏原始投影矩阵，用于重发 */

    u8  prim = 0, vtxFmt = 0;
    u16 vtxCount = 0;
    u8  numTex = 0, numTev = 0, numChan = 0;
    u8  zEnable = 0, zFunc = 3, zUpdate = 1;
    u8  blendType = 0, blendSrc = 4, blendDst = 5, blendOp = 0;
    u8  cull = 0;
    f32 fogA = 0, fogB = 1;
    u32 fogColor = 0xFF000000u;
    u8  projType = 0;
    bool haveProj = false;
};

/* VAT 是 8 组 x 16 属性，用二维下标访问比一维偏移更不容易算错 */
u8& vat_at(GxState& s, u8 vf, u32 attr) {
    return s.vat[static_cast<size_t>(vf) * 16 + (attr & 0xF)];
}

struct ViewCfg {
    u32 outW = 640, outH = 480;         /* 画布像素（canvas 尺寸） */
    u32 efbW = 640, efbH = 480;         /* 内部 EFB 逻辑尺寸，游戏按此布局 */
    int aspectMode = TWW_ASPECT_4_3;
};

GxState g_state;
ViewCfg g_view;

/* 横向修正系数：4:3 基准 -> 当前输出宽高比。
   透视：m[0][0] *= adj 等价于水平 FOV 变大（Hor+，不裁切不变形）
   正交：UI 坐标 0..640 只映射到画布中间 4:3 区域，比例不变形 */
f32 aspect_adjust() {
    if (g_view.aspectMode == TWW_ASPECT_FILL) return 1.0f;

    f32 outAspect = 4.0f / 3.0f;
    if (g_view.aspectMode == TWW_ASPECT_16_9 && g_view.outW > 0 && g_view.outH > 0) {
        outAspect = static_cast<f32>(g_view.outW) / static_cast<f32>(g_view.outH);
    }
    if (outAspect <= 0.0f) return 1.0f;
    return (4.0f / 3.0f) / outAspect;
}

/* 重发当前投影矩阵：分辨率/宽高比变化时立刻生效，
   不必等游戏下一帧调用 GXSetProjection */
void emit_projection() {
    if (!g_state.haveProj) return;

    std::array<f32, 16> m = g_state.projRaw;
    m[0] *= aspect_adjust();              /* 行主序 [0][0] */

    emit_with(OP_Projection, [&] {
        put(g_state.projType);
        for (f32 v : m) put(v);
    });
}

/* GXInit 要返回一个稳定非 null 的句柄：JUTGraphFifo 会把返回值当 FIFO
   对象存起来，返回 null 会让部分代码走错误分支 */
std::array<char, 64> g_fifoObj{};

}  // namespace

extern "C" {

void* GXInit(void*, u32 /*size*/) {
    g_stream.clear();
    g_recording = true;
    return g_fifoObj.data();
}

/* ---- 图元 ---- */

void GXBegin(u8 prim, u8 vtxfmt, u16 nverts) {
    g_state.prim    = prim;
    g_state.vtxFmt  = vtxfmt;
    g_state.vtxCount = nverts;
    emit(OP_Begin, prim, vtxfmt, nverts);
}

void GXEnd(void) { emit(OP_End); }

/* 2f 与 3f 统一按 3 个 float 写，避免 JS 侧定长解析错位 */
void GXPosition3f32(f32 x, f32 y, f32 z) { emit(OP_VertexF, x, y, z); }
void GXPosition2f32(f32 x, f32 y)        { emit(OP_VertexF, x, y, 0.0f); }

/* 简化管线不做光照，但必须整条记录带 op，否则会污染命令流 */
void GXNormal3f32(f32 x, f32 y, f32 z) { emit(OP_Normal, x, y, z); }

/* s16 归一化到浮点后写入，同样保持 2 float 定长 */
void GXTexCoord2f32(f32 s, f32 t) { emit(OP_TexCoord, s, t); }
void GXTexCoord2s16(s16 s, s16 t) { emit(OP_TexCoord, static_cast<f32>(s), static_cast<f32>(t)); }

void GXColor4u8(u8 r, u8 g, u8 b, u8 a) { emit(OP_Color, r, g, b, a); }
void GXColor3u8(u8 r, u8 g, u8 b)       { emit(OP_Color, r, g, b, static_cast<u8>(255)); }

/* ---- 顶点格式 ---- */

void GXSetVtxDesc(u8 attr, u8 type) {
    g_state.vtxDesc[attr & 0xF] = type;
    emit(OP_VtxDesc, attr, type);
}

void GXSetVtxAttrFmt(u8 vtxfmt, u32 attr, u8 vat, u8 comp, u8 shift) {
    if (vtxfmt < 8) vat_at(g_state, vtxfmt, attr) = static_cast<u8>((vat << 4) | comp);
    emit(OP_VtxAttrFmt, vtxfmt, static_cast<u8>(attr), vat, comp, shift);
}

void GXClearVtxDesc(void) { g_state.vtxDesc.fill(0); }

/* ---- 矩阵 / 纹理对象 ---- */

void GXLoadPosMtxImm(const f32* m, u32 /*id*/) {
    if (!m) return;
    std::array<f32, 16> arr{};
    std::copy_n(m, arr.size(), arr.begin());
    g_state.posMtx = arr;
    emit_with(OP_Matrix, [&] { put_bytes(arr.data(), static_cast<u32>(arr.size() * sizeof(f32))); });
}

void GXLoadTexObj(void* obj, u32 id) {
    const u32 handle = static_cast<u32>(reinterpret_cast<uintptr_t>(obj));
    if (id < g_state.texObjs.size()) g_state.texObjs[id] = handle;
    emit(OP_LoadTexObj, id, handle);
}

/* ---- 数量设置 ---- */

void GXSetNumTexGens(u8 n)   { g_state.numTex = n;  emit(OP_NumTex, n); }
void GXSetNumTevStages(u8 n) { g_state.numTev = n;  emit(OP_NumTev, n); }
void GXSetNumChans(u8 n)     { g_state.numChan = n; emit(OP_NumChan, n); }
void GXSetNumChans_n(u8 n)   { GXSetNumChans(n); }

/* ---- TEV ---- */

void GXSetTevOrder(u8 stage, u8 texcoord, u32 texmap, u8 color) {
    emit(OP_TevStage, stage, texcoord, static_cast<u8>(texmap), color);
}
void GXSetTevColorIn(u8 stage, u8 a, u8 b, u8 c, u8 d) {
    emit(OP_TevStage, stage, a, b, c, d);
}
void GXSetTevAlphaIn(u8 stage, u8 a, u8 b, u8 c, u8 d) {
    emit(OP_TevStage, stage, a, b, c, d);
}
void GXSetTevColorOp(u8 stage, u8 op, u8 bias, u8 scale, u8 clamp, u8 out) {
    emit(OP_TevStage, stage, op, bias, scale, clamp, out);
}
void GXSetTevAlphaOp(u8 stage, u8 op, u8 bias, u8 scale, u8 clamp, u8 out) {
    emit(OP_TevStage, stage, op, bias, scale, clamp, out);
}
void GXSetTevColor(u8 id, u32 color) { g_state.tevColor[id & 3] = color; }

/* ---- 混合 / 深度 / 剔除 ---- */

void GXSetBlendMode(u8 type, u8 src, u8 dst, u8 op) {
    g_state.blendType = type;
    g_state.blendSrc  = src;
    g_state.blendDst  = dst;
    g_state.blendOp   = op;
    emit(OP_BlendMode, type, src, dst, op);
}

void GXSetZMode(u8 enable, u8 func, u8 update) {
    g_state.zEnable = enable;
    g_state.zFunc   = func;
    g_state.zUpdate = update;
    emit(OP_ZMode, enable, func, update);
}

void GXSetCullMode(u8 mode) { g_state.cull = mode; emit(OP_CullMode, mode); }

void GXSetCurrentMtx(u32 id) { emit(OP_State, static_cast<u8>(1), static_cast<u8>(id)); }

void GXSetTexCoordGen(u16 tcoord, u8 tgen, u8 src, u8 mtx) {
    emit(OP_TexGen, tcoord, tgen, src, mtx);
}

/* ---- 显示列表 / 帧结束 ---- */

/* DL 数据可能超过 u16 长度上限，超限就只记长度不记内容。
   Cmd 会按实际写入量回填长度，JS 侧按 len 跳过仍然一致 */
void GXCallDisplayList(const void* dl, u32 bytes) {
    static const u32 kMaxInline = 60000;
    emit_with(OP_CallDL, [&] {
        put(bytes);
        if (dl && bytes <= kMaxInline) put_bytes(dl, bytes);
    });
}

void GXDrawDone(void) {}
void GXCopyDisp(void*, u8 /*clear*/) { emit(OP_Swap); }   /* 帧结束标记 */
void GXSetDispCopyYScale(f32 /*scale*/) {}
void GXPixModeSync(void) {}

void GXSetClipMode(u8 mode) { emit(OP_Clip, mode); }

void GXSetFog(u8 /*type*/, f32 a, f32 b, f32 /*c*/, f32 /*d*/, u32 color) {
    g_state.fogA     = a;
    g_state.fogB     = b;
    g_state.fogColor = color;
}

void GXSetAlphaCompare(u8 comp0, u8 ref0, u8 op, u8 comp1, u8 ref1) {
    emit(OP_AlphaComp, comp0, ref0, op, comp1, ref1);
}
void GXSetLineWidth(u8 w, u8 /*fmt*/) { emit(OP_LineWidth, w); }
void GXSetPointSize(u8 s, u8 /*fmt*/) { emit(OP_PointSize, s); }

/* ---- 宽屏拦截点 ---- */

void GXSetProjection(const f32 mtx[4][4], u8 type) {
    std::memcpy(g_state.projRaw.data(), mtx, sizeof(g_state.projRaw));
    g_state.projType = type;
    g_state.haveProj = true;
    emit_projection();
}

void GXSetViewport(f32 x, f32 y, f32 w, f32 h, f32 near, f32 far) {
    /* 按 EFB 坐标记录，由 JS 侧乘 EFB->画布 缩放 */
    emit(OP_Viewport, x, y, w, h, near, far);
}

void GXSetScissor(u32 x, u32 y, u32 w, u32 h) { emit(OP_Scissor, x, y, w, h); }

/* ---- 分辨率 / 宽屏接口（platform.c 与 JS 调用） ---- */

u32 clamp_u32(u32 v, u32 lo, u32 hi) { return v < lo ? lo : (v > hi ? hi : v); }

void gx2gl_set_output_size(u32 w, u32 h) {
    g_view.outW = clamp_u32(w, 160, 7680);
    g_view.outH = clamp_u32(h, 120, 4320);
    emit_projection();          /* 宽高比变了，立刻重发修正后的投影 */
}

void gx2gl_set_efb_size(u32 w, u32 h) {
    /* 内部逻辑分辨率：游戏按 640x480 布局，超出 EFB 硬件上限无意义 */
    g_view.efbW = clamp_u32(w, 160, GX_EFB_MAX_W);
    g_view.efbH = clamp_u32(h, 120, GX_EFB_MAX_H);
}

void gx2gl_set_aspect_mode(int mode) {
    if (mode < 0 || mode > 2) return;
    g_view.aspectMode = mode;
    emit_projection();
}

u32 gx2gl_out_w(void) { return g_view.outW; }
u32 gx2gl_out_h(void) { return g_view.outH; }
u32 gx2gl_efb_w(void) { return g_view.efbW; }
u32 gx2gl_efb_h(void) { return g_view.efbH; }

f32 gx2gl_aspect_scale(void) { return aspect_adjust(); }
f32 gx2gl_vp_scale_x(void) {
    return g_view.efbW > 0 ? static_cast<f32>(g_view.outW) / static_cast<f32>(g_view.efbW) : 1.0f;
}
f32 gx2gl_vp_scale_y(void) {
    return g_view.efbH > 0 ? static_cast<f32>(g_view.outH) / static_cast<f32>(g_view.efbH) : 1.0f;
}

/* ---- JS 侧取命令流 ---- */

u32 gx2gl_stream_len(void) { return static_cast<u32>(g_stream.size()); }
const u8* gx2gl_stream_data(void) { return g_stream.data(); }
void gx2gl_stream_reset(void) { g_stream.clear(); }

/* 状态查询。which 用下面的具名常量，别传裸数字 */
enum : u32 {
    GX_STATE_Z      = 0,   /* zEnable | zFunc<<8 | zUpdate<<16 */
    GX_STATE_BLEND  = 1,   /* type | src<<8 | dst<<16 | op<<24 */
    GX_STATE_COUNTS = 2,   /* cull | numTex<<8 | numTev<<16 | numChan<<24 */
    GX_STATE_TEX0   = 3,   /* 0 号纹理对象句柄 */
};

u32 gx2gl_state(u32 which) {
    switch (which) {
        case GX_STATE_Z:
            return g_state.zEnable | (static_cast<u32>(g_state.zFunc) << 8) |
                   (static_cast<u32>(g_state.zUpdate) << 16);
        case GX_STATE_BLEND:
            return g_state.blendType | (static_cast<u32>(g_state.blendSrc) << 8) |
                   (static_cast<u32>(g_state.blendDst) << 16) |
                   (static_cast<u32>(g_state.blendOp) << 24);
        case GX_STATE_COUNTS:
            return g_state.cull | (static_cast<u32>(g_state.numTex) << 8) |
                   (static_cast<u32>(g_state.numTev) << 16) |
                   (static_cast<u32>(g_state.numChan) << 24);
        case GX_STATE_TEX0:
            return g_state.texObjs[0];
        default:
            return 0;
    }
}

}  // extern "C"
