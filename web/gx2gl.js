/* GX 命令流 -> WebGL 翻译器
 * 接收 gx2gl.cpp 记录的命令流，逐帧批量下发 WebGL
 * op 编号与 gx/gx2gl.h 的 enum GX2GLOp 一一对应，改一处必须同步另一处 */
'use strict';
const GX2GL={
  gl:null, canvas:null, wasm:null, prog:null, vbo:null,
  /* 顶点缓冲改成预分配 Float32Array + 写指针。
     原来是 JS 数组 push 9 个数、flush 时再 new Float32Array 拷一遍——
     每帧几千个顶点意味着几千次数组扩容和一次全量拷贝，GC 压力全在这。
     现在只在容量不够时才扩容，flush 直接把 subarray 交给 GL，零拷贝 */
  _vbuf:new Float32Array(9*512), _vn:0,
  _qbuf:null,                 /* QUADS 展开用的复用缓冲 */
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
  curUV:[0,0], curCol:[1,1,1,1],
  pendUV:null, pendCol:null, sinceUV:false, sinceCol:false,

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
    const E=wasm.exports;
    const len=E._gx2gl_stream_len();
    if(!len)return;
    const ptr=E._gx2gl_stream_data();
    /* main.js 传的是 TWW 对象（字段名 heapU8），WASM 模块本身是 HEAPU8，两者都要认 */
    const mem=wasm.HEAPU8||wasm.heapU8;
    if(!mem)return;
    const view=mem.subarray(ptr,ptr+len);
    /* 整个 process 只建一个 DataView。原来每个顶点建一个，
       一帧几千顶点就是几千次对象分配 */
    const dv=new DataView(mem.buffer);
    let i=0;
    const gl=this.gl;
    gl.useProgram(this.prog);
    gl.disable(gl.SCISSOR_TEST);
    while(i+4<=len){
      const op=view[i]|(view[i+1]<<8);
      const plen=view[i+2]|(view[i+3]<<8);
      const p=i+4;
      switch(op){
        case 1: /* Begin: prim, vtxfmt, nverts。不清 pending：
                   Begin 前设的颜色要对整个图元生效 */
          this.prim=view[p];
          this._vn=0;                    /* 只重置写指针，不重新分配缓冲 */
          this.sinceUV=false; this.sinceCol=false;
          break;
        case 2: /* End: 提交 */
          this.flush(this.prim);
          break;
        case 3:{ /* VertexF：先把 pending 落到 cur，再开新顶点 */
          const o=ptr+p;
          if(this.pendUV){this.curUV=this.pendUV;this.pendUV=null;}
          if(this.pendCol){this.curCol=this.pendCol;this.pendCol=null;}
          const c=this.curCol,u=this.curUV;
          this._pushV(dv.getFloat32(o,true),dv.getFloat32(o+4,true),dv.getFloat32(o+8,true),
                      u[0],u[1],c[0],c[1],c[2],c[3]);
          this.sinceUV=false; this.sinceCol=false;
          break;}
        case 5:{ /* Color：r,g,b,a -> 顶点布局 col 段 (5,6,7,8) */
          if(this._vn===0){
            this.curCol[0]=view[p]/255;this.curCol[1]=view[p+1]/255;
            this.curCol[2]=view[p+2]/255;this.curCol[3]=view[p+3]/255;
            this.pendCol=this.curCol;             /* 还没有顶点 -> 给第一个 */
          }else if(!this.sinceCol){
            this.curCol[0]=view[p]/255;this.curCol[1]=view[p+1]/255;
            this.curCol[2]=view[p+2]/255;this.curCol[3]=view[p+3]/255;
            this.sinceCol=true;                   /* 属于当前顶点 */
            const L=(this._vn-1)*9,c=this.curCol;
            this._vbuf[L+5]=c[0];this._vbuf[L+6]=c[1];
            this._vbuf[L+7]=c[2];this._vbuf[L+8]=c[3];
          }else{
            this.curCol[0]=view[p]/255;this.curCol[1]=view[p+1]/255;
            this.curCol[2]=view[p+2]/255;this.curCol[3]=view[p+3]/255;
            this.pendCol=this.curCol;             /* 属于下一个顶点 */
          }
          break;}
        case 6:{ /* TexCoord：2 个 float -> 顶点布局 uv 段 (3,4) */
          const o=ptr+p;
          const s=dv.getFloat32(o,true),t=dv.getFloat32(o+4,true);
          if(this._vn===0){
            this.curUV[0]=s;this.curUV[1]=t;
            this.pendUV=this.curUV;
          }else if(!this.sinceUV){
            this.curUV[0]=s;this.curUV[1]=t;
            this.sinceUV=true;
            const L=(this._vn-1)*9,u=this.curUV;
            this._vbuf[L+3]=u[0];this._vbuf[L+4]=u[1];
          }else{
            this.curUV[0]=s;this.curUV[1]=t;
            this.pendUV=this.curUV;
          }
          break;}
        case 7: /* Matrix：position mtx，逐字段读避免对齐异常 */
          this.setMtx(this.uMtx,this.readMtx(dv,ptr+p));
          break;
        case 15: /* CullMode */
          this.cull(view[p]);break;
        case 16: /* BlendMode */
          this.blend(view[p],view[p+1],view[p+2],view[p+3]);break;
        case 17: /* ZMode */
          this.ztest(view[p],view[p+1],view[p+2]);break;
        case 12: /* Swap: 帧完成 */
          i=len;continue;
        case 30: /* Projection：C 侧已按宽高比修正，payload = type + 16 float */
          this.projType=view[p];
          this.setMtx(this.uProj,this.readMtx(dv,ptr+p+1));
          break;
        case 31:{ /* Viewport（EFB 坐标） */
          const o=ptr+p;
          this.setViewport(dv.getFloat32(o,true),dv.getFloat32(o+4,true),
                           dv.getFloat32(o+8,true),dv.getFloat32(o+12,true));
          break;}
        case 32:{ /* Scissor（EFB 坐标） */
          const o=ptr+p;
          this.setScissor(dv.getUint32(o,true),dv.getUint32(o+4,true),
                          dv.getUint32(o+8,true),dv.getUint32(o+12,true));
          break;}
        case 33: /* Normal：简化管线不做光照 */
          break;
        default:
          break; /* 未实现：按 plen 跳过即可 */
      }
      i=p+plen;
    }
    E._gx2gl_stream_reset();
  },

  /* 顶点缓冲写指针。容量不够时翻倍——游戏里最大的图元也就几百顶点，
     翻一次基本就够用一辈子 */
  _ensure(cap){
    if(this._vbuf.length>=cap)return;
    let n=this._vbuf.length*2;
    while(n<cap)n*=2;
    const b=new Float32Array(n);
    b.set(this._vbuf.subarray(0,this._vn*9));
    this._vbuf=b;
  },
  _pushV(x,y,z,u0,u1,c0,c1,c2,c3){
    const need=(this._vn+1)*9;
    if(need>this._vbuf.length)this._ensure(need);
    const b=this._vbuf,o=this._vn*9;
    b[o]=x;b[o+1]=y;b[o+2]=z;b[o+3]=u0;b[o+4]=u1;
    b[o+5]=c0;b[o+6]=c1;b[o+7]=c2;b[o+8]=c3;
    this._vn++;
  },

  /* 逐字段读 16 个 float。不能直接 new Float32Array(buffer, off, 16)：
     WASM 内存里的 payload 起点不保证 4 字节对齐，未对齐会抛 RangeError。
     复用调用方传入的 DataView，避免每次建对象 */
  readMtx(dv,off){
    const m=this._m16||(this._m16=new Float32Array(16));
    for(let k=0;k<16;k++) m[k]=dv.getFloat32(off+k*4,true);
    return m;
  },
  setMtx(loc,m){ this.gl.uniformMatrix4fv(loc,false,m); },

  /* 常量表，init 时按 gl 上下文建好。
     原来 blend()/ztest()/flush() 每次调用都新建对象字面量，
     一帧几十次状态切换 = 几十次分配 */
  _primMap:null,
  _blendSrc:null, _blendDst:null, _depthFn:null,
  _quadIdx:[0,1,2,0,2,3],

  flush(prim){
    const n=this._vn;
    this._vn=0;
    if(n<1)return;
    const gl=this.gl;
    let v=this._vbuf, count=n;
    /* WebGL 没有 QUADS，按 (0,1,2)(0,2,3) 展开成 6 个顶点。
       展开结果写进复用缓冲，同样不分配新数组 */
    if(prim===0x80){
      const quads=(n/4)|0;
      if(quads<1)return;
      const need=quads*6*9;
      if(!this._qbuf||this._qbuf.length<need)this._qbuf=new Float32Array(need);
      const src=this._vbuf,out=this._qbuf;
      const idx=this._quadIdx;   /* (0,1,2)(0,2,3)，常量表别在循环里建 */
      let w=0;
      for(let q=0;q<quads;q++){
        const b=q*4*9;
        for(let k=0;k<6;k++){
          const s=b+idx[k]*9;
          for(let j=0;j<9;j++) out[w++]=src[s+j];
        }
      }
      v=out; count=quads*6;
    }
    gl.bindBuffer(gl.ARRAY_BUFFER,this.vbo);
    gl.bufferData(gl.ARRAY_BUFFER, v.subarray(0,count*9), gl.STREAM_DRAW);
    const stride=36; /* pos3 + uv2 + col4 */
    gl.enableVertexAttribArray(this.aPos);
    gl.vertexAttribPointer(this.aPos,3,gl.FLOAT,false,stride,0);
    gl.enableVertexAttribArray(this.aUV);
    gl.vertexAttribPointer(this.aUV,2,gl.FLOAT,false,stride,12);
    gl.enableVertexAttribArray(this.aCol);
    gl.vertexAttribPointer(this.aCol,4,gl.FLOAT,false,stride,20);
    gl.uniform1f(this.uUseTex,0);
    const mode=this._primMap[prim]??gl.TRIANGLES;
    gl.drawArrays(mode,0,count);
  }
};
