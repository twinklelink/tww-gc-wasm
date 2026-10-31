import struct,os,sys,json,collections
tbl={}
for line in open('/root/workspace/tww-cn/NGC/CH.tbl.txt',encoding='utf-8'):
    line=line.strip()
    if '=' in line:
        c,ch=line.split('=',1); tbl[int(c,16)]=ch
jp={}
for line in open('/root/workspace/tww-cn/NGC/jp.tbl.txt',encoding='utf-8'):
    line=line.strip()
    if '=' in line:
        c,ch=line.split('=',1); jp[int(c,16)]=ch

def dec(dt):
    out=[]; i=0; n=len(dt)
    while i<n:
        b=dt[i]
        if b==0: break
        if b==0x0a: out.append('\n'); i+=1; continue
        if b==0x1a:                      # 转义控制码
            if i+1>=n: break
            cmd=dt[i+1]; i+=2
            if cmd==0x06 and i<n: i+=1   # 内嵌图标，带1字节图标ID
            continue                     # 不显示控制码
        if b<0x20: i+=1; continue        # 其它控制字节
        if b<0x80: out.append(chr(b)); i+=1; continue
        if 0x81<=b<=0x9f or 0xe0<=b<=0xef:
            if i+1>=n: break
            code=(b<<8)|dt[i+1]; i+=2
            if code in tbl: out.append(tbl[code])
            elif code in jp: out.append(jp[code])
            else:
                try: out.append(bytes([code>>8,code&0xff]).decode('cp932'))
                except: pass
            continue
        if 0xa1<=b<=0xdf: out.append(chr(0xff61+(b-0xa1))); i+=1; continue
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
    if mc==0 or mc>60000: return None
    # 头 24B，条目 24B，文本偏移在 +0x12
    if 24+mc*24!=sec: return None
    res=[]
    for i in range(mc):
        o=INF+0x18+i*24
        off=struct.unpack('>H',d[o+0x12:o+0x14])[0]
        res.append(dec(d[DAT+8+off:]))
    return res

if __name__=='__main__':
    fp=sys.argv[1]
    r=extract(fp)
    if r is None: print('解析失败'); sys.exit(1)
    uniq=set(r)
    print(f'条目 {len(r)}, 唯一 {len(uniq)}, 重复 {100*(1-len(uniq)/len(r)):.1f}%')
    for v,n in collections.Counter(r).most_common(3): print(f'  {n}x {v[:40]!r}')
    for t in r[:6]: print(repr(t[:60]))
