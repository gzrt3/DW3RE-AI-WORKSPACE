#include <algorithm>
#include <array>
#include <cmath>
#include <limits>
#include <stdexcept>
#include <string_view>

#include "fate/formats/linkdata.hpp"
#include "fate/formats/tim2.hpp"

namespace fate::formats::linkdata {
namespace {

[[nodiscard]] std::uint32_t read_u32(std::span<const std::byte> bytes, std::size_t offset) {
    if (offset > bytes.size() || sizeof(std::uint32_t) > bytes.size() - offset) {
        throw std::runtime_error("Descriptor extends beyond ELF bytes");
    }
    std::uint64_t value{};
    for (std::size_t index = 0; index < sizeof(std::uint32_t); ++index) {
        value |= static_cast<std::uint64_t>(std::to_integer<unsigned int>(bytes[offset + index])) << (index * 8U);
    }
    return static_cast<std::uint32_t>(value);
}

[[nodiscard]] std::string to_hex(std::span<const std::byte> bytes) {
    constexpr char digits[] = "0123456789abcdef";
    std::string result;
    result.reserve(bytes.size() * 2U);
    for (const std::byte value : bytes) {
        const unsigned int byte = std::to_integer<unsigned int>(value);
        result.push_back(digits[byte >> 4U]);
        result.push_back(digits[byte & 0x0fU]);
    }
    return result;
}

[[nodiscard]] std::string printable_ascii(std::span<const std::byte> bytes) {
    std::string result;
    result.reserve(bytes.size());
    for (const std::byte value : bytes) {
        const unsigned int character = std::to_integer<unsigned int>(value);
        if (character < 0x20U || character > 0x7eU) {
            return {};
        }
        result.push_back(static_cast<char>(character));
    }
    return result;
}

[[nodiscard]] double shannon_entropy(std::span<const std::byte> bytes) {
    if (bytes.empty()) {
        return 0.0;
    }
    std::array<std::uint32_t, 256> counts{};
    for (const std::byte value : bytes) {
        ++counts[std::to_integer<std::uint8_t>(value)];
    }
    double entropy = 0.0;
    for (const std::uint32_t count : counts) {
        if (count == 0U) {
            continue;
        }
        const double probability = static_cast<double>(count) / static_cast<double>(bytes.size());
        entropy -= probability * std::log2(probability);
    }
    return entropy;
}

[[nodiscard]] OffsetTableEvidence find_partition_table(std::span<const std::byte> payload) {
    constexpr std::array<std::uint32_t, 3> alignments{16, 64, 2048};
    const std::size_t scan_limit = std::min<std::size_t>(payload.size(), 64U);
    for (std::size_t count_offset = 0; count_offset + 4U <= scan_limit; count_offset += 4U) {
        const std::uint32_t count = read_u32(payload, count_offset);
        if (count < 2U || count > 256U) {
            continue;
        }
        for (const std::uint32_t boundary_count : {count, count + 1U}) {
            const std::uint64_t table_end = static_cast<std::uint64_t>(count_offset) + 4U +
                static_cast<std::uint64_t>(boundary_count) * 4U;
            if (table_end > scan_limit) {
                continue;
            }
            std::vector<std::uint32_t> offsets;
            offsets.reserve(boundary_count);
            bool monotone = true;
            for (std::uint32_t index = 0; index < boundary_count; ++index) {
                const std::uint32_t value = read_u32(payload, count_offset + 4U + index * 4U);
                if (value > payload.size() || (index > 0U && value <= offsets.back())) {
                    monotone = false;
                    break;
                }
                offsets.push_back(value);
            }
            if (!monotone || offsets.back() != payload.size()) {
                continue;
            }
            for (const std::uint32_t alignment : alignments) {
                const std::uint64_t expected_first =
                    (table_end + alignment - 1U) / alignment * alignment;
                if (offsets.front() != expected_first) {
                    continue;
                }
                const bool aligned = std::all_of(
                    offsets.begin(), offsets.end() - 1,
                    [alignment](std::uint32_t value) { return value % alignment == 0U; });
                if (!aligned) {
                    continue;
                }
                return OffsetTableEvidence{true, static_cast<std::uint32_t>(count_offset),
                    count, alignment, std::move(offsets)};
            }
        }
    }
    return {};
}

[[nodiscard]] std::uint32_t magic_word(std::string_view value) {
    return static_cast<std::uint32_t>(static_cast<unsigned char>(value[0])) |
        (static_cast<std::uint32_t>(static_cast<unsigned char>(value[1])) << 8U) |
        (static_cast<std::uint32_t>(static_cast<unsigned char>(value[2])) << 16U) |
        (static_cast<std::uint32_t>(static_cast<unsigned char>(value[3])) << 24U);
}

}

std::string_view family_name(ResourceFamily family) noexcept {
    switch (family) {
    case ResourceFamily::tim2_single: return "TIM2_SINGLE";
    case ResourceFamily::tim2_sector_array: return "TIM2_SECTOR_ARRAY";
    case ResourceFamily::subarchive_offset_table: return "SUBARCHIVE_OFFSET_TABLE";
    case ResourceFamily::zero_or_empty: return "ZERO_OR_EMPTY";
    case ResourceFamily::structured_binary: return "STRUCTURED_BINARY";
    case ResourceFamily::compressed_candidate: return "COMPRESSED_CANDIDATE";
    }
    return "STRUCTURED_BINARY";
}

ResourceTaxonomy analyze_payload(
    std::span<const std::byte> payload,
    bool top_level_tim2,
    bool sector_array) {
    ResourceTaxonomy result;
    const std::size_t prefix_size = std::min<std::size_t>(64U, payload.size());
    const auto prefix = payload.first(prefix_size);
    result.first_4_bytes_hex = to_hex(prefix.first(std::min<std::size_t>(4U, prefix.size())));
    result.first_8_bytes_hex = to_hex(prefix.first(std::min<std::size_t>(8U, prefix.size())));
    result.printable_signature = printable_ascii(prefix.first(std::min<std::size_t>(8U, prefix.size())));
    result.first_64_bytes_hex = to_hex(prefix);
    result.first_64_entropy_bits = shannon_entropy(prefix);
    result.offset_table = find_partition_table(payload);
    result.entire_payload_zero = true;
    for (const std::byte value : payload) {
        if (value == std::byte{0}) {
            ++result.zero_bytes;
        } else {
            result.entire_payload_zero = false;
        }
    }

    struct Marker {
        std::string_view bytes;
        bool geometry;
    };
    const std::array<Marker, 5> markers{{
        {std::string_view("TIM2", 4), false},
        {std::string_view("cb2\0", 4), true},
        {std::string_view("gb2\0", 4), true},
        {std::string_view("fob\0", 4), true},
        {std::string_view("tm3 ", 4), true}
    }};
    for (const Marker& marker : markers) {
        SignatureHit hit;
        hit.magic_hex = to_hex(std::as_bytes(std::span(marker.bytes.data(), marker.bytes.size())));
        std::size_t search_offset = payload.empty() ? 0U : 1U;
        while (search_offset + marker.bytes.size() <= payload.size()) {
            const auto begin = payload.begin() + static_cast<std::ptrdiff_t>(search_offset);
            const auto found = std::search(
                begin, payload.end(), marker.bytes.begin(), marker.bytes.end(),
                [](std::byte lhs, char rhs) {
                    return std::to_integer<unsigned char>(lhs) == static_cast<unsigned char>(rhs);
                });
            if (found == payload.end()) {
                break;
            }
            const std::size_t offset = static_cast<std::size_t>(found - payload.begin());
            ++hit.count;
            if (hit.offsets.size() < 32U) {
                hit.offsets.push_back(offset);
            }
            if (marker.geometry) {
                ++result.nested_geometry_signature_count;
            } else if (offset + tim2::file_header_size + tim2::picture_header_size <= payload.size()) {
                try {
                    const auto nested = tim2::parse(payload.subspan(offset));
                    if (nested.picture.declared_extent() <= payload.size() - offset) {
                        ++result.valid_nested_tim2_count;
                    }
                } catch (const std::exception&) {
                }
            }
            search_offset = offset + 1U;
        }
        if (hit.count > 0U) {
            result.repeated_signatures.push_back(std::move(hit));
        }
    }

    const std::string top_magic = printable_ascii(prefix.first(std::min<std::size_t>(4U, prefix.size())));
    constexpr std::array<std::string_view, 10> structured_magics{
        "TIM2", "PS2 ", "IECS", "tm3 ", "cb2\0", "gb2\0", "fob\0", "MWo3", "COLL", "BNS "
    };
    const bool known_magic = std::find(structured_magics.begin(), structured_magics.end(), top_magic) !=
        structured_magics.end();
    if (payload.empty() || result.entire_payload_zero) {
        result.family = ResourceFamily::zero_or_empty;
    } else if (top_level_tim2) {
        result.family = sector_array ? ResourceFamily::tim2_sector_array : ResourceFamily::tim2_single;
    } else if (result.offset_table.detected || result.valid_nested_tim2_count > 0U ||
        result.nested_geometry_signature_count > 0U) {
        result.family = ResourceFamily::subarchive_offset_table;
    } else if (known_magic) {
        result.family = ResourceFamily::structured_binary;
    } else if (result.first_64_entropy_bits >= 5.25) {
        result.family = ResourceFamily::compressed_candidate;
    } else {
        result.family = ResourceFamily::structured_binary;
    }
    return result;
}

std::uint64_t Descriptor::byte_offset() const noexcept {
    return static_cast<std::uint64_t>(sector_offset) * sector_size;
}

ArchiveView::ArchiveView(const std::filesystem::path& path)
    : stream_(path, std::ios::binary) {
    if (!stream_) {
        throw std::runtime_error("Cannot open archive: " + path.string());
    }
    stream_.seekg(0, std::ios::end);
    const std::streamoff end = stream_.tellg();
    if (end < 0) {
        throw std::runtime_error("Cannot determine archive size: " + path.string());
    }
    size_ = static_cast<std::uint64_t>(end);
}

std::uint64_t ArchiveView::size() const noexcept { return size_; }

std::vector<std::byte> ArchiveView::read(std::uint64_t offset, std::uint64_t count) {
    if (offset > size_ || count > size_ - offset ||
        count > static_cast<std::uint64_t>(std::numeric_limits<std::size_t>::max()) ||
        count > static_cast<std::uint64_t>(std::numeric_limits<std::streamsize>::max())) {
        throw std::out_of_range("Archive read exceeds validated file bounds");
    }
    std::vector<std::byte> result(static_cast<std::size_t>(count));
    stream_.clear();
    stream_.seekg(static_cast<std::streamoff>(offset), std::ios::beg);
    if (!stream_) {
        throw std::runtime_error("Archive seek failed");
    }
    stream_.read(reinterpret_cast<char*>(result.data()), static_cast<std::streamsize>(count));
    if (stream_.gcount() != static_cast<std::streamsize>(count)) {
        throw std::runtime_error("Archive read was truncated");
    }
    return result;
}

std::vector<std::byte> ArchiveView::read_payload(const Descriptor& descriptor) {
    return read(descriptor.byte_offset(), descriptor.payload_size);
}

Index Index::parse(
    std::span<const std::byte> elf_bytes,
    const elf::Image& image,
    std::uint32_t table_virtual_address,
    std::uint32_t descriptor_count,
    std::uint64_t archive_size,
    bool require_contiguous) {
    if (descriptor_count == 0U ||
        static_cast<std::uint64_t>(descriptor_count) * descriptor_size >
            std::numeric_limits<std::uint32_t>::max()) {
        throw std::invalid_argument("Descriptor table size is invalid");
    }
    const std::uint32_t table_bytes = descriptor_count * descriptor_size;
    const std::uint64_t table_offset = image.virtual_to_file_offset(table_virtual_address, table_bytes);
    if (table_offset > elf_bytes.size() || table_bytes > elf_bytes.size() - table_offset) {
        throw std::runtime_error("Mapped descriptor table exceeds ELF file bounds");
    }

    Index index;
    index.table_virtual_address_ = table_virtual_address;
    index.table_file_offset_ = table_offset;
    index.descriptors_.reserve(descriptor_count);
    std::uint64_t previous_end_sector{};
    for (std::uint32_t id = 0; id < descriptor_count; ++id) {
        const std::size_t offset = static_cast<std::size_t>(table_offset) +
            static_cast<std::size_t>(id) * descriptor_size;
        const Descriptor descriptor{
            read_u32(elf_bytes, offset),
            read_u32(elf_bytes, offset + 4),
            read_u32(elf_bytes, offset + 8),
            read_u32(elf_bytes, offset + 12)};
        const std::uint64_t expected_sectors =
            (static_cast<std::uint64_t>(descriptor.payload_size) + sector_size - 1U) / sector_size;
        const std::uint64_t sector_end =
            static_cast<std::uint64_t>(descriptor.sector_offset) + descriptor.sector_count;
        const std::uint64_t allocation_end = sector_end * sector_size;
        const std::uint64_t payload_end = descriptor.byte_offset() + descriptor.payload_size;
        if (descriptor.sector_count != expected_sectors) {
            throw std::runtime_error("Descriptor sector_count does not match payload_size");
        }
        if (payload_end > archive_size || allocation_end > archive_size) {
            throw std::runtime_error("Descriptor points beyond archive bounds");
        }
        if (require_contiguous && id > 0U && descriptor.sector_offset != previous_end_sector) {
            throw std::runtime_error("Descriptor sequence contains a gap or overlap");
        }
        previous_end_sector = sector_end;
        index.descriptors_.push_back(descriptor);
    }
    return index;
}

std::uint32_t Index::table_virtual_address() const noexcept { return table_virtual_address_; }
std::uint64_t Index::table_file_offset() const noexcept { return table_file_offset_; }
const std::vector<Descriptor>& Index::descriptors() const noexcept { return descriptors_; }

}