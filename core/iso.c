/* ISO 读取：解析 GameCube 文件系统（FST），把资源暴露给 WASM
 *
 * GC 光盘布局：
 *   0x424: FST 偏移   0x428: FST 大小
 * FST 条目 12 字节：type+nameoff(3B) / off / size
 *   type=1 表示目录，其 size 字段是"本目录子树的下一个条目号"
 */
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

typedef uint8_t  u8;  typedef uint32_t u32;

#define FST_ENT_SIZE   12
#define FST_ROOT_IDX   1      /* 条目 0 是根目录自身，从 1 开始遍历 */
#define PATH_MAX       512

/* ISO 上下文。收在一个 struct 里，换镜像时整体复位，
   不会像散落的全局变量那样漏清某一项 */
typedef struct {
    u8* data;          /* JS 传入的镜像内存，不归本模块所有 */
    u32 size;
    u8* fstRaw;        /* FST 原始字节（指向 data 内部） */
    u8* fstStr;        /* 文件名字符串表（指向 data 内部） */
    u32 count;         /* FST 条目数 */
} IsoCtx;

static IsoCtx g_iso;

/* iso_file_size 的单条查询缓存。连续查同一个文件（加载流程常见）
   不必每次扫上千个 FST 条目 */
static u32 g_lastOff = 0, g_lastSize = 0;
static int g_lastValid = 0;

/* 大端序读 32 位 */
static inline u32 rd32(const u8* p) {
    return ((u32)p[0] << 24) | ((u32)p[1] << 16) | ((u32)p[2] << 8) | (u32)p[3];
}

/* 区间 [off, off+len) 是否完全落在镜像内。
   写成移项比较，避免 off+len 溢出后误判为合法 */
static inline int in_image(u32 off, u32 len) {
    return off <= g_iso.size && len <= g_iso.size - off;
}

/* ------------------------------------------------------------------
 * 装载 / 挂载
 * ------------------------------------------------------------------ */

void iso_load(u8* data, u32 size) {
    g_iso.data   = data;
    g_iso.size   = size;
    g_iso.fstRaw = NULL;
    g_iso.fstStr = NULL;
    g_iso.count  = 0;
    g_lastValid  = 0;          /* 换了镜像，大小缓存作废 */
}

int iso_mount(void) {
    if (!g_iso.data || g_iso.size < 0x42C) return -1;

    const u32 fstOff  = rd32(g_iso.data + 0x424);
    const u32 fstSize = rd32(g_iso.data + 0x428);
    if (!in_image(fstOff, fstSize)) return -2;
    if (fstSize < FST_ENT_SIZE) return -2;

    u8* fst = g_iso.data + fstOff;
    const u32 count = rd32(fst + 8);

    /* 条目数要能放得下，否则后面所有遍历都会越界 */
    if (count == 0 || count > fstSize / FST_ENT_SIZE) return -3;

    /* 字符串表紧随条目数组之后 */
    const u32 strOff = count * FST_ENT_SIZE;
    if (strOff > fstSize) return -3;

    g_iso.fstRaw = fst;
    g_iso.fstStr = fst + strOff;
    g_iso.count  = count;
    g_lastValid  = 0;
    return 0;
}

/* ------------------------------------------------------------------
 * 查找
 * ------------------------------------------------------------------ */

/* 第 idx 个条目的字段。返回 0 表示下标越界 */
static const u8* fst_ent(u32 idx) {
    if (idx >= g_iso.count) return NULL;
    return g_iso.fstRaw + idx * FST_ENT_SIZE;
}

static u32 ent_type(const u8* e)     { return e[0]; }
static u32 ent_nameoff(const u8* e)  { return ((u32)e[1] << 16) | ((u32)e[2] << 8) | (u32)e[3]; }
static u32 ent_off(const u8* e)      { return rd32(e + 4); }
static u32 ent_size(const u8* e)     { return rd32(e + 8); }

/* 按 FST 树递归重建完整路径并精确比对 */
static u32 iso_search(u32 idx, const char* prefix, const char* target, u32* outSize) {
    char path[PATH_MAX];
    u32 i = idx;

    while (i < g_iso.count) {
        const u8* e = fst_ent(i);
        if (!e) break;

        const u32 type    = ent_type(e);
        const u32 nameOff = ent_nameoff(e);
        const u32 off     = ent_off(e);
        const u32 sz      = ent_size(e);

        /* 目录的 sz 是子树结束后的下一个条目号，不是文件大小 */
        const u32 next = type ? (sz > i ? sz : i + 1) : i + 1;
        /* 若 FST 损坏使 sz <= i，sz 会原地打转甚至回退，
           上面这行保证每次至少前进一步，不会死循环 */

        const char* nm = (const char*)(g_iso.fstStr + nameOff);
        const size_t plen = strlen(prefix);
        const size_t nlen = strlen(nm);

        if (plen + nlen + 2 <= sizeof(path)) {
            memcpy(path, prefix, plen);
            memcpy(path + plen, nm, nlen + 1);

            if (type) {
                path[plen + nlen]     = '/';
                path[plen + nlen + 1] = '\0';
                const u32 r = iso_search(i + 1, path, target, outSize);
                if (r) return r;
            } else if (strcmp(path, target) == 0) {
                if (outSize) *outSize = sz;
                return off;
            }
        }
        i = next;
    }
    return 0;
}

/* 返回文件在 ISO 中的偏移，找不到返回 0 */
u32 iso_find(const char* path, u32* size) {
    if (size) *size = 0;
    if (!g_iso.fstRaw || !path) return 0;

    const char* t = path;
    while (*t == '/') t++;

    /* 先精确匹配完整路径 */
    const u32 off = iso_search(FST_ROOT_IDX, "", t, size);
    if (off) return off;

    /* 回退：只给文件名时按 basename 匹配。
       ISO 里有成百上千个同名文件（如 model.bmd），
       命中哪个是不确定的——调用方最好传完整路径 */
    const char* slash = strrchr(path, '/');
    const char* base  = slash ? slash + 1 : path;

    for (u32 i = FST_ROOT_IDX; i < g_iso.count; i++) {
        const u8* e = fst_ent(i);
        if (!e || ent_type(e)) continue;              /* 跳过目录 */
        if (strcmp((const char*)(g_iso.fstStr + ent_nameoff(e)), base) == 0) {
            if (size) *size = ent_size(e);
            return ent_off(e);
        }
    }
    return 0;
}

/* 按偏移反查大小 */
u32 iso_file_size(u32 off) {
    if (!g_iso.fstRaw) return 0;
    if (g_lastValid && off == g_lastOff) return g_lastSize;

    for (u32 i = FST_ROOT_IDX; i < g_iso.count; i++) {
        const u8* e = fst_ent(i);
        if (!e || ent_type(e)) continue;
        if (ent_off(e) == off) {
            g_lastOff   = off;
            g_lastSize  = ent_size(e);
            g_lastValid = 1;
            return g_lastSize;
        }
    }
    return 0;
}

u8* iso_ptr(u32 off) {
    return in_image(off, 1) ? g_iso.data + off : NULL;
}

u32 iso_count(void) { return g_iso.count; }
