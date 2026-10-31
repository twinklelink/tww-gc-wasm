#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""扫描 tww-decomp-src 中「按帧推进」的代码，输出**分级**候选清单。

背景：项目已把公共路径（c_lib.cpp / f_op_actor_mng.cpp / J3DAnimation.cpp）
改造成按 dt 缩放，但大量 actor 自己手写计时器，30fps 下会跑成 2 倍速。

与第一版的区别：第一版只做正则粗筛，850 条里混进了大量误报
（注释掉的死代码、for 循环变量、freeCount++ 统计计数、
fopAcM_setCullSizeBox(..., 60.0f, ...) 之类的坐标常量）。
本版做了三件事：
  1. 注释状态机 —— 跳过 /* */ 块与 // 行内的死代码
  2. 上下文判定 —— hardcoded 60 只在时间语义上下文里才算
  3. 置信度分级 —— high 可直接改，medium 需人工确认

用法：
    python3 tools/scan_frame_timers.py --src tww-decomp-src \
        --out docs/frame_rate_candidates.json

输出：
    <out>       JSON 明细（file/line/kind/confidence/code）
    <out>.md    Markdown 清单，按置信度与目录聚合

只做排查，不改代码：命中项需人工判断后改造（见 docs/frame_rate_applied.md）。
"""
import argparse
import json
import os
import re
import sys

# 与 CI（.github/workflows/build.yml）保持一致的排除目录
SKIP_DIRS = (
    '/dolphin/', '/PowerPC_EABI_Support/MSL/', '/MetroTRK/',
    '/PowerPC_EABI_Support/Runtime/',
)
SKIP_FILES = {
    'DynamicLink.cpp', 'DynamicLink.c', 'f_pc_profile_lst.c', 'd_a_shand.cpp',
}

# ---- 计时器命名特征 ----
TIMER_NAME = r'(?:[Tt]imer|[Cc]ountdown|[Ww]ait|[Dd]elay|[Ii]nterval|[Ff]rame|mTime|[Tt]ime)'
RX_COUNTDOWN = re.compile(
    r'(?:--\s*\w*%s\w*|\w*%s\w*\s*(?:--|-=)|field_0x[0-9a-fA-F]+\s*--)' % (TIMER_NAME, TIMER_NAME))
RX_ACCUM = re.compile(
    r'(?:\+\+\s*\w*%s\w*|\w*%s\w*\s*(?:\+\+|\+=)|field_0x[0-9a-fA-F]+\s*\+\+)' % (TIMER_NAME, TIMER_NAME))
RX_INTERVAL = re.compile(r'%\s*60\b')

# 硬编码 60：必须是赋值/比较的右值，且不是数组下标或坐标
RX_FRAME_60 = re.compile(r'(?<![\w.])60(?:\.0?f)?\b')
# 时间语义上下文：变量名或同行出现这些词才算
TIME_CTX = re.compile(
    r'(?i)(timer|frame|delay|wait|interval|duration|count|anim|fps|second|frameCtrl|'
    r'mTime|life|span|period|tick)')
# 明确的「不是帧率」用法
NOT_FRAME = re.compile(
    r'(?i)(cullSize|setCullSize|sizeof|mDoExt_|ResTIMG|0x60|60\.0f?\s*\*\s*\w*(?:Rad|Deg|Angle))')

# 明显是循环变量 / 统计计数，不是计时器
LOOP_OR_STAT = re.compile(
    r'(?i)^\s*(?:for|while)\s*\(|'
    r'\b(?:i|j|k|n|idx|index|pos|num|size|len|skip|free|read|write|alloc|error|warn)\w*\s*\+\+|'
    r'\+\+\s*(?:i|j|k|n|idx|index)\b')


def strip_comment(line, in_block):
    """去掉注释部分，返回 (有效代码, 是否仍在块注释中)"""
    out = []
    i = 0
    n = len(line)
    while i < n:
        if in_block:
            end = line.find('*/', i)
            if end == -1:
                return ''.join(out), True
            in_block = False
            i = end + 2
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


def skip(path):
    p = path.replace('\\', '/')
    if any(d in p for d in SKIP_DIRS):
        return True
    if os.path.basename(p) in SKIP_FILES:
        return True
    return False


def scan(src):
    hits = []
    for root, dirs, files in os.walk(src):
        dirs[:] = [d for d in dirs if not d.startswith('.')]
        for fn in sorted(files):
            if not fn.endswith(('.cpp', '.c', '.h')):
                continue
            path = os.path.join(root, fn)
            if skip(path):
                continue
            try:
                with open(path, 'r', encoding='utf-8', errors='replace') as f:
                    raw = f.readlines()
            except OSError:
                continue
            in_block = False
            for n, rawline in enumerate(raw, 1):
                code, in_block = strip_comment(rawline, in_block)
                code = code.strip()
                if not code:
                    continue
                rel = os.path.relpath(path, src).replace('\\', '/')

                kind, conf = None, None
                if RX_COUNTDOWN.search(code):
                    kind, conf = 'countdown', 'high'
                elif RX_ACCUM.search(code):
                    if LOOP_OR_STAT.search(code):
                        continue
                    kind, conf = 'accumulator', 'high'
                elif RX_INTERVAL.search(code):
                    kind, conf = 'interval', 'high'
                elif RX_FRAME_60.search(code):
                    if NOT_FRAME.search(code):
                        continue
                    # 60 附近有时间语义词才高置信，否则只标 medium 供人工看
                    conf = 'high' if TIME_CTX.search(code) else 'medium'
                    kind = 'hardcoded_60'

                if kind:
                    hits.append({'file': rel, 'line': n, 'kind': kind,
                                 'confidence': conf, 'code': code[:160]})
    return hits


def write_md(hits, out_md, src):
    order = {'high': 0, 'medium': 1, 'low': 2}
    by_conf = {}
    for h in hits:
        by_conf.setdefault(h['confidence'], []).append(h)
    lines = [
        '# 按帧推进代码候选清单',
        '',
        '由 `tools/scan_frame_timers.py` 生成，源码根：`%s`' % src,
        '',
        '| 置信度 | 数量 | 含义 |',
        '|---|---|---|',
        '| high | %d | 命名或上下文明确是计时器，可直接按 dt 改造 |'
        % len(by_conf.get('high', [])),
        '| medium | %d | 硬编码 60 但上下文不明，需人工确认 |'
        % len(by_conf.get('medium', [])),
        '',
        '改造规范见 `docs/frame_rate_applied.md`。',
        '',
    ]
    for conf in sorted(by_conf, key=lambda c: order.get(c, 9)):
        sub = by_conf[conf]
        lines.append('## %s (%d)' % (conf.upper(), len(sub)))
        lines.append('')
        by_dir = {}
        for h in sub:
            top = h['file'].split('/')[0] if '/' in h['file'] else '(root)'
            by_dir.setdefault(top, []).append(h)
        lines.append('| 目录 | 数 |')
        lines.append('|---|---|')
        for d in sorted(by_dir, key=lambda k: -len(by_dir[k])):
            lines.append('| `%s` | %d |' % (d, len(by_dir[d])))
        lines.append('')
        for d in sorted(by_dir, key=lambda k: -len(by_dir[k])):
            lines.append('### %s' % d)
            lines.append('')
            lines.append('| 文件:行 | 类型 | 代码 |')
            lines.append('|---|---|---|')
            for h in by_dir[d]:
                lines.append('| `%s:%d` | %s | `%s` |' %
                             (h['file'], h['line'], h['kind'],
                              h['code'].replace('|', '\\|')[:120]))
            lines.append('')
    with open(out_md, 'w', encoding='utf-8') as f:
        f.write('\n'.join(lines))


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--src', default='tww-decomp-src')
    ap.add_argument('--out', default='../../reports/frame_rate_candidates.json')
    args = ap.parse_args()

    if not os.path.isdir(args.src):
        sys.stderr.write('源码目录不存在: %s\n' % args.src)
        return 2

    hits = scan(args.src)
    os.makedirs(os.path.dirname(args.out) or '.', exist_ok=True)
    with open(args.out, 'w', encoding='utf-8') as f:
        json.dump({'src': args.src, 'count': len(hits), 'hits': hits}, f,
                  ensure_ascii=False, indent=1)
    write_md(hits, args.out + '.md', args.src)
    n_high = sum(1 for h in hits if h['confidence'] == 'high')
    print('hits: %d (high=%d) -> %s (+ .md)' % (len(hits), n_high, args.out))
    return 0


if __name__ == '__main__':
    sys.exit(main())
