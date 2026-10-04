#pragma once

#include "fate/formats/common.hpp"
#include <array>
#include <cstddef>
#include <cstdint>
#include <span>
#include <vector>

namespace fate::formats::stage {

inline constexpr std::uint32_t kMagicGb2 = 0x00326267U; // "gb2\0"
inline constexpr std::uint32_t kMagicCb2 = 0x00326263U; // "cb2\0"

enum class StageFormatKind : std::uint8_t {
    Gb2 = 0,
    Cb2 = 1
};

struct StageResourceView {
    StageFormatKind kind{};
    std::uint32_t magic{};
    std::uint32_t word1_version_like{};
    std::size_t payload_size{};
    std::array<std::uint32_t, 16> header_words{};
    std::size_t header_word_count{};
    EvidenceStatus signature_status{EvidenceStatus::Fact};
    EvidenceStatus internal_grid_status{EvidenceStatus::Unknown};
};

// Retail MIPS establishes a 0x20-byte record stride. Field semantics remain
// UNKNOWN; preserve every byte and expose only explicitly offset-based reads.
inline constexpr std::size_t kStageUnitSlot32Size = 32U;

struct StageUnitSlot32 {
    std::array<std::byte, kStageUnitSlot32Size> raw{};
    EvidenceStatus field_semantics_status{EvidenceStatus::Unknown};

    [[nodiscard]] std::uint8_t read_u8(std::size_t offset) const;
    [[nodiscard]] std::uint16_t read_u16_le(std::size_t offset) const;
};

[[nodiscard]] StageResourceView inspect_stage_resource(std::span<const std::byte> bytes);
[[nodiscard]] StageUnitSlot32 parse_stage_unit_slot32(
    std::span<const std::byte> bytes,
    std::size_t offset = 0U);
[[nodiscard]] std::vector<StageUnitSlot32> parse_stage_unit_slots32(
    std::span<const std::byte> bytes,
    std::size_t offset,
    std::size_t count);

} // namespace fate::formats::stage
