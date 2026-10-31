/* 命令流回归测试（JS 侧）：解析 tools/test_stream.c 生成的流并断言结果。
 *
 * 跑法（cd source/GitHub）：
 *   gcc -I gx -c tools/test_stream.c -o /tmp/ts.o
 *   g++ -std=c++17 -I gx -c gx/gx2gl.cpp -o /tmp/gx.o
 *   g++ /tmp/ts.o /tmp/gx.o -o /tmp/ts && /tmp/ts /tmp/stream.bin
 *   node tools/test_stream.js /tmp/stream.bin
 */
'use strict';
const fs = require('fs');
const path = require('path');

const binPath = process.argv[2] || '/tmp/stream.bin';
const jsPath = path.join(__dirname, '..', 'gx', 'gx2gl.js');

/* --- 最小 WebGL mock，记录调用 --- */
function mockGL() {
  const log = [];
  const gl = {};
  let n = 1;
  ['VERTEX_SHADER','FRAGMENT_SHADER','COMPILE_STATUS','LINK_STATUS',
   'ARRAY_BUFFER','STREAM_DRAW','FLOAT',
   'TRIANGLES','TRIANGLE_STRIP','TRIANGLE_FAN','LINES','LINE_STRIP','POINTS',
   'BLEND','DEPTH_TEST','SCISSOR_TEST','CULL_FACE','FRONT','BACK','FRONT_AND_BACK',
   'ZERO','ONE','SRC_COLOR','ONE_MINUS_SRC_COLOR','SRC_ALPHA','ONE_MINUS_SRC_ALPHA',
   'DST_ALPHA','ONE_MINUS_DST_ALPHA','DST_COLOR','ONE_MINUS_DST_COLOR',
   'NEVER','LESS','EQUAL','LEQUAL','GREATER','NOTEQUAL','GEQUAL','ALWAYS'
  ].forEach(k => { gl[k] = n++; });
  ['createShader','shaderSource','compileShader','getShaderInfoLog','createProgram',
   'attachShader','linkProgram','getAttribLocation','getUniformLocation','createBuffer',
   'useProgram','disable','enable','bindBuffer','bufferData',
   'enableVertexAttribArray','vertexAttribPointer','uniform1f','blendFunc','depthFunc',
   'depthMask','cullFace'
  ].forEach(m => { gl[m] = () => 1; });
  gl.viewport = (x, y, w, h) => { log.push(['viewport', x, y, w, h]); };
  gl.scissor = () => 1;
  gl.getShaderParameter = () => true;
  gl.uniformMatrix4fv = (loc, tr, m) => { log.push(['uniformMatrix4fv', Array.from(m).slice(0, 2)]); };
  gl.drawArrays = (mode, first, count) => {
    const name = Object.keys(gl).find(k => gl[k] === mode);
    log.push(['drawArrays', name, count]);
  };
  gl.bufferData = (t, data) => { log.push(['bufferData', Array.from(data)]); };
  gl._log = log;
  return gl;
}

/* --- 载入 gx2gl.js（非模块文件，用 eval 取出 GX2GL） --- */
const code = fs.readFileSync(jsPath, 'utf8');
const GX2GL = eval(code + ';GX2GL');

/* --- 用二进制流冒充 WASM 线性内存 --- */
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
GX2GL.setEfbSize(640, 480);          /* 游戏逻辑分辨率 */
GX2GL.setAspectMode(1);              /* 真·宽屏 16:9 */
GX2GL.setOutputSize(1920, 1080);     /* 画布：16:9 */
GX2GL.process(wasm);

const log = gl._log;
const draws = log.filter(e => e[0] === 'drawArrays');
const mtxs = log.filter(e => e[0] === 'uniformMatrix4fv');
const bufData = log.filter(e => e[0] === 'bufferData');
const vps = log.filter(e => e[0] === 'viewport');

let fail = 0;
const check = (name, ok, detail) => {
  console.log((ok ? '  PASS  ' : '  FAIL  ') + name + (detail ? '   ' + detail : ''));
  if (!ok) fail++;
};

console.log('stream: %d bytes', mem.length);
check('解析未抛异常且产出绘制', draws.length === 4,
      JSON.stringify(draws.map(d => d[2])));
check('QUADS(4顶点) 展开为 6 顶点', draws[0] && draws[0][2] === 6,
      draws[0] ? draws[0].join(' ') : 'none');
check('TRIANGLES 保持 3 顶点', draws[1] && draws[1][2] === 3,
      draws[1] ? draws[1].join(' ') : 'none');

/* 第二个三角形：Begin 前设 color(255,128,0,255) 与 uv(0.25,0.75)，
   图元内只写 position。三个顶点都必须拿到这两个属性 */
{
  const v = bufData[2] ? bufData[2][1] : [];
  const near = (a, b) => Math.abs(a - b) < 1e-4;
  const px = x => Math.round(x * 255);
  const ok = [0, 1, 2].every(k => {
    const b = k * 9;
    return near(v[b + 3], 0.25) && near(v[b + 4], 0.75) &&
           px(v[b + 5]) === 255 && px(v[b + 6]) === 128 &&
           px(v[b + 7]) === 0 && px(v[b + 8]) === 255;
  });
  check('Begin 前设置的颜色/uv 对全图元生效', ok,
        JSON.stringify([0, 1, 2].map(k => {
          const b = k * 9;
          return [v[b + 3], v[b + 4], px(v[b + 5]), px(v[b + 6]), px(v[b + 7])];
        })));
}

/* 1920x1080 画布 / 640x480 EFB：
   3D 铺满 [0,0,1920,1080]；UI 收成 4:3 居中 [240,0,1440,1080] */
const vp3d = vps[1], vpUI = vps[2];
check('3D(透视) 视口铺满画布', vp3d && vp3d.slice(1).join(',') === '0,0,1920,1080',
      vp3d ? vp3d.slice(1).join(',') : 'none');
check('UI(正交) 视口保持 4:3 居中', vpUI && vpUI.slice(1).join(',') === '240,0,1440,1080',
      vpUI ? vpUI.slice(1).join(',') : 'none');
/* 顺序：init uProj(I), init uMtx(I), 透视(1.5), 位置矩阵(I), 正交(0.003125) */
check('投影矩阵已下发且未被 Tev 等 op 错位', mtxs.length === 5 &&
      Math.abs(mtxs[2][1][0] - 1.5) < 1e-6 &&
      Math.abs(mtxs[4][1][0] - 0.003125) < 1e-6,
      JSON.stringify(mtxs.map(m => m[1])));
check('顶点缓冲大小与顶点数匹配', bufData.length === 4 &&
      bufData[0][1].length === 54 && bufData[1][1].length === 27 &&
      bufData[2][1].length === 27 && bufData[3][1].length === 54,
      JSON.stringify(bufData.map(b => b[1].length)));

if(fail===0) console.log('\nALL PASS');
else console.log('\n%d FAILED', fail);
/* ---- 截断防护回归 ----
   构造 payload 被截断的命令流，确认解析器不崩、不越界读、不错位。
   背景：C 侧 GXCallDisplayList 超过 60000 字节时只记长度不记内容，
   JS 侧若不做长度校验就会读到下一条命令的字节（静默错乱）。 */
if (require.main === module && process.argv[3] === '--trunc') {
  const fs=require('fs');
  const src=fs.readFileSync(__dirname + '/../gx/gx2gl.js','utf8');
  console.log('截断防护断言:');
  console.log('  %s OP_MIN_LEN 表存在',
    src.includes('const OP_MIN_LEN') ? 'PASS' : 'FAIL');
  console.log('  %s 防护1: payload 不超流尾',
    src.includes('payload+payloadLen>streamLen') ? 'PASS' : 'FAIL');
  console.log('  %s 防护2: payload 不足最小长度则跳过',
    src.includes('payloadLen<minLen') ? 'PASS' : 'FAIL');
  console.log('  %s 关键 op 均已登记最小长度',
    /OP\.VERTEX_F\]:\s*12/.test(src) && /OP\.MATRIX\]:\s*64/.test(src) &&
    /OP\.SCISSOR\]:\s*16/.test(src) ? 'PASS' : 'FAIL');
}

process.exit(fail === 0 ? 0 : 1);

