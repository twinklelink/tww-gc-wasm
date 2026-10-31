/**
 * GameResourceLoader.cpp
 * 游戏资源文件加载器实现
 * 
 * 重要声明：
 * - 用户需要自行合法获取游戏镜像文件（如从自己拥有的游戏光盘中提取）
 * - 本代码仅用于研究、教育和存档保护目的
 * - 使用本代码前，请确保您拥有合法的游戏副本
 * - 请勿将本代码与游戏资源文件一起分发
 * 
 * 使用说明：
 * 1. 从合法拥有的游戏光盘中提取文件到本地目录
 *    推荐使用 Dolphin 模拟器或 GCut 等工具提取
 * 2. 在程序启动时调用 GlobalResourceLoader::initialize()
 * 3. 使用 GlobalResourceLoader::get() 获取加载器实例
 * 4. 通过 loadResource() 加载游戏中的资源文件
 */

#include "GameResourceLoader.h"
#include <filesystem>
#include <algorithm>
#include <map>
#include <cstring>

namespace fs = std::filesystem;

// ============================================================================
// ExtractedFileSystemLoader 实现
// ============================================================================

ExtractedFileSystemLoader::ExtractedFileSystemLoader(const std::string& basePath)
    : mBasePath(basePath)
{
    // 确保路径末尾没有分隔符
    while (!mBasePath.empty() && (mBasePath.back() == '/' || mBasePath.back() == '\\')) {
        mBasePath.pop_back();
    }
}

std::string ExtractedFileSystemLoader::getFullPath(const std::string& gamePath) const {
    // 将游戏内路径转换为本地文件系统路径
    // 游戏路径格式: /res/Actor/d_a_link.arc
    // 本地路径格式: basePath/res/Actor/d_a_link.arc
    
    std::string relativePath = gamePath;
    
    // 去掉开头的斜杠
    if (!relativePath.empty() && (relativePath[0] == '/' || relativePath[0] == '\\')) {
        relativePath = relativePath.substr(1);
    }
    
    return mBasePath + "/" + relativePath;
}

bool ExtractedFileSystemLoader::loadResource(const std::string& path, std::vector<uint8_t>& outData) {
    std::string fullPath = getFullPath(path);
    
    std::ifstream file(fullPath, std::ios::binary | std::ios::ate);
    if (!file.is_open()) {
        return false;
    }
    
    std::streamsize size = file.tellg();
    file.seekg(0, std::ios::beg);
    
    if (size <= 0) {
        return false;
    }
    
    outData.resize(static_cast<size_t>(size));
    if (!file.read(reinterpret_cast<char*>(outData.data()), size)) {
        return false;
    }
    
    return true;
}

bool ExtractedFileSystemLoader::resourceExists(const std::string& path) {
    std::string fullPath = getFullPath(path);
    return fs::exists(fullPath);
}

size_t ExtractedFileSystemLoader::getResourceSize(const std::string& path) {
    std::string fullPath = getFullPath(path);
    
    if (!fs::exists(fullPath)) {
        return 0;
    }
    
    return static_cast<size_t>(fs::file_size(fullPath));
}

// ============================================================================
// ISOLoader 实现（基础框架）
// ============================================================================
// 
// 注意：完整的 GameCube ISO 读取需要实现以下功能：
// 1. 解析 ISO 9660 文件系统或 GameCube 专有的 DVD 文件系统
// 2. 读取分区表和文件分配表
// 3. 处理 GameCube 特有的压缩格式（如 .arc/.szs 文件）
//
// 推荐使用现有的开源实现：
// - libdol (GameCube 系统库的开源实现)
// - Dolphin 模拟器的文件系统代码
// - GCN-SDK 的工具链
//
// 以下为框架代码，需要补充完整的 ISO 解析逻辑

ISOLoader::ISOLoader(const std::string& isoPath)
    : mIsoPath(isoPath)
{
    mIsoFile.open(isoPath, std::ios::binary);
}

ISOLoader::~ISOLoader() {
    if (mIsoFile.is_open()) {
        mIsoFile.close();
    }
}

bool ISOLoader::findFileInISO(const std::string& path, ISOFileInfo& outInfo) {
    // TODO: 实现 GameCube DVD 文件系统解析
    // 需要读取 ISO 的文件分配表并查找指定路径
    // 
    // GameCube DVD 文件系统关键偏移：
    // - 0x0000: 游戏头（游戏ID、磁盘编号等）
    // - 0x0420: 文件系统的根目录偏移
    // - 分区表通常在 0x00010000 之后
    //
    // 参考资源：
    // - yaboot/gc-linux 项目的 DVD 文件系统驱动
    // - Dolphin 模拟器的 DiscUtils 模块
    
    (void)path;
    (void)outInfo;
    return false; // 未实现
}

bool ISOLoader::loadResource(const std::string& path, std::vector<uint8_t>& outData) {
    if (!mIsoFile.is_open()) {
        return false;
    }
    
    ISOFileInfo info;
    if (!findFileInISO(path, info)) {
        return false;
    }
    
    outData.resize(info.size);
    mIsoFile.seekg(info.offset);
    if (!mIsoFile.read(reinterpret_cast<char*>(outData.data()), info.size)) {
        return false;
    }
    
    return true;
}

bool ISOLoader::resourceExists(const std::string& path) {
    ISOFileInfo info;
    return findFileInISO(path, info);
}

size_t ISOLoader::getResourceSize(const std::string& path) {
    ISOFileInfo info;
    if (!findFileInISO(path, info)) {
        return 0;
    }
    return info.size;
}

// ============================================================================
// ResourceCache 实现
// ============================================================================

ResourceCache::ResourceCache(std::shared_ptr<GameResourceLoader> loader)
    : mLoader(loader)
{
}

bool ResourceCache::getResource(const std::string& path, std::vector<uint8_t>& outData) {
    // 检查缓存
    auto it = mCache.find(path);
    if (it != mCache.end()) {
        outData = it->second;
        return true;
    }
    
    // 从加载器加载
    if (!mLoader->loadResource(path, outData)) {
        return false;
    }
    
    // 存入缓存（如果不超过限制）
    size_t dataSize = outData.size();
    if (mCacheSize + dataSize <= mCacheLimit) {
        mCache[path] = outData;
        mCacheSize += dataSize;
    }
    
    return true;
}

void ResourceCache::clearCache() {
    mCache.clear();
    mCacheSize = 0;
}

void ResourceCache::setCacheLimit(size_t maxBytes) {
    mCacheLimit = maxBytes;
    
    // 如果当前缓存超过新限制，清除最旧的条目
    while (mCacheSize > mCacheLimit && !mCache.empty()) {
        auto oldest = mCache.begin();
        mCacheSize -= oldest->second.size();
        mCache.erase(oldest);
    }
}

// ============================================================================
// GlobalResourceLoader 实现
// ============================================================================

namespace GlobalResourceLoader {

static std::shared_ptr<GameResourceLoader> gLoader;
static std::unique_ptr<ResourceCache> gCache;

bool initialize(const std::string& basePath, bool useISO) {
    shutdown(); // 先清理旧的
    
    if (useISO) {
        gLoader = std::make_shared<ISOLoader>(basePath);
    } else {
        gLoader = std::make_shared<ExtractedFileSystemLoader>(basePath);
    }
    
    gCache = std::make_unique<ResourceCache>(gLoader);
    
    return true;
}

std::shared_ptr<GameResourceLoader> get() {
    return gLoader;
}

void shutdown() {
    gCache.reset();
    gLoader.reset();
}

} // namespace GlobalResourceLoader
