#include "fate/vfs/extracted_sectors.hpp"
#include <algorithm>
#include <limits>
#include <stdexcept>

namespace fate::vfs {
namespace {
std::string normalize_cd_name(std::string_view name) {
    if (name.starts_with("cdrom0:")) name.remove_prefix(7);
    if (!name.empty() && (name.front() == '\\' || name.front() == '/')) name.remove_prefix(1);
    if (name.ends_with(";1")) name.remove_suffix(2);
    if (name.empty() || name.find(';') != std::string_view::npos)
        throw std::invalid_argument("Extracted sectors: invalid CD filename");
    std::string result(name);
    std::replace(result.begin(), result.end(), '\\', '/');
    // The VFS validates components, printable characters and confinement.
    return result;
}
}

ExtractedFileExtent ExtractedSectorView::search(dual::GameVersion version,
                                              std::string_view ps2_name) {
    const auto path = normalize_cd_name(ps2_name);
    const auto bytes = files_.file_size(version, path);
    if (bytes > std::numeric_limits<std::uint32_t>::max())
        throw std::out_of_range("Extracted sectors: file exceeds CD ABI");
    for (const auto& [lsn, extent] : extents_) {
        (void)lsn;
        if (extent.version == version && extent.relative_path == path) {
            if (extent.bytes != bytes) throw std::runtime_error("Extracted sectors: file changed");
            return extent;
        }
    }
    const auto occupied = std::max<std::uint64_t>(1u, (bytes + 2047u) / 2048u);
    if (occupied > std::numeric_limits<std::uint32_t>::max() - next_lsn_)
        throw std::out_of_range("Extracted sectors: sector address space exhausted");
    ExtractedFileExtent extent{version, path, next_lsn_, static_cast<std::uint32_t>(bytes)};
    extents_.emplace(next_lsn_, extent);
    next_lsn_ += static_cast<std::uint32_t>(occupied);
    return extent;
}

std::vector<std::byte> ExtractedSectorView::read(std::uint32_t lsn,
    std::uint32_t sectors, std::uint64_t max_bytes) const {
    if (sectors == 0u) throw std::invalid_argument("Extracted sectors: empty read");
    auto found = extents_.upper_bound(lsn);
    if (found == extents_.begin()) throw std::out_of_range("Extracted sectors: unknown sector");
    --found;
    const auto& extent = found->second;
    const auto offset = static_cast<std::uint64_t>(lsn - extent.lsn) * 2048u;
    const auto bytes = static_cast<std::uint64_t>(sectors) * 2048u;
    if (offset > extent.bytes || bytes > extent.bytes - offset)
        throw std::out_of_range("Extracted sectors: read crosses exact file extent");
    if (files_.file_size(extent.version, extent.relative_path) != extent.bytes)
        throw std::runtime_error("Extracted sectors: backing file changed");
    return files_.read_file_range(extent.version, extent.relative_path, offset, bytes, max_bytes);
}
} // namespace fate::vfs
