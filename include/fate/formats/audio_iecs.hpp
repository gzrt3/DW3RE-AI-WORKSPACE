#pragma once

#include "fate/formats/common.hpp"
#include <array>
#include <cstddef>
#include <cstdint>
#include <span>
#include <vector>

namespace fate::formats::audio {

inline constexpr std::uint32_t kMagicIecs = 0x53434549U; // "IECS"
inline constexpr std::uint32_t kTagVers   = 0x56736573U; // "sseV"
inline constexpr std::uint32_t kTagHead   = 0x48656164U; // "daeH"
inline constexpr std::uint32_t kTagProg   = 0x50726F67U; // "gorP"
inline constexpr std::uint32_t kTagSamp   = 0x53616D70U; // "pmaS"
inline constexpr std::uint32_t kTagVagi   = 0x56616769U; // "igaV"

struct IecsTagHit {
    std::uint32_t tag_le{};
    std::size_t byte_offset{};
};

struct IecsResourceView {
    std::uint32_t magic{};
    std::size_t payload_size{};
    std::array<std::uint32_t, 16> prefix_words{};
    std::vector<IecsTagHit> discovered_tags;
    EvidenceStatus signature_status{EvidenceStatus::Fact};
    EvidenceStatus adpcm_stream_status{EvidenceStatus::Unknown};
};

[[nodiscard]] IecsResourceView inspect_iecs_resource(std::span<const std::byte> bytes);

} // namespace fate::formats::audio
