'use strict';
/* 金手指：直接 Hook 游戏内存。地址基于 GZLJ01 日版 DOL。 */
const PRESET=[
 {name:'❤️ 无限血量',addr:0x803C51B3,val:0x30,size:1,desc:'HP 锁满'},
 {name:'🔮 无限魔力',addr:0x803C51BB,val:0x30,size:1,desc:'MP 锁满'},
 {name:'⛵ 帆船加速',addr:0x803C4F18,val:0x420F0000,size:4,desc:'航行速度'},
 {name:'🏊 游泳不耗体力',addr:0x803C51BC,val:0x30,size:1,desc:'体力锁满'},
 {name:'⚔️ 无限攻击',addr:0x803C4F2C,val:0x0000FFFF,size:2,desc:'耐久锁满'},
];
const Cheats={
  list:[],_timers:{},
  init(){
    this.list=PRESET.map(c=>({...c,on:false}));
    try{const s=localStorage.getItem('tww_user_cheats');
      if(s)JSON.parse(s).forEach(c=>this.list.push({...c,on:false}));}catch(_){}
    this.render();
  },
  toggle(i){
    const c=this.list[i];if(!c)return;c.on=!c.on;
    if(c.on)this.hook(c);else this.unhook(c);
    this.render();
  },
  /* Hook：定时器持续写内存（游戏逻辑每帧刷新该地址） */
  hook(c){
    if(!window.TWW||!TWW.heapU8)return;
    const mem=TWW.heapU8;
    const base=TWW.memBase||0x80000000;
    const off=(c.addr>>>0)-base;
    if(off<0||off+4>=mem.length)return;
    /* 保存原值 */
    if(!c._orig)c._orig=[];
    if(!c._orig.length){
      for(let k=0;k<c.size;k++)c._orig.push(mem[off+k]);
    }
    /* 立即写一次 */
    this._write(mem,off,c.val,c.size);
    /* 定时器持续写（每帧刷新，防止游戏逻辑覆盖） */
    this._timers[c.name]=setInterval(()=>{
      this._write(mem,off,c.val,c.size);
    },50);
  },
  unhook(c){
    if(this._timers[c.name]){clearInterval(this._timers[c.name]);delete this._timers[c.name];}
    if(c._orig&&c._orig.length&&window.TWW&&TWW.heapU8){
      const mem=TWW.heapU8;
      const off=(c.addr>>>0)-(TWW.memBase||0x80000000);
      for(let k=0;k<c.size;k++)mem[off+k]=c._orig[k];
    }
  },
  _write(mem,off,val,size){
    if(size===4){mem[off]=(val>>>24)&0xFF;mem[off+1]=(val>>>16)&0xFF;
      mem[off+2]=(val>>>8)&0xFF;mem[off+3]=val&0xFF;}
    else if(size===2){mem[off]=(val>>>8)&0xFF;mem[off+1]=val&0xFF;}
    else{mem[off]=val&0xFF;}
  },
  add(name,codeStr){
    const patches=[];
    codeStr.split(/\r?\n/).forEach(t=>{
      const m=t.trim().match(/^([0-9A-Fa-f]{8})\s+([0-9A-Fa-f]{1,8})$/);
      if(m)patches.push({addr:parseInt(m[1],16),val:parseInt(m[2],16),size:4,desc:''});
    });
    if(patches.length){
      this.list.push({name,patches:[{addr:patches[0].addr,val:patches[0].val,size:4,desc:''}],on:false});
      this.render();this.saveUser();}
  },
  saveUser(){
    localStorage.setItem('tww_user_cheats',
      JSON.stringify(this.list.filter(c=>!PRESET.includes(c))));
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
      nm.innerHTML='<b>'+c.name+'</b>'+(c.desc?' <span style="opacity:.5;font-size:11px">'+c.desc+'</span>':'');
      d.append(cb,nm);el.append(d);
    });
  }
};
