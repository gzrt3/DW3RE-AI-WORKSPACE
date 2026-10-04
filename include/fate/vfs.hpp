#pragma once

#include "fate/dual.hpp"
#include "fate/formats/linkdata.hpp"

#include <cstddef>
#include <cstdint>
#include <filesystem>
#include <map>
#include <optional>
#include <span>
#include <string>
#include <string_view>
#include <utility>
#include <vector>

namespace fate::vfs {

inline constexpr std::uint32_t iso_sector_size = 2048U;

struct IsoExtent {
    std::uint32_t lba{};
    std::uint32_t byte_length{};
};

struct IsoFileEntry {
    std::string path;
    std::uint64_t byte_length{};
    bool directory{};
    std::vector<IsoExtent> extents;
};

class Iso9660Image {
public:
    explicit Iso9660Image(std::filesystem::path path);

    [[nodiscard]] const std::filesystem::path& path() const noexcept { return path_; }
    [[nodiscard]] std::uint64_t image_size() const noexcept { return image_size_; }
    [[nodiscard]] const std::map<std::string, IsoFileEntry>& files() const noexcept { return files_; }
    [[nodiscard]] bool contains_file(std::string_view relative_path) const;
    [[nodiscard]] const IsoFileEntry& require_file(std::string_view relative_path) const;
    [[nodiscard]] std::vector<std::byte> read_file(std::string_view relative_path,
        std::uint64_t max_bytes = 16ULL * 1024ULL * 1024ULL) const;
    [[nodiscard]] std::vector<std::byte> read_range(const IsoFileEntry& entry,
        std::uint64_t offset, std::uint64_t count, std::uint64_t max_bytes) const;

private:
    std::filesystem::path path_;
    std::uint64_t image_size_{};
    std::map<std::string, IsoFileEntry> files_;
    void index_volume();
};

struct ResourceTocEntry {
    dual::ResourceKey key;
    std::uint32_t archive_sector{};
    std::uint32_t sector_count{};
    std::uint64_t payload_size{};
    std::uint64_t iso_byte_offset{};
};

enum class PayloadOrigin : std::uint8_t {
    iso_image = 0,
    mod_override = 1
};

struct ResolvedPayload {
    dual::GameVersion source{dual::GameVersion::base};
    std::uint32_t rid{};
    std::uint32_t archive_sector{};
    std::vector<std::byte> bytes;
    PayloadOrigin origin{PayloadOrigin::iso_image};
    std::filesystem::path override_path;
};

struct MountReport {
    std::filesystem::path base_iso;
    std::filesystem::path xl_iso;
    std::size_t base_files{};
    std::size_t xl_files{};
    std::size_t base_resources{};
    std::size_t xl_resources{};
};

// Reads ISO9660 TOCs and the ELF-authored 2048-byte LINKDATA descriptor table.
// It never extracts files; each RID is read from its original ISO on demand.
class DualIsoVfs {
public:
    void mount(const std::filesystem::path& base_iso, const std::filesystem::path& xl_iso);
    void mount_mods(const std::filesystem::path& mod_root);
    [[nodiscard]] bool mounted() const noexcept;
    [[nodiscard]] const std::filesystem::path& mod_root() const noexcept { return mod_root_; }
    [[nodiscard]] const MountReport& report() const noexcept { return report_; }
    [[nodiscard]] const std::map<std::uint32_t, ResourceTocEntry>& resource_toc(
        dual::GameVersion version) const;
    [[nodiscard]] std::vector<std::byte> read_virtual(std::string_view path,
        std::uint64_t max_bytes = 64ULL * 1024ULL * 1024ULL) const;
    [[nodiscard]] std::optional<std::vector<std::byte>> read_mod_file(std::string_view relative_path,
        std::uint64_t max_bytes = 64ULL * 1024ULL * 1024ULL) const;
    [[nodiscard]] std::optional<std::vector<std::byte>> read_mod_resource(dual::GameVersion version,
        std::uint32_t rid, std::uint64_t max_bytes = 128ULL * 1024ULL * 1024ULL) const;
    [[nodiscard]] std::optional<std::vector<std::byte>> read_mod_asset(dual::GameVersion version,
        std::uint32_t rid, std::string_view extension,
        std::uint64_t max_bytes = 128ULL * 1024ULL * 1024ULL) const;
    [[nodiscard]] ResolvedPayload read_resource(std::uint32_t rid,
        dual::GameVersion preferred = dual::GameVersion::xl,
        std::uint64_t max_bytes = 128ULL * 1024ULL * 1024ULL) const;

private:
    struct MountedDisc {
        dual::GameVersion version{dual::GameVersion::base};
        Iso9660Image image;
        std::string elf_path;
        std::string archive_path;
        std::map<std::uint32_t, ResourceTocEntry> toc;
        MountedDisc(dual::GameVersion v, Iso9660Image i) : version(v), image(std::move(i)) {}
    };
    std::optional<MountedDisc> base_;
    std::optional<MountedDisc> xl_;
    std::filesystem::path mod_root_;
    MountReport report_;
    [[nodiscard]] static MountedDisc index_game(dual::GameVersion version, const std::filesystem::path& path);
    [[nodiscard]] const MountedDisc& disc(dual::GameVersion version) const;
};

} // namespace fate::vfs
