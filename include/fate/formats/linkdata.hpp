#pragma once

#include <cstddef>
#include <cstdint>
#include <filesystem>
#include <fstream>
#include <span>
#include <string>
#include <string_view>
#include <vector>

#include "fate/elf.hpp"

namespace fate::formats::linkdata {

inline constexpr std::uint32_t sector_size = 2048;
inline constexpr std::uint32_t descriptor_size = 16;

enum class ResourceFamily {
    tim2_single,
    tim2_sector_array,
    subarchive_offset_table,
    zero_or_empty,
    structured_binary,
    compressed_candidate
};

struct OffsetTableEvidence {
    bool detected{};
    std::uint32_t header_offset{};
    std::uint32_t entry_count{};
    std::uint32_t alignment{};
    std::vector<std::uint32_t> offsets;
};

struct SignatureHit {
    std::string magic_hex;
    std::uint64_t count{};
    std::vector<std::uint64_t> offsets;
};

struct ResourceTaxonomy {
    ResourceFamily family{ResourceFamily::structured_binary};
    std::string first_4_bytes_hex;
    std::string first_8_bytes_hex;
    std::string printable_signature;
    std::string first_64_bytes_hex;
    double first_64_entropy_bits{};
    std::uint64_t zero_bytes{};
    bool entire_payload_zero{};
    OffsetTableEvidence offset_table;
    std::uint64_t valid_nested_tim2_count{};
    std::uint64_t nested_geometry_signature_count{};
    std::vector<SignatureHit> repeated_signatures;
};

[[nodiscard]] std::string_view family_name(ResourceFamily family) noexcept;
[[nodiscard]] ResourceTaxonomy analyze_payload(
    std::span<const std::byte> payload,
    bool top_level_tim2,
    bool sector_array);

struct Descriptor {
    std::uint32_t sector_offset{};
    std::uint32_t sector_count{};
    std::uint32_t payload_size{};
    std::uint32_t reserved{};

    [[nodiscard]] std::uint64_t byte_offset() const noexcept;
};

class ArchiveView {
public:
    explicit ArchiveView(const std::filesystem::path& path);

    [[nodiscard]] std::uint64_t size() const noexcept;
    [[nodiscard]] std::vector<std::byte> read(std::uint64_t offset, std::uint64_t count);
    [[nodiscard]] std::vector<std::byte> read_payload(const Descriptor& descriptor);

private:
    std::ifstream stream_;
    std::uint64_t size_{};
};

class Index {
public:
    [[nodiscard]] static Index parse(
        std::span<const std::byte> elf_bytes,
        const elf::Image& image,
        std::uint32_t table_virtual_address,
        std::uint32_t descriptor_count,
        std::uint64_t archive_size,
        bool require_contiguous = true);

    [[nodiscard]] std::uint32_t table_virtual_address() const noexcept;
    [[nodiscard]] std::uint64_t table_file_offset() const noexcept;
    [[nodiscard]] const std::vector<Descriptor>& descriptors() const noexcept;

private:
    std::uint32_t table_virtual_address_{};
    std::uint64_t table_file_offset_{};
    std::vector<Descriptor> descriptors_;
};

}