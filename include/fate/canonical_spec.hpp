#pragma once

#include <array>
#include <cstdint>
#include <string_view>

namespace fate::canonical {

enum class Kingdom : std::uint8_t {
    Shu = 0,
    Wei = 1,
    Wu = 2,
    Other = 3
};

enum class Difficulty : std::uint8_t {
    Novice = 0,    // Added in DW3XL (p.11, p.14)
    Easy = 1,
    Normal = 2,
    Hard = 3,
    VeryHard = 4   // Added in DW3XL; unlocks 5th weapons (p.14, p.28)
};

enum class BodyguardWeaponType : std::uint8_t {
    Sword = 0,
    Spear = 1,
    Pike = 2,
    Bow = 3,
    Crossbow = 4
};

enum class BodyguardOrder : std::uint8_t {
    Attack = 0,
    Defense = 1,
    Support = 2,
    Shield = 3,
    Protect = 4
};

enum class BodyguardUniformColor : std::uint8_t {
    Normal = 0,
    Blue = 1,
    Red = 2,
    Green = 3,
    Purple = 4
};

enum class ElementalMark : std::uint8_t {
    None = 0,
    Death = 1,
    Fire = 2,
    Lightning = 3,
    Wind = 4,
    Steel = 5
};

enum class ComboTier : std::uint8_t {
    None = 0,
    Good = 1,     // 50 - 79 points (DW3XL p.40)
    Great = 2,    // 80 - 99 points
    Perfect = 3   // 100+ points
};

struct StatRange {
    std::string_view name;
    std::uint16_t min_val{};
    std::uint16_t max_val{};
};

inline constexpr std::uint32_t kInitialArrows = 20U;
inline constexpr std::uint32_t kMaxArrows = 99U;
inline constexpr std::uint32_t kDashAttackMinSteps = 6U;
inline constexpr std::uint32_t kStageTimeLimitMinutes = 100U;
inline constexpr std::uint32_t kVersusTimeLimitMinutes = 90U;
inline constexpr std::uint32_t kAudioVolumeMin = 0U;
inline constexpr std::uint32_t kAudioVolumeMax = 15U;

[[nodiscard]] constexpr ComboTier evaluate_combo_score(std::uint32_t points) noexcept {
    if (points >= 100U) return ComboTier::Perfect;
    if (points >= 80U) return ComboTier::Great;
    if (points >= 50U) return ComboTier::Good;
    return ComboTier::None;
}

[[nodiscard]] constexpr std::string_view canonical_char0_name() noexcept {
    return "Zhao Yun";
}

[[nodiscard]] const std::array<StatRange, 13>& dw3_stat_ranges() noexcept;
[[nodiscard]] const std::array<StatRange, 16>& dw3xl_stat_ranges() noexcept;

} // namespace fate::canonical
