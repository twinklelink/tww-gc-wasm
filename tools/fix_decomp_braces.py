#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""修复反编译产物里的「注释掉左括号、留下右括号」导致的括号失衡。

背景
----
反编译器遇到无法复原的控制流时，会把整段语句注释掉，但**右括号留在原地**：

    void JUTDirectPrint::erase(int x, int y, int w, int h) {
        /* if (!this->field_0x00) { */     ← 左括号被注释
            /* return; */
        }                                   ← 右括号还在！

结果函数在这里提前闭合，后面所有代码掉到文件作用域，
报出一长串 `expected unqualified-id before 'if'`、
`'mFrameBuffer' was not declared in this scope`，
直到文件末尾 `expected '}' at end of input`。

一个多余的 `}` 就能让整个文件编译失败，且错误信息完全指不到真正的原因。
CI 第一轮 339 个 TU 失败里这类占了相当比例。

做法
----
逐字符扫描，跳过字符串/字符字面量/注释，维护花括号深度。
深度变负的那一行就是多余的 `}`。默认只报告，--apply 才删除。

注意
----
只删**纯右括号行**（去掉后只剩空白或 `};`），绝不删带其他内容的行——
那种情况多半是别的问题，交给人工。

用法
----
    python3 tools/fix_decomp_braces.py --src tww-decomp-src
    python3 tools/fix_decomp_braces.py --src ... --apply
    python3 tools/fix_decomp_braces.py --src ... --apply --out docs/braces_fixed.json
"""
import argparse
import json
import os
import re
import sys

SKIP_DIRS = ('/dolphin/', '/PowerPC_EABI_Support/MSL/', '/MetroTRK/',
             '/PowerPC_EABI_Support/Runtime/')
SKIP_FILES = {'DynamicLink.cpp', 'DynamicLink.c', 'f_pc_profile_lst.c',
              'd_a_shand.cpp'}


def tokenize(lines):
    """把源码切成 (行号, 类型, 文本) 流，跳过注释与字符串。

    类型：'{' / '}' / 'code' / 'comment_open'（内容以 { 结尾的注释）
    行号从 1 开始。
    """
    out = []
    in_block = False
    in_str = False
    in_chr = False
    esc = False
    buf = []

    def flush_comment(ln):
        text = ''.join(buf).strip()
        if text.endswith('{'):
            out.append((ln, 'comment_open', text))

    for ln, line in enumerate(lines, 1):
        i = 0
        n = len(line)
        while i < n:
            c = line[i]

            if in_block:
                if line.startswith('*/', i):
                    in_block = False
                    buf.append(' ')
                    flush_comment(ln)
                    buf = []
                    i += 2
                    continue
                buf.append(c)
                i += 1
                continue

            if in_str:
                if esc:
                    esc = False
                elif c == '\\':
                    esc = True
                elif c == '"':
                    in_str = False
                    out.append((ln, 'code', None))
                i += 1
                continue

            if in_chr:
                if esc:
                    esc = False
                elif c == '\\':
                    esc = True
                elif c == "'":
                    in_chr = False
                    out.append((ln, 'code', None))
                i += 1
                continue

            if line.startswith('//', i):
                buf.append(' ')
                flush_comment(ln)
                buf = []
                break
            if line.startswith('/*', i):
                in_block = True
                buf = []
                i += 2
                continue
            if c == '"':
                in_str = True
                i += 1
                continue
            if c == "'":
                in_chr = True
                i += 1
                continue
            if c == '{':
                out.append((ln, '{', None))
            elif c == '}':
                out.append((ln, '}', None))
            i += 1

        if in_str or in_chr:
            in_str = in_chr = False
    return out


def scan_braces(lines):
    """返回 (多余右括号的行号列表, 文件末尾深度)

    关键：要找的是**根因**（紧跟着被注释掉的左括号的那个 `}`），
    不是**症状**（深度变负的那一行）。

        void f() {
            /* if (cond) { */      ← comment_open
                /* return; */
            }                      ← 这里才是多余的
            ...
        }                          ← 深度在这里变负，但它是函数真正的右括号

    如果按"深度变负"去删，会把函数的收尾括号删掉，错得更彻底。

    判定规则（三者同时满足才算）：
      1. 自上一個真实 `{` 以来，出现过内容以 `{` 结尾的注释
      2. 这期间没有出现过真实 `{`
      3. 注释与该 `}` 之间只有空行或纯注释行
    """
    toks = tokenize(lines)
    extra = []
    depth = 0
    comment_open_ln = -1

    for idx, (ln, kind, _text) in enumerate(toks):
        if kind == '{':
            depth += 1
            comment_open_ln = -1
        elif kind == 'comment_open':
            comment_open_ln = ln
        elif kind == '}':
            # 判定区间是「被注释掉的左括号」到这个 `}` 之间，
            # 不是「上一个真实 {」到这里 —— 后者会因为中间有正常代码而永远不成立
            if comment_open_ln > 0 and _only_comments_between(comment_open_ln, ln, lines):
                extra.append(ln)
                comment_open_ln = -1
                continue          # 这是多余的，不改变深度
            depth -= 1
            comment_open_ln = -1
            if depth < 0:
                depth = 0
    return extra, depth


def _only_comments_between(lo, hi, lines):
    """被注释掉的左括号(lo) 与右括号(hi) 之间：只允许空行或纯注释行"""
    if hi <= lo + 1 and hi != lo:
        pass
    for ln in range(lo + 1, hi):
        s = lines[ln - 1].strip()
        if not s:
            continue
        if (s.startswith('/*') and s.endswith('*/')) or s.startswith('//'):
            continue
        return False
    return hi > lo


# 只删这些形态的行：空白、}、};、} 后跟行尾注释
RX_PURE = re.compile(r'^\s*\}\s*;?\s*(?:/\*.*?\*/\s*)?(?://.*)?$')


def fixable(lines, ln):
    return bool(RX_PURE.match(lines[ln - 1]))


def skip(path):
    p = path.replace('\\', '/')
    return any(d in p for d in SKIP_DIRS) or os.path.basename(p) in SKIP_FILES


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--src', default='tww-decomp-src')
    ap.add_argument('--apply', action='store_true')
    ap.add_argument('--out', default='../../reports/braces_fixed.json')
    ap.add_argument('--close-eof', action='store_true',
                    help='末尾缺 } 的文件自动补齐（反编译截断/收尾括号被注释掉）')
    args = ap.parse_args()

    if not os.path.isdir(args.src):
        sys.stderr.write('源码目录不存在: %s\n' % args.src)
        return 2

    report = {'fixed': [], 'manual': [], 'unbalanced': [], 'closed': []}
    nfiles = 0
    for root, dirs, files in os.walk(args.src):
        dirs[:] = [d for d in dirs if not d.startswith('.')]
        for fn in sorted(files):
            if not fn.endswith(('.cpp', '.c', '.h')):
                continue
            path = os.path.join(root, fn)
            if skip(path):
                continue
            nfiles += 1
            try:
                with open(path, encoding='utf-8', errors='replace') as f:
                    lines = f.readlines()
            except OSError:
                continue

            extra, end_depth = scan_braces(lines)
            if not extra and end_depth == 0:
                continue

            rel = os.path.relpath(path, args.src).replace('\\', '/')
            # 多余右括号：可安全删除的
            good = [ln for ln in extra if fixable(lines, ln)]
            bad = [ln for ln in extra if ln not in good]

            if good:
                report['fixed'].append({
                    'file': rel, 'lines': good,
                    'code': [lines[ln - 1].strip() for ln in good]})
                if args.apply:
                    # 从后往前删，避免行号错位
                    for ln in sorted(good, reverse=True):
                        del lines[ln - 1]
                    # 删除多余 `}` 本身是正确的，即使文件还有其他问题也要落盘。
                    # 有些源文件是反编译截断的（末尾函数没闭合，end_depth > 0），
                    # 那是另一回事，单独报告，不能因此连括号修复一起放弃
                    with open(path, 'w', encoding='utf-8') as f:
                        f.writelines(lines)

            if end_depth > 0 and args.close_eof:
                # 反编译器有时把收尾的 `}` 也注释掉了（与"注释掉左括号"相反的情形），
                # 或者干脆截断。末尾补上缺失的 `}` 就能闭合剩下的作用域。
                report['closed'].append({'file': rel, 'n': end_depth})
                if args.apply:
                    if not lines or not lines[-1].endswith('\n'):
                        lines.append('\n')
                    lines.append('\n/* 由 fix_decomp_braces.py 补齐：'
                                 '反编译产物末尾缺 %d 个 } */\n' % end_depth)
                    lines.append('}' * end_depth + '\n')
                    with open(path, 'w', encoding='utf-8') as f:
                        f.writelines(lines)
            elif end_depth != 0:
                report['unbalanced'].append({
                    'file': rel, 'end_depth': end_depth,
                    'reason': ('末尾缺 %d 个 }（加 --close-eof 可自动补齐）' % end_depth)
                             if end_depth > 0 else
                             '开头多 %d 个 }' % (-end_depth)})

            if bad:
                report['manual'].append({
                    'file': rel, 'reason': '右括号行含其他内容，需人工',
                    'lines': bad, 'end_depth': end_depth})

    os.makedirs(os.path.dirname(args.out) or '.', exist_ok=True)
    with open(args.out, 'w', encoding='utf-8') as f:
        json.dump({'scanned': nfiles, 'applied': args.apply,
                   'fixed': report['fixed'], 'manual': report['manual'],
                   'unbalanced': report['unbalanced'],
                   'closed': report['closed']},
                  f, ensure_ascii=False, indent=1)

    nf = len(report['fixed'])
    nsite = sum(len(x['lines']) for x in report['fixed'])
    print('%s: %d 个文件 / %d 处多余的 }' %
          ('已删除' if args.apply else '待修', nf, nsite))
    print('需人工: %d 个文件' % len(report['manual']))
    print('末尾补齐: %d 个文件' % len(report['closed']))
    print('仍不平衡: %d 个文件' % len(report['unbalanced']))
    for x in report['fixed'][:10]:
        print('  %-46s L%s' % (x['file'][-46:], ','.join(map(str, x['lines']))))
    for x in report['manual'][:10]:
        print('  [人工] %-40s %s L%s' % (x['file'][-40:], x['reason'],
                                         ','.join(map(str, x['lines'][:5]))))
    return 0


if __name__ == '__main__':
    sys.exit(main())
