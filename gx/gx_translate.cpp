#include "gx_translate.h"
#include <cstring>
#include <cstdlib>
#include <vector>

static GXMode g_mode = GX_MODE_RECORD;
static GXState g_state;
static std::vector<u8> g_record;
static bool g_recording = false;

/* 记录格式： [op: u16][len: u16][payload...] */
enum GXOp : u16 {
  OP_BEGIN = 1, OP_SETVTXFMT, OP_LOADPOSMTX, OP_LOADNRMMTX, OP_SETBLEND,
  OP_SETDEPTH, OP_SETCULL, OP_SETTEX, OP_SETVIEWPORT, OP_CLEAR, OP_FLUSH
};

static void rec(GXOp op, const void* data, u16 len) {
  if (!g_recording) return;
  g_record.push_back((u8)(op & 0xFF)); g_record.push_back((u8)(op >> 8));
  g_record.push_back((u8)(len & 0xFF)); g_record.push_back((u8)(len >> 8));
  const u8* p = (const u8*)data;
  for (u16 i = 0; i < len; i++) g_record.push_back(p[i]);
}

void gx_set_mode(GXMode mode) { g_mode = mode; }
GXMode gx_get_mode(void) { return g_mode; }
GXState* gx_state(void) { return &g_state; }

void gx_record_begin(void) { g_record.clear(); g_recording = true; }
const u8* gx_record_data(size_t* outSize) { if (outSize) *outSize = g_record.size(); return g_record.data(); }
void gx_record_end(void) { g_recording = false; }

/* ---------- Vulkan 后端 ---------- */
#ifdef GX_ENABLE_VULKAN
#include <vulkan/vulkan.h>
/* 把 GXState 映射成 Vulkan 管线状态，一次性下发 */
void gx_flush_vulkan(void* cmdBuf, void* pipelineLayout) {
  VkCommandBuffer cb = (VkCommandBuffer)cmdBuf;
  /* 1. 视口/scissor */
  VkViewport vp; vp.x = g_state.vpX; vp.y = g_state.vpY;
  vp.width = g_state.vpW; vp.height = g_state.vpH;
  vp.minDepth = g_state.vpNear; vp.maxDepth = g_state.vpFar;
  vkCmdSetViewport(cb, 0, 1, &vp);
  VkRect2D sc; sc.offset = {(int32_t)g_state.vpX, (int32_t)g_state.vpY};
  sc.extent = {(uint32_t)g_state.vpW, (uint32_t)g_state.vpH};
  vkCmdSetScissor(cb, 0, 1, &sc);
  /* 2. 深度/混合/剔除由管线状态决定（预编译管线缓存，避免运行时查表） */
  /* 3. 顶点/纹理描述符：使用预烘焙的描述符集 */
}
#else
void gx_flush_vulkan(void*, void*) {}
#endif

/* ---------- OpenGL / GLES 后端 ---------- */
#ifdef GX_ENABLE_GL
#if defined(__EMSCRIPTEN__)
#include <GLES3/gl3.h>
#elif defined(__APPLE__)
#include <OpenGL/gl3.h>
#else
#include <GL/gl.h>
#endif
static GLenum map_compare(GXCompare c) {
  switch (c) {
    case GX_NEVER:  return GL_NEVER;
    case GX_LESS:   return GL_LESS;
    case GX_EQUAL:  return GL_EQUAL;
    case GX_LEQUAL: return GL_LEQUAL;
    case GX_GREATER:return GL_GREATER;
    case GX_NEQUAL: return GL_NOTEQUAL;
    case GX_GEQUAL: return GL_GEQUAL;
    default:        return GL_ALWAYS;
  }
}
static GLenum map_blend(GXBlendFactor f) {
  switch (f) {
    case GX_BL_ZERO:        return GL_ZERO;
    case GX_BL_ONE:         return GL_ONE;
    case GX_BL_SRCCLR:      return GL_SRC_COLOR;
    case GX_BL_INVSRCCLR:   return GL_ONE_MINUS_SRC_COLOR;
    case GX_BL_SRCALPHA:    return GL_SRC_ALPHA;
    case GX_BL_INVSRCALPHA: return GL_ONE_MINUS_SRC_ALPHA;
    case GX_BL_DSTALPHA:    return GL_DST_ALPHA;
    default:                return GL_ONE_MINUS_DST_ALPHA;
  }
}
void gx_flush_gl(void) {
  /* 深度 */
  if (g_state.depthTest) { glEnable(GL_DEPTH_TEST); glDepthFunc(map_compare(g_state.depthFunc)); }
  else glDisable(GL_DEPTH_TEST);
  glDepthMask(g_state.depthUpdate ? GL_TRUE : GL_FALSE);
  /* 混合 */
  if (g_state.blendEnable) {
    glEnable(GL_BLEND);
    glBlendFunc(map_blend(g_state.srcFactor), map_blend(g_state.dstFactor));
  } else glDisable(GL_BLEND);
  /* 颜色/alpha 掩码 */
  glColorMask(g_state.colorUpdate, g_state.colorUpdate, g_state.colorUpdate, g_state.alphaUpdate);
  /* 剔除 */
  if (g_state.cullEnable) {
    glEnable(GL_CULL_FACE);
    glCullFace(g_state.cullBack ? GL_BACK : GL_FRONT);
  } else glDisable(GL_CULL_FACE);
  /* 视口 */
  glViewport((GLint)g_state.vpX, (GLint)g_state.vpY, (GLsizei)g_state.vpW, (GLsizei)g_state.vpH);
}
#else
void gx_flush_gl(void) {}
#endif
