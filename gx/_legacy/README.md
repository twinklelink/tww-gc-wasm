# 遗留代码（不参与编译）

`gx_translate.cpp` / `gx_translate.h` 是早期版本的 GX 翻译层，
与现行的 `gx2gl.cpp`（记录式命令流）**功能重复但枚举冲突**：

- 它的 `enum GXOp` 编号与 `gx2gl.h` 的 `GX2GLOp` 完全不同
- 两者的 `GXState` 结构体同名不同义

任一文件被加进编译都会引起重复符号或枚举冲突。
CI 的源文件扫描只取 `gx/*.cpp` 顶层，移进本目录后不会被扫到。

**不要加回编译。** 现行实现是 `gx2gl.cpp` + `gx2gl.js`。
