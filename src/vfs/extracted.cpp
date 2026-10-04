#include "fate/vfs/extracted.hpp"
#include "fate/provenance.hpp"
#include <algorithm>
#include <fstream>
#include <limits>
#include <stdexcept>

namespace fate::vfs {
namespace {
std::filesystem::path checked_file(const std::filesystem::path& root, std::string_view name) {
    if (name.empty() || name.front() == '/' || name.find('\\') != std::string_view::npos ||
        name.find(':') != std::string_view::npos)
        throw std::invalid_argument("Extracted VFS: relative slash path required");
    std::size_t start = 0;
    while (start < name.size()) {
        const auto end = name.find('/', start);
        const auto part = name.substr(start, end == std::string_view::npos ? name.size() - start : end - start);
        if (part.empty() || part == "." || part == ".." ||
            std::any_of(part.begin(), part.end(), [](unsigned char c) { return c < 0x20u || c > 0x7eu; }))
            throw std::invalid_argument("Extracted VFS: unsafe path component");
        if (end == std::string_view::npos) break;
        start = end + 1;
        if (start == name.size()) throw std::invalid_argument("Extracted VFS: trailing slash rejected");
    }
    const auto result = std::filesystem::canonical(root / std::string(name));
    auto actual = result.begin();
    for (auto expected = root.begin(); expected != root.end(); ++expected, ++actual)
        if (actual == result.end() || *actual != *expected)
            throw std::invalid_argument("Extracted VFS: file escapes mounted release");
    if (!std::filesystem::is_regular_file(result))
        throw std::invalid_argument("Extracted VFS: file is not regular");
    return result;
}

std::vector<std::byte> read_range(const std::filesystem::path& path, std::uint64_t offset,
    std::uint64_t count, std::uint64_t limit) {
    const auto size = std::filesystem::file_size(path);
    if (offset > size || count > size - offset || count > limit ||
        count > static_cast<std::uint64_t>(std::numeric_limits<std::size_t>::max()) ||
        count > static_cast<std::uint64_t>(std::numeric_limits<std::streamsize>::max()) ||
        offset > static_cast<std::uint64_t>(std::numeric_limits<std::streamoff>::max()))
        throw std::out_of_range("Extracted VFS: read outside bounded file extent");
    std::ifstream file(path, std::ios::binary);
    if (!file) throw std::runtime_error("Extracted VFS: cannot open file");
    file.seekg(static_cast<std::streamoff>(offset));
    std::vector<std::byte> bytes(static_cast<std::size_t>(count));
    if (count != 0u) file.read(reinterpret_cast<char*>(bytes.data()), static_cast<std::streamsize>(count));
    if (!file || std::filesystem::file_size(path) != size)
        throw std::runtime_error("Extracted VFS: short or changing file");
    return bytes;
}
} // namespace

std::array<ExtractedReleaseSpec, 2> original_us_extracted_releases() {
    return {{
        {dual::GameVersion::base, "dw3_base", "SLUS_202.77", "LINKDATA.BNS", 2513712u,
         "b5a2fb3c32ce7468160e3845b64babc4ace0d6cb7650f4d940083c6841c1f5d1", 293441536u,
         "d040b9fb068043654650642b3f4226a3ae9ea633de096ac693a63b26b735f666", 0x002ff850u, 2123u},
        {dual::GameVersion::xl, "dw3_xl", "SLUS_206.17", "LINKDAT2.BNS", 1905272u,
         "d26695fa7769cabbddbd89168924279cd1035eeb0bdd3744aec95257f7cfa731", 460529664u,
         "5cd58a5f27eece306a57ce340098ad1c7413a10d34d5b5de5f902748a17d79ad", 0x00290cf0u, 3015u}
    }};
}

void DualExtractedVfs::mount(const std::filesystem::path& data_root,
                            std::span<const ExtractedReleaseSpec> specs) {
    if (specs.size() != 2u) throw std::invalid_argument("Extracted VFS: exactly two releases required");
    std::optional<Release> base, xl;
    for (const auto& spec : specs) {
        if (spec.version != dual::GameVersion::base && spec.version != dual::GameVersion::xl)
            throw std::invalid_argument("Extracted VFS: unknown game version");
        auto& destination = spec.version == dual::GameVersion::base ? base : xl;
        if (destination) throw std::invalid_argument("Extracted VFS: duplicate game version");
        if (spec.directory.empty() || spec.directory.find_first_of("/\\:") != std::string::npos ||
            spec.directory == "." || spec.directory == "..")
            throw std::invalid_argument("Extracted VFS: invalid release directory");
        const auto root = std::filesystem::canonical(data_root / spec.directory);
        const auto elf_path = checked_file(root, spec.elf_name);
        const auto archive_path = checked_file(root, spec.archive_name);
        provenance::verify_file(elf_path, spec.elf_bytes, spec.elf_sha256);
        const auto archive_modified = std::filesystem::last_write_time(archive_path);
        provenance::verify_file(archive_path, spec.archive_bytes, spec.archive_sha256);
        if (std::filesystem::last_write_time(archive_path) != archive_modified)
            throw std::runtime_error("Extracted VFS: archive changed during source verification");
        const auto bytes = read_range(elf_path, 0, spec.elf_bytes, 16ULL * 1024ULL * 1024ULL);
        const auto image = elf::Image::parse(bytes);
        auto index = formats::linkdata::Index::parse(bytes, image, spec.table_address,
            spec.resource_count, spec.archive_bytes, true);
        destination = Release{spec, root, archive_path, archive_modified, std::move(index)};
    }
    base_ = std::move(base);
    xl_ = std::move(xl);
}

bool DualExtractedVfs::mounted() const noexcept { return base_.has_value() && xl_.has_value(); }

const DualExtractedVfs::Release& DualExtractedVfs::release(dual::GameVersion version) const {
    if (version == dual::GameVersion::base && base_) return *base_;
    if (version == dual::GameVersion::xl && xl_) return *xl_;
    throw std::invalid_argument("Extracted VFS: requested game is not mounted");
}

std::size_t DualExtractedVfs::resource_count(dual::GameVersion version) const {
    return release(version).index.descriptors().size();
}

std::vector<std::byte> DualExtractedVfs::read_resource(dual::GameVersion version,
    std::uint32_t rid, std::uint64_t max_bytes) const {
    const auto& mounted_release = release(version);
    const auto& descriptor = mounted_release.index.descriptors().at(rid);
    const auto unchanged = [&] {
        return std::filesystem::file_size(mounted_release.archive) == mounted_release.spec.archive_bytes &&
               std::filesystem::last_write_time(mounted_release.archive) == mounted_release.archive_modified;
    };
    if (!unchanged()) throw std::runtime_error("Extracted VFS: mounted archive changed");
    auto bytes = read_range(mounted_release.archive, descriptor.byte_offset(), descriptor.payload_size, max_bytes);
    if (!unchanged()) throw std::runtime_error("Extracted VFS: archive changed during read");
    return bytes;
}

std::vector<std::byte> DualExtractedVfs::read_file(dual::GameVersion version,
    std::string_view relative_path, std::uint64_t max_bytes) const {
    const auto path = checked_file(release(version).root, relative_path);
    return read_range(path, 0, std::filesystem::file_size(path), max_bytes);
}

std::uint64_t DualExtractedVfs::file_size(dual::GameVersion version,
    std::string_view relative_path) const {
    return std::filesystem::file_size(checked_file(release(version).root, relative_path));
}

std::vector<std::byte> DualExtractedVfs::read_file_range(dual::GameVersion version,
    std::string_view relative_path, std::uint64_t offset, std::uint64_t bytes,
    std::uint64_t max_bytes) const {
    const auto& mounted_release = release(version);
    const auto path = checked_file(mounted_release.root, relative_path);
    const auto modified = std::filesystem::last_write_time(path);
    if (path == mounted_release.archive &&
        (modified != mounted_release.archive_modified ||
         std::filesystem::file_size(path) != mounted_release.spec.archive_bytes))
        throw std::runtime_error("Extracted VFS: mounted archive changed");
    auto result = read_range(path, offset, bytes, max_bytes);
    if (std::filesystem::last_write_time(path) != modified)
        throw std::runtime_error("Extracted VFS: file changed during range read");
    return result;
}
} // namespace fate::vfs
