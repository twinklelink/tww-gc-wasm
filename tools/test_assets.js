/* 资源路径端到端验证
 *
 * 模拟"资源包解压到网页根目录后前端按 manifest 拼路径去 fetch"：
 *   url = base + dir + '/' + rel
 * 逐个类别抽样检查文件是否真实存在，并把 messages.json 也解析一遍。
 *
 * 跑法：
 *   cd source/GitHub
 *   python3 ../../tools/build_manifest.py --webroot /tmp/webroot \
 *       --out web/assets_manifest.json
 *   node tools/test_assets.js /tmp/webroot web/assets_manifest.json
 */
'use strict';
const fs = require('fs');
const path = require('path');

const root = process.argv[2] || '/tmp/webroot';
const mfPath = process.argv[3] ||
  path.join(__dirname, '..', 'web', 'assets_manifest.json');

const manifest = JSON.parse(fs.readFileSync(mfPath, 'utf8'));

/* --- 最小 fetch mock：把 URL 映射到本地文件。
   manifest 单独从 mfPath 读（它还没被复制进 webroot），
   其余按 base + dir + rel 映射到真实解压目录 --- */
global.fetch = (url) => {
  const rel = url.replace(/^\//, '');
  if (rel === 'assets_manifest.json') {
    return Promise.resolve({
      ok: true,
      json: () => Promise.resolve(JSON.parse(fs.readFileSync(mfPath, 'utf8'))),
      arrayBuffer: () => Promise.resolve(fs.readFileSync(mfPath)),
    });
  }
  const full = path.join(root, rel);
  return new Promise((res, rej) => {
    fs.readFile(full, (err, data) => {
      if (err) return rej(new Error('404 ' + url));
      res({
        ok: true,
        json: () => Promise.resolve(JSON.parse(data.toString('utf8'))),
        arrayBuffer: () => Promise.resolve(data),
      });
    });
  });
};

const Assets = require(path.join(__dirname, '..', 'web', 'assets.js'));

let fail = 0;
const check = (name, ok, detail) => {
  console.log((ok ? '  PASS  ' : '  FAIL  ') + name + (detail ? '   ' + detail : ''));
  if (!ok) fail++;
};

Assets.init('').then(() => {
  const cats = Assets.categories();
  console.log('categories: %d, root=%s', cats.length, root);

  /* 每个类别抽前 3 个文件，验证 dir + rel 能命中真实文件 */
  let checked = 0, missing = [];
  cats.forEach((c) => {
    const rels = Assets.list(c).slice(0, 3);
    rels.forEach((rel) => {
      const u = Assets.url(c, rel);
      const full = path.join(root, u);
      checked++;
      if (!fs.existsSync(full)) missing.push(u);
    });
  });
  check('所有类别抽样路径均可命中真实文件', missing.length === 0,
        missing.length ? missing.slice(0, 3).join(' | ') : '%d 个路径'.replace('%d', checked));

  /* 具体类别的 dir 是否符合预期 */
  check('dzb 落在 raw_stage/unpacked', Assets.dir('dzb') === 'raw_stage/unpacked',
        Assets.dir('dzb'));
  check('btp 落在 anim_extra', Assets.dir('btp') === 'anim_extra', Assets.dir('btp'));
  check('blo 落在 raw_extra/unpacked', Assets.dir('blo') === 'raw_extra/unpacked',
        Assets.dir('blo'));

  /* 真实文件拼 URL */
  const u = Assets.url('dzb', 'Object/Ajav/dzb/ajav.dzb');
  check('dzb 单文件 URL 存在', fs.existsSync(path.join(root, u)), u);

  /* 计数与清单长度一致 */
  const bad = cats.filter((c) => Assets.count(c) !== Assets.list(c).length);
  check('类别计数与清单长度一致', bad.length === 0, bad.join(','));

  /* 中文文本 */
  return Assets.messages().then((m) => {
    const n = Object.keys(m).length;
    check('messages.json 可解析且非空', n > 3000, 'keys=' + n);
    const hasWand = Object.values(m).some((v) => v && String(v).includes('风之杖'));
    const hasRhythm = Object.values(m).some((v) => v && String(v).includes('风之律动'));
    check('术语已统一为风之律动', !hasWand && hasRhythm,
          '风之杖=' + hasWand + ' 风之律动=' + hasRhythm);
    if (fail === 0) console.log('\nALL PASS');
    else console.log('\n%d FAILED', fail);
    process.exit(fail === 0 ? 0 : 1);
  });
}).catch((e) => {
  console.error('FATAL', e);
  process.exit(1);
});
