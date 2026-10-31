/* GX 命令流 -> WebGL 翻译器
 * 接收 gx2gl.cpp 记录的命令流，逐帧批量下发 WebGL
 * op 编号与 gx/gx2gl.h 的 enum GX2GLOp 一一对应，改一处必须同步另一处 */
'use strict';

/* 命令流 op 编号：与 gx/gx2gl.h 的 enum GX2GLOp 逐一对应。
   用冻结对象而不是散落的 case 魔数——改 C 侧枚举时这里能一眼看到要同步 */
const OP=Object.freeze({
  BEGIN:1,        /* u8 prim, u8 vtxFmt, u16 vertCount */
  END:2,          /* 提交当前图元 */
  VERTEX_F:3,     /* f32 x3 */
  VERTEX_S:4,     /* s16 x3 */
  COLOR:5,        /* u8 x4 */
  TEX_COORD:6,    /* f32 x2 */
  MATRIX:7,       /* f32 x16 位置矩阵 */
  TEX_BIND:8,
  STATE:9,
  TEV_STAGE:10,
  CLEAR:11,
  SWAP:12,        /* 帧结束 */
  VTX_DESC:13,
  VTX_ATTR_FMT:14,
  CULL_MODE:15,   /* u8 */
  BLEND_MODE:16,  /* u8 x4 */
  Z_MODE:17,      /* u8 x3 */
  CHAN:18,
  TEX_GEN:19,
  NUM_TEV:20,
  NUM_TEX:21,
  NUM_CHAN:22,
  LOAD_TEX_OBJ:23,
  CALL_DL:24,
  CLIP:25,
  FOG:26,
  ALPHA_COMP:27,
  LINE_WIDTH:28,
  POINT_SIZE:29,
  PROJECTION:30,  /* u8 type + f32 x16（C 侧已按宽高比修正） */
  VIEWPORT:31,    /* f32 x6，EFB 坐标 */
  SCISSOR:32,     /* u32 x4，EFB 坐标 */
  NORMAL:33,      /* f32 x3，简化管线不使用 */
});

/* 命令头长度：op(u16) + len(u16) */
const CMD_HEADER=4;

/* 顶点布局：pos(3) + uv(2) + col(4)，交错存放。
   三个常量代替散落的 9 / 3 / 5 魔数，改布局时只动这里 */
const VERTEX_FLOATS=9;          /* 每顶点 float 数 */
const UV_OFFSET=3;              /* uv 在顶点内的起始下标 */
const COL_OFFSET=5;             /* col 在顶点内的起始下标 */
const VERTEX_STRIDE_BYTES=36;   /* 每顶点字节数 = 9 * 4 */

/* GX 图元类型（与 gx/gx2gl.h 的 enum 对齐）。
   WebGL 没有 QUADS，遇到它要按三角形展开 */
const GX_QUADS=0x80;

/* 各 op 所需的最小 payload 字节数。
   为什么需要：流可能因 C 侧截断（GXCallDisplayList 超限时只记长度不记内容）
   或内存损坏而不完整。没有这张表，读 payload 时会读到下一条命令的字节——
   不报错、但画面静默错乱，这种 bug 极难定位；更糟的是越界抛 RangeError
   让整帧渲染崩掉。解析前先按此表校验，不足就跳过该条命令。
   表里没有的 op 表示不读 payload（或按需要逐字节读），不需要校验。 */
const OP_MIN_LEN=Object.freeze({
  [OP.VERTEX_S]:6,     /* s16 x3 */
  [OP.VERTEX_F]:12,    /* f32 x3 */
  [OP.COLOR]:4,        /* u8 x4 */
  [OP.TEX_COORD]:8,    /* f32 x2 */
  [OP.MATRIX]:64,      /* f32 x16 */
  [OP.CULL_MODE]:1,
  [OP.BLEND_MODE]:4,
  [OP.Z_MODE]:3,
  [OP.PROJECTION]:65,  /* u8 type + f32 x16 */
  [OP.VIEWPORT]:24,    /* f32 x6 */
  [OP.SCISSOR]:16,     /* u32 x4 */
  [OP.NORMAL]:12       /* f32 x3 */
});

const GX2GL={
  gl:null, canvas:null, wasm:null, prog:null, vbo:null,
  /* 顶点缓冲改成预分配 Float32Array + 写指针。
     原来是 JS 数组 push 9 个数、flush 时再 new Float32Array 拷一遍——
     每帧几千个顶点意味着几千次数组扩容和一次全量拷贝，GC 压力全在这。
     现在只在容量不够时才扩容，flush 直接把 subarray 交给 GL，零拷贝 */
  vertexBuffer:new Float32Array(VERTEX_FLOATS*512), vertexCount:0,
  quadBuffer:null,                 /* QUADS 展开用的复用缓冲 */
  tevStages:[],    /* TEV 配置 */
  state:{zEnable:0,zFunc:3,zUpd:1,blend:[0,4,5,0],cull:0,numTev:0,numTex:0},
  /* 顶点属性归属。GX 不强制属性写入顺序，两种现实写法都要支持：
       A) pos, uv, col, pos, uv, col ...（属性跟在 position 后）
       B) Begin 前先设一次 col，然后只写 position（全图元同色）
     规则：
       - 还没有顶点时写入的属性 -> pending，交给下一个 position
       - 已有顶点且该属性本轮未写过 -> 回填最后一个顶点
       - 已写过 -> 属于下一个顶点，存 pending
     未逐顶点设置的属性沿用 cur*（GX 语义，不会自动重置） */
  currentUV:[0,0], currentColor:[1,1,1,1],
  pendingUV:null, pendingColor:null, uvSetForVertex:false, colorSetForVertex:false,

  /* 输出分辨率（画布像素）与内部 EFB 逻辑尺寸（游戏按 640x480 布局） */
  outW:640, outH:480, efbW:640, efbH:480, aspect:0,
  /* 当前投影类型：0=正交(UI/2D) 1=透视(3D) -1=尚未设置。
     决定视口是铺满画布还是保持 4:3 居中 */
  projType:-1,

  init(gl,canvas,wasm){
    this.gl=gl; this.canvas=canvas||null; this.wasm=wasm||null;
    /* 主着色器：uProj（GX 投影，含宽屏修正） * uMtx（GX 位置矩阵） */
    const vs=`attribute vec3 aPos;attribute vec2 aUV;attribute vec4 aCol;
uniform mat4 uMtx;uniform mat4 uProj;varying vec2 vUV;varying vec4 vCol;
void main(){vUV=aUV;vCol=aCol;gl_Position=uProj*uMtx*vec4(aPos,1.0);}`;
    const fs=`precision mediump float;varying vec2 vUV;varying vec4 vCol;
uniform sampler2D uTex;uniform float uUseTex;uniform vec4 uTevC;
void main(){
  vec4 c=vCol;
  if(uUseTex>0.5){vec4 t=texture2D(uTex,vUV);
    /* 简化 TEV: c = vCol * tex （后续可加 stage 级联）*/
    c=c*t+uTevC*0.0;}
  gl_FragColor=c;}`;
    const mk=(t,src)=>{const s=gl.createShader(t);gl.shaderSource(s,src);gl.compileShader(s);
      if(!gl.getShaderParameter(s,gl.COMPILE_STATUS))console.error(gl.getShaderInfoLog(s));return s;};
    const p=gl.createProgram();
    gl.attachShader(p,mk(gl.VERTEX_SHADER,vs));
    gl.attachShader(p,mk(gl.FRAGMENT_SHADER,fs));
    gl.linkProgram(p);this.prog=p;
    this.aPos=gl.getAttribLocation(p,'aPos');
    this.aUV=gl.getAttribLocation(p,'aUV');
    this.aCol=gl.getAttribLocation(p,'aCol');
    this.uMtx=gl.getUniformLocation(p,'uMtx');
    this.uProj=gl.getUniformLocation(p,'uProj');
    this.uTex=gl.getUniformLocation(p,'uTex');
    this.uUseTex=gl.getUniformLocation(p,'uUseTex');
    this.uTevC=gl.getUniformLocation(p,'uTevC');
    this.vbo=gl.createBuffer();
    this.tex={};
    this._primMap={0x90:gl.TRIANGLES,0x98:gl.TRIANGLE_STRIP,0xA0:gl.TRIANGLE_FAN,
                   0xA8:gl.LINES,0xB0:gl.LINE_STRIP,0xB8:gl.POINTS};
    this._blendSrc=[gl.ZERO,gl.ONE,gl.SRC_COLOR,gl.ONE_MINUS_SRC_COLOR,
                    gl.SRC_ALPHA,gl.ONE_MINUS_SRC_ALPHA,gl.DST_ALPHA,gl.ONE_MINUS_DST_ALPHA];
    this._blendDst=[gl.ZERO,gl.ONE,gl.DST_COLOR,gl.ONE_MINUS_DST_COLOR,
                    gl.SRC_ALPHA,gl.ONE_MINUS_SRC_ALPHA,gl.DST_ALPHA,gl.ONE_MINUS_DST_ALPHA];
    this._depthFn=[gl.NEVER,gl.LESS,gl.EQUAL,gl.LEQUAL,
                   gl.GREATER,gl.NOTEQUAL,gl.GEQUAL,gl.ALWAYS];
    const I=[1,0,0,0, 0,1,0,0, 0,0,1,0, 0,0,0,1];
    gl.useProgram(p);
    gl.uniformMatrix4fv(this.uProj,false,new Float32Array(I));
    gl.uniformMatrix4fv(this.uMtx,false,new Float32Array(I));
  },

  /* ---- 分辨率 / 宽屏 ---- */
  setOutputSize(w,h){
    this.outW=w|0; this.outH=h|0;
    if(this.canvas){this.canvas.width=this.outW;this.canvas.height=this.outH;}
    if(this.wasm&&this.wasm.exports._gx2gl_set_output_size)
      this.wasm.exports._gx2gl_set_output_size(this.outW,this.outH);
    this.setViewport(0,0,this.efbW,this.efbH);
  },
  setEfbSize(w,h){
    this.efbW=w|0; this.efbH=h|0;
    if(this.wasm&&this.wasm.exports._gx2gl_set_efb_size)
      this.wasm.exports._gx2gl_set_efb_size(this.efbW,this.efbH);
  },
  /* 按 drawing buffer 的宽高比设置 CSS 显示尺寸（letterbox 适配容器）。
     只改 canvas.width/height 的话，若 CSS 用 width:100% 而容器比例不同，
     画面会被 CSS 拉伸——宽屏修正就白做了。改分辨率档位后要调一次 */
  fitDisplay(){
    const c=this.canvas; if(!c)return;
    const box=(c.parentNode&&c.parentNode.getBoundingClientRect)||null;
    const availW=box?c.parentNode.clientWidth:this.outW;
    const availH=box?c.parentNode.clientHeight:this.outH;
    if(!availW||!availH)return;
    const s=Math.min(availW/this.outW, availH/this.outH);
    c.style.width=Math.round(this.outW*s)+'px';
    c.style.height=Math.round(this.outH*s)+'px';
    /* 不要用 object-fit 缩放：canvas 内容是 drawing buffer，
       CSS 缩放会覆盖掉 GX 层做的宽高比修正 */
    c.style.objectFit='fill';
  },
  setAspectMode(mode){
    this.aspect=mode|0;
    if(this.wasm&&this.wasm.exports._gx2gl_set_aspect_mode)
      this.wasm.exports._gx2gl_set_aspect_mode(this.aspect);
  },
  /* 2D/UI 是否按 4:3 居中（两侧留边）。
     3D 已经是 Hor+ 宽屏，可以铺满；UI 若跟着铺满就会被横向拉伸变形 */
  uiCentered(){
    return this.projType===0 && this.aspect!==2;
  },
  /* EFB 坐标 -> 画布像素（WebGL 视口原点在左下，需翻 Y）。
     居中模式下改用统一缩放 s=min(sx,sy)，并把内容区平移到画布中间 */
  _map(x,y,w,h){
    let sx=this.outW/this.efbW, sy=this.outH/this.efbH;
    let ox=0, oy=0;
    if(this.uiCentered()){
      const s=Math.min(sx,sy);
      ox=(this.outW-this.efbW*s)/2;
      oy=(this.outH-this.efbH*s)/2;
      sx=s; sy=s;
    }
    return {
      vx:Math.round(ox+x*sx),
      vy:Math.round(oy+(this.efbH-y-h)*sy),
      vw:Math.max(1,Math.round(w*sx)),
      vh:Math.max(1,Math.round(h*sy)),
    };
  },
  setViewport(x,y,w,h){
    const gl=this.gl; if(!gl)return;
    const r=this._map(x,y,w,h);
    gl.viewport(r.vx,r.vy,r.vw,r.vh);
    gl.enable(gl.SCISSOR_TEST);
    gl.scissor(r.vx,r.vy,r.vw,r.vh);
  },
  setScissor(x,y,w,h){
    const gl=this.gl; if(!gl)return;
    const r=this._map(x,y,w,h);
    gl.enable(gl.SCISSOR_TEST);
    gl.scissor(r.vx,r.vy,r.vw,r.vh);
  },

  /* 把 GX 混合模式映射到 WebGL。查表，不建临时对象 */
  blend(type,src,dst){
    const gl=this.gl;
    if(type===0){gl.disable(gl.BLEND);return;}
    gl.enable(gl.BLEND);
    gl.blendFunc(this._blendSrc[src]??gl.SRC_ALPHA,
                 this._blendDst[dst]??gl.ONE_MINUS_SRC_ALPHA);
  },
  ztest(en,fn,upd){
    const gl=this.gl;
    if(!en){gl.disable(gl.DEPTH_TEST);gl.depthMask(true);return;}
    gl.enable(gl.DEPTH_TEST);
    gl.depthFunc(this._depthFn[fn]??gl.LEQUAL);
    gl.depthMask(!!upd);
  },
  cull(mode){
    const gl=this.gl;
    if(mode===0){gl.disable(gl.CULL_FACE);return;}
    gl.enable(gl.CULL_FACE);
    gl.cullFace(mode===1?gl.FRONT:mode===2?gl.BACK:gl.FRONT_AND_BACK);
  },

  /* 主入口：处理 C 侧命令流
     流格式 [op:u16][len:u16][payload...]，未知 op 一律按 len 整体跳过，
     绝不能只跳 1 字节——那会让后面的解析全部错位 */
  process(wasm){
    const exports=wasm.exports;
    const streamLen=exports._gx2gl_stream_len();
    if(!streamLen)return;
    const streamPtr=exports._gx2gl_stream_data();
    /* main.js 传的是 TWW 对象（字段名 heapU8），WASM 模块本身是 HEAPU8，两者都要认 */
    const memory=wasm.HEAPU8||wasm.heapU8;
    if(!memory)return;

    /* 两个视图都以流起点为原点，所以 payload 偏移可以直接用，
       不必再手写 streamPtr + offset：
         bytes —— 按字节读标量（u8 最快）
         view  —— 按类型读（f32/u32）
       DataView 无对齐要求，能直接建在流起点上；Float32Array 不行
       （WASM 堆里的 payload 起点不保证 4 字节对齐）。
       整个 process 只建一个 DataView —— 原来每个顶点建一个，
       一帧几千顶点就是几千次对象分配 */
    const bytes=memory.subarray(streamPtr, streamPtr+streamLen);
    const view=new DataView(memory.buffer, streamPtr, streamLen);

    const gl=this.gl;
    gl.useProgram(this.prog);
    gl.disable(gl.SCISSOR_TEST);

    let offset=0;
    while(offset+CMD_HEADER<=streamLen){
      const op=bytes[offset]|(bytes[offset+1]<<8);
      const payloadLen=bytes[offset+2]|(bytes[offset+3]<<8);
      const payload=offset+CMD_HEADER;

      /* 截断防护 1：payload 不能超出流尾。
         最后一条命令的 len 字段若被写坏，这里不拦就会越界读。 */
      if(payload+payloadLen>streamLen)break;

      /* 截断防护 2：payload 短于该 op 所需的最小长度就跳过，
         避免读到下一条命令的字节造成静默错乱 */
      const minLen=OP_MIN_LEN[op];
      if(minLen!==undefined&&payloadLen<minLen){
        offset=payload+payloadLen;
        continue;
      }

      switch(op){
        case OP.BEGIN:
          /* 不清 pending：Begin 前设置的颜色要对整个图元生效 */
          this.prim=bytes[payload];
          this.vertexCount=0;
          this.uvSetForVertex=false;
          this.colorSetForVertex=false;
          break;

        case OP.END:
          this.flush(this.prim);
          break;

        case OP.VERTEX_F:{
          /* 先把 pending 落到 current，再开新顶点 */
          if(this.pendingUV){this.currentUV=this.pendingUV;this.pendingUV=null;}
          if(this.pendingColor){this.currentColor=this.pendingColor;this.pendingColor=null;}
          const color=this.currentColor, uv=this.currentUV;
          this._pushVertex(view.getFloat32(payload,true),
                      view.getFloat32(payload+4,true),
                      view.getFloat32(payload+8,true),
                      uv[0],uv[1],color[0],color[1],color[2],color[3]);
          this.uvSetForVertex=false;
          this.colorSetForVertex=false;
          break;}

        case OP.COLOR:{
          const r=bytes[payload]/255, g=bytes[payload+1]/255;
          const b=bytes[payload+2]/255, a=bytes[payload+3]/255;
          const color=this.currentColor;
          color[0]=r; color[1]=g; color[2]=b; color[3]=a;
          if(this.vertexCount===0){
            this.pendingColor=color;            /* 还没有顶点 -> 给第一个 */
          }else if(!this.colorSetForVertex){
            this.colorSetForVertex=true;        /* 属于当前顶点，回填 */
            const base=(this.vertexCount-1)*VERTEX_FLOATS+COL_OFFSET;
            const buf=this.vertexBuffer;
            buf[base]=r; buf[base+1]=g; buf[base+2]=b; buf[base+3]=a;
          }else{
            this.pendingColor=color;            /* 属于下一个顶点 */
          }
          break;}

        case OP.TEX_COORD:{
          const s=view.getFloat32(payload,true);
          const t=view.getFloat32(payload+4,true);
          const uv=this.currentUV;
          uv[0]=s; uv[1]=t;
          if(this.vertexCount===0){
            this.pendingUV=uv;
          }else if(!this.uvSetForVertex){
            this.uvSetForVertex=true;
            const base=(this.vertexCount-1)*VERTEX_FLOATS+UV_OFFSET;
            const buf=this.vertexBuffer;
            buf[base]=s; buf[base+1]=t;
          }else{
            this.pendingUV=uv;
          }
          break;}

        case OP.MATRIX:
          this.setMtx(this.uMtx, this.readMtx(view, payload));
          break;

        case OP.CULL_MODE:
          this.cull(bytes[payload]);
          break;

        case OP.BLEND_MODE:
          this.blend(bytes[payload],bytes[payload+1],bytes[payload+2],bytes[payload+3]);
          break;

        case OP.Z_MODE:
          this.ztest(bytes[payload],bytes[payload+1],bytes[payload+2]);
          break;

        case OP.SWAP:
          offset=streamLen;                     /* 帧完成，跳出循环 */
          continue;

        case OP.PROJECTION:
          /* C 侧已按宽高比修正，payload = type + 16 个 float */
          this.projType=bytes[payload];
          this.setMtx(this.uProj, this.readMtx(view, payload+1));
          break;

        case OP.VIEWPORT:
          this.setViewport(view.getFloat32(payload,true),
                           view.getFloat32(payload+4,true),
                           view.getFloat32(payload+8,true),
                           view.getFloat32(payload+12,true));
          break;

        case OP.SCISSOR:
          this.setScissor(view.getUint32(payload,true),
                          view.getUint32(payload+4,true),
                          view.getUint32(payload+8,true),
                          view.getUint32(payload+12,true));
          break;

        case OP.NORMAL:
          break;                                /* 简化管线不做光照 */

        default:
          break;                                /* 未实现：按 payloadLen 跳过 */
      }
      offset=payload+payloadLen;
    }
    exports._gx2gl_stream_reset();
  },

  /* 顶点缓冲写指针。容量不够时翻倍——游戏里最大的图元也就几百顶点，
     翻一次基本就够用一辈子 */
  _ensureCapacity(cap){
    if(this.vertexBuffer.length>=cap)return;
    let n=this.vertexBuffer.length*2;
    while(n<cap)n*=2;
    const grown=new Float32Array(n);
    grown.set(this.vertexBuffer.subarray(0,this.vertexCount*VERTEX_FLOATS));
    this.vertexBuffer=grown;
  },
  _pushVertex(x,y,z,u,v,r,g,b,a){
    const need=(this.vertexCount+1)*VERTEX_FLOATS;
    if(need>this.vertexBuffer.length)this._ensureCapacity(need);
    const buf=this.vertexBuffer, base=this.vertexCount*VERTEX_FLOATS;
    buf[base]=x;   buf[base+1]=y; buf[base+2]=z;
    buf[base+3]=u; buf[base+4]=v;
    buf[base+5]=r; buf[base+6]=g; buf[base+7]=b; buf[base+8]=a;
    this.vertexCount++;
  },

  /* 逐字段读 16 个 float。不能直接 new Float32Array(buffer, off, 16)：
     WASM 内存里的 payload 起点不保证 4 字节对齐，未对齐会抛 RangeError。
     复用调用方传入的 DataView，避免每次建对象 */
  readMtx(dv,off){
    const m=this.matrixScratch||(this.matrixScratch=new Float32Array(16));
    for(let k=0;k<16;k++) m[k]=dv.getFloat32(off+k*4,true);
    return m;
  },
  setMtx(loc,m){ this.gl.uniformMatrix4fv(loc,false,m); },

  /* 常量表，init 时按 gl 上下文建好。
     原来 blend()/ztest()/flush() 每次调用都新建对象字面量，
     一帧几十次状态切换 = 几十次分配 */
  _primMap:null,
  _blendSrc:null, _blendDst:null, _depthFn:null,
  quadIndices:[0,1,2,0,2,3],

  flush(prim){
    const verts=this.vertexCount;
    this.vertexCount=0;
    if(verts<1)return;
    const gl=this.gl;
    let data=this.vertexBuffer, count=verts;
    /* WebGL 没有 QUADS，按 (0,1,2)(0,2,3) 展开成 6 个顶点。
       展开结果写进复用缓冲，同样不分配新数组 */
    if(prim===GX_QUADS){
      const quads=(verts/4)|0;
      if(quads<1)return;
      const need=quads*6*VERTEX_FLOATS;
      if(!this.quadBuffer||this.quadBuffer.length<need)this.quadBuffer=new Float32Array(need);
      const src=this.vertexBuffer, out=this.quadBuffer;
      const idx=this.quadIndices;   /* (0,1,2)(0,2,3)，常量表别在循环里建 */
      let w=0;
      for(let q=0;q<quads;q++){
        const quadBase=q*4*VERTEX_FLOATS;
        for(let k=0;k<6;k++){
          const srcBase=quadBase+idx[k]*VERTEX_FLOATS;
          for(let j=0;j<VERTEX_FLOATS;j++) out[w++]=src[srcBase+j];
        }
      }
      data=out; count=quads*6;
    }
    gl.bindBuffer(gl.ARRAY_BUFFER,this.vbo);
    gl.bufferData(gl.ARRAY_BUFFER, data.subarray(0,count*VERTEX_FLOATS), gl.STREAM_DRAW);
    gl.enableVertexAttribArray(this.aPos);
    gl.vertexAttribPointer(this.aPos,3,gl.FLOAT,false,VERTEX_STRIDE_BYTES,0);
    gl.enableVertexAttribArray(this.aUV);
    gl.vertexAttribPointer(this.aUV,2,gl.FLOAT,false,VERTEX_STRIDE_BYTES,UV_OFFSET*4);
    gl.enableVertexAttribArray(this.aCol);
    gl.vertexAttribPointer(this.aCol,4,gl.FLOAT,false,VERTEX_STRIDE_BYTES,COL_OFFSET*4);
    gl.uniform1f(this.uUseTex,0);
    const mode=this._primMap[prim]??gl.TRIANGLES;
    gl.drawArrays(mode,0,count);
  }
};
