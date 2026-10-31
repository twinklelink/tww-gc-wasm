/* 命令流性能基准（C 侧）：生成一帧"典型负载"的流。
 *
 * 一帧按 300 个 QUADS + 300 个 TRIANGLE_STRIP 估，约 3000 顶点，
 * 接近风之杖一个中等场景的量级。用来量化 gx2gl.js 解析一帧要多久。
 *
 * 编译：
 *   gcc  -I gx -c tools/bench_stream.c -o /tmp/bs.o
 *   g++  -std=c++17 -I gx -c gx/gx2gl.cpp -o /tmp/gx.o
 *   g++  /tmp/bs.o /tmp/gx.o -o /tmp/bs && /tmp/bs /tmp/bench.bin
 *   node tools/bench_stream.js /tmp/bench.bin
 */
#include <stdio.h>
#include <stdlib.h>
#include "gx2gl.h"

static float g_proj[4][4] = {
    {1.5f,0,0,0}, {0,1.5f,0,0}, {0,0,1,0}, {0,0,-1,0}
};
static float g_ortho[4][4] = {
    {0.003125f,0,0,-1}, {0,-0.004166f,0,1}, {0,0,1,0}, {0,0,0,1}
};

int main(int argc, char** argv){
    const char* out = (argc > 1) ? argv[1] : "/tmp/bench.bin";
    GXInit(0, 0);

    /* 3D 段：300 个 QUADS(4顶点) + 300 个 STRIP(8顶点) = 3600 顶点 */
    GXSetProjection(g_proj, 1);
    GXSetViewport(0, 0, 640, 480, 0, 1);
    GXSetCullMode(2);
    GXSetBlendMode(1, 4, 5, 0);
    GXSetZMode(1, 3, 1);

    for (int q = 0; q < 300; q++) {
        GXBegin(0x80, 0, 4);                 /* QUADS */
        for (int k = 0; k < 4; k++) {
            GXPosition3f32((float)(q + k), (float)k, 0.0f);
            GXTexCoord2s16((s16)(k * 64), (s16)(k * 48));
            GXColor4u8((u8)(k * 60), 128, 200, 255);
        }
        GXEnd();
    }
    for (int s = 0; s < 300; s++) {
        GXBegin(0x98, 0, 8);                 /* TRIANGLE_STRIP */
        for (int k = 0; k < 8; k++) {
            GXPosition3f32((float)(s + k), (float)k, 1.0f);
            GXTexCoord2f32(k * 0.125f, 0.5f);
            GXColor3u8(255, 255, 255);
        }
        GXEnd();
    }

    /* UI 段：切正交 + 20 个 HUD 方块 */
    GXSetProjection(g_ortho, 0);
    GXSetViewport(0, 0, 640, 480, 0, 1);
    for (int q = 0; q < 20; q++) {
        GXBegin(0x80, 0, 4);
        for (int k = 0; k < 4; k++) {
            GXPosition2f32((float)(q * 8 + k * 4), (float)(k * 4));
            GXColor4u8(255, 255, 255, 255);
        }
        GXEnd();
    }

    GXCopyDisp(0, 1);

    FILE* f = fopen(out, "wb");
    if (!f) { perror("fopen"); return 1; }
    u32 n = gx2gl_stream_len();
    fwrite(gx2gl_stream_data(), 1, n, f);
    fclose(f);
    fprintf(stderr, "bench stream: %u bytes -> %s\n", n, out);
    return 0;
}
