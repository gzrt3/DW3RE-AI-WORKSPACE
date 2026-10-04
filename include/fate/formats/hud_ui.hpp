#pragma once

#include "fate/formats/common.hpp"
#include "fate/formats/tim2.hpp"
#include <cstddef>
#include <cstdint>
#include <span>
#include <string_view>

namespace fate::formats::hud_ui {

enum class UiRole : std::uint8_t {
    Unknown = 0,
    CandidateHudOrFont = 1,
    CandidatePortrait = 2,
    CandidateWeaponAtlas = 3,
    CandidateFullscreen = 4
};

struct Tim2CatalogEntry {
    std::uint32_t width{};
    std::uint32_t height{};
    std::uint8_t image_type{};
    std::string_view pixel_format{};
    bool csm1{};
    UiRole role{UiRole::Unknown};
    EvidenceStatus format_status{EvidenceStatus::Fact};
    EvidenceStatus role_status{EvidenceStatus::Unknown};
};

[[nodiscard]] Tim2CatalogEntry inspect_tim2_for_catalog(std::span<const std::byte> bytes);

} // namespace fate::formats::hud_ui
