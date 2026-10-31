#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""把「按帧推进」的**命名明确**计时器改造成帧率无关。

只改置信度高的一类：变量名含 Timer / Countdown / Wait / Delay / Interval
的 `X--;` 与 `X++;`。不碰：
  - `field_0xNNN` 这类反编译猜测名（不确定是不是计时器，改错会破坏逻辑）
  - `-= expr` / `+= expr` 复合形式（语义复杂，留给人工）
  - for/while 的循环变量
  - 注释里的死代码

改造方式：
    mTimer--;   ->  FRAME_TIMER_DEC(mTimer);
    mTimer++;   ->  FRAME_TIMER_INC(mTimer);
并在文件顶部补 `#include "frame_rate.h"`（幂等：已有则不动）。

**为什么不直接 `mTimer -= (int)FRAME_SCALE`**：120fps 下 (int)0.5 == 0，
计时器永远不动。宏内部用小数累加器跨整格才走，长时间平均速率精确。

用法：
    python3 tools/apply_frame_timers.py --src tww-decomp-src            # 预演
    python3 tools/apply_frame_timers.py --src tww-decomp-src --apply    # 落盘
    python3 tools/apply_frame_timers.py --src ... --apply --max 50                    # 限量
"""
import argparse
import json
import os
import re
import sys

# 计时器命名
NAME = r'[A-Za-z_]\w*(?:Timer|Countdown|Wait|Delay|Interval)[A-Za-z_0-9]*'
# 允许的左值形态：mTimer / this->mTimer / i_this->mTimer / arr[i].mTimer
LVAL = r'(?:\w+|(?:(?:this|i_this|a_this|p_this)->)*\w+(?:->\w+)*)(?:\.[A-Za-z_]\w*)?(?:\[[^\]]+\])?(?:->[A-Za-z_]\w*)*'

RX_DEC = re.compile(r'^(' + LVAL + r'(?:->|(?:\.))?(' + NAME + r'))\s*--\s*;')
RX_INC = re.compile(r'^(' + LVAL + r'(?:->|(?:\.))?(' + NAME + r'))\s*\+\+\s*;')

SKIP_DIRS = ('/dolphin/', '/PowerPC_EABI_Support/MSL/', '/MetroTRK/',
             '/PowerPC_EABI_Support/Runtime/')
SKIP_FILES = {'DynamicLink.cpp', 'DynamicLink.c', 'f_pc_profile_lst.c',
              'd_a_shand.cpp', 'frame_rate.h'}


def skip(path):
    p = path.replace('\\', '/')
    if any(d in p for d in SKIP_DIRS):
        return True
    if os.path.basename(p) in SKIP_FILES:
        return True
    return False


def strip_comment(line, in_block):
    """返回 (去掉注释后的代码, 是否仍在块注释中)"""
    out, i, n = [], 0, len(line)
    while i < n:
        if in_block:
            e = line.find('*/', i)
            if e == -1:
                return ''.join(out), True
            in_block = False
            i = e + 2
            continue
        if line.startswith('//', i):
            break
        if line.startswith('/*', i):
            in_block = True
            i += 2
            continue
        out.append(line[i])
        i += 1
    return ''.join(out), in_block


def ensure_include(lines, rel):
    """保证 frame_rate.h 被包含。插在最后一个 #include 之后"""
    for i, l in enumerate(lines):
        if 'frame_rate.h' in l:
            return lines, False
    last = -1
    for i, l in enumerate(lines[:80]):
        if l.lstrip().startswith('#include'):
            last = i
    if last == -1:
        return ['#include "frame_rate.h"\n'] + lines, True
    lines.insert(last + 1, '#include "frame_rate.h"\n')
    return lines, True


def process_file(path, src, apply_, stats):
    try:
        with open(path, encoding='utf-8', errors='replace') as f:
            lines = f.readlines()
    except OSError:
        return []
    rel = os.path.relpath(path, src).replace('\\', '/')
    changed = []
    in_block = False
    total = 0
    for i, raw in enumerate(lines):
        code, in_block = strip_comment(raw, in_block)
        s = code.strip()
        if not s:
            continue
        m = RX_DEC.match(s)
        macro = 'FRAME_TIMER_DEC'
        if not m:
            m = RX_INC.match(s)
            macro = 'FRAME_TIMER_INC'
        if not m:
            continue
        indent = code[:len(code) - len(code.lstrip())]
        new = '%s%s(%s);\n' % (indent, macro, m.group(1))
        old = raw
        lines[i] = new
        total += 1
        changed.append({'file': rel, 'line': i + 1, 'macro': macro,
                        'old': old.strip(), 'new': new.strip()})
    if not total:
        return []
    lines, _ = ensure_include(lines, rel)
    if apply_:
        with open(path, 'w', encoding='utf-8') as f:
            f.writelines(lines)
    stats['files'] += 1
    stats['sites'] += total
    return changed


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--src', default='tww-decomp-src')
    ap.add_argument('--apply', action='store_true')
    ap.add_argument('--out', default='../../reports/frame_timer_applied.json')
    ap.add_argument('--max', type=int, default=0, help='最多改多少处（0=不限）')
    args = ap.parse_args()

    if not os.path.isdir(args.src):
        sys.stderr.write('源码目录不存在: %s\n' % args.src)
        return 2

    stats = {'files': 0, 'sites': 0}
    all_changed = []
    for root, dirs, files in os.walk(args.src):
        dirs[:] = [d for d in dirs if not d.startswith('.')]
        for fn in sorted(files):
            if not fn.endswith(('.cpp', '.c')):
                continue
            p = os.path.join(root, fn)
            if skip(p):
                continue
            all_changed += process_file(p, args.src, args.apply, stats)
            if args.max and stats['sites'] >= args.max:
                break
        if args.max and stats['sites'] >= args.max:
            break

    os.makedirs(os.path.dirname(args.out) or '.', exist_ok=True)
    with open(args.out, 'w', encoding='utf-8') as f:
        json.dump({'applied': args.apply, 'stats': stats, 'changes': all_changed},
                  f, ensure_ascii=False, indent=1)
    print('%s: %d 处 / %d 个文件 -> %s' %
          ('已改造' if args.apply else '预演', stats['sites'], stats['files'], args.out))
    return 0


if __name__ == '__main__':
    sys.exit(main())
