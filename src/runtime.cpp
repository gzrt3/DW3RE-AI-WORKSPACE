#include "fate/runtime.hpp"
#include "fate/provenance.hpp"
#include <algorithm>
#include <fstream>
#include <limits>
#include <sstream>

namespace fate::runtime {
namespace {
[[noreturn]] void fail(ErrorCode code, const char* message) { throw Error(code, message); }
void check_cancel(const Cancel& cancel) { if (cancel && cancel()) fail(ErrorCode::cancelled, "CANCELLED"); }
void bounds(std::uint64_t offset, std::uint64_t count, std::uint64_t size) {
    if (offset > size || count > size - offset) fail(ErrorCode::out_of_bounds, "OUT_OF_BOUNDS");
}
bool hash_valid(const std::string& hash) {
    return hash.size() == 64 && std::all_of(hash.begin(), hash.end(), [](char ch) {
        return (ch >= '0' && ch <= '9') || (ch >= 'a' && ch <= 'f');
    });
}
std::uint32_t u32(std::span<const std::byte> bytes, std::size_t at) {
    bounds(at, 4, bytes.size());
    std::uint32_t value{};
    for (unsigned i = 0; i < 4; ++i) value |= std::to_integer<std::uint32_t>(bytes[at + i]) << (8U * i);
    return value;
}
formats::tim2::Header header(const ResourceView& view, std::uint64_t at) {
    try {
        const auto bytes = view.read(at, 64, 64);
        auto h = formats::tim2::parse(bytes);
        if (h.file.image_count != 1 || h.file.alignment_format != 0 || h.picture.mipmap_count > 1)
            fail(ErrorCode::unsupported_format, "UNSUPPORTED_FORMAT: multiple pictures, alignment or mipmaps");
        bounds(at, h.picture.declared_extent(), view.size());
        return h;
    } catch (const Error&) { throw; }
    catch (const std::exception&) { fail(ErrorCode::invalid_format, "INVALID_FORMAT: TIM2 header"); }
}
void zeros(const ResourceView& view, std::uint64_t offset, std::uint64_t count) {
    // Sector padding is bounded, checked independently of the payload body.
    if (count > 2048) fail(ErrorCode::invalid_format, "INVALID_FORMAT: excess TIM2 padding");
    const auto bytes = view.read(offset, count, 2048);
    if (std::any_of(bytes.begin(), bytes.end(), [](std::byte b) { return b != std::byte{}; }))
        fail(ErrorCode::invalid_format, "INVALID_FORMAT: nonzero padding");
}
}

std::filesystem::path contained_path(const std::filesystem::path& root, const std::filesystem::path& relative) {
    if (relative.empty() || relative.is_absolute() || relative.has_root_name() || relative.has_root_directory())
        fail(ErrorCode::source_mismatch, "SOURCE_MISMATCH: relative path required");
    for (const auto& component : relative)
        if (component == ".." || component.string().find(':') != std::string::npos)
            fail(ErrorCode::source_mismatch, "SOURCE_MISMATCH: traversal or alternate stream");
    std::error_code ec;
    const auto base = std::filesystem::canonical(root, ec);
    if (ec) fail(ErrorCode::io_error, "IO_ERROR: root");
    const auto full = std::filesystem::canonical(base / relative, ec);
    if (ec) fail(ErrorCode::io_error, "IO_ERROR: path");
    const auto mismatch = std::mismatch(base.begin(), base.end(), full.begin(), full.end());
    if (mismatch.first != base.end() || mismatch.second == full.end())
        fail(ErrorCode::source_mismatch, "SOURCE_MISMATCH: path resolves outside root");
    return full;
}

void RuntimeSourceRegistry::add(SourceSpec spec, const dual::ContentSource& expected,
    const std::filesystem::path& root, Trust trust) {
    const auto& s = spec.source;
    if (!(s.id == expected.id) || s.id.region == dual::Region::unknown || s.id.label.empty() ||
        s.elf_sha256 != expected.elf_sha256 || s.bns_sha256 != expected.bns_sha256 ||
        s.elf_size != expected.elf_size || s.bns_size != expected.bns_size ||
        s.descriptor_count != expected.descriptor_count ||
        s.descriptor_table_virtual_address != expected.descriptor_table_virtual_address ||
        s.descriptor_table_sha256 != expected.descriptor_table_sha256 ||
        !hash_valid(s.elf_sha256) || !hash_valid(s.bns_sha256))
        fail(ErrorCode::source_mismatch, "SOURCE_MISMATCH: pinned identity");
    if (sources_.contains(s.id)) fail(ErrorCode::source_mismatch, "SOURCE_MISMATCH: duplicate source");
    if (trust == Trust::precomputed_attestation && spec.attestation.empty())
        fail(ErrorCode::source_mismatch, "SOURCE_MISMATCH: attestation required");
    const auto elf = contained_path(root, s.elf_path);
    const auto archive = contained_path(root, s.bns_path);
    if (std::filesystem::file_size(elf) != s.elf_size || std::filesystem::file_size(archive) != s.bns_size)
        fail(ErrorCode::integrity_mismatch, "INTEGRITY_MISMATCH: size");
    if (trust == Trust::full_hash) {
        if (provenance::fingerprint(elf).sha256 != s.elf_sha256 || provenance::fingerprint(archive).sha256 != s.bns_sha256)
            fail(ErrorCode::integrity_mismatch, "INTEGRITY_MISMATCH: full hash");
    }
    if (spec.locators.size() != s.descriptor_count || s.descriptor_count == 0)
        fail(ErrorCode::invalid_format, "INVALID_FORMAT: locator count");
    std::sort(spec.locators.begin(), spec.locators.end(), [](const auto& a, const auto& b) { return a.key.rid < b.key.rid; });
    for (std::size_t i = 0; i < spec.locators.size(); ++i) {
        const auto& loc = spec.locators[i];
        if (!(loc.key.source == s.id) || loc.key.rid != i || !hash_valid(loc.payload_sha256) ||
            contained_path(root, loc.relative_path) != archive)
            fail(ErrorCode::source_mismatch, "SOURCE_MISMATCH: locator identity");
        bounds(loc.byte_offset, loc.byte_length, s.bns_size);
    }
    const auto id = s.id;
    RegisteredSource registered{std::move(spec), std::filesystem::canonical(root), archive,
        std::filesystem::last_write_time(archive), trust};
    sources_.emplace(id, std::move(registered));
}
const RegisteredSource& RuntimeSourceRegistry::source(const SourceId& id) const {
    const auto it = sources_.find(id);
    if (it == sources_.end()) fail(ErrorCode::source_mismatch, "SOURCE_MISMATCH: unregistered source");
    return it->second;
}
const dual::ResourceLocator& RuntimeSourceRegistry::locator(const Key& key) const {
    const auto& s = source(key.source);
    if (key.rid >= s.spec.locators.size()) fail(ErrorCode::not_found, "NOT_FOUND: RID");
    return s.spec.locators[key.rid];
}

BoundedByteSource::BoundedByteSource(const std::filesystem::path& path) : path_(std::filesystem::canonical(path)),
    size_(std::filesystem::file_size(path_)), modified_(std::filesystem::last_write_time(path_)) {}
void BoundedByteSource::unchanged() const {
    std::error_code ec;
    const auto size = std::filesystem::file_size(path_, ec);
    if (ec || size != size_) fail(ErrorCode::integrity_mismatch, "INTEGRITY_MISMATCH: source size changed");
    const auto time = std::filesystem::last_write_time(path_, ec);
    if (ec || time != modified_) fail(ErrorCode::integrity_mismatch, "INTEGRITY_MISMATCH: source timestamp changed");
}
Bytes BoundedByteSource::read(std::uint64_t offset, std::uint64_t count, std::uint64_t max_bytes, const Cancel& cancel) const {
    check_cancel(cancel); unchanged(); bounds(offset, count, size_);
    if (count > max_bytes || count > std::numeric_limits<std::size_t>::max() ||
        count > static_cast<std::uint64_t>(std::numeric_limits<std::streamsize>::max()) ||
        offset > static_cast<std::uint64_t>(std::numeric_limits<std::streamoff>::max()))
        fail(ErrorCode::budget_exceeded, "BUDGET_EXCEEDED: read");
    std::ifstream input(path_, std::ios::binary);
    if (!input || !input.seekg(static_cast<std::streamoff>(offset))) fail(ErrorCode::io_error, "IO_ERROR: open/seek");
    Bytes bytes(static_cast<std::size_t>(count));
    constexpr std::uint64_t chunk_size = 65536;
    for (std::uint64_t pos = 0; pos < count;) {
        check_cancel(cancel);
        const auto n = std::min(chunk_size, count - pos);
        input.read(reinterpret_cast<char*>(bytes.data() + static_cast<std::size_t>(pos)), static_cast<std::streamsize>(n));
        ++metrics_.reads;
        metrics_.bytes += static_cast<std::uint64_t>(input.gcount());
        if (input.gcount() != static_cast<std::streamsize>(n)) fail(ErrorCode::io_error, "IO_ERROR: short read");
        pos += n;
    }
    unchanged(); return bytes;
}
ResourceView::ResourceView(std::shared_ptr<const BoundedByteSource> source, std::uint64_t base,
    std::uint64_t length, std::vector<std::uint32_t> path) : source_(std::move(source)), base_(base), length_(length), child_path_(std::move(path)) {
    if (!source_) fail(ErrorCode::invalid_format, "INVALID_FORMAT: null source");
    bounds(base_, length_, source_->size());
}
ResourceView ResourceView::slice(std::uint64_t offset, std::uint64_t length, std::uint32_t child) const {
    bounds(offset, length, length_);
    if (child_path_.size() >= 8) fail(ErrorCode::budget_exceeded, "BUDGET_EXCEEDED: nesting");
    if (offset == 0 && length == length_) fail(ErrorCode::invalid_format, "INVALID_FORMAT: self child");
    auto path = child_path_; path.push_back(child);
    return ResourceView(source_, base_ + offset, length, std::move(path));
}
Bytes ResourceView::read(std::uint64_t offset, std::uint64_t count, std::uint64_t budget, const Cancel& cancel) const {
    bounds(offset, count, length_); return source_->read(base_ + offset, count, budget, cancel);
}

void LruCache::make_room(std::uint64_t bytes) {
    if (bytes > budget_) fail(ErrorCode::budget_exceeded, "BUDGET_EXCEEDED: allocation");
    while (metrics_.resident > budget_ - bytes) {
        auto victim = entries_.end();
        for (auto it = entries_.begin(); it != entries_.end(); ++it)
            if (it->second.bytes.use_count() == 1 && (victim == entries_.end() || it->second.tick < victim->second.tick)) victim = it;
        if (victim == entries_.end()) fail(ErrorCode::budget_exceeded, "BUDGET_EXCEEDED: pinned buffers");
        metrics_.resident -= victim->second.bytes->size(); entries_.erase(victim); ++metrics_.evictions;
    }
}
Buffer LruCache::get(const std::string& key, std::uint64_t size, std::uint64_t workspace, const std::function<Bytes()>& load) {
    const auto found = entries_.find(key);
    if (found != entries_.end()) { ++metrics_.hits; found->second.tick = ++clock_; return found->second.bytes; }
    ++metrics_.misses;
    if (workspace > budget_ || size > budget_ - workspace) fail(ErrorCode::budget_exceeded, "BUDGET_EXCEEDED: working set");
    make_room(size + workspace);
    auto bytes = load();
    if (bytes.size() != size) fail(ErrorCode::invalid_format, "INVALID_FORMAT: loader output size");
    auto buffer = std::make_shared<const Bytes>(std::move(bytes));
    // Cap metadata as well, including zero-length entries.
    if (entries_.size() >= 4096) {
        auto victim = entries_.end();
        for (auto it = entries_.begin(); it != entries_.end(); ++it)
            if (it->second.bytes.use_count() == 1 && (victim == entries_.end() || it->second.tick < victim->second.tick)) victim = it;
        if (victim == entries_.end()) fail(ErrorCode::budget_exceeded, "BUDGET_EXCEEDED: cache entries");
        metrics_.resident -= victim->second.bytes->size(); entries_.erase(victim); ++metrics_.evictions;
    }
    entries_.emplace(key, Entry{buffer, ++clock_}); metrics_.resident += size; return buffer;
}

CompressionState CompressionRegistry::inspect(std::span<const std::byte> bytes) {
    if (bytes.size() >= 4 && bytes[0] == std::byte{'T'} && bytes[1] == std::byte{'I'} && bytes[2] == std::byte{'M'} && bytes[3] == std::byte{'2'}) {
        try { (void)formats::tim2::parse(bytes); return CompressionState::not_compressed; }
        catch (const std::exception&) { return CompressionState::invalid; }
    }
    return CompressionState::unknown;
}
void CompressionRegistry::require_supported(std::string_view codec) {
    if (codec != "none") fail(ErrorCode::unsupported_format, "UNSUPPORTED_FORMAT: codec not demonstrated");
}
std::vector<ResourceView> SubarchiveReader::length16(const ResourceView& parent, std::uint32_t max_children, std::uint32_t max_depth) {
    if (parent.child_path().size() >= max_depth) fail(ErrorCode::budget_exceeded, "BUDGET_EXCEEDED: depth");
    const auto count = u32(parent.read(0, 4, 4), 0);
    if (count == 0) fail(ErrorCode::invalid_format, "INVALID_FORMAT: zero children");
    if (count > std::min(max_children, 4096U)) fail(ErrorCode::budget_exceeded, "BUDGET_EXCEEDED: children");
    const std::uint64_t raw_header = 4ULL + 4ULL * count;
    const auto extent = (raw_header + 15U) & ~15ULL;
    const auto bytes = parent.read(0, extent, 16400);
    for (auto i = raw_header; i < extent; ++i)
        if (bytes[static_cast<std::size_t>(i)] != std::byte{}) fail(ErrorCode::invalid_format, "INVALID_FORMAT: header padding");
    std::vector<ResourceView> children;
    std::uint64_t offset = extent;
    for (std::uint32_t i = 0; i < count; ++i) {
        const auto size = 16ULL * u32(bytes, 4U + 4U * i);
        if (size == 0) fail(ErrorCode::invalid_format, "INVALID_FORMAT: empty length16 child");
        children.push_back(parent.slice(offset, size, i)); offset += size;
    }
    if (offset != parent.size()) fail(ErrorCode::invalid_format, "INVALID_FORMAT: length16 does not cover parent");
    return children;
}
std::span<const std::byte> Image::rgba() const { return std::span(*pixels).first(static_cast<std::size_t>(width) * height * 4); }
std::span<const std::byte> Image::raw_alpha() const { return std::span(*pixels).subspan(static_cast<std::size_t>(width) * height * 4); }

RuntimeResourceService::RuntimeResourceService(std::uint64_t budget) : cache_(budget) {}
void RuntimeResourceService::publish(const RuntimeSourceRegistry& registry, Mappings mappings,
    std::span<const dual::MountOverlay> overlays, const Cancel& cancel,
    const dual::ExternalDependencyManifest* dependencies) {
    check_cancel(cancel);
    std::optional<dual::Region> region;
    for (const auto& [id, source] : registry.sources()) {
        if (region && *region != id.region) fail(ErrorCode::source_mismatch, "SOURCE_MISMATCH: mixed regions");
        region = id.region;
        if (std::filesystem::file_size(source.archive) != source.spec.source.bns_size ||
            std::filesystem::last_write_time(source.archive) != source.modified)
            fail(ErrorCode::integrity_mismatch, "INTEGRITY_MISMATCH: changed registered archive");
    }
    for (const auto& overlay : overlays) {
        const auto previous = mappings.find(overlay.logical_symbol_id);
        if (previous == mappings.end() || !(previous->second == overlay.previous)) fail(ErrorCode::source_mismatch, "SOURCE_MISMATCH: overlay predecessor");
        (void)registry.locator(overlay.replacement);
        previous->second = overlay.replacement;
    }
    for (const auto& [symbol, key] : mappings) {
        check_cancel(cancel);
        if (symbol.empty()) fail(ErrorCode::invalid_format, "INVALID_FORMAT: empty symbol");
        (void)registry.locator(key);
    }
    std::vector<dual::ExternalDependency> verified_dependencies;
    if (dependencies) {
        for (const auto& dependency : dependencies->dependencies()) {
            check_cancel(cancel);
            const auto& source = registry.source(dependency.source);
            const auto path = contained_path(source.root, dependency.relative_path);
            if (!hash_valid(dependency.sha256) || std::filesystem::file_size(path) != dependency.size ||
                provenance::fingerprint(path).sha256 != dependency.sha256)
                fail(ErrorCode::integrity_mismatch, "INTEGRITY_MISMATCH: external dependency");
            for (const auto& consumer : dependency.observed_consumers) (void)registry.locator(consumer);
            verified_dependencies.push_back(dependency);
        }
    }
    auto candidate = std::make_shared<MountSnapshot>(MountSnapshot{active_ ? active_->generation + 1 : 1, registry, std::move(mappings), std::move(verified_dependencies)});
    check_cancel(cancel); active_ = std::move(candidate); frames_.clear();
}
void RuntimeResourceService::publish(const RuntimeSourceRegistry& registry, const dual::MergedMount& mount) {
    publish(registry, mount.active_mappings());
}
ResourceHandle RuntimeResourceService::open(const Key& key) const {
    if (!active_) fail(ErrorCode::not_found, "NOT_FOUND: no mount");
    const auto& s = active_->registry.source(key.source);
    const auto& loc = active_->registry.locator(key);
    if (contained_path(s.root, loc.relative_path) != s.archive ||
        std::filesystem::last_write_time(s.archive) != s.modified)
        fail(ErrorCode::integrity_mismatch, "INTEGRITY_MISMATCH: registered source changed");
    auto bytes = std::make_shared<BoundedByteSource>(s.archive);
    if (bytes->size() != s.spec.source.bns_size) fail(ErrorCode::integrity_mismatch, "INTEGRITY_MISMATCH: archive size");
    return {active_, key, ResourceView(std::move(bytes), loc.byte_offset, loc.byte_length)};
}
ResourceHandle RuntimeResourceService::open(std::string_view symbol) const {
    if (!active_) fail(ErrorCode::not_found, "NOT_FOUND: no mount");
    const auto it = active_->mappings.find(std::string(symbol));
    if (it == active_->mappings.end()) fail(ErrorCode::not_found, "NOT_FOUND: symbol");
    return open(it->second);
}
std::string RuntimeResourceService::cache_key(const ResourceHandle& h) const {
    const auto& s = h.snapshot->registry.source(h.key.source);
    // Include the attested path for metadata-only sources: content dedup is not assumed.
    return s.archive.generic_string() + ":" + s.spec.source.bns_sha256 + ":" +
        std::to_string(h.snapshot->generation) + ":" + std::to_string(h.view.base()) + ":" + std::to_string(h.view.size());
}
Buffer RuntimeResourceService::raw(const ResourceHandle& h, std::uint64_t offset, std::uint64_t count, const Cancel& cancel) {
    check_cancel(cancel); h.view.unchanged(); bounds(offset, count, h.view.size());
    return cache_.get(cache_key(h) + ":raw-v1:" + std::to_string(offset) + ":" + std::to_string(count), count, 0,
        [&] { return h.view.read(offset, count, cache_.budget(), cancel); });
}
std::vector<Frame> RuntimeResourceService::frames(const ResourceHandle& h) {
    h.view.unchanged(); const auto key = cache_key(h);
    if (const auto it = frames_.find(key); it != frames_.end()) return it->second;
    const auto first = header(h.view, 0);
    const auto extent = first.picture.declared_extent();
    std::uint64_t stride = extent;
    if (extent < h.view.size()) stride = (extent + 2047U) & ~2047ULL;
    if (stride < extent || (h.view.size() != extent && h.view.size() % stride != 0))
        fail(ErrorCode::unsupported_format, "UNSUPPORTED_FORMAT: unproven TIM2 trailing layout");
    const auto count = h.view.size() == extent ? 1 : h.view.size() / stride;
    if (count == 0 || count > 4096) fail(ErrorCode::budget_exceeded, "BUDGET_EXCEEDED: frames");
    std::vector<Frame> result;
    for (std::uint64_t i = 0; i < count; ++i) {
        const auto at = i * stride;
        const auto current = header(h.view, at);
        if (current.picture.declared_extent() != extent || current.picture.width != first.picture.width ||
            current.picture.height != first.picture.height || current.picture.image_type != first.picture.image_type)
            fail(ErrorCode::invalid_format, "INVALID_FORMAT: frame array mismatch");
        if (h.view.size() != extent) zeros(h.view, at + extent, stride - extent);
        result.push_back(Frame{at, extent, current});
    }
    if (frames_.size() >= 128) frames_.erase(frames_.begin());
    frames_.emplace(key, result); return result;
}
Image RuntimeResourceService::decode(const ResourceHandle& h, std::size_t index, const Cancel& cancel) {
    check_cancel(cancel);
    const auto locations = frames(h);
    if (index >= locations.size()) fail(ErrorCode::out_of_bounds, "OUT_OF_BOUNDS: frame index");
    const auto& f = locations[index];
    const auto pixels = static_cast<std::uint64_t>(f.header.picture.width) * f.header.picture.height;
    if (pixels == 0) fail(ErrorCode::invalid_format, "INVALID_FORMAT: zero dimensions");
    const auto size = pixels * 5;
    auto buffer = cache_.get(cache_key(h) + ":rgba-rawalpha-v1:" + std::to_string(index), size, f.extent + size + 4096, [&] {
        auto bytes = h.view.read(f.offset, f.extent, cache_.budget(), cancel);
        check_cancel(cancel);
        try {
            const auto decoded = formats::tim2::decode_rgba8888(bytes);
            check_cancel(cancel);
            Bytes output(static_cast<std::size_t>(size));
            std::transform(decoded.rgba.begin(), decoded.rgba.end(), output.begin(), [](auto v) { return static_cast<std::byte>(v); });
            std::transform(decoded.raw_alpha.begin(), decoded.raw_alpha.end(), output.begin() + static_cast<std::ptrdiff_t>(decoded.rgba.size()), [](auto v) { return static_cast<std::byte>(v); });
            return output;
        } catch (const Error&) { throw; }
        catch (const std::exception& e) { throw Error(ErrorCode::invalid_format, e.what()); }
    });
    return {f.header.picture.width, f.header.picture.height, std::move(buffer), f.header};
}
}
