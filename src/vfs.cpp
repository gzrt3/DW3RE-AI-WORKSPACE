#include "fate/vfs.hpp"

#include "fate/elf.hpp"

#include <algorithm>
#include <array>
#include <cctype>
#include <fstream>
#include <limits>
#include <stdexcept>
#include <utility>

namespace fate::vfs {
namespace {

[[noreturn]] void invalid(const char* message) { throw std::runtime_error(message); }

std::uint16_t little16(std::span<const std::byte> bytes, std::size_t at) {
    if (at > bytes.size() || 2U > bytes.size() - at) invalid("ISO9660: truncated 16-bit field");
    return static_cast<std::uint16_t>(std::to_integer<unsigned>(bytes[at]) |
        (std::to_integer<unsigned>(bytes[at + 1U]) << 8U));
}

std::uint32_t little32(std::span<const std::byte> bytes, std::size_t at) {
    if (at > bytes.size() || 4U > bytes.size() - at) invalid("ISO9660: truncated 32-bit field");
    return std::to_integer<std::uint32_t>(bytes[at]) |
        (std::to_integer<std::uint32_t>(bytes[at + 1U]) << 8U) |
        (std::to_integer<std::uint32_t>(bytes[at + 2U]) << 16U) |
        (std::to_integer<std::uint32_t>(bytes[at + 3U]) << 24U);
}

std::uint32_t big32(std::span<const std::byte> bytes, std::size_t at) {
    if (at > bytes.size() || 4U > bytes.size() - at) invalid("ISO9660: truncated big-endian field");
    return (std::to_integer<std::uint32_t>(bytes[at]) << 24U) |
        (std::to_integer<std::uint32_t>(bytes[at + 1U]) << 16U) |
        (std::to_integer<std::uint32_t>(bytes[at + 2U]) << 8U) |
        std::to_integer<std::uint32_t>(bytes[at + 3U]);
}

std::uint16_t both16(std::span<const std::byte> bytes, std::size_t at) {
    const auto le = little16(bytes, at);
    const auto be = static_cast<std::uint16_t>((std::to_integer<unsigned>(bytes[at + 2U]) << 8U) |
        std::to_integer<unsigned>(bytes[at + 3U]));
    if (le != be) invalid("ISO9660: mismatched dual-endian 16-bit value");
    return le;
}

std::uint32_t both32(std::span<const std::byte> bytes, std::size_t at) {
    const auto le = little32(bytes, at);
    const auto be = big32(bytes, at + 4U);
    if (le != be) invalid("ISO9660: mismatched dual-endian 32-bit value");
    return le;
}

std::vector<std::byte> read_at(const std::filesystem::path& path, std::uint64_t file_size,
                               std::uint64_t offset, std::uint64_t count, std::uint64_t limit) {
    if (count > limit || count > static_cast<std::uint64_t>(std::numeric_limits<std::size_t>::max()) ||
        offset > file_size || count > file_size - offset) invalid("ISO9660: read outside file bounds");
    std::ifstream stream(path, std::ios::binary);
    if (!stream) invalid("ISO9660: cannot open image");
    stream.seekg(static_cast<std::streamoff>(offset));
    std::vector<std::byte> result(static_cast<std::size_t>(count));
    stream.read(reinterpret_cast<char*>(result.data()), static_cast<std::streamsize>(count));
    if (!stream) invalid("ISO9660: short image read");
    return result;
}

std::string canonical_name(std::span<const std::byte> raw) {
    std::string name;
    name.reserve(raw.size());
    for (const std::byte byte : raw) {
        const auto ch = static_cast<unsigned char>(std::to_integer<unsigned>(byte));
        if (ch < 0x20U || ch > 0x7EU || ch == '/' || ch == '\\') invalid("ISO9660: invalid file identifier");
        name.push_back(static_cast<char>(std::toupper(ch)));
    }
    const auto version = name.find(';');
    if (version != std::string::npos) name.resize(version);
    if (name == "." || name == "..") return {};
    if (name.empty()) invalid("ISO9660: empty file identifier");
    return name;
}

std::string canonical_path(std::string_view value) {
    std::string path;
    path.reserve(value.size());
    for (const char raw : value) {
        if (raw == '\\') invalid("VFS: backslash path rejected");
        const auto ch = static_cast<unsigned char>(raw);
        if (ch < 0x20U || ch > 0x7EU) invalid("VFS: non-ASCII path rejected");
        path.push_back(static_cast<char>(std::toupper(ch)));
    }
    while (!path.empty() && path.front() == '/') path.erase(path.begin());
    while (!path.empty() && path.back() == '/') path.pop_back();
    std::size_t start{};
    while (start < path.size()) {
        const auto end = path.find('/', start);
        const auto length = (end == std::string::npos ? path.size() : end) - start;
        const std::string_view component(path.data() + start, length);
        if (component.empty() || component == "." || component == ".." || component.find(':') != std::string_view::npos)
            invalid("VFS: invalid or traversing path");
        if (end == std::string::npos) break;
        start = end + 1U;
    }
    return path;
}

bool path_is_within(const std::filesystem::path& root, const std::filesystem::path& candidate) {
    auto root_it = root.begin();
    auto candidate_it = candidate.begin();
    for (; root_it != root.end(); ++root_it, ++candidate_it) {
        if (candidate_it == candidate.end() || *root_it != *candidate_it) return false;
    }
    return true;
}

std::vector<std::byte> read_bounded_file(const std::filesystem::path& path, std::uint64_t max_bytes) {
    const std::uint64_t size = std::filesystem::file_size(path);
    if (size > max_bytes || size > static_cast<std::uint64_t>(std::numeric_limits<std::size_t>::max()) ||
        size > static_cast<std::uint64_t>(std::numeric_limits<std::streamsize>::max())) {
        invalid("VFS: mod file exceeds read limit");
    }
    std::ifstream stream(path, std::ios::binary);
    if (!stream) invalid("VFS: cannot open mod file");
    std::vector<std::byte> bytes(static_cast<std::size_t>(size));
    stream.read(reinterpret_cast<char*>(bytes.data()), static_cast<std::streamsize>(size));
    if (!stream || stream.peek() != std::char_traits<char>::eof()) invalid("VFS: short or changing mod file");
    return bytes;
}

std::string mod_game_directory(dual::GameVersion version) {
    return version == dual::GameVersion::xl ? "dw3xl" : "dw3";
}

std::string mod_rid_name(std::uint32_t rid) {
    return std::to_string(rid);
}

struct DirectoryRecord {
    IsoExtent extent;
    std::uint8_t flags{};
    std::string name;
};

DirectoryRecord parse_record(std::span<const std::byte> bytes, std::size_t at, std::size_t record_length) {
    if (record_length < 34U || at > bytes.size() || record_length > bytes.size() - at)
        invalid("ISO9660: malformed directory record");
    const auto record = bytes.subspan(at, record_length);
    const std::uint8_t name_length = std::to_integer<std::uint8_t>(record[32]);
    if (name_length == 0U || 33U + name_length > record.size()) invalid("ISO9660: invalid directory name length");
    DirectoryRecord result;
    result.extent = {both32(record, 2U), both32(record, 10U)};
    result.flags = std::to_integer<std::uint8_t>(record[25]);
    const auto raw_name = record.subspan(33U, name_length);
    if (name_length == 1U && (raw_name[0] == std::byte{} || raw_name[0] == std::byte{1})) return result;
    result.name = canonical_name(raw_name);
    return result;
}

const IsoFileEntry& find_basename(const Iso9660Image& image, std::string_view target) {
    const std::string wanted = canonical_path(target);
    const IsoFileEntry* found{};
    for (const auto& [path, entry] : image.files()) {
        const auto slash = path.find_last_of('/');
        const std::string_view basename(path.data() + (slash == std::string::npos ? 0U : slash + 1U),
            path.size() - (slash == std::string::npos ? 0U : slash + 1U));
        if (basename == wanted && !entry.directory) {
            if (found != nullptr) invalid("ISO9660: ambiguous required file basename");
            found = &entry;
        }
    }
    if (found == nullptr) invalid("ISO9660: required game file not found");
    return *found;
}

} // namespace

Iso9660Image::Iso9660Image(std::filesystem::path path) : path_(std::filesystem::canonical(path)) {
    image_size_ = std::filesystem::file_size(path_);
    if (image_size_ < 18ULL * iso_sector_size || image_size_ % iso_sector_size != 0U)
        invalid("ISO9660: image is too small or not sector aligned");
    index_volume();
}

void Iso9660Image::index_volume() {
    std::optional<IsoExtent> root_extent;
    std::uint32_t volume_blocks{};
    bool descriptor_terminator{};
    for (std::uint32_t sector = 16U; sector < 80U; ++sector) {
        const auto block = read_at(path_, image_size_, static_cast<std::uint64_t>(sector) * iso_sector_size,
                                   iso_sector_size, iso_sector_size);
        if (block[1] != std::byte{'C'} || block[2] != std::byte{'D'} || block[3] != std::byte{'0'} ||
            block[4] != std::byte{'0'} || block[5] != std::byte{'1'} || block[6] != std::byte{1})
            invalid("ISO9660: invalid volume descriptor signature");
        const auto type = std::to_integer<std::uint8_t>(block[0]);
        if (type == 1U) {
            if (both16(block, 128U) != iso_sector_size) invalid("ISO9660: unsupported logical block size");
            volume_blocks = both32(block, 80U);
            const auto root = parse_record(block, 156U, std::to_integer<std::uint8_t>(block[156U]));
            if ((root.flags & 2U) == 0U) invalid("ISO9660: root record is not a directory");
            root_extent = root.extent;
        } else if (type == 255U) {
            descriptor_terminator = true;
            break;
        }
    }
    if (!descriptor_terminator || !root_extent || volume_blocks == 0U ||
        static_cast<std::uint64_t>(volume_blocks) * iso_sector_size > image_size_ ||
        static_cast<std::uint64_t>(root_extent->lba) * iso_sector_size + root_extent->byte_length > image_size_)
        invalid("ISO9660: missing or out-of-bounds primary volume descriptor");

    std::vector<IsoFileEntry> directories;
    directories.push_back(IsoFileEntry{"", root_extent->byte_length, true, {*root_extent}});
    std::map<std::uint32_t, bool> visited;
    std::size_t cursor{};
    while (cursor < directories.size()) {
        if (directories.size() > 200000U || files_.size() > 200000U) invalid("ISO9660: directory count limit");
        const IsoFileEntry directory = directories[cursor++];
        const std::uint32_t lba = directory.extents.front().lba;
        if (visited.contains(lba)) continue;
        visited.emplace(lba, true);
        const auto content = read_at(path_, image_size_, static_cast<std::uint64_t>(lba) * iso_sector_size,
                                     directory.byte_length, 64ULL * 1024ULL * 1024ULL);
        std::size_t at{};
        while (at < content.size()) {
            const std::uint8_t record_length = std::to_integer<std::uint8_t>(content[at]);
            if (record_length == 0U) {
                at = ((at / iso_sector_size) + 1U) * iso_sector_size;
                continue;
            }
            auto record = parse_record(content, at, record_length);
            if (!record.name.empty()) {
                if ((record.flags & 0x80U) != 0U) invalid("ISO9660: multi-extent directory records are unsupported");
                if (static_cast<std::uint64_t>(record.extent.lba) * iso_sector_size + record.extent.byte_length > image_size_)
                    invalid("ISO9660: file extent is outside image");
                const bool is_directory = (record.flags & 2U) != 0U;
                const std::string full_path = directory.path.empty() ? record.name : directory.path + "/" + record.name;
                IsoFileEntry entry{full_path, record.extent.byte_length, is_directory, {record.extent}};
                if (!files_.emplace(full_path, entry).second) invalid("ISO9660: duplicate normalized path");
                if (is_directory) directories.push_back(std::move(entry));
            }
            at += record_length;
        }
    }
}

const IsoFileEntry& Iso9660Image::require_file(std::string_view relative_path) const {
    const auto found = files_.find(canonical_path(relative_path));
    if (found == files_.end() || found->second.directory) invalid("ISO9660: file path not found");
    return found->second;
}

bool Iso9660Image::contains_file(std::string_view relative_path) const {
    const auto found = files_.find(canonical_path(relative_path));
    return found != files_.end() && !found->second.directory;
}

std::vector<std::byte> Iso9660Image::read_file(std::string_view relative_path, std::uint64_t max_bytes) const {
    const auto& entry = require_file(relative_path);
    return read_range(entry, 0U, entry.byte_length, max_bytes);
}

std::vector<std::byte> Iso9660Image::read_range(const IsoFileEntry& entry, std::uint64_t offset,
                                                std::uint64_t count, std::uint64_t max_bytes) const {
    if (entry.directory || offset > entry.byte_length || count > entry.byte_length - offset || count > max_bytes ||
        count > static_cast<std::uint64_t>(std::numeric_limits<std::size_t>::max()))
        invalid("ISO9660: file range outside bounds or byte budget");
    std::vector<std::byte> output;
    output.reserve(static_cast<std::size_t>(count));
    std::uint64_t logical_begin{};
    std::uint64_t remaining = count;
    for (const auto& extent : entry.extents) {
        const std::uint64_t logical_end = logical_begin + extent.byte_length;
        if (offset < logical_end && offset + count > logical_begin) {
            const std::uint64_t begin_in_extent = offset > logical_begin ? offset - logical_begin : 0U;
            const std::uint64_t available = extent.byte_length - begin_in_extent;
            const std::uint64_t take = std::min(remaining, available);
            const std::uint64_t iso_offset = static_cast<std::uint64_t>(extent.lba) * iso_sector_size + begin_in_extent;
            auto block = read_at(path_, image_size_, iso_offset, take, max_bytes);
            output.insert(output.end(), block.begin(), block.end());
            remaining -= take;
            offset += take;
        }
        logical_begin = logical_end;
    }
    if (remaining != 0U || output.size() != count) invalid("ISO9660: extent chain does not cover requested range");
    return output;
}

DualIsoVfs::MountedDisc DualIsoVfs::index_game(dual::GameVersion version, const std::filesystem::path& path) {
    MountedDisc mounted(version, Iso9660Image(path));
    const bool xl = version == dual::GameVersion::xl;
    const char* elf_name = xl ? "SLUS_206.17" : "SLUS_202.77";
    const char* archive_name = xl ? "LINKDAT2.BNS" : "LINKDATA.BNS";
    const std::uint32_t descriptor_count = xl ? 3015U : 2123U;
    const std::uint32_t table_virtual_address = xl ? 0x00290CF0U : 0x002FF850U;
    const auto& elf_file = find_basename(mounted.image, elf_name);
    const auto& archive_file = find_basename(mounted.image, archive_name);
    if (archive_file.extents.size() != 1U) invalid("VFS: LINKDATA archive must be a single ISO extent");
    mounted.elf_path = elf_file.path;
    mounted.archive_path = archive_file.path;
    const auto elf_bytes = mounted.image.read_range(elf_file, 0U, elf_file.byte_length, 16ULL * 1024ULL * 1024ULL);
    const auto elf_image = elf::Image::parse(elf_bytes);
    const auto index = formats::linkdata::Index::parse(elf_bytes, elf_image, table_virtual_address,
        descriptor_count, archive_file.byte_length, true);
    const std::uint64_t archive_iso_base = static_cast<std::uint64_t>(archive_file.extents.front().lba) * iso_sector_size;
    for (std::uint32_t rid = 0; rid < index.descriptors().size(); ++rid) {
        const auto& descriptor = index.descriptors()[rid];
        const std::uint64_t resource_iso_offset = archive_iso_base + descriptor.byte_offset();
        if (resource_iso_offset > mounted.image.image_size() || descriptor.payload_size >
            mounted.image.image_size() - resource_iso_offset) invalid("VFS: resource TOC extent outside ISO");
        const dual::ContentSourceId source{version, dual::Region::us, xl ? "dw3xl" : "dw3"};
        mounted.toc.emplace(rid, ResourceTocEntry{{source, rid}, descriptor.sector_offset,
            descriptor.sector_count, descriptor.payload_size, resource_iso_offset});
    }
    return mounted;
}

void DualIsoVfs::mount(const std::filesystem::path& base_iso, const std::filesystem::path& xl_iso) {
    auto new_base = index_game(dual::GameVersion::base, base_iso);
    auto new_xl = index_game(dual::GameVersion::xl, xl_iso);
    MountReport new_report{new_base.image.path(), new_xl.image.path(), new_base.image.files().size(),
        new_xl.image.files().size(), new_base.toc.size(), new_xl.toc.size()};
    base_ = std::move(new_base);
    xl_ = std::move(new_xl);
    report_ = std::move(new_report);
}

void DualIsoVfs::mount_mods(const std::filesystem::path& mod_root) {
    if (mod_root.empty()) {
        mod_root_.clear();
        return;
    }
    std::error_code error;
    const auto absolute = std::filesystem::absolute(mod_root, error);
    if (error) invalid("VFS: cannot resolve mod root");
    const auto resolved = std::filesystem::weakly_canonical(absolute, error);
    if (error) invalid("VFS: cannot canonicalize mod root");
    if (std::filesystem::exists(resolved, error) &&
        (!std::filesystem::is_directory(resolved, error) || error)) {
        invalid("VFS: mod root is not a directory");
    }
    if (error) invalid("VFS: cannot inspect mod root");
    mod_root_ = resolved;
}

bool DualIsoVfs::mounted() const noexcept { return base_.has_value() && xl_.has_value(); }

const DualIsoVfs::MountedDisc& DualIsoVfs::disc(dual::GameVersion version) const {
    if (version == dual::GameVersion::xl) {
        if (!xl_) invalid("VFS: Xtreme Legends ISO is not mounted");
        return *xl_;
    }
    if (!base_) invalid("VFS: base ISO is not mounted");
    return *base_;
}

const std::map<std::uint32_t, ResourceTocEntry>& DualIsoVfs::resource_toc(dual::GameVersion version) const {
    return disc(version).toc;
}

std::vector<std::byte> DualIsoVfs::read_virtual(std::string_view path, std::uint64_t max_bytes) const {
    constexpr std::string_view xl_root = "/data/dw3_xl/";
    constexpr std::string_view base_root = "/data/dw3_base/";
    constexpr std::string_view shared_root = "/data/";
    if (path.starts_with(xl_root)) {
        const auto relative = path.substr(xl_root.size());
        if (auto bytes = read_mod_file("dw3xl/files/" + std::string(relative), max_bytes)) return std::move(*bytes);
        return disc(dual::GameVersion::xl).image.read_file(relative, max_bytes);
    }
    if (path.starts_with(base_root)) {
        const auto relative = path.substr(base_root.size());
        if (auto bytes = read_mod_file("dw3/files/" + std::string(relative), max_bytes)) return std::move(*bytes);
        return disc(dual::GameVersion::base).image.read_file(relative, max_bytes);
    }
    if (path.starts_with(shared_root)) {
        const auto relative = path.substr(shared_root.size());
        if (auto bytes = read_mod_file("dw3xl/files/" + std::string(relative), max_bytes)) return std::move(*bytes);
        if (auto bytes = read_mod_file("dw3/files/" + std::string(relative), max_bytes)) return std::move(*bytes);
        if (disc(dual::GameVersion::xl).image.contains_file(relative))
            return disc(dual::GameVersion::xl).image.read_file(relative, max_bytes);
        return disc(dual::GameVersion::base).image.read_file(relative, max_bytes);
    }
    invalid("VFS: path must be rooted at /data, /data/dw3_xl, or /data/dw3_base");
}

std::optional<std::vector<std::byte>> DualIsoVfs::read_mod_file(std::string_view relative_path,
                                                                 std::uint64_t max_bytes) const {
    if (mod_root_.empty()) return std::nullopt;
    const std::string normalized = canonical_path(relative_path);
    std::error_code error;
    const auto candidate = std::filesystem::weakly_canonical(mod_root_ / normalized, error);
    if (error) invalid("VFS: cannot resolve mod file path");
    if (!path_is_within(mod_root_, candidate)) invalid("VFS: mod file escapes mod root");
    const bool exists = std::filesystem::exists(candidate, error);
    if (error) invalid("VFS: cannot inspect mod file");
    if (!exists) return std::nullopt;
    if (!std::filesystem::is_regular_file(candidate, error) || error) invalid("VFS: mod asset is not a regular file");
    return read_bounded_file(candidate, max_bytes);
}

std::optional<std::vector<std::byte>> DualIsoVfs::read_mod_resource(dual::GameVersion version,
                                                                     std::uint32_t rid,
                                                                     std::uint64_t max_bytes) const {
    const std::string relative = mod_game_directory(version) + "/resources/" + mod_rid_name(rid) + ".bin";
    return read_mod_file(relative, max_bytes);
}

std::optional<std::vector<std::byte>> DualIsoVfs::read_mod_asset(dual::GameVersion version,
                                                                  std::uint32_t rid,
                                                                  std::string_view extension,
                                                                  std::uint64_t max_bytes) const {
    if (extension.size() < 2U || extension.size() > 9U || extension.front() != '.') {
        invalid("VFS: invalid mod asset extension");
    }
    for (const char ch : extension.substr(1U)) {
        const auto byte = static_cast<unsigned char>(ch);
        if (!std::isalnum(byte)) invalid("VFS: invalid mod asset extension");
    }
    const std::string relative = mod_game_directory(version) + "/assets/" + mod_rid_name(rid) +
        std::string(extension);
    return read_mod_file(relative, max_bytes);
}

ResolvedPayload DualIsoVfs::read_resource(std::uint32_t rid, dual::GameVersion preferred,
                                          std::uint64_t max_bytes) const {
    const std::array<dual::GameVersion, 2> mod_priority = preferred == dual::GameVersion::xl
        ? std::array{dual::GameVersion::xl, dual::GameVersion::base}
        : std::array{dual::GameVersion::base, dual::GameVersion::xl};
    for (const dual::GameVersion version : mod_priority) {
        if (auto bytes = read_mod_resource(version, rid, max_bytes)) {
            const std::string relative = mod_game_directory(version) + "/resources/" + mod_rid_name(rid) + ".bin";
            return {version, rid, 0U, std::move(*bytes), PayloadOrigin::mod_override, mod_root_ / relative};
        }
    }
    const auto has = [rid](const MountedDisc& mounted) { return mounted.toc.contains(rid); };
    const MountedDisc* selected{};
    if (preferred == dual::GameVersion::xl && xl_ && has(*xl_)) selected = &*xl_;
    if (selected == nullptr && base_ && has(*base_)) selected = &*base_;
    if (selected == nullptr && xl_ && has(*xl_)) selected = &*xl_;
    if (selected == nullptr) invalid("VFS: resource ID missing from both mounted games");
    const auto& entry = selected->toc.at(rid);
    const auto& archive = selected->image.require_file(selected->archive_path);
    auto bytes = selected->image.read_range(archive,
        static_cast<std::uint64_t>(entry.archive_sector) * iso_sector_size, entry.payload_size, max_bytes);
    return {selected->version, rid, entry.archive_sector, std::move(bytes)};
}

} // namespace fate::vfs
