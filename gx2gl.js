/* GX 命令流 -> WebGL 翻译器
 * 接收 gx2gl.cpp 记录的命令流，逐帧批量下发 WebGL */
'use strict';
const GX2GL={
  gl:null, prog:null, vbo:null,
  verts:[],        /* 顶点缓存 */
  tevStages:[],    /* TEV 配置 */
  state:{zEnable:0,zFunc:3,zUpd:1,blend:[0,4,5,0],cull:0,numTev:0,numTex:0},

  init(gl){
    this.gl=gl;
    /* 主着色器：带 TEV 抽象（用 uniform 模拟 TEV 常量色/混合） */
    const vs=`attribute vec3 aPos;attribute vec2 aUV;attribute vec4 aCol;
uniform mat4 uMtx;varying vec2 vUV;varying vec4 vCol;
void main(){vUV=aUV;vCol=aCol;gl_Position=uMtx*vec4(aPos,1.0);}`;
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
    this.uTex=gl.getUniformLocation(p,'uTex');
    this.uUseTex=gl.getUniformLocation(p,'uUseTex');
    this.uTevC=gl.getUniformLocation(p,'uTevC');
    this.vbo=gl.createBuffer();
    this.tex={};
  },

  /* 把 GX 混合模式映射到 WebGL */
  blend(type,src,dst){
    const gl=this.gl;
    const S={0:gl.ZERO,1:gl.ONE,2:gl.SRC_COLOR,3:gl.ONE_MINUS_SRC_COLOR,
             4:gl.SRC_ALPHA,5:gl.ONE_MINUS_SRC_ALPHA,6:gl.DST_ALPHA,7:gl.ONE_MINUS_DST_ALPHA};
    const D={0:gl.ZERO,1:gl.ONE,2:gl.DST_COLOR,3:gl.ONE_MINUS_DST_COLOR,
             4:gl.SRC_ALPHA,5:gl.ONE_MINUS_SRC_ALPHA,6:gl.DST_ALPHA,7:gl.ONE_MINUS_DST_ALPHA};
    if(type===0){gl.disable(gl.BLEND);}
    else{gl.enable(gl.BLEND);gl.blendFunc(S[src]??gl.SRC_ALPHA,D[dst]??gl.ONE_MINUS_SRC_ALPHA);}
  },
  ztest(en,fn,upd){
    const gl=this.gl;const F={0:gl.NEVER,1:gl.LESS,2:gl.EQUAL,3:gl.LEQUAL,
      4:gl.GREATER,5:gl.NOTEQUAL,6:gl.GEQUAL,7:gl.ALWAYS};
    if(en){gl.enable(gl.DEPTH_TEST);gl.depthFunc(F[fn]??gl.LEQUAL);gl.depthMask(!!upd);}
    else{gl.disable(gl.DEPTH_TEST);gl.depthMask(true);}
  },
  cull(mode){
    const gl=this.gl;
    if(mode===0){gl.disable(gl.CULL_FACE);return;}
    gl.enable(gl.CULL_FACE);
    gl.cullFace(mode===1?gl.FRONT:mode===2?gl.BACK:gl.FRONT_AND_BACK);
  },

  /* 主入口：处理 C 侧命令流 */
  process(wasm){
    const E=wasm.exports;
    const len=E._gx2gl_stream_len();
    if(!len)return;
    const ptr=E._gx2gl_stream_data();
    const mem=wasm.HEAPU8;
    const view=mem.subarray(ptr,ptr+len);
    let i=0;
    const gl=this.gl;
    gl.useProgram(this.prog);
    while(i<len){
      const op=view[i++];
      switch(op){
        case 1: /* Begin */
          this.prim=view[i];i+=4;
          this.verts=[];
          break;
        case 2: /* End: 提交 */
          this.flush(this.prim);
          break;
        case 3:{ /* VertexF (pos 3f 或 2f) */
          const dv=new DataView(mem.buffer,ptr+i,12);
          this.verts.push(dv.getFloat32(0,true),dv.getFloat32(4,true),dv.getFloat32(8,true),0,0,1,1,1,1);
          i+=12;break;}
        case 5:{ /* TexCoord */
          const dv=new DataView(mem.buffer,ptr+i,8);
          const s=dv.getFloat32(0,true),t=dv.getFloat32(4,true);
          if(this.verts.length>=6){const L=this.verts.length;
            this.verts[L-3]=s;this.verts[L-2]=t;}
          i+=8;break;}
        case 6:{ /* Color */
          const r=view[i]/255,g=view[i+1]/255,b=view[i+2]/255,a=view[i+3]/255;i+=4;
          if(this.verts.length>=9){const L=this.verts.length;
            this.verts[L-1]=r;this.verts[L]=g;this.verts[L+1]=b;this.verts[L+2]=a;}
          break;}
        case 8:{ /* Matrix */
          const f=new Float32Array(mem.buffer,ptr+i,16);
          gl.uniformMatrix4fv(this.uMtx,false,f);i+=64;break;}
        case 15:{ /* BlendMode */
          this.blend(view[i],view[i+1],view[i+2],view[i+3]);i+=4;break;}
        case 16:{ /* ZMode */
          this.ztest(view[i],view[i+1],view[i+2]);i+=3;break;}
        case 17:{ /* Cull */
          this.cull(view[i]);i+=1;break;}
        case 23:{ /* Swap: 帧完成，清流 */
          i=len;break;}
        default:
          i++; /* 未知命令跳过（后续补全） */
      }
    }
    E._gx2gl_stream_reset();
  },

  flush(prim){
    if(this.verts.length<3)return;
    const gl=this.gl;
    gl.bindBuffer(gl.ARRAY_BUFFER,this.vbo);
    gl.bufferData(gl.ARRAY_BUFFER,new Float32Array(this.verts),gl.STREAM_DRAW);
    const stride=36; /* pos3 + uv2 + col4 */
    gl.enableVertexAttribArray(this.aPos);
    gl.vertexAttribPointer(this.aPos,3,gl.FLOAT,false,stride,0);
    gl.enableVertexAttribArray(this.aUV);
    gl.vertexAttribPointer(this.aUV,2,gl.FLOAT,false,stride,12);
    gl.enableVertexAttribArray(this.aCol);
    gl.vertexAttribPointer(this.aCol,4,gl.FLOAT,false,stride,20);
    gl.uniform1f(this.uUseTex,0);
    const P={0x80:gl.TRIANGLES,0x90:gl.TRIANGLE_STRIP,0xA0:gl.TRIANGLE_FAN,
             0xA8:gl.LINES,0xB0:gl.LINE_STRIP,0xB8:gl.POINTS};
    const mode=P[this.prim]??gl.TRIANGLES;
    gl.drawArrays(mode,0,this.verts.length/9);
    this.verts=[];
  }
};
