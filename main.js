'use strict';
const $=id=>document.getElementById(id);
const log=m=>{const l=$('log');if(l){l.textContent+=m+'\n';l.scrollTop=l.scrollHeight;}};

window.TWW={memBase:0x80000000,heapU8:null,exports:null,gl:null,
  landscape:false,flipX:false,skipReq:false,lastStartTap:0};

/* ---------- 核心 ---------- */
async function bootCore(){
  if(typeof TWWCore==='undefined'){log('核心未加载（演示模式）');return;}
  try{
    const M=await TWWCore();
    TWW.exports=M;
    TWW.heapU8=new Uint8Array(M.HEAPU8.buffer);
    M._tww_init();
    const cv=$('cv');
    const gl=cv.getContext('webgl',{antialias:false,alpha:false});
    /* 三个参数都要传：canvas 用于同步尺寸，TWW 用于回写 C 侧状态 */
    if(gl&&typeof GX2GL!=='undefined'){
      GX2GL.init(gl,cv,TWW);
      GX2GL.setEfbSize(640,480);
      const r=Display.RES.find(x=>x.id===Display.res)||Display.RES[0];
      GX2GL.setOutputSize(r.w,r.h);
      GX2GL.setAspectMode(Display.ASPECT_MAP[Display.aspect]??0);
      GX2GL.fitDisplay();
      TWW.gl=gl;
    }
    log('核心就绪 · GX→WebGL 已挂载');
    startRender();
  }catch(e){log('核心加载失败: '+e.message);}
}

/* ---------- 镜像 ---------- */
async function loadROM(file){
  log('载入 '+file.name);
  const buf=await file.arrayBuffer();
  const gid=String.fromCharCode(...new Uint8Array(buf,0x1C,4));
  if(!gid.startsWith('GZ'))log('⚠️ 非风之律动镜像: '+gid);
  await idbSave('rom',buf);
  if(TWW.exports&&TWW.exports._iso_load){
    const M=TWW.exports;
    const ptr=M._malloc(buf.byteLength);
    new Uint8Array(M.HEAPU8.buffer,ptr,buf.byteLength).set(new Uint8Array(buf));
    M._iso_load(ptr,buf.byteLength);
    M._iso_mount();
    log('ISO 挂载完成');
  }
  $('skip-hint').classList.remove('hidden');
  setTimeout(()=>$('skip-hint').classList.add('hidden'),5000);
}
function idbSave(k,v){
  return new Promise((res,rej)=>{
    const r=indexedDB.open('tww',1);
    r.onupgradeneeded=()=>r.result.createObjectStore('kv');
    r.onsuccess=()=>{const t=r.result.transaction('kv','readwrite');
      t.objectStore('kv').put(v,k);t.oncomplete=res;t.onerror=rej;};
    r.onerror=rej;});
}

/* ---------- 渲染 ---------- */
const cv=$('cv');let perf=false,t0=performance.now(),frames=0,lastFps=t0;
function resize(){
  /* drawing buffer 尺寸由 Display.setRes 设定，这里只做两件事：
     同步一次（防止被别处改过）并按容器重算 CSS 显示尺寸。
     不要直接 gl.viewport —— 那会覆盖 GX2GL 的 UI 居中映射 */
  const r=Display.RES.find(x=>x.id===Display.res)||Display.RES[0];
  if(typeof GX2GL!=='undefined'&&GX2GL.gl){
    if(GX2GL.outW!==r.w||GX2GL.outH!==r.h)GX2GL.setOutputSize(r.w,r.h);
    GX2GL.fitDisplay();
  }else if(cv.width!==r.w||cv.height!==r.h){cv.width=r.w;cv.height=r.h;}
}
addEventListener('resize',resize);
let _prevT=performance.now();
function draw(now){
  /* 帧率节流：渲染可按 30/60/120/144/不限 */
  if(!Display.shouldRender(now)){requestAnimationFrame(draw);return;}
  const dt=Math.min(now-_prevT,100);_prevT=now;
  const gl=TWW.gl;
  if(gl&&TWW.exports&&TWW.exports._tww_frame){
    /* 物理引擎固定 60Hz：渲染帧率再高，逻辑步数也按 60Hz 补足，
       保证移动速度/重力/摆荡等物理量与 GC 原速一致 */
    const steps=Display.logicSteps(dt);
    for(let i=0;i<steps;i++){
      /* 只跑逻辑步进，物理固定 60Hz；渲染帧率再高也不会加速 */
      if(TWW.exports._tww_step)TWW.exports._tww_step();
      else TWW.exports._tww_frame();
    }
    /* 仅呈现：把最新状态画出来（不推进物理） */
    if(TWW.exports._tww_present)TWW.exports._tww_present();
    if(typeof GX2GL!=='undefined')GX2GL.process(TWW);
    if(TWW.flipX){
      /* 视角反转：用 WebGL canvas 翻转 */
      const g2d=cv.getContext('2d');
      /* 简化：canvas CSS transform */
      cv.style.transform='scaleX(-1)';
    } else cv.style.transform='';
  } else {
    if(!draw.ctx)draw.ctx=cv.getContext('2d');
    const g=draw.ctx;if(!g){requestAnimationFrame(draw);return;}
    const W=cv.clientWidth,H=cv.clientHeight,t=(now-t0)/1000;
    if(TWW.flipX){g.save();g.translate(W,0);g.scale(-1,1);}
    const sky=g.createLinearGradient(0,0,0,H);
    sky.addColorStop(0,'#071426');sky.addColorStop(.45,'#14507e');
    sky.addColorStop(.62,'#2b86b5');sky.addColorStop(1,'#48b0cf');
    g.fillStyle=sky;g.fillRect(0,0,W,H);
    const hy=H*.58;
    for(let k=0;k<3;k++){
      g.beginPath();const amp=6-k*1.6,spd=1.4+k*.5;
      g.moveTo(0,hy+k*8);
      for(let x=0;x<=W;x+=4){
        const y=hy+k*8+Math.sin(x*.01+k*.004+t*spd)*amp+Math.sin(x*.027+t*spd*1.9)*amp*.45;
        g.lineTo(x,y);}
      g.lineTo(W,H);g.lineTo(0,H);g.closePath();
      g.fillStyle=`rgba(${60-k*14},${150-k*30},${190-k*32},${.5-k*.13})`;g.fill();}
    if(TWW.flipX)g.restore();
  }
  frames++;
  if(now-lastFps>500){$('fps-tag').textContent=Math.round(frames*1000/(now-lastFps))+' FPS';
    frames=0;lastFps=now;}
  requestAnimationFrame(draw);
}
function startRender(){resize();requestAnimationFrame(draw);}

/* ---------- 跳过过场动画（连按 START） ---------- */
function checkSkip(){
  const now=Date.now();
  if(now-TWW.lastStartTap<600){TWW.skipReq=true;TWW.lastStartTap=0;
    if(TWW.exports&&TWW.exports._tww_skip)TWW.exports._tww_skip();
    log('跳过过场动画');
    /* 发送 SKIP 信号给核心 */
    if(TWW.heapU8&&TWW.exports){
      /* 写 SKIP 标志到约定地址 */
    }
  } else TWW.lastStartTap=now;
}
/* START 按键 hook 到 input.js */
const origPress=Input.press.bind(Input);
Input.press=function(n){
  origPress(n);
  if(n==='START')checkSkip();
};

/* ---------- 视角反转 ---------- */
function flipView(){
  TWW.flipX=!TWW.flipX;
  /* 风之律动指挥棒（Wind Waker 指挥棒）不跟随翻转 —— 通过 CSS 类排除 */
  document.body.classList.toggle('flipped',TWW.flipX);
  log('视角'+(TWW.flipX?'已反转':'恢复正常'));
}

/* ---------- 横竖屏 ---------- */
function setOrient(mode){
  if(mode==='auto')mode=innerWidth>innerHeight?'landscape':'portrait';
  const app=$('app');
  app.classList.remove('portrait','landscape');
  app.classList.add(mode);
  TWW.landscape=(mode==='landscape');
  localStorage.setItem('tww_orient',mode);resize();
}
addEventListener('resize',()=>setOrient(localStorage.getItem('tww_orient')||'auto'));
document.addEventListener('gesturestart',e=>e.preventDefault());
document.addEventListener('touchmove',e=>{if(e.touches.length>1)e.preventDefault();},{passive:false});

/* ---------- 菜单 ---------- */
$('btn-menu').onclick=()=>$('menu').classList.toggle('hidden');
$('btn-full').onclick=()=>document.fullscreenElement?document.exitFullscreen():document.documentElement.requestFullscreen();
$('btn-skip').onclick=()=>{TWW.skipReq=true;log('跳过过场动画');};
$('btn-flip').onclick=flipView;
$('btn-wide').onclick=()=>Display.setAspect(Display.aspect==='16:9'?'4:3':'16:9');
$('m-flip').onclick=flipView;
$('m-orient').onclick=()=>{
  setOrient($('app').classList.contains('portrait')?'landscape':'portrait');};
$('m-load').onclick=()=>$('m-file').click();
$('m-file').onchange=e=>{const f=e.target.files[0];if(f)loadROM(f);};
$('m-reset').onclick=()=>location.reload();
$('m-perf').onchange=e=>{
  perf=e.target.checked;
  if('wakeLock' in navigator)navigator.wakeLock.request('screen').catch(()=>{});
  resize();};
$('cheat-add').onclick=()=>{
  const n=prompt('金手指名称');if(!n)return;
  const c=prompt('代码（每行: 地址 值）\n例: 0426C9B8 00000000');
  if(c)Cheats.add(n,c);};
$('cheat-import').onclick=()=>$('cheat-file').click();
$('cheat-file').onchange=async e=>{
  const f=e.target.files[0];if(!f)return;
  const txt=await f.text();
  txt.split(/\r?\n/).forEach(t=>{
    if(t.startsWith('$')){
      const nm=t.slice(1).trim();
      const idx=Cheats.list.findIndex(c=>c.name===nm);
      /* 找后续代码行 */
      const lines=txt.split(/\r?\n/);
      const pos=lines.indexOf(t);
      const code=[];
      for(let k=pos+1;k<lines.length;k++){
        const m=lines[k].trim().match(/^([0-9A-Fa-f]{8})\s+([0-9A-Fa-f]{1,8})$/);
        if(m)code.push(m[0]);
        else if(lines[k].startsWith('$'))break;
      }
      if(code.length)Cheats.add(nm,code.join('\n'));
    }
  });};
$('gci-exp').onclick=()=>GCI.export(0);
$('gci-imp').onclick=()=>$('gci-file').click();
$('gci-file').onchange=e=>{
  const f=e.target.files[0];if(!f)return;
  GCI.import(0,f,sz=>log('存档已导入 ('+sz+'B)'));};
document.querySelectorAll('.slot').forEach(b=>{
  b.onclick=()=>{
    localStorage.setItem('tww_save_'+b.dataset.slot,JSON.stringify({
      time:Date.now(),cheats:Cheats.list.filter(c=>c.on).map(c=>c.name)}));
    log('槽 '+(+b.dataset.slot+1)+' 已保存');};});

/* ---------- 显示按钮绑定 ---------- */
document.addEventListener('click',e=>{
  const t=e.target;
  if(t.dataset&&t.dataset.res)Display.setRes(t.dataset.res);
  if(t.dataset&&t.dataset.aspect)Display.setAspect(t.dataset.aspect);
  if(t.dataset&&t.dataset.fps)Display.setFps(parseInt(t.dataset.fps,10));
  if(t.dataset&&t.dataset.phys)Display.setPhysFps(parseInt(t.dataset.phys,10));
});
const _pf=document.getElementById('phys-fps');
if(_pf){
  _pf.value=Display.physFps;
  document.getElementById('phys-fps-val').textContent=Display.physFps+' Hz';
  _pf.oninput=()=>{
    const v=parseInt(_pf.value,10);
    document.getElementById('phys-fps-val').textContent=v+' Hz';
    Display.setPhysFps(v);
  };
}

/* ---------- 启动 ---------- */
function boot(){
  initInput();Cheats.init();Display.init();
  setOrient(localStorage.getItem('tww_orient')||'auto');
  TextSys.load('messages.json');
  startRender();bootCore();
}
boot();
