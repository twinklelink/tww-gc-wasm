#!/usr/bin/env python3
"""从美版 zel_00.bmg 提取英文文本（CP1252 单字节）
用法: python3 extract_messages_en.py <zel_00.bmg> [out.json]
布局与日版相同: INF1 24字节头 + N×24字节条目，文本偏移在条目+0x12(u16)
"""
import struct,sys,json,collections

def dec(dt):
    out=[]; i=0; n=len(dt)
    while i<n:
        b=dt[i]
        if b==0: break
        if b==0x0a: out.append('\n'); i+=1; continue
        if b==0x1a:
            if i+1>=n: break
            cmd=dt[i+1]; i+=2
            if cmd==0x06 and i<n: i+=1
            continue
        if b<0x20: i+=1; continue
        if 0x20<=b<0x7f: out.append(chr(b)); i+=1; continue
        try: out.append(bytes([b]).decode('cp1252'))
        except: pass
        i+=1
    return ''.join(out)

def extract(fp):
    d=open(fp,'rb').read()
    if d[:4] not in (b'MESG',b'MESg'): return None
    INF=DAT=0; p=0x20
    while p<len(d)-8:
        sig=d[p:p+4]; sz=struct.unpack('>I',d[p+4:p+8])[0]
        if sig==b'INF1': INF=p
        if sig==b'DAT1': DAT=p
        p+=sz if sz>0x10 else 0x10
    if not INF or not DAT: return None
    sec=struct.unpack('>I',d[INF+4:INF+8])[0]
    mc=struct.unpack('>H',d[INF+8:INF+10])[0]
    if mc==0 or mc>60000 or 24+mc*24!=sec: return None
    res=[]
    for i in range(mc):
        o=INF+0x18+i*24
        off=struct.unpack('>H',d[o+0x12:o+0x14])[0]
        res.append(dec(d[DAT+8+off:]))
    return res

if __name__=='__main__':
    r=extract(sys.argv[1])
    if r is None: print('解析失败'); sys.exit(1)
    out={str(i+1):t for i,t in enumerate(r) if t.strip()}
    print(f'条目 {len(r)}, 非空 {len(out)}, 唯一 {len(set(out.values()))}')
    if len(sys.argv)>2:
        json.dump(out,open(sys.argv[2],'w',encoding='utf-8'),ensure_ascii=False,indent=0)
        print('写出',sys.argv[2])
    for k in list(out)[:5]: print(f'[{k}] {out[k][:60]!r}')
