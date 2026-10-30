'use strict';
/* 中文文本渲染：Canvas fillText + 系统字体，完全绕过旧字库 */
const TextSys={
  msgs:{},font:'"ReggaeOne","Noto Sans CJK SC","PingFang SC",sans-serif',
  loaded:false,scale:1,color:'#ffffff',lineH:1.45,
  async load(url){
    try{
      const r=await fetch(url||'messages.json');
      this.msgs=await r.json();
      this.loaded=true;
      log('文本库载入: '+Object.keys(this.msgs).length+' 条');
    }catch(e){log('文本库加载失败: '+e.message);}
  },
  get(id){return this.msgs[id]||'';},
  /* 按宽度自动换行，返回行数组 */
  wrap(ctx,text,maxW){
    const lines=[];
    for(const para of String(text).split('\n')){
      if(!para){lines.push('');continue;}
      let line='';
      for(const ch of para){
        const t=line+ch;
        if(ctx.measureText(t).width>maxW&&line){lines.push(line);line=ch;}
        else line=t;
      }
      if(line)lines.push(line);
    }
    return lines;
  },
  /* 在 canvas 上绘制一段对话 */
  draw(ctx,id,x,y,w,opts){
    const o=opts||{};
    const txt=this.get(id);
    if(!txt)return 0;
    const fs=(o.size||22)*this.scale;
    ctx.save();
    ctx.font=`${fs}px ${o.font||this.font}`;
    ctx.textBaseline='top';
    ctx.fillStyle=o.color||this.color;
    const lh=fs*this.lineH;
    const lines=this.wrap(ctx,txt,w);
    lines.forEach((l,i)=>{
      const lx=x, ly=y+i*lh;
      if(o.shadow!==false){
        ctx.fillStyle='rgba(0,0,0,.75)';
        ctx.fillText(l,lx+2,ly+2);
      }
      ctx.fillStyle=o.color||this.color;
      ctx.fillText(l,lx,ly);
    });
    ctx.restore();
    return lines.length*lh;
  },
  /* 绘制到 WebGL 画布上的覆盖层（用于游戏内对话） */
  drawOverlay(canvas,id){
    let oc=document.getElementById('text-overlay');
    if(!oc){
      oc=document.createElement('canvas');
      oc.id='text-overlay';
      oc.style.cssText='position:absolute;inset:0;width:100%;height:100%;pointer-events:none;z-index:6';
      canvas.parentNode.appendChild(oc);
    }
    const dpr=Math.min(devicePixelRatio||1,2);
    const W=canvas.clientWidth,H=canvas.clientHeight;
    if(oc.width!==W*dpr||oc.height!==H*dpr){oc.width=W*dpr;oc.height=H*dpr;}
    const ctx=oc.getContext('2d');
    ctx.setTransform(dpr,0,0,dpr,0,0);
    ctx.clearRect(0,0,W,H);
    /* 底部对话框 */
    const boxH=H*0.26, boxY=H-boxH-H*0.04;
    ctx.fillStyle='rgba(8,20,34,.82)';
    ctx.fillRect(W*0.05,boxY,W*0.9,boxH);
    ctx.strokeStyle='rgba(120,190,255,.5)';ctx.lineWidth=2;
    ctx.strokeRect(W*0.05,boxY,W*0.9,boxH);
    this.scale=(H/480)*1.0;
    this.draw(ctx,id,W*0.08,boxY+16,W*0.84,{size:20});
  }
};
