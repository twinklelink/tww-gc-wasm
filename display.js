'use strict';
/* 显示设置：分辨率 / 宽屏 / 帧率，含物理引擎帧同步 */
const Display={
  RES:[
    {id:'480p',w:640,h:480,label:'480P (原生)'},
    {id:'720p',w:1280,h:720,label:'720P'},
    {id:'1080p',w:1920,h:1080,label:'1K (1080P)'},
    {id:'1440p',w:2560,h:1440,label:'2K'},
    {id:'2160p',w:3840,h:2160,label:'4K'},
  ],
  res:'480p', aspect:'4:3', fps:60, physFps:60,
  fpsCap:0, _lastT:0, _acc:0,
  /* 逻辑步进频率 = 物理帧率。必须是变化的：
     每步物理量乘 dt=60/physFps，若步频仍固定 60Hz，
     总量就变成 60/physFps 倍 —— 设 30Hz 会跑成 2 倍速 */
  ASPECT_MAP:{'4:3':0,'16:9':1,'fill':2},

  init(){
    const r=localStorage.getItem('tww_res')||'480p';
    const a=localStorage.getItem('tww_aspect')||'4:3';
    const f=parseInt(localStorage.getItem('tww_fps')||'60',10);
    const pf=parseInt(localStorage.getItem('tww_phys_fps')||'60',10);
    this.setRes(r);this.setAspect(a);this.setFps(f);
    this.physFps=pf;this.render();
  },
  setRes(id){
    const r=this.RES.find(x=>x.id===id)||this.RES[0];
    this.res=id;
    const cv=document.getElementById('cv');
    if(cv){
      cv.dataset.rw=r.w;cv.dataset.rh=r.h;
      /* C 侧同步（再转发给 gx2gl_set_output_size）；
         JS 侧同步交给 GX2GL，由它改 canvas 尺寸并按 EFB 比例重设视口。
         不要在这里直接 gl.viewport —— 那会覆盖掉 GX2GL 的 UI 居中映射 */
      if(TWW.exports&&TWW.exports._tww_set_res)
        TWW.exports._tww_set_res(r.w,r.h);
      if(typeof GX2GL!=='undefined'){
        GX2GL.setEfbSize(640,480);      /* 内部逻辑分辨率恒定 */
        GX2GL.setOutputSize(r.w,r.h);
        GX2GL.fitDisplay();
      }
    }
    localStorage.setItem('tww_res',id);
    log('分辨率: '+r.label);
    this.render();
  },
  setAspect(a){
    this.aspect=a;
    const mode=this.ASPECT_MAP[a]??0;
    /* 真宽屏走 GX 投影修正，不再靠 CSS object-fit 拉伸 */
    if(TWW.exports&&TWW.exports._tww_set_aspect)
      TWW.exports._tww_set_aspect(mode);
    if(typeof GX2GL!=='undefined'){
      GX2GL.setAspectMode(mode);
      GX2GL.fitDisplay();
    }
    localStorage.setItem('tww_aspect',a);
    this.render();
  },
  setFps(f){
    /* f 为渲染帧率上限，0=不限；物理帧率单独存在 physFps（30~120） */
    this.fpsCap=f;
    localStorage.setItem('tww_fps',String(f));
    this.render();
  },
  /* 物理引擎帧率（30~120），真正改变游戏底层步长 */
  setPhysFps(f){
    f=Math.max(30,Math.min(120,f));
    this.physFps=f;
    this._acc=0;                 /* 步频变了，累积器要清掉，否则会补跑一串 */
    if(window.TWW&&TWW.exports&&TWW.exports._tww_set_frame_rate)
      TWW.exports._tww_set_frame_rate(f);
    localStorage.setItem('tww_phys_fps',String(f));
    log('物理帧率: '+f+' Hz (步长 x'+(60/f).toFixed(2)+')');
    this.render();
  },
  /* 帧节流：渲染按 fpsCap */
  shouldRender(now){
    if(!this.fpsCap)return true;
    const minD=1000/this.fpsCap;
    if(now-this._lastT>=minD-0.5){this._lastT=now;return true;}
    return false;
  },
  /* 返回本帧需要跑多少次游戏逻辑步进。
     步频 = physFps：每秒跑 physFps 步，每步物理量乘 dt=60/physFps，
     合起来每秒总变化量恒定 = GC 原速。步频若固定 60 就会和 dt 打架 */
  logicSteps(dtMs){
    this._acc+=dtMs;
    const step=1000/(this.physFps||60);
    let n=0;
    while(this._acc>=step&&n<8){this._acc-=step;n++;}
    /* 落后太多就丢弃积压，避免卡顿后疯狂追帧 */
    if(this._acc>step*8)this._acc=0;
    return n;
  },
  render(){
    const el=document.getElementById('disp-info');
    if(el)el.textContent=`${this.res} · ${this.aspect} · 物理${this.physFps}Hz · 渲染${this.fpsCap?this.fpsCap+'fps':'不限'}`;
    document.querySelectorAll('[data-res]').forEach(b=>
      b.classList.toggle('on',b.dataset.res===this.res));
    document.querySelectorAll('[data-aspect]').forEach(b=>
      b.classList.toggle('on',b.dataset.aspect===this.aspect));
    document.querySelectorAll('[data-fps]').forEach(b=>
      b.classList.toggle('on',parseInt(b.dataset.fps,10)===this.fpsCap));
    document.querySelectorAll('[data-phys]').forEach(b=>
      b.classList.toggle('on',parseInt(b.dataset.phys,10)===this.physFps));
  }
};
