#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""生成 assets_manifest.json —— 网页根目录的资源索引。

背景
----
资源包解压到网页根目录后，各顶层目录的层级并不统一：

    models_gltf/Object/Aana/bdl/aana.gltf      ← 模型（gltf + bin + png）
    texture_png/...                             ← 独立纹理
    anims_json/...                              ← 骨骼动画（3367 个）
    anim_extra/Object/Ac/btp/komari.json        ← 材质/纹理动画
    audio/mp3/1tale.mp3                         ← 音频
    raw_stage/unpacked/Object/Ajav/dzb/ajav.dzb ← 注意这层多一个 unpacked/
    raw_extra/unpacked/Msg/.../wipe_01_01.blo   ← 同样是 unpacked/
    text_cn/messages.json

前端硬编码路径极易 404。本脚本扫描真实布局，把「哪个类别在哪个目录下、
有哪些文件」写进 manifest，前端读 manifest 拼路径，而不是猜。

两种模式
--------
1. --webroot  扫描已解压的目录（推荐，最准确）
2. --zip      直接读 zip 的中央目录，**不解压**

   --zip 模式的意义：完整资源包约 571MB（压缩）/ 0.55GB（解压后），
   而中央目录只占最后 3.6MB。读它就够生成索引，不必为了建索引
   先解压几个 GB。

   支持 split archive（.z01 .z02 ... + .zip）。此时中央目录在
   **最后一个分卷**里，且 zip 格式中 CD offset 是"相对于所在磁盘"的，
   所以直接用本分卷内的偏移即可，不需要合并分卷。

用法
----
    python3 tools/build_manifest.py --webroot /path/to/webroot --out assets_manifest.json
    python3 tools/build_manifest.py --zip 资源.zip --out assets_manifest.json
    python3 tools/build_manifest.py --zip 资源.zip --no-file-list --out assets_manifest.json
"""
import argparse
import collections
import json
import os
import struct
import sys
import tarfile
from datetime import date

# 包 -> 解压后顶层目录（--resources 模式用）
PACK_ROOTS = {
    'anim_extra': 'anim_extra',
    'raw_extra': 'raw_extra/unpacked',
    'raw_stage': 'raw_stage/unpacked',
    'text_cn': 'text_cn',
}

# anim_extra 里的动画子类：按路径中的目录名判定
ANIM_KINDS = ('btp', 'btk', 'brk')


# ---------------------------------------------------------------- zip 模式

def find_eocd(data):
    """从末尾往前找 EOCD（末尾可能有注释）"""
    idx = data.rfind(b'PK\x05\x06')
    if idx < 0:
        return None
    cd_size, cd_start = struct.unpack('<II', data[idx + 12:idx + 20])
    n = struct.unpack('<H', data[idx + 10:idx + 12])[0]
    return idx, cd_start, cd_size, n


def read_zip_list(path):
    """读 zip 中央目录，返回 [(相对路径, 原始大小)]。

    split archive 时 path 应是**最后一个分卷**：
    CD 与 EOCD 都在最后一卷，且 CD offset 相对本卷起点。
    """
    with open(path, 'rb') as f:
        data = f.read()
    e = find_eocd(data)
    if not e:
        sys.stderr.write('%s: 找不到 EOCD，不是有效 zip（或不是最后一卷）\n' % path)
        return []
    _idx, cd_start, cd_size, n = e
    if cd_start + cd_size > len(data):
        sys.stderr.write('%s: 中央目录超出文件范围\n' % path)
        return []

    out = []
    off = cd_start
    end = cd_start + cd_size
    while off < end:
        if data[off:off + 4] != b'PK\x01\x02':
            break
        usize, = struct.unpack('<I', data[off + 24:off + 28])
        nl, el, cl = struct.unpack('<HHH', data[off + 28:off + 34])
        raw = data[off + 46:off + 46 + nl]
        try:
            nm = raw.decode('utf-8')
        except UnicodeDecodeError:
            nm = raw.decode('latin-1', 'replace')
        if not nm.endswith('/'):      # 跳过目录条目
            out.append((nm, usize))
        off += 46 + nl + el + cl
    return out


# ---------------------------------------------------------------- 分类

def classify(rel):
    """按扩展名分类；无扩展名归 bin"""
    ext = os.path.splitext(rel)[1].lower().lstrip('.')
    return ext or 'bin'


def build(entries, out_path, no_file_list, src_label):
    """entries: [(相对路径, 大小)]"""
    files = collections.defaultdict(list)
    for rel, _sz in entries:
        files[classify(rel)].append(rel)

    categories = {}
    all_dirs = set()
    for kind in sorted(files):
        rels = sorted(files[kind])
        # 同一扩展名可能散落在多个顶层目录（png 同时在 models_gltf 和 texture_png），
        # 所以既要记 dirs（全部），也要记 dir（文件最多的那个，作为默认拼接基准）
        dirs = collections.Counter(r.split('/')[0] if '/' in r else '.' for r in rels)
        all_dirs.update(dirs)
        categories[kind] = {
            'dir': dirs.most_common(1)[0][0],
            'dirs': sorted(dirs),
            'count': len(rels),
            'sample': rels[0],
        }

    msgs = {}
    for rel, _ in entries:
        low = rel.lower()
        if low.endswith('messages.json'):
            msgs.setdefault('cn' if 'text_cn' not in low else 'cn_alt', rel)
        elif low.endswith('messages_en.json'):
            msgs.setdefault('en', rel)

    manifest = {
        'version': 2,
        'generated': date.today().isoformat(),
        'source': src_label,
        'note': 'files[] are FULL paths relative to web root (already include top dir). '
                'url(cat,rel): if rel already starts with a known top dir, use as-is.',
        'total': len(entries),
        'topDirs': sorted(all_dirs),
        'fullPaths': True,
        'messages': msgs,
        'categories': categories,
    }
    if not no_file_list:
        manifest['files'] = {k: sorted(v) for k, v in files.items()}

    with open(out_path, 'w', encoding='utf-8') as f:
        json.dump(manifest, f, ensure_ascii=False, separators=(',', ':'))

    total = sum(c['count'] for c in categories.values())
    print('categories: %d, files: %d' % (len(categories), total))
    for k, v in sorted(categories.items(), key=lambda kv: -kv[1]['count']):
        print('  %-10s %6d  %s' % (k, v['count'], v['dir']))
    print('messages:', json.dumps(msgs, ensure_ascii=False))
    print('-> %s (%.1f KB)' % (out_path, os.path.getsize(out_path) / 1024))
    return manifest


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--resources', help='含 *.tar.gz 的 resources 目录')
    ap.add_argument('--webroot', help='已解压的网页根目录')
    ap.add_argument('--zip', help='zip（或 split archive 的最后一卷），不解压直接读')
    ap.add_argument('--out', required=True)
    ap.add_argument('--no-file-list', action='store_true',
                    help='不输出逐文件清单（manifest 会小很多）')
    args = ap.parse_args()

    if not (args.resources or args.webroot or args.zip):
        ap.error('需要 --resources / --webroot / --zip 之一')

    if args.zip:
        entries = read_zip_list(args.zip)
        if not entries:
            return 1
        build(entries, args.out, args.no_file_list, 'zip:' + os.path.basename(args.zip))
        return 0

    if args.webroot:
        root = args.webroot
        if not os.path.isdir(root):
            ap.error('目录不存在: %s' % root)
        entries = []
        for dp, _dn, fns in os.walk(root):
            for fn in fns:
                full = os.path.join(dp, fn)
                entries.append((os.path.relpath(full, root).replace(os.sep, '/'),
                                os.path.getsize(full)))
        build(entries, args.out, args.no_file_list, 'webroot:' + root)
        return 0

    # --resources：扫 tar.gz
    entries = []
    for pack, root in PACK_ROOTS.items():
        rels = []
        for t in sorted(os.listdir(args.resources)):
            if not t.endswith('.tar.gz'):
                continue
            try:
                with tarfile.open(os.path.join(args.resources, t), 'r:gz') as tf:
                    hit = [m.name[len(root) + 1:] for m in tf.getmembers()
                           if m.isfile() and m.name.startswith(root + '/')]
            except (OSError, tarfile.TarError):
                continue
            if len(hit) > len(rels):
                rels = hit
        for r in rels:
            entries.append((PACK_ROOTS[pack] + '/' + r, 0))
    build(entries, args.out, args.no_file_list, 'resources')
    return 0


if __name__ == '__main__':
    sys.exit(main())
