# The Wind Waker — 现代工具链全量编译

## 结构
```
.github/workflows/build.yml   CI 构建流程
core/                          WASM 核心 C 源码 (platform/iso/render)
web/                           Web 前端（HTML/CSS/JS, 无资源）
tww-decomp-src/                反编译源码树（可选，用于全量编译游戏本体）
gx/                            GX→GL/Vulkan 转译层
```

## WASM 构建产物
- `core.js` + `core.wasm` — 平台层（内存/输入/存档/ISO/渲染缓冲）
- 资源不打包进 WASM，运行时由 JS 从 IndexedDB/网络加载

## Workflow 权限注意
- `permissions: contents: write` 才能推送构建产物
- GITHUB_TOKEN 已够用，不需要 PAT
