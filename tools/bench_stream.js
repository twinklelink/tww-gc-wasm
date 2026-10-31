/* 命令流解析性能基准（JS 侧）
 *
 * 跑法：
 *   cd source/GitHub
 *   gcc -I gx -c tools/bench_stream.c -o /tmp/bs.o
 *   g++ -std=c++17 -I gx -c gx/gx2gl.cpp -o /tmp/gx.o
 *   g++ /tmp/bs.o /tmp/gx.o -o /tmp/bs && /tmp/bs /tmp/bench.bin
 *   node tools/bench_stream.js /tmp/bench.bin
 */
'use strict';
const fs = require('fs');
const path = require('path');

const binPath = process.argv[2] || '/tmp/bench.bin';
const jsPath = process.env.GX2GL_JS || path.join(__dirname, '..', 'gx', 'gx2gl.js');

/* 只统计调用次数，不做真实 GL 工作：我们要量的是 JS 侧解析开销 */
function mockGL() {
  const gl = {};
  let n = 1, draws = 0, verts = 0;
  ['VERTEX_SHADER','FRAGMENT_SHADER','COMPILE_STATUS','LINK_STATUS',
   'ARRAY_BUFFER','STREAM_DRAW','FLOAT',
   'TRIANGLES','TRIANGLE_STRIP','TRIANGLE_FAN','LINES','LINE_STRIP','POINTS',
   'BLEND','DEPTH_TEST','SCISSOR_TEST','CULL_FACE','FRONT','BACK','FRONT_AND_BACK',
   'ZERO','ONE','SRC_COLOR','ONE_MINUS_SRC_COLOR','SRC_ALPHA','ONE_MINUS_SRC_ALPHA',
   'DST_ALPHA','ONE_MINUS_DST_ALPHA','DST_COLOR','ONE_MINUS_DST_COLOR',
   'NEVER','LESS','EQUAL','LEQUAL','GREATER','NOTEQUAL','GEQUAL','ALWAYS'
  ].forEach(k => { gl[k] = n++; });
  const noop = () => 1;
  ['createShader','shaderSource','compileShader','getShaderInfoLog','createProgram',
   'attachShader','linkProgram','getAttribLocation','getUniformLocation','createBuffer',
   'useProgram','disable','enable','viewport','scissor','bindBuffer',
   'enableVertexAttribArray','vertexAttribPointer','uniform1f','blendFunc','depthFunc',
   'depthMask','cullFace','uniformMatrix4fv'
  ].forEach(m => { gl[m] = noop; });
  gl.getShaderParameter = () => true;
  gl.bufferData = (t, d) => { verts += d.length / 9; };
  gl.drawArrays = (m, f, c) => { draws++; };
  gl._stat = () => ({ draws, verts });
  return gl;
}

const code = fs.readFileSync(jsPath, 'utf8');
const GX2GL = eval(code + ';GX2GL');

const buf = fs.readFileSync(binPath);
const mem = new Uint8Array(buf);
const wasm = {
  exports: {
    _gx2gl_stream_len: () => mem.length,
    _gx2gl_stream_data: () => 0,
    _gx2gl_stream_reset: () => {},
  },
  HEAPU8: mem,
};

const gl = mockGL();
GX2GL.init(gl, null, null);
GX2GL.setEfbSize(640, 480);
GX2GL.setAspectMode(1);
GX2GL.setOutputSize(1920, 1080);

/* 预热，避免把 JIT 编译时间算进去 */
for (let i = 0; i < 20; i++) GX2GL.process(wasm);

const N = 100;
const t0 = process.hrtime.bigint();
for (let i = 0; i < N; i++) GX2GL.process(wasm);
const t1 = process.hrtime.bigint();

const msPerFrame = Number(t1 - t0) / 1e6 / N;
const st = gl._stat();
console.log('stream %d bytes, %d draws/frame, %d verts/frame',
            mem.length, st.draws / (N + 20), st.verts / (N + 20));
console.log('parse: %s ms/frame  (预算 16.67ms 的 %s%%)',
            msPerFrame.toFixed(3), (msPerFrame / 16.67 * 100).toFixed(1));
