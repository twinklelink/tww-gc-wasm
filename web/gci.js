/* GCI 存档：GameCube Memory Card 格式
   GCI 头 0x40 字节 + 数据。风之律动 GCI: gamecode GZLE/GZLJ, 公司 01 */
'use strict';
const GCI={
  /* 从 WASM 卡片内存导出为 .gci 文件 */
  export(slot){
    if(!window.TWW||!TWW.exports)return alert('核心未加载');
    const card=TWW.exports._tww_card_ptr(slot);
    if(!card)return alert('卡片无效');
    const heap=TWW.heapU8();
    const data=heap.slice(card,card+0x8000);
    /* 找风之律动存档（GCI 头已在卡片区开头由游戏写入）*/
    /* 实际做法：直接把卡片前 0x40 头 + 数据打包 */
    const gci=new Uint8Array(0x40+data.length);
    /* 头（Dolphin 兼容）: */
    const dv=new DataView(gci.buffer);
    gci[0]=0x47;gci[1]=0x5A;gci[2]=0x4C;gci[3]=0x45; // GZLE (可按实际改)
    gci[4]=0xFF;gci[5]=0x01;                          // 公司码
    dv.setUint8(6, 0x00);        /* 卡片编号 */
    dv.setUint32(8, data.length);          /* 文件大小 */
    /* 时间戳 */
    dv.setUint32(0xC, Math.floor(Date.now()/1000));
    /* 文件名区 0x20-0x3F: 游戏自己的注释（此处占位）*/
    const name='TWW SAVE';
    for(let i=0;i<name.length;i++)gci[0x20+i]=name.charCodeAt(i);
    gci.set(data,0x40);
    const blob=new Blob([gci],{type:'application/octet-stream'});
    const a=document.createElement('a');
    a.href=URL.createObjectURL(blob);
    a.download='tww_slot'+(slot+1)+'.gci';a.click();
  },
  /* 导入 .gci 到卡片内存 */
  import(slot, file, cb){
    const rd=new FileReader();
    rd.onload=()=>{
      const u8=new Uint8Array(rd.result);
      if(u8.length<0x41)return alert('GCI 太小');
      /* 校验 magic 区有游戏码 */
      const gid=String.fromCharCode(u8[0],u8[1],u8[2],u8[3]);
      if(!gid.startsWith('GZ'))console.warn('非风之律动存档? '+gid);
      const size=(u8[8]<<24)|(u8[9]<<16)|(u8[10]<<8)|u8[11];
      const payload=u8.slice(0x40,0x40+size);
      if(!window.TWW||!TWW.exports)return alert('核心未加载');
      const card=TWW.exports._tww_card_ptr(slot);
      const heap=TWW.heapU8();
      heap.set(payload,card);
      /* 记录 GCI 头供导出用 */
      window._gciHeader=window._gciHeader||{};window._gciHeader[slot]=u8.slice(0,0x40);
      if(cb)cb(size);
    };
    rd.readAsArrayBuffer(file);
  }
};
