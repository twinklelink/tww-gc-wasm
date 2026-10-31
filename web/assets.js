/* 资源加载器 —— 网页根目录直连版
 *
 * 资源包解压到网页根目录后，实际路径是：
 *   models_gltf/Object/Aana/bdl/aana.gltf      模型（+ 同名 .bin / _tex0.png）
 *   texture_png/...                            独立纹理
 *   anims_json/...                             骨骼动画（3367 个）
 *   anim_extra/Object/Ac/btp/komari.json       材质/纹理动画
 *   audio/mp3/1tale.mp3                        音频
 *   raw_stage/unpacked/Object/Ajav/dzb/ajav.dzb   ← 这层多一个 unpacked/
 *   raw_extra/unpacked/Msg/dmapres/scrn/...       ← 同样多一个
 *   text_cn/messages.json
 * 层级不统一（有的多 unpacked/，有的没有；png 同时散在 models_gltf 和
 * texture_png 两个目录），硬编码路径必 404。
 * 所以一律走 assets_manifest.json：先 init()，再用 url() / list()。
 *
 * 用法：
 *   await Assets.init();                       // 站点根目录
 *   await Assets.init('/tww/');                // 部署在子路径时
 *
 *   // 传包内相对路径（不含顶层目录）—— url() 会拼上该类别的主目录
 *   Assets.url('dzb', 'Object/Ajav/dzb/ajav.dzb')
 *     -> 'raw_stage/unpacked/Object/Ajav/dzb/ajav.dzb'
 *
 *   // 传完整路径（含顶层目录）—— 直接返回，不再拼接
 *   Assets.url('dzb', 'raw_stage/unpacked/Object/Ajav/dzb/ajav.dzb')
 *     -> 'raw_stage/unpacked/Object/Ajav/dzb/ajav.dzb'
 *
 *   Assets.list('gltf')                        // 全部模型的完整路径
 *   const cn = await Assets.messages();        // 中文文本 {id: text}
 */
'use strict';
var Assets = (function () {
  /* manifest 缺失时的兜底：与 build_manifest.py 的 PACK_ROOTS 保持一致 */
  var DEFAULT_ROOTS = {
    anim_extra: 'anim_extra',
    raw_extra: 'raw_extra/unpacked',
    raw_stage: 'raw_stage/unpacked',
    text_cn: 'text_cn'
  };
  var DEFAULT_DIRS = {
    btp: 'anim_extra', btk: 'anim_extra', brk: 'anim_extra',
    blo: 'raw_extra/unpacked', stb: 'raw_extra/unpacked',
    bpk: 'raw_extra/unpacked', bfn: 'raw_extra/unpacked',
    dzb: 'raw_stage/unpacked', dzr: 'raw_stage/unpacked',
    dzs: 'raw_stage/unpacked', bmt: 'raw_stage/unpacked',
    dat: 'raw_stage/unpacked', bin: 'raw_stage/unpacked'
  };

  var base = '';
  var manifest = null;
  var cache = {};

  function join(a, b) {
    if (!a) return b;
    return a.charAt(a.length - 1) === '/' ? a + b : a + '/' + b;
  }

  /* 取文本，优先用预压缩的 .gz。
     背景：tools/compress_web.py 生成 .gz，把 2.05 MB 的索引+文本压到 269 KB。
     但静态服务器（GitHub Pages 等）不会对预压缩文件自动加 Content-Encoding，
     所以这里用 DecompressionStream 手动解压。
     没有 .gz 或浏览器不支持时自动回退未压缩版本——两条路都能工作。 */
  function fetchText(rel) {
    var url = join(base, rel);
    function plain() {
      return fetch(url).then(function (r) {
        if (!r.ok) throw new Error(rel + ' HTTP ' + r.status);
        return r.text();
      });
    }
    if (typeof DecompressionStream === 'undefined') return plain();
    return fetch(url + '.gz').then(function (r) {
      if (!r.ok) throw new Error(r.status);
      return new Response(r.body.pipeThrough(new DecompressionStream('gzip'))).text();
    }).catch(plain);
  }

  function parseManifest(text) {
    return JSON.parse(text);
  }

  /* 加载索引。默认只取精简版（约 3 KB，只有类别统计）；
     完整的逐文件清单（1.55 MB，gzip 后 124 KB）等真的要用 list() 时再拉。
     首屏不必为"可能用到"的清单买单。 */
  function init(prefix, options) {
    base = prefix || '';
    options = options || {};
    var name = options.full ? 'assets_manifest.json' : 'assets_manifest_lite.json';
    return fetchText(name)
      .then(parseManifest)
      .catch(function () {
        /* 精简版可能不存在（旧部署），退回完整版 */
        return fetchText('assets_manifest.json');
      })
      .then(function (m) { manifest = m; cache = {}; return m; })
      .catch(function (e) {
        console.warn('[assets] manifest 加载失败，使用默认路径:', e);
        manifest = null;
        return null;
      });
  }

  /* 按需加载完整清单。list() 需要它；dir()/url()/count() 不需要。 */
  var fullPromise = null;
  function loadFull() {
    if (manifest && manifest.files) return Promise.resolve(manifest);
    if (fullPromise) return fullPromise;
    fullPromise = fetchText('assets_manifest.json')
      .then(parseManifest)
      .then(function (m) {
        if (manifest) { manifest.files = m.files; }
        else { manifest = m; }
        return manifest;
      })
      .catch(function (e) {
        console.warn('[assets] 完整清单加载失败:', e);
        fullPromise = null;
        return manifest;
      });
    return fullPromise;
  }

  /* list 的异步版本：先确保完整清单到位再返回 */
  function listAsync(category) {
    return loadFull().then(function () { return list(category); });
  }

  function ready() {
    if (!manifest) throw new Error('[assets] 请先 await Assets.init()');
  }

  /* 类别所在的根目录，如 'raw_stage/unpacked' */
  function dir(category) {
    if (manifest) {
      var c = manifest.categories[category];
      if (c) return c.dir;
    }
    return DEFAULT_DIRS[category] || '';
  }

  /* 拼出可直接 fetch 的相对 URL。
     rel 可能是两种形态：
       - 包内相对路径 'Object/Ajav/dzb/ajav.dzb'  -> 拼上类别主目录
       - 完整路径     'raw_stage/unpacked/...'    -> 直接用
     用 topDirs 判断属于哪种，避免同一扩展名散在多个顶层目录时拼错。 */
  function url(category, rel) {
    if (manifest && manifest.topDirs && rel) {
      var top = rel.split('/')[0];
      if (manifest.topDirs.indexOf(top) >= 0) return rel;   // 已是完整路径
    }
    return join(dir(category), rel);
  }

  /* 绝对 URL（含 base 前缀） */
  function fullUrl(category, rel) {
    return join(base, url(category, rel));
  }

  /* 该类别下的全部文件（包内相对路径） */
  function list(category) {
    if (manifest && manifest.files && manifest.files[category]) {
      return manifest.files[category].slice();
    }
    return [];
  }

  function categories() {
    return manifest ? Object.keys(manifest.categories) : Object.keys(DEFAULT_DIRS);
  }

  function count(category) {
    if (manifest) {
      var c = manifest.categories[category];
      if (c) return c.count;
    }
    return list(category).length;
  }

  /* 按扩展名猜类别，避免调用方记类别名 */
  function categoryOf(rel) {
    var ext = (rel.split('.').pop() || '').toLowerCase();
    if (manifest) {
      var c = manifest.categories[ext];
      if (c) return ext;
    }
    return DEFAULT_DIRS[ext] ? ext : null;
  }

  function fetchJson(category, rel) {
    return fetch(fullUrl(category, rel)).then(function (r) { return r.json(); });
  }

  function fetchBinary(category, rel) {
    return fetch(fullUrl(category, rel)).then(function (r) { return r.arrayBuffer(); });
  }

  /* 中文文本。manifest 里记录了实际文件名，兼容根目录与 text_cn/ 两种放法 */
  function messages() {
    if (cache.messages) return Promise.resolve(cache.messages);
    var path = manifest && manifest.messages && manifest.messages.cn
      ? manifest.messages.cn : 'messages.json';
    var p = fetchText(path)
      .then(parseManifest)
      .then(function (m) { cache.messages = m; return m; });
    /* 根目录没有就退回 text_cn/ */
    return p.catch(function () {
      return fetchText('text_cn/messages.json').then(parseManifest);
    });
  }

  return {
    init: init, loadFull: loadFull,
    dir: dir, url: url, fullUrl: fullUrl,
    list: list, listAsync: listAsync,
    categories: categories, count: count, categoryOf: categoryOf,
    fetchJson: fetchJson, fetchBinary: fetchBinary, fetchText: fetchText,
    messages: messages,
    roots: function () { return manifest ? manifest.roots : DEFAULT_ROOTS; },
    raw: function () { return manifest; }
  };
})();

if (typeof module !== 'undefined' && module.exports) { module.exports = Assets; }
