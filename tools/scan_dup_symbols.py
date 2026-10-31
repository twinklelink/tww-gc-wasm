#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""扫描「同一个全局变量在多个 TU 里被定义」的重复符号。

背景
----
反编译产物里，原本是文件局部的变量常被还原成**全局**定义。
典型例子：18 个 actor 各有自己的 `hio_set` 调试标志位，
其中 16 个还原成 `static bool hio_set;`（正确），
但 `d_a_shand.cpp` / `d_a_fganon.cpp` 还原成全局的
`bool hio_set;` / `u8 hio_set;` —— 链接期直接撞符号。

之前的做法是**排除掉冲突的文件**（丢了 d_a_shand.cpp 这个真 actor）。
正确做法是把它们改回 `static`：语义上它们本来就只在自己文件里用。

本脚本找出所有这类冲突，避免靠"链接报错 -> 排除文件"的方式一点点试。

判定
----
只统计**文件作用域的定义**（行首无缩进、非 static、非 extern、非 typedef），
形如 `类型 名字;` 或 `类型 名字 = 初值;`。
函数定义、成员声明、带括号的都排除。

注意：C++ 里 `int x;` 在文件作用域是**暂定定义**（tentative definition）。
GCC 10+ 默认 -fno-common，多个同名暂定定义会报 duplicate symbol。
所以这些必须修，不能指望链接器合并。

用法
----
    python3 tools/scan_dup_symbols.py --src tww-decomp-src
    python3 tools/scan_dup_symbols.py --src ... --apply     # 自动加 static
    python3 tools/scan_dup_symbols.py --src ... --out docs/dup_symbols.json
"""
import argparse
import json
import os
import re
import sys
from collections import defaultdict

SKIP_DIRS = ('/dolphin/', '/PowerPC_EABI_Support/MSL/', '/MetroTRK/',
             '/PowerPC_EABI_Support/Runtime/')
SKIP_FILES = {'DynamicLink.cpp', 'DynamicLink.c'}

# 文件作用域的定义：行首顶格，类型 + 名字 + 分号（可能带初值或数组）
# 排除 static / extern / typedef / const 声明 / 函数(带括号)
RX_DEF = re.compile(
    r'^(?!(?:static|extern|typedef|const|inline|friend|using|namespace)\b)'
    r'(?P<type>(?:unsigned\s+|signed\s+|const\s+)?'
    r'[A-Za-z_][A-Za-z0-9_]*(?:::[A-Za-z_][A-Za-z0-9_]*)*\s*[*&]?)'
    r'\s*(?P<name>[A-Za-z_]\w*)\s*(?:\[[^\]]*\])?\s*(?:=[^;]*)?;\s*$')

# 一眼就不是变量定义的行首
NOT_DEF = re.compile(
    r'^(?:#|//|/\*|\}|\{|return|if|for|while|switch|case|else|do|goto|'
    r'break|continue|template|class|struct|enum|union|public|private|'
    r'protected|virtual|using|namespace|typedef)\b')

# 看着像函数调用或函数声明
HAS_PAREN = re.compile(r'[A-Za-z_]\w*\s*\(')


def skip(path):
    p = path.replace('\\', '/')
    return any(d in p for d in SKIP_DIRS) or os.path.basename(p) in SKIP_FILES


def strip_comments(text):
    out, i, n = [], 0, len(text)
    while i < n:
        if text.startswith('//', i):
            j = text.find('\n', i)
            if j == -1:
                break
            i = j
            continue
        if text.startswith('/*', i):
            j = text.find('*/', i + 2)
            i = (j + 2) if j != -1 else n
            continue
        out.append(text[i])
        i += 1
    return ''.join(out)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--src', default='tww-decomp-src')
    ap.add_argument('--apply', action='store_true',
                    help='冲突的定义自动加 static（仅当每个文件内都只用在本文件）')
    ap.add_argument('--out', default='../../reports/dup_symbols.json')
    args = ap.parse_args()

    if not os.path.isdir(args.src):
        sys.stderr.write('源码目录不存在: %s\n' % args.src)
        return 2

    # name -> {file: [line...]}
    defs = defaultdict(lambda: defaultdict(list))
    for root, dirs, files in os.walk(args.src):
        dirs[:] = [d for d in dirs if not d.startswith('.')]
        for fn in sorted(files):
            if not fn.endswith(('.cpp', '.c')):
                continue
            path = os.path.join(root, fn)
            if skip(path):
                continue
            rel = os.path.relpath(path, args.src).replace('\\', '/')
            try:
                with open(path, encoding='utf-8', errors='replace') as f:
                    lines = f.readlines()
            except OSError:
                continue
            for i, line in enumerate(lines, 1):
                s = line.rstrip('\n')
                if not s or s[0].isspace():
                    continue
                if NOT_DEF.match(s):
                    continue
                if HAS_PAREN.search(s.split('=')[0]):
                    continue
                m = RX_DEF.match(s)
                if not m:
                    continue
                name = m.group('name')
                # 全大写且带下划线的多半是宏/常量，跳过（常放头文件里重复）
                if name.isupper():
                    continue
                defs[name][rel].append(i)

    # 只在 >=2 个文件里出现的才算冲突
    dup = {}
    for name, byfile in defs.items():
        if len(byfile) >= 2:
            dup[name] = {f: ln for f, ln in byfile.items()}

    fixed = []
    if args.apply:
        for name, byfile in dup.items():
            for rel, lines_no in byfile.items():
                path = os.path.join(args.src, rel)
                try:
                    with open(path, encoding='utf-8', errors='replace') as f:
                        lines = f.readlines()
                except OSError:
                    continue
                changed = False
                for ln in lines_no:
                    s = lines[ln - 1]
                    if s.lstrip().startswith('static'):
                        continue
                    lines[ln - 1] = 'static ' + s
                    changed = True
                if changed:
                    with open(path, 'w', encoding='utf-8') as f:
                        f.writelines(lines)
                    fixed.append({'name': name, 'file': rel, 'lines': lines_no})

    os.makedirs(os.path.dirname(args.out) or '.', exist_ok=True)
    with open(args.out, 'w', encoding='utf-8') as f:
        json.dump({'scanned_dir': args.src, 'conflicts': len(dup),
                   'detail': dup, 'fixed': fixed},
                  f, ensure_ascii=False, indent=1)

    print('重复定义的全局符号: %d 个' % len(dup))
    for name, byfile in sorted(dup.items(), key=lambda kv: -len(kv[1]))[:20]:
        print('  %-28s 出现在 %d 个文件: %s' %
              (name, len(byfile), ', '.join(sorted(byfile)[:3])))
    if args.apply:
        print('已加 static: %d 处' % len(fixed))
    return 0


if __name__ == '__main__':
    sys.exit(main())
