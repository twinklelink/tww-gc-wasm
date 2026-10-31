#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""找出「被非 dolphin 代码调用、但只定义在 dolphin 目录里」的符号。

背景
----
CI 排除了整个 tww-decomp-src/dolphin/（98 个 .c/.cpp），
因为里面的 GX* 与我们的 gx/gx2gl.cpp 重复。
但 dolphin 里还有 OS / PAD / VI / DVD / CARD / AI 等模块的函数，
非 dolphin 代码（JSystem、m_Do、d/）大量调用它们。

排除后这些符号没有实体，--allow-undefined 会把它们变成 import。
运行时一旦被调用就崩（或者静默读到垃圾）。

已补进 core/dolphin_stub.c 的：
  GXFIFO, __OSBusClock, PADRead, PADClamp, PADInit, ... OSGetTime, OSGetTick

本脚本用来找**还没补的**，避免靠链接报错一条条试。

用法
----
    python3 tools/scan_missing_dolphin.py --src tww-decomp-src
"""
import argparse
import os
import re
import sys

# 控制关键字，不是函数名
CTRL = {'if', 'for', 'while', 'switch', 'return', 'sizeof', 'case',
        'catch', 'do', 'else', 'new', 'delete', 'throw', 'try'}

RX_DEF = re.compile(
    r'^\s*(?:[A-Za-z_]\w*(?:::[A-Za-z_]\w*)*[\s\*&]+)+([A-Za-z_]\w*)\s*\(',
    re.M)
RX_CALL = re.compile(r'\b([A-Za-z_]\w*)\s*\(')


def collect(src):
    nondol, dol = [], []
    for root, _dirs, files in os.walk(src):
        for f in files:
            if not f.endswith(('.c', '.cpp')):
                continue
            p = os.path.join(root, f)
            (dol if '/dolphin/' in p.replace('\\', '/') else nondol).append(p)
    return nondol, dol


def defs_of(files):
    s = set()
    for p in files:
        try:
            with open(p, encoding='utf-8', errors='replace') as fh:
                t = fh.read()
        except OSError:
            continue
        for m in RX_DEF.finditer(t):
            n = m.group(1)
            if n not in CTRL:
                s.add(n)
    return s


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--src', default='tww-decomp-src')
    ap.add_argument('--out', default='../../reports/missing_dolphin.json')
    ap.add_argument('--show', type=int, default=200)
    args = ap.parse_args()

    if not os.path.isdir(args.src):
        sys.stderr.write('源码目录不存在: %s\n' % args.src)
        return 2

    nondol, dol = collect(args.src)
    doldefs = defs_of(dol)
    nondefs = defs_of(nondol)

    called = set()
    for p in nondol:
        try:
            with open(p, encoding='utf-8', errors='replace') as fh:
                t = fh.read()
        except OSError:
            continue
        for m in RX_CALL.finditer(t):
            called.add(m.group(1))

    missing = sorted((doldefs & called) - nondefs)

    os.makedirs(os.path.dirname(args.out) or '.', exist_ok=True)
    with open(args.out, 'w', encoding='utf-8') as f:
        f.write('{\n "dolphin_defs": %d,\n "non_dolphin_defs": %d,\n'
                ' "missing": %s\n}\n' % (len(doldefs), len(nondefs),
                                         repr(missing).replace("'", '"')))

    print('dolphin 定义 %d 个，非 dolphin 定义 %d 个'
          % (len(doldefs), len(nondefs)))
    print('被调用且非 dolphin 无定义（需 stub）: %d 个' % len(missing))
    for n in missing[:args.show]:
        print('  ', n)
    if len(missing) > args.show:
        print('  ... 还有 %d 个，见 %s' % (len(missing) - args.show, args.out))
    return 0


if __name__ == '__main__':
    sys.exit(main())
