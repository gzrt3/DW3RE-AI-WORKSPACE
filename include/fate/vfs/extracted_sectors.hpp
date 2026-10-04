#pragma once

#include "fate/vfs/extracted.hpp"
#include <map>

namespace fate::vfs {

struct ExtractedFileExtent {
    dual::GameVersion version;
    std::string relative_path;
    std::uint32_t lsn;
    std::uint32_t bytes;
};

// Search results are host-assigned sectors, not original ISO LBAs. A result
// pins its source identity so cached Base reads remain Base after XL lookup.
// The mounted VFS must outlive this adapter and must not be remounted while
// outstanding extents are in use. Missing final-sector padding is rejected.
class ExtractedSectorView {
public:
    explicit ExtractedSectorView(const DualExtractedVfs& files) : files_(files) {}
    [[nodiscard]] ExtractedFileExtent search(dual::GameVersion version,
        std::string_view ps2_name);
    [[nodiscard]] std::vector<std::byte> read(std::uint32_t lsn,
        std::uint32_t sectors, std::uint64_t max_bytes = 32ULL * 1024ULL * 1024ULL) const;

private:
    const DualExtractedVfs& files_;
    std::map<std::uint32_t, ExtractedFileExtent> extents_;
    std::uint32_t next_lsn_ = 0x10000u;
};

} // namespace fate::vfs
