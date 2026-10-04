#pragma once
#include "fate/dual.hpp"
#include "fate/formats/tim2.hpp"
#include <functional>
#include <memory>
#include <stdexcept>

namespace fate::runtime {
enum class ErrorCode { not_found, source_mismatch, out_of_bounds, io_error, integrity_mismatch,
    unsupported_format, invalid_format, budget_exceeded, cancelled };
class Error : public std::runtime_error {
public:
    Error(ErrorCode error_code, const std::string& message) : std::runtime_error(message), code(error_code) {}
    ErrorCode code;
};
using Bytes = std::vector<std::byte>;
using Buffer = std::shared_ptr<const Bytes>;
using Cancel = std::function<bool()>;
using Key = dual::ResourceKey;
using SourceId = dual::ContentSourceId;
using Mappings = std::map<std::string, Key>;
enum class Trust { metadata_only, precomputed_attestation, full_hash };
struct SourceSpec {
    dual::ContentSource source;
    std::vector<dual::ResourceLocator> locators;
    std::string attestation;
};
struct RegisteredSource {
    SourceSpec spec;
    std::filesystem::path root;
    std::filesystem::path archive;
    std::filesystem::file_time_type modified;
    Trust trust{};
};
class RuntimeSourceRegistry {
public:
    // expected is an independently pinned identity, never inferred from a display label.
    void add(SourceSpec spec, const dual::ContentSource& expected,
        const std::filesystem::path& root, Trust trust);
    [[nodiscard]] const RegisteredSource& source(const SourceId& id) const;
    [[nodiscard]] const dual::ResourceLocator& locator(const Key& key) const;
    [[nodiscard]] const std::map<SourceId, RegisteredSource>& sources() const noexcept { return sources_; }
private:
    std::map<SourceId, RegisteredSource> sources_;
};
struct MountSnapshot {
    std::uint64_t generation{};
    RuntimeSourceRegistry registry;
    Mappings mappings;
    std::vector<dual::ExternalDependency> dependencies;
};
struct ReadMetrics { std::uint64_t reads{}, bytes{}; };
[[nodiscard]] std::filesystem::path contained_path(const std::filesystem::path& root,
    const std::filesystem::path& relative);
class BoundedByteSource {
public:
    explicit BoundedByteSource(const std::filesystem::path& path);
    [[nodiscard]] Bytes read(std::uint64_t offset, std::uint64_t count,
        std::uint64_t max_bytes, const Cancel& cancel = {}) const;
    [[nodiscard]] std::uint64_t size() const noexcept { return size_; }
    [[nodiscard]] ReadMetrics metrics() const noexcept { return metrics_; }
    void unchanged() const;
private:
    std::filesystem::path path_;
    std::uint64_t size_{};
    std::filesystem::file_time_type modified_;
    mutable ReadMetrics metrics_;
};
class ResourceView {
public:
    ResourceView(std::shared_ptr<const BoundedByteSource> source, std::uint64_t base, std::uint64_t length,
        std::vector<std::uint32_t> child_path = {});
    [[nodiscard]] ResourceView slice(std::uint64_t offset, std::uint64_t length, std::uint32_t child) const;
    [[nodiscard]] Bytes read(std::uint64_t offset, std::uint64_t count, std::uint64_t max_bytes,
        const Cancel& cancel = {}) const;
    [[nodiscard]] std::uint64_t size() const noexcept { return length_; }
    [[nodiscard]] std::uint64_t base() const noexcept { return base_; }
    [[nodiscard]] const std::vector<std::uint32_t>& child_path() const noexcept { return child_path_; }
    [[nodiscard]] ReadMetrics metrics() const noexcept { return source_->metrics(); }
    void unchanged() const { source_->unchanged(); }
private:
    std::shared_ptr<const BoundedByteSource> source_;
    std::uint64_t base_{}, length_{};
    std::vector<std::uint32_t> child_path_;
};
struct ResourceHandle {
    std::shared_ptr<const MountSnapshot> snapshot;
    Key key;
    ResourceView view;
};
struct CacheMetrics { std::uint64_t hits{}, misses{}, evictions{}, resident{}; };
class LruCache {
public:
    explicit LruCache(std::uint64_t budget) : budget_(budget) {}
    [[nodiscard]] Buffer get(const std::string& key, std::uint64_t result_size,
        std::uint64_t workspace, const std::function<Bytes()>& load);
    [[nodiscard]] CacheMetrics metrics() const noexcept { return metrics_; }
    [[nodiscard]] std::uint64_t budget() const noexcept { return budget_; }
private:
    struct Entry { Buffer bytes; std::uint64_t tick{}; };
    std::map<std::string, Entry> entries_;
    std::uint64_t budget_{}, clock_{};
    CacheMetrics metrics_;
    void make_room(std::uint64_t bytes);
};
struct Frame { std::uint64_t offset{}, extent{}; formats::tim2::Header header; };
enum class CompressionState { not_compressed, codec_identified, unknown, invalid };
class CompressionRegistry {
public:
    [[nodiscard]] static CompressionState inspect(std::span<const std::byte> prefix);
    // No proprietary codec is currently demonstrated. Unknown profiles always fail closed.
    static void require_supported(std::string_view codec);
};
class SubarchiveReader {
public:
    // Explicit profile only: little-endian count + count lengths in 16-byte units,
    // 16-aligned zero-padded header and contiguous children covering the entire payload.
    [[nodiscard]] static std::vector<ResourceView> length16(const ResourceView& parent,
        std::uint32_t max_children = 4096, std::uint32_t max_depth = 8);
};
struct Image {
    std::uint16_t width{}, height{};
    // RGBAs followed by raw alpha; same allocation and cache budget for both.
    Buffer pixels;
    [[nodiscard]] std::span<const std::byte> rgba() const;
    [[nodiscard]] std::span<const std::byte> raw_alpha() const;
    formats::tim2::Header header;
};
class RuntimeResourceService {
public:
    explicit RuntimeResourceService(std::uint64_t budget);
    void publish(const RuntimeSourceRegistry& registry, Mappings mappings,
        std::span<const dual::MountOverlay> overlays = {}, const Cancel& cancel = {},
        const dual::ExternalDependencyManifest* dependencies = nullptr);
    void publish(const RuntimeSourceRegistry& registry, const dual::MergedMount& mount);
    [[nodiscard]] ResourceHandle open(const Key& key) const;
    [[nodiscard]] ResourceHandle open(std::string_view symbol) const;
    [[nodiscard]] Buffer raw(const ResourceHandle& handle, std::uint64_t offset,
        std::uint64_t count, const Cancel& cancel = {});
    [[nodiscard]] std::vector<Frame> frames(const ResourceHandle& handle);
    [[nodiscard]] Image decode(const ResourceHandle& handle, std::size_t frame, const Cancel& cancel = {});
    [[nodiscard]] std::shared_ptr<const MountSnapshot> snapshot() const noexcept { return active_; }
    [[nodiscard]] CacheMetrics cache_metrics() const noexcept { return cache_.metrics(); }
private:
    std::shared_ptr<const MountSnapshot> active_;
    LruCache cache_;
    std::map<std::string, std::vector<Frame>> frames_;
    [[nodiscard]] std::string cache_key(const ResourceHandle& handle) const;
};
}
