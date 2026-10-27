/* 金手指：游戏内嵌 Hook
 * 机制：直接改写 WASM 线性内存中的游戏变量
 * 地址基于 GZLJ01 日版 DOL 加载基址 0x80003100 */
'use strict';
/* 预置金手指（GZLJ01 日版 AR 码）
   格式：{name, patches:[{addr,val,mask,size}], desc} */
const PRESET_CHEATS=[
 {name:'无限血量',desc:'HP 锁定满值',patches:[
   {addr:0x803C51B3,val:0x30,mask:0xFF,size:1}]},
 {name:'无限魔力',desc:'魔力条不减',patches:[
   {addr:0x803C51BB,val:0x30,mask:0xFF,size:1}]},
 {name:'帆船加速',desc:'航行速度提升',patches:[
   {addr:0x803C4F18,val:0x420F0000,mask:0xFFFFFFFF,size:4}]},
 {name:'游泳不耗精力',desc:'体力槽不减',patches:[
   {addr:0x803C51BC,val:0x30,mask:0xFF,size:1}]},
 {name:'无限攻击（刀剑不损坏）',desc:'武器耐久锁定',patches:[
   {addr:0x803C4F2C,val:0x0000FFFF,mask:0xFFFF,size:2}]},
];
const Cheats={
  list:[],hooks:[],
  init(){
    this.list=PRESET_CHEATS.map(c=>({...c,on:false}));
    try{const s=localStorage.getItem('tww_cheats_user');
      if(s)JSON.parse(s).forEach(c=>this.list.push({...c,on:false}));}catch(_){}
    this.render();
  },
  add(name,codeStr){
    const patches=[];
    codeStr.split(/\r?\n/).forEach(t=>{
      const m=t.trim().match(/^([0-9A-Fa-f]{8})\s+([0-9A-Fa-f]{1,8})$/);
      if(m)patches.push({addr:parseInt(m[1],16),val:parseInt(m[2],16),
        mask:0xFFFFFFFF,size:4});});
    if(patches.length){this.list.push({name,patches,on:false,desc:'自定义'});
      this.render();this.saveUser();}
  },
  toggle(i){
    const c=this.list[i];if(!c)return;c.on=!c.on;
    if(c.on)this.apply(c);else this.revert(c);
    this.render();
  },
  apply(c){
    if(!window.TWW||!TWW.exports)return;
    const mem=TWW.heapU8;
    if(!mem)return;
    c._backup=c._backup||[];
    c.patches.forEach(p=>{
      const q=(p.addr>>>0)&0x7FFFFFFF;
      const base=TWW.memBase||0;
      const off=q-base;
      if(off<0||off+4>=mem.length)return;
      /* 保存原值 */
      const orig=[];
      for(let k=0;k<p.size;k++)orig.push(mem[off+k]);
      c._backup.push({off,orig,size:p.size});
      /* 写新值 */
      const v=p.val;
      if(p.size===4){
        mem[off]=(v>>>24)&0xFF;mem[off+1]=(v>>>16)&0xFF;
        mem[off+2]=(v>>>8)&0xFF;mem[off+3]=v&0xFF;
      } else if(p.size===2){
        mem[off]=(v>>>8)&0xFF;mem[off+1]=v&0xFF;
      } else if(p.size===1){
        mem[off]=v&0xFF;
      }
    });
    console.log('[cheat] on:',c.name);
  },
  revert(c){
    if(!c._backup||!window.TWW||!TWW.heapU8)return;
    const mem=TWW.heapU8;
    c._backup.forEach(({off,orig,size})=>{
      for(let k=0;k<size;k++)mem[off+k]=orig[k];});
    c._backup=[];
    console.log('[cheat] off:',c.name);
  },
  saveUser(){
    const u=this.list.filter(c=>c.desc==='自定义');
    localStorage.setItem('tww_cheats_user',JSON.stringify(u));
  },
  render(){
    const el=document.getElementById('cheat-list');if(!el)return;
    el.innerHTML='';
    this.list.forEach((c,i)=>{
      const d=document.createElement('div');
      d.className='cheat'+(c.on?' on':'');
      const cb=document.createElement('input');cb.type='checkbox';cb.checked=c.on;
      cb.onchange=()=>this.toggle(i);
      const nm=document.createElement('div');nm.className='nm';
      nm.innerHTML='<b>'+c.name+'</b><br><span style="opacity:.6;font-size:11px">'+(c.desc||'')+'</span>';
      d.append(cb,nm);el.append(d);
    });
  }
};
