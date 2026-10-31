#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""压缩网页端的大 JSON，减少首屏下载量。

为什么需要
----------
网页根目录要放完整的资源索引与文本库，原始体积：

    assets_manifest.json    1580 KB   （32891 条路径）
    messages.json            266 KB   （中文文本）
    messages_en.json         247 KB   （英文对照）

合计约 2.1 MB，每次打开页面都要下载。

为什么不自己设计紧凑编码
------------------------
试过两种"更聪明"的编码，都比直接 gzip 差：

    原始 JSON + gzip          122.9 KB   ← 最优
    目录表 + [dirIdx, name]   126.0 KB
    路径段字典 + gzip         126.4 KB

原因：路径里有大量重复前缀（目录部分占 67.7%），
而 LZ 系算法天然擅长消除这种重复，自己再编一道只是引入额外结构开销。
**不要为一个已经被标准工具解决的问题发明新格式。**
所以本脚本只做标准压缩。

浏览器怎么解压
--------------
生成 .gz 后，前端用 DecompressionStream('gzip') 解压：

    const stream = (await fetch(url + '.gz')).body
                     .pipeThrough(new DecompressionStream('gzip'));
    const text = await new Response(stream).text();

这样即使静态服务器不会自动加 Content-Encoding（GitHub Pages
对预压缩文件就是这样），也能拿到压缩收益。
不支持 DecompressionStream 的浏览器自动回退到未压缩版本。
（web/assets.js 里已实现这套回退。）

用法
----
    python3 tools/compress_web.py --webroot web
    python3 tools/compress_web.py --webroot ... --min-size 32768 --level 9
    python3 tools/compress_web.py --webroot ... --dry-run      # 只看会压什么
"""
import argparse
import gzip
import json
import os
import shutil
import sys
import time

# 默认只压这些后缀。JS/CSS 由服务器或 CDN 处理，
# 且它们本来就不大，压了收益有限
TEXT_SUFFIXES = ('.json', '.txt', '.html', '.js', '.css', '.svg')


def human(n):
    return '%.1f KB' % (n / 1024) if n < 1024 * 1024 else '%.2f MB' % (n / 1024 / 1024)


def gzip_file(path, level):
    """生成 path + '.gz'，保留原始文件的 mtime 便于增量判断。

    用 mtime=0 写入，保证同样内容产出同样的 .gz（可复现构建）。
    """
    dst = path + '.gz'
    with open(path, 'rb') as f:
        data = f.read()
    # mtime=0：避免每次构建都产出不同的字节，利于缓存与 diff
    blob = gzip.compress(data, compresslevel=level, mtime=0)
    with open(dst, 'wb') as f:
        f.write(blob)
    return len(data), len(blob)


def brotli_file(path, quality):
    """尝试用 brotli CLI 压缩。没有工具就静默跳过（gzip 已经够用）"""
    if shutil.which('brotli') is None:
        return None
    dst = path + '.br'
    rc = os.system('brotli -q %d -f -o %s %s 2>/dev/null' % (quality, dst, path))
    if rc != 0 or not os.path.exists(dst):
        return None
    return os.path.getsize(path), os.path.getsize(dst)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--webroot', default='web')
    ap.add_argument('--min-size', type=int, default=32768,
                    help='小于此字节数的文件不压缩（默认 32KB）')
    ap.add_argument('--level', type=int, default=9)
    ap.add_argument('--brotli', action='store_true', help='同时生成 .br（需要 brotli CLI）')
    ap.add_argument('--brotli-quality', type=int, default=11)
    ap.add_argument('--dry-run', action='store_true')
    ap.add_argument('--out', default='../../reports/web_compressed.json')
    args = ap.parse_args()

    if not os.path.isdir(args.webroot):
        sys.stderr.write('目录不存在: %s\n' % args.webroot)
        return 2

    # 收集待压缩文件
    targets = []
    for root, dirs, files in os.walk(args.webroot):
        dirs[:] = [d for d in dirs if not d.startswith('.')]
        for fn in sorted(files):
            if not fn.endswith(TEXT_SUFFIXES):
                continue
            if fn.endswith(('.gz', '.br')):      # 已是压缩产物
                continue
            p = os.path.join(root, fn)
            if os.path.getsize(p) < args.min_size:
                continue
            targets.append(p)

    if not targets:
        print('没有需要压缩的文件（阈值 %d 字节）' % args.min_size)
        return 0

    print('%-34s %10s %10s %8s' % ('文件', '原始', 'gzip', '省'))
    print('-' * 66)

    report = []
    total_raw = total_gz = 0
    for p in targets:
        rel = os.path.relpath(p, args.webroot).replace(os.sep, '/')
        raw = os.path.getsize(p)
        if args.dry_run:
            print('%-34s %10s   (dry-run)' % (rel, human(raw)))
            total_raw += raw
            continue

        gz_raw, gz_len = gzip_file(p, args.level)
        item = {'file': rel, 'raw': gz_raw, 'gzip': gz_len}
        if args.brotli:
            br = brotli_file(p, args.brotli_quality)
            if br:
                item['br'] = br[1]
        report.append(item)
        total_raw += gz_raw
        total_gz += gz_len
        saved = (1 - gz_len / gz_raw) * 100 if gz_raw else 0
        extra = ('  .br %s' % human(item['br'])) if 'br' in item else ''
        print('%-34s %10s %10s %7.1f%%%s'
              % (rel, human(gz_raw), human(gz_len), saved, extra))

    print('-' * 66)
    if args.dry_run:
        print('合计 %s（未压缩）' % human(total_raw))
        return 0

    print('合计 %s -> %s（省 %.1f%%）'
          % (human(total_raw), human(total_gz),
             (1 - total_gz / total_raw) * 100 if total_raw else 0))

    os.makedirs(os.path.dirname(args.out) or '.', exist_ok=True)
    with open(args.out, 'w', encoding='utf-8') as f:
        json.dump({'generated': time.strftime('%Y-%m-%d %H:%M:%S'),
                   'webroot': args.webroot, 'level': args.level,
                   'total_raw': total_raw, 'total_gz': total_gz,
                   'files': report}, f, ensure_ascii=False, indent=1)
    print('-> %s' % args.out)
    return 0


if __name__ == '__main__':
    sys.exit(main())
