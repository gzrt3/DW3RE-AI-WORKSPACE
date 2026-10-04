#include "fate/canonical_spec.hpp"

namespace fate::canonical {

const std::array<StatRange, 13>& dw3_stat_ranges() noexcept {
    static constexpr std::array<StatRange, 13> kRanges{{
        {"HP Max", 1, 100},
        {"Musou Max", 1, 40},
        {"Attack", 1, 20},
        {"Defense", 1, 40},
        {"Bow Attack", 1, 50},
        {"Bow Defense", 1, 50},
        {"Mounted Attack", 1, 40},
        {"Mounted Defense", 1, 40},
        {"Speed", 1, 20},
        {"Jump", 1, 16},
        {"Luck", 1, 20},
        {"Reach", 1, 30},
        {"Musou Charge", 1, 50}
    }};
    return kRanges;
}

const std::array<StatRange, 16>& dw3xl_stat_ranges() noexcept {
    static constexpr std::array<StatRange, 16> kRanges{{
        {"Health Gauge", 1, 60},
        {"Musou Gauge", 1, 60},
        {"Meat Bun Restore", 1, 20},
        {"Attack", 1, 20},
        {"Defense", 1, 40},
        {"Charge", 1, 12},
        {"Bow Attack", 1, 40},
        {"Bow Defense", 1, 40},
        {"Horseback Attack", 1, 40},
        {"Horseback Defense", 1, 40},
        {"Movement Speed", 1, 16},
        {"Jump", 1, 16},
        {"Luck", 1, 20},
        {"Attack Range", 1, 20},
        {"Increased Musou", 1, 20},
        {"Initial Arrow Count", 1, 22}
    }};
    return kRanges;
}

} // namespace fate::canonical
