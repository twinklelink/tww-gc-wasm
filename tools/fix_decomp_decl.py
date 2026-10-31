#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""解注释反编译产物里「被注释掉的变量声明」。

背景
----
与 fix_decomp_braces.py 同源的另一类反编译器产物：声明被注释掉，**使用还在**。

    /* int result = callList[i].field_0x0(x); */     ← 声明被注释
    if (result == -1) {                               ← 使用还在
        ...
    }

    /* JUtility::TColor local_b8 = field_0x8; */
    local_b8.a = local_b8.a * param_6 / 0xff;

结果：`'result' was not declared in this scope`。
CI 剩余失败里这类占了相当比例（集中在 JSystem/JAudio、JAZelAudio）。

做法
----
匹配整行注释中的声明 `/* <类型> <标识符> = ...; */`，
且该标识符在文件别处确有使用（否则解出来只是个没用的变量），
然后解注释。

保守措施：
  - 只处理**整行**注释（行内注释不动，那种多半是真的说明文字）
  - 类型必须是可识别的形态（基础类型 / 限定名 / 指针），不认关键字
  - 标识符必须在文件别处出现（证明真的被用了）

用法
----
    python3 tools/fix_decomp_decl.py --src tww-decomp-src
    python3 tools/fix_decomp_decl.py --src ... --apply --out docs/decl_fixed.json
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

# 整行注释里的声明：<类型> <标识符> [= 初值];
# 类型：基础类型 / A::B 限定名 / 带 * 或 &
RX_DECL = re.compile(
    r'^(?P<indent>\s*)/\*\s+'
    r'(?P<type>(?:const\s+)?[A-Za-z_][A-Za-z0-9_]*(?:::[A-Za-z_][A-Za-z0-9_]*)*\s*[*&]?\s+)'
    r'(?P<name>[A-Za-z_]\w*)\s*'
    r'(?P<init>=[^;]*)?;\s*\*/\s*$')

# 一眼就不是类型名的东西，避免把 `/* return x; */` 之类误判成声明
NOT_TYPE = {
    'return', 'if', 'for', 'while', 'switch', 'case', 'else', 'do', 'goto',
    'break', 'continue', 'delete', 'new', 'this', 'sizeof', 'typedef',
    'struct', 'class', 'enum', 'union', 'template', 'typename', 'using',
    'namespace', 'public', 'private', 'protected', 'virtual', 'inline',
    'static', 'extern', 'const_cast', 'static_cast', 'reinterpret_cast',
}


def strip_comments(text):
    """去掉注释后的文本，只用来判断标识符是否真的被使用"""
    out = []
    i = 0
    n = len(text)
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


def skip(path):
    p = path.replace('\\', '/')
    return any(d in p for d in SKIP_DIRS) or os.path.basename(p) in SKIP_FILES


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--src', default='tww-decomp-src')
    ap.add_argument('--apply', action='store_true')
    ap.add_argument('--out', default='../../reports/decl_fixed.json')
    args = ap.parse_args()

    if not os.path.isdir(args.src):
        sys.stderr.write('源码目录不存在: %s\n' % args.src)
        return 2

    fixed = []
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

            code = strip_comments(''.join(lines))
            hits = []
            for i, line in enumerate(lines):
                m = RX_DECL.match(line.rstrip('\n'))
                if not m:
                    continue
                ty = m.group('type').strip().rstrip('*&').strip()
                if ty in NOT_TYPE:
                    continue
                name = m.group('name')
                # 标识符必须在真正的代码里被用到，否则解出来是个没用的变量
                if len(re.findall(r'\b' + re.escape(name) + r'\b', code)) < 1:
                    continue
                hits.append((i, m))

            if not hits:
                continue

            rel = os.path.relpath(path, args.src).replace('\\', '/')
            for i, m in hits:
                lines[i] = '%s%s%s%s;\n' % (
                    m.group('indent'), m.group('type'), m.group('name'),
                    (' ' + m.group('init').strip()) if m.group('init') else '')
            fixed.append({'file': rel, 'n': len(hits),
                          'names': [m.group('name') for _i, m in hits]})
            if args.apply:
                with open(path, 'w', encoding='utf-8') as f:
                    f.writelines(lines)

    os.makedirs(os.path.dirname(args.out) or '.', exist_ok=True)
    with open(args.out, 'w', encoding='utf-8') as f:
        json.dump({'scanned': nfiles, 'applied': args.apply,
                   'files': len(fixed),
                   'sites': sum(x['n'] for x in fixed), 'detail': fixed},
                  f, ensure_ascii=False, indent=1)

    print('%s: %d 个文件 / %d 处被注释的声明' %
          ('已解注释' if args.apply else '待修',
           len(fixed), sum(x['n'] for x in fixed)))
    for x in fixed[:10]:
        print('  %-44s %s' % (x['file'][-44:], ','.join(x['names'][:6])))
    return 0


if __name__ == '__main__':
    sys.exit(main())
