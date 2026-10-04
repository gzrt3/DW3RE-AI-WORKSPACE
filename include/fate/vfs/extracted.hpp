#pragma once

#include "fate/dual.hpp"
#include "fate/formats/linkdata.hpp"
#include <array>
#include <filesystem>
#include <optional>
#include <span>
#include <string>
#include <string_view>
#include <vector>

namespace fate::vfs {

struct ExtractedReleaseSpec {
    dual::GameVersion version;
    std::string directory;
    std::string elf_name;
    std::string archive_name;
    std::uint64_t elf_bytes;
    std::string elf_sha256;
    std::uint64_t archive_bytes;
    std::string archive_sha256;
    std::uint32_t table_address;
    std::uint32_t resource_count;
};

// Original US release identities, independently hashed against supplied ISO
// file extents. Profiles describe source bytes, never gameplay completion.
[[nodiscard]] std::array<ExtractedReleaseSpec, 2> original_us_extracted_releases();

class DualExtractedVfs {
public:
    // Both releases validate before either mount is published. Each resource
    // retains its source version; there is deliberately no numeric RID fallback.
    void mount(const std::filesystem::path& data_root,
               std::span<const ExtractedReleaseSpec> releases);
    [[nodiscard]] bool mounted() const noexcept;
    [[nodiscard]] std::size_t resource_count(dual::GameVersion version) const;
    [[nodiscard]] std::vector<std::byte> read_resource(dual::GameVersion version,
        std::uint32_t rid, std::uint64_t max_bytes = 128ULL * 1024ULL * 1024ULL) const;
    [[nodiscard]] std::vector<std::byte> read_file(dual::GameVersion version,
        std::string_view relative_path, std::uint64_t max_bytes = 64ULL * 1024ULL * 1024ULL) const;
    [[nodiscard]] std::uint64_t file_size(dual::GameVersion version,
        std::string_view relative_path) const;
    [[nodiscard]] std::vector<std::byte> read_file_range(dual::GameVersion version,
        std::string_view relative_path, std::uint64_t offset, std::uint64_t bytes,
        std::uint64_t max_bytes = 32ULL * 1024ULL * 1024ULL) const;

private:
    struct Release {
        ExtractedReleaseSpec spec;
        std::filesystem::path root;
        std::filesystem::path archive;
        std::filesystem::file_time_type archive_modified;
        formats::linkdata::Index index;
    };
    std::optional<Release> base_;
    std::optional<Release> xl_;
    [[nodiscard]] const Release& release(dual::GameVersion version) const;
};

} // namespace fate::vfs
