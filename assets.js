/* 资源加载器 —— 网页根目录直连版
 *
 * 资源包解压到网页根目录后，实际路径是：
 *   anim_extra/Object/Ac/btp/komari.json
 *   raw_extra/unpacked/Msg/dmapres/scrn/menu_map_d.blo
 *   raw_stage/unpacked/Object/Ajav/dzb/ajav.dzb
 *   text_cn/messages.json
 *   messages.json            （中文文本，前端直接 fetch 这个）
 * 三个包的层级并不统一（anim_extra 少了 unpacked 一层），硬编码路径必 404。
 * 所以一律走 assets_manifest.json：先 init()，再用 url() 拼路径。
 *
 * 用法：
 *   await Assets.init();                       // 站点根目录
 *   await Assets.init('/tww/');                // 部署在子路径时
 *   Assets.url('dzb', 'Object/Ajav/dzb/ajav.dzb')
 *     -> 'raw_stage/unpacked/Object/Ajav/dzb/ajav.dzb'
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

  /* 加载索引。失败不抛异常：退化为默认 root，保证页面还能起来 */
  function init(prefix) {
    base = prefix || '';
    var p = fetch(join(base, 'assets_manifest.json'))
      .then(function (r) { return r.json(); })
      .then(function (m) { manifest = m; cache = {}; return m; })
      .catch(function (e) {
        console.warn('[assets] manifest 加载失败，使用默认路径:', e);
        manifest = null;
        return null;
      });
    return p;
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

  /* 拼出可直接 fetch 的相对 URL */
  function url(category, rel) {
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
    var p = fetch(join(base, path))
      .then(function (r) { return r.json(); })
      .then(function (m) { cache.messages = m; return m; });
    /* 根目录没有就退回 text_cn/ */
    return p.catch(function () {
      return fetch(join(base, 'text_cn/messages.json')).then(function (r) { return r.json(); });
    });
  }

  return {
    init: init,
    dir: dir, url: url, fullUrl: fullUrl,
    list: list, categories: categories, count: count, categoryOf: categoryOf,
    fetchJson: fetchJson, fetchBinary: fetchBinary,
    messages: messages,
    roots: function () { return manifest ? manifest.roots : DEFAULT_ROOTS; },
    raw: function () { return manifest; }
  };
})();

if (typeof module !== 'undefined' && module.exports) { module.exports = Assets; }
