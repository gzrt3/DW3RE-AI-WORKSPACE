#pragma once

#include "fate/formats/common.hpp"
#include <array>
#include <cstddef>
#include <cstdint>
#include <span>

namespace fate::formats::mot_anim {

struct PrimitiveTrackWord {
    std::uint32_t raw_word{};
    std::uint8_t bone_index{};
    std::uint8_t dispatch_id{};
    std::uint8_t stride_mode{};
    std::uint8_t flags_16_17{};
    std::uint16_t sample_count{};
    EvidenceStatus status{EvidenceStatus::Fact};
};

struct MotionResourceView {
    std::uint32_t first_word{};
    std::uint32_t second_word{};
    std::size_t payload_size{};
    std::array<std::uint8_t, 64> prefix_bytes{};
    std::size_t prefix_length{};
    EvidenceStatus container_layout_status{EvidenceStatus::Unknown};
};

[[nodiscard]] constexpr PrimitiveTrackWord decode_primitive_track_word(std::uint32_t raw) noexcept {
    PrimitiveTrackWord t{};
    t.raw_word = raw;
    t.bone_index = static_cast<std::uint8_t>(raw & 0xFFU);
    t.dispatch_id = static_cast<std::uint8_t>((raw >> 8U) & 0x1FU);
    t.stride_mode = static_cast<std::uint8_t>((raw >> 13U) & 0x07U);
    t.flags_16_17 = static_cast<std::uint8_t>((raw >> 16U) & 0x03U);
    t.sample_count = static_cast<std::uint16_t>((raw >> 18U) & 0x3FFFU);
    t.status = EvidenceStatus::Fact;
    return t;
}

[[nodiscard]] MotionResourceView inspect_motion_resource(std::span<const std::byte> bytes);

} // namespace fate::formats::mot_anim
