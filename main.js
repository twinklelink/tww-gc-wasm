'use strict';
const $=id=>document.getElementById(id);
const log=m=>{const l=$('log');if(l)l.textContent+=m+'\n',l.scrollTop=l.scrollHeight;};

window.TWW={memBase:0x80003100,heapU8:null,exports:null,gl:null,landscape:false};

/* ---------- 启动 WASM 核心 ---------- */
async function bootCore(){
  if(typeof TWWCore==='undefined'){log('核心未找到，使用演示渲染');return;}
  TWWCore().then(M=>{
    TWW.exports=M;
    TWW.heapU8=new Uint8Array(M.HEAPU8.buffer);
    M._tww_init();
    /* GX 中间层接入 WebGL */
    const cv=$('cv');
    const gl=cv.getContext('webgl',{antialias:false,alpha:false});
    if(gl&&typeof GX2GL!=='undefined'){GX2GL.init(gl);TWW.gl=gl;
      log('GX→WebGL 中间层已接入');}
    log('核心就绪（128MB 线性内存）');
    $('m-status');log('可以载入镜像了');
    startRender();
  }).catch(e=>log('核心加载失败: '+e.message));
}

/* ---------- 镜像载入 ---------- */
async function loadROM(file){
  log('载入 '+file.name+' ('+(file.size/1048576).toFixed(0)+'MB)');
  const buf=await file.arrayBuffer();
  const dv=new DataView(buf);
  const gid=String.fromCharCode(...new Uint8Array(buf,0x1C,4));
  log('游戏码: '+gid);
  if(!gid.startsWith('GZ'))log('警告: 这可能不是风之杖镜像');
  const dolOff=dv.getUint32(0x420);
  const fstOff=dv.getUint32(0x424);
  log(`DOL @${dolOff.toString(16)}  FST @${fstOff.toString(16)}`);
  await idbSave('rom',buf);
  /* 把镜像装入 WASM 内存 */
  if(TWW.exports&&TWW.exports._iso_load){
    const M=TWW.exports;
    const ptr=M._malloc(buf.byteLength);
    new Uint8Array(M.HEAPU8.buffer,ptr,buf.byteLength).set(new Uint8Array(buf));
    M._iso_load(ptr,buf.byteLength);
    M._iso_mount();
    log('ISO 已挂载，文件数 '+M._iso_count());
  }
  log('游戏就绪');
}
function idbSave(k,v){
  return new Promise((res,rej)=>{
    const r=indexedDB.open('tww',1);
    r.onupgradeneeded=()=>r.result.createObjectStore('kv');
    r.onsuccess=()=>{const t=r.result.transaction('kv','readwrite');
      t.objectStore('kv').put(v,k);t.oncomplete=res;t.onerror=rej;};
    r.onerror=rej;});
}

/* ---------- 渲染循环 ---------- */
const cv=$('cv');
let ctx=null,perf=false,t0=performance.now(),frames=0,lastFps=t0;
function resize(){
  const dpr=Math.min(devicePixelRatio||1,perf?1:2);
  const w=Math.floor(cv.clientWidth*dpr)||640;
  const h=Math.floor(cv.clientHeight*dpr)||480;
  if(cv.width!==w||cv.height!==h){cv.width=w;cv.height=h;}
}
addEventListener('resize',resize);
function draw(now){
  if(!ctx)ctx=cv.getContext('2d',{alpha:false});
  if(!ctx){requestAnimationFrame(draw);return;}
  const W=cv.clientWidth,H=cv.clientHeight,t=(now-t0)/1000;
  /* 有 GX 层时用 WebGL 渲染；否则画演示海面 */
  if(TWW.gl&&TWW.exports){
    TWW.exports._tww_frame();
    if(typeof GX2GL!=='undefined')GX2GL.process(TWW);
  } else {
    if(!ctx._2d)ctx._2d=true;
    const g=ctx;
    const sky=g.createLinearGradient(0,0,0,H);
    sky.addColorStop(0,'#071426');sky.addColorStop(.45,'#14507e');
    sky.addColorStop(.62,'#2b86b5');sky.addColorStop(1,'#48b0cf');
    g.fillStyle=sky;g.fillRect(0,0,W,H);
    const hy=H*.58;
    for(let k=0;k<3;k++){
      g.beginPath();const amp=6-k*1.6,spd=1.4+k*.5,fr=.01+k*.004;
      g.moveTo(0,hy+k*8);
      for(let x=0;x<=W;x+=4){
        const y=hy+k*8+Math.sin(x*fr+t*spd)*amp+Math.sin(x*fr*2.7+t*spd*1.9)*amp*.45;
        g.lineTo(x,y);}
      g.lineTo(W,H);g.lineTo(0,H);g.closePath();
      g.fillStyle=`rgba(${60-k*14},${150-k*30},${190-k*32},${.5-k*.13})`;g.fill();}
  }
  frames++;
  if(now-lastFps>500){$('fps-tag').textContent=Math.round(frames*1000/(now-lastFps))+' FPS';
    frames=0;lastFps=now;}
  requestAnimationFrame(draw);
}
function startRender(){resize();requestAnimationFrame(draw);}

/* ---------- 横竖屏 ---------- */
function setOrient(mode){
  if(mode==='auto')mode=innerWidth>innerHeight?'landscape':'portrait';
  const app=$('app');
  app.classList.remove('portrait','landscape');
  app.classList.add(mode);
  TWW.landscape=(mode==='landscape');
  /* 禁用捏合缩放 */
  document.documentElement.style.touchAction='none';
  document.body.style.touchAction='none';
  localStorage.setItem('tww_orient',mode);
  resize();
}
$('m-orient').onclick=()=>{
  const cur=$('app').classList.contains('portrait')?'portrait':'landscape';
  setOrient(cur==='portrait'?'landscape':'portrait');};
addEventListener('resize',()=>setOrient(localStorage.getItem('tww_orient')||'auto'));
/* 禁用双手捏放 */
document.addEventListener('gesturestart',e=>e.preventDefault());
document.addEventListener('touchmove',e=>{if(e.touches.length>1)e.preventDefault();},{passive:false});

/* 性能模式 */
$('m-perf').onchange=e=>{
  perf=e.target.checked;
  if('wakeLock' in navigator)navigator.wakeLock.request('screen').catch(()=>{});
  resize();
  log('性能模式: '+(perf?'开':'关'));
};

/* ---------- 菜单 ---------- */
$('btn-menu').onclick=()=>$('menu').classList.toggle('hidden');
$('btn-full').onclick=()=>{
  if(document.fullscreenElement)document.exitFullscreen();
  else document.documentElement.requestFullscreen();};
$('m-load').onclick=()=>$('m-file').click();
$('m-file').onchange=e=>{const f=e.target.files[0];if(f)loadROM(f);};
$('m-reset').onclick=()=>location.reload();
$('start-btn').onclick=()=>{$('splash').classList.add('gone');$('m-file').click();};

/* GCI */
$('gci-exp').onclick=()=>GCI.export(0);
$('gci-imp').onclick=()=>$('gci-file').click();
$('gci-file').onchange=e=>{
  const f=e.target.files[0];if(!f)return;
  GCI.import(0,f,sz=>log('已导入 '+f.name+' ('+sz+'B)'));};
/* 存档槽 */
document.querySelectorAll('.slot').forEach(b=>{
  b.onclick=()=>{
    localStorage.setItem('tww_save_'+b.dataset.slot,JSON.stringify({
      time:Date.now(),cheats:Cheats.list.filter(c=>c.on).map(c=>c.name)}));
    log('存档槽 '+(+b.dataset.slot+1)+' 已保存');};
});

/* ---------- 启动 ---------- */
function boot(){
  initInput();Cheats.init();
  setOrient(localStorage.getItem('tww_orient')||'auto');
  startRender();bootCore();
}
boot();
