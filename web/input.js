'use strict';
const GC={A:0x0001,B:0x0002,X:0x0004,Y:0x0008,START:0x1000,Z:0x0010,R:0x0020,L:0x0040,
          UP:0x0008,DOWN:0x0004,LEFT:0x0001,RIGHT:0x0002};
const Input={buttons:0,sx:0,sy:0,cx:0,cy:0,
  press(n){const b=GC[n];if(b)this.buttons|=b;},
  release(n){const b=GC[n];if(b)this.buttons&=~b;},
  stick(dx,dy,right){const r=44;const nx=Math.max(-1,Math.min(1,dx/r)),ny=Math.max(-1,Math.min(1,dy/r));
    if(right){this.cx=nx;this.cy=ny;}else{this.sx=nx;this.sy=-ny;}},
  pack(){const i8=v=>Math.max(-128,Math.min(127,Math.round(v*127)));
    return{buttons:this.buttons,sx:i8(this.sx),sy:i8(this.sy),cx:i8(this.cx),cy:i8(this.cy)};}};

function bindStick(el,right){
  const knob=el.querySelector('.kn');let id=null,ox=0,oy=0;const r=()=>el.clientWidth/2;
  el.addEventListener('pointerdown',e=>{id=e.pointerId;el.setPointerCapture(id);
    const b=el.getBoundingClientRect();ox=b.left+b.width/2;oy=b.top+b.height/2;mv(e);});
  el.addEventListener('pointermove',e=>{if(e.pointerId===id)mv(e);});
  const end=e=>{if(e.pointerId!==id)return;id=null;knob.style.transform='';Input.stick(0,0,right);};
  el.addEventListener('pointerup',end);el.addEventListener('pointercancel',end);
  function mv(e){let dx=e.clientX-ox,dy=e.clientY-oy;const d=Math.hypot(dx,dy),lim=r();
    if(d>lim){dx=dx/d*lim;dy=dy/d*lim;}
    knob.style.transform=`translate(${dx}px,${dy}px)`;Input.stick(dx,dy,right);}
}
function bindUI(){
  document.querySelectorAll('[data-btn]').forEach(b=>{
    const n=b.dataset.btn;
    b.addEventListener('pointerdown',e=>{e.preventDefault();Input.press(n);b.classList.add('on');});
    ['pointerup','pointercancel','pointerleave'].forEach(ev=>
      b.addEventListener(ev,()=>{Input.release(n);b.classList.remove('on');}));});
  document.querySelectorAll('[data-dpad]').forEach(b=>{
    const n=b.dataset.dpad;
    b.addEventListener('pointerdown',e=>{e.preventDefault();Input.press(n);b.classList.add('on');});
    ['pointerup','pointercancel'].forEach(ev=>
      b.addEventListener(ev,()=>{Input.release(n);b.classList.remove('on');}));});
  const s1=document.getElementById('s1'),s2=document.getElementById('s2');
  if(s1)bindStick(s1,false);
  if(s2)bindStick(s2,true);
  const KM={KeyZ:'A',KeyX:'B',KeyA:'X',KeyS:'Y',KeyQ:'L',KeyE:'R',ShiftLeft:'Z',
    Enter:'START',ArrowUp:'UP',ArrowDown:'DOWN',ArrowLeft:'LEFT',ArrowRight:'RIGHT'};
  addEventListener('keydown',e=>{const n=KM[e.code];if(n){e.preventDefault();Input.press(n);}});
  addEventListener('keyup',e=>{const n=KM[e.code];if(n){e.preventDefault();Input.release(n);}});
  const prev=new Map();
  (function poll(){
    (navigator.getGamepads?navigator.getGamepads():[]).forEach(gp=>{
      if(!gp)return;const pv=prev.get(gp.index)||{};
      Input.stick((gp.axes[0]||0)*44,(gp.axes[1]||0)*44,false);
      Input.stick((gp.axes[2]||0)*44,(gp.axes[3]||0)*44,true);
      const M={12:'UP',13:'DOWN',14:'LEFT',15:'RIGHT',0:'A',1:'B',2:'X',3:'Y',4:'L',5:'R',7:'Z',9:'START'};
      for(const[i,n]of Object.entries(M)){const now=!!(gp.buttons[i]&&gp.buttons[i].pressed);
        if(now&&!pv[i])Input.press(n);if(!now&&pv[i])Input.release(n);pv[i]=now;}
      prev.set(gp.index,pv);});
    requestAnimationFrame(poll);})();
}
