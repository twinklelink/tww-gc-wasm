/* 命令流回归测试（C 侧）：生成一条混合流，交给 tools/test_stream.js 解析。
 *
 * 故意混入 JS 侧尚未实现的 op（TEV / VtxDesc / TexGen / CallDL），
 * 以及变长的 CallDL、2f 位置、s16 纹理坐标，用来验证：
 *   1. 长度前缀能让 JS 安全跳过未知 op
 *   2. 2f/s16 与 3f/f32 写入长度一致，不会让流错位
 *
 * 编译：
 *   gcc  -I gx -c tools/test_stream.c -o /tmp/ts.o
 *   g++  -std=c++17 -I gx -c gx/gx2gl.cpp -o /tmp/gx.o
 *   g++  /tmp/ts.o /tmp/gx.o -o /tmp/ts && /tmp/ts /tmp/stream.bin
 */
#include <stdio.h>
#include <stdlib.h>
#include "gx2gl.h"

static float g_proj[4][4] = {
    {1.5f, 0, 0, 0}, {0, 1.5f, 0, 0}, {0, 0, 1, 0}, {0, 0, -1, 0}
};
/* 正交矩阵（type=0），代表 UI / 2D 绘制 */
static float g_ortho[4][4] = {
    {0.003125f, 0, 0, -1}, {0, -0.004166f, 0, 1}, {0, 0, 1, 0}, {0, 0, 0, 1}
};

int main(int argc, char** argv){
    const char* out = (argc > 1) ? argv[1] : "/tmp/stream.bin";

    GXInit(0, 0);

    /* 未实现的 op：JS 必须能跳过而不影响后续解析 */
    GXSetNumChans(1);
    GXSetNumTexGens(1);
    GXSetNumTevStages(2);
    GXSetTevOrder(0, 0, 0, 0);
    GXSetTevColorIn(0, 0, 1, 2, 3);
    GXSetTevColorOp(0, 0, 0, 0, 0, 0);   /* payload 6 字节，与其他 Tev 不同长 */
    GXSetVtxDesc(0, 1);
    GXSetVtxAttrFmt(0, 9, 0, 4, 0);
    GXSetTexCoordGen(0, 0, 0, 0);
    GXSetAlphaCompare(7, 0, 0, 7, 0);

    /* 宽屏相关 */
    GXSetProjection(g_proj, 1);
    GXSetViewport(0, 0, 640, 480, 0, 1);
    GXSetScissor(0, 0, 640, 480);

    /* 状态 */
    GXSetCullMode(2);
    GXSetBlendMode(1, 4, 5, 0);
    GXSetZMode(1, 3, 1);

    {
        float m[16] = {1,0,0,0, 0,1,0,0, 0,0,1,0, 0,0,0,1};
        GXLoadPosMtxImm(m, 0);
    }

    /* QUADS：4 顶点，JS 需展开成 6 */
    GXBegin(0x80, 0, 4);
    GXPosition3f32(0,0,0);   GXTexCoord2s16(0,0);   GXColor4u8(255,0,0,255);
    GXPosition3f32(1,0,0);   GXTexCoord2s16(256,0); GXColor3u8(0,255,0);
    GXPosition3f32(1,1,0);   GXTexCoord2s16(256,256); GXColor4u8(0,0,255,255);
    GXPosition3f32(0,1,0);   GXTexCoord2s16(0,256); GXColor4u8(255,255,0,255);
    GXEnd();

    /* TRIANGLES + 2f 位置 + f32 纹理坐标 */
    GXBegin(0x90, 0, 3);
    GXPosition2f32(0,0); GXTexCoord2f32(0,0); GXColor3u8(1,2,3);
    GXPosition2f32(1,0); GXTexCoord2f32(1,0); GXColor3u8(4,5,6);
    GXPosition2f32(0,1); GXTexCoord2f32(0,1); GXColor3u8(7,8,9);
    GXEnd();

    /* 超限 CallDL：payload 只记长度，JS 按 len 跳过仍一致 */
    {
        static unsigned char dl[70000];
        GXCallDisplayList(dl, 70000);
    }

    /* 场景 B：Begin 之前设一次颜色与 uv，图元内只写 position。
       三个顶点都应是 (255,128,0,255) / uv(0.25,0.75)。
       若实现把 Begin 前的属性丢掉，顶点会变成默认白色 */
    GXColor4u8(255, 128, 0, 255);
    GXTexCoord2f32(0.25f, 0.75f);
    GXBegin(0x90, 0, 3);
    GXPosition3f32(0, 0, 0);
    GXPosition3f32(1, 0, 0);
    GXPosition3f32(0, 1, 0);
    GXEnd();

    /* 切到正交 = UI/2D 绘制，JS 应把视口收成 4:3 居中而不是铺满 */
    GXSetProjection(g_ortho, 0);
    GXSetViewport(0, 0, 640, 480, 0, 1);
    GXBegin(0x80, 0, 4);      /* HUD 用方块画很常见 */
    GXPosition2f32(0, 0);   GXColor4u8(255, 255, 255, 255);
    GXPosition2f32(32, 0);  GXColor4u8(255, 255, 255, 255);
    GXPosition2f32(32, 32); GXColor4u8(255, 255, 255, 255);
    GXPosition2f32(0, 32);  GXColor4u8(255, 255, 255, 255);
    GXEnd();

    GXCopyDisp(0, 1);   /* OP_Swap，帧结束 */

    {
        FILE* f = fopen(out, "wb");
        u32 n = gx2gl_stream_len();
        if(!f){ perror("fopen"); return 1; }
        fwrite(gx2gl_stream_data(), 1, n, f);
        fclose(f);
        fprintf(stderr, "stream bytes: %u -> %s\n", n, out);
    }
    return 0;
}
