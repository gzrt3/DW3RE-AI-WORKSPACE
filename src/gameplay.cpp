#include "fate/gameplay.hpp"

#include <algorithm>
#include <cmath>
#include <map>
#include <stdexcept>
#include <utility>

namespace fate::gameplay {
namespace {
constexpr float body_half_extent = 0.38F;
constexpr float spatial_cell_size = 4.0F;

float clamp_unit(float value) { return std::clamp(value, -1.0F, 1.0F); }
float squared(float value) { return value * value; }

} // namespace

std::size_t ActiveUnits::spawn(std::uint32_t id, std::uint8_t team, float x, float y, float z,
                               bool officer, bool player) {
    if (count_ >= active_unit_capacity) throw std::length_error("GAMEPLAY: ActiveUnits capacity exceeded");
    if (player) {
        for (std::size_t index = 0; index < count_; ++index)
            if (player_[index]) throw std::logic_error("GAMEPLAY: player unit already exists");
    }
    const std::size_t index = count_++;
    id_[index] = id;
    life_[index] = 100.0F;
    musou_[index] = 0.0F;
    x_[index] = x;
    y_[index] = y;
    z_[index] = z;
    yaw_[index] = 0.0F;
    state_[index] = UnitState::idle;
    attack_[index] = AttackKind::none;
    team_[index] = team;
    officer_[index] = officer;
    hyper_armor_[index] = false;
    player_[index] = player;
    if (player) player_index_ = index;
    return index;
}

UnitView ActiveUnits::view(std::size_t index) const {
    if (index >= count_) throw std::out_of_range("GAMEPLAY: unit index out of range");
    return {id_[index], life_[index], musou_[index], x_[index], y_[index], z_[index], yaw_[index],
        state_[index], attack_[index], combo_count_[index], charge_level_[index], team_[index], officer_[index],
        hyper_armor_[index], flinch_seconds_[index]};
}

void ActiveUnits::set_hyper_armor(std::size_t index, bool enabled) {
    if (index >= count_) throw std::out_of_range("GAMEPLAY: unit index out of range");
    hyper_armor_[index] = enabled;
}

void ActiveUnits::set_resources(std::size_t index, float life, float musou) {
    if (index >= count_ || !std::isfinite(life) || !std::isfinite(musou) ||
        life < 0.0F || life > 100.0F || musou < 0.0F || musou > 100.0F)
        throw std::out_of_range("GAMEPLAY: invalid unit resources");
    life_[index] = life;
    musou_[index] = musou;
}

std::vector<ActorPose> ActiveUnits::actors() const {
    std::vector<ActorPose> result;
    result.reserve(count_);
    for (std::size_t index = 0; index < count_; ++index) {
        if (life_[index] > 0.0F) result.push_back({id_[index], x_[index], z_[index], yaw_[index], life_[index],
            musou_[index], team_[index], state_[index]});
    }
    return result;
}

std::size_t ActiveUnits::alive_count(std::uint8_t team) const noexcept {
    std::size_t result{};
    for (std::size_t index = 0; index < count_; ++index)
        if (team_[index] == team && life_[index] > 0.0F) ++result;
    return result;
}

void ActiveUnits::begin_attack(std::size_t attacker, AttackKind kind, std::uint8_t charge_level) {
    if (attacker >= count_ || life_[attacker] <= 0.0F || attack_seconds_[attacker] > 0.0F) return;
    attack_[attacker] = kind;
    hyper_armor_[attacker] = officer_[attacker];
    state_[attacker] = UnitState::attack;
    attack_seconds_[attacker] = kind == AttackKind::charge ? 0.35F + 0.035F * charge_level : 0.32F;
    hit_applied_[attacker] = false;
    if (kind == AttackKind::normal) {
        combo_count_[attacker] = static_cast<std::uint8_t>(std::min<unsigned>(6U,
            static_cast<unsigned>(combo_count_[attacker]) + 1U));
        combo_seconds_[attacker] = 0.85F;
        hit_radius_[attacker] = 1.25F + 0.08F * static_cast<float>(combo_count_[attacker] - 1U);
        hit_damage_[attacker] = 12.0F + 1.5F * static_cast<float>(combo_count_[attacker] - 1U);
    } else if (kind == AttackKind::charge) {
        hit_radius_[attacker] = 1.65F + 0.18F * static_cast<float>(charge_level);
        hit_damage_[attacker] = 12.0F + 4.0F * static_cast<float>(charge_level);
    } else {
        hit_radius_[attacker] = 3.35F;
        hit_damage_[attacker] = 34.0F;
        musou_[attacker] = std::max(0.0F, musou_[attacker] - 100.0F);
    }
    ++metrics_.attacks;
    apply_attack(attacker);
}

void ActiveUnits::apply_attack(std::size_t attacker) {
    if (hit_applied_[attacker]) return;
    hit_applied_[attacker] = true;

    // Prototype hit socket: a root-relative matrix translated to a forward attack sphere.
    // It is deliberately not claimed as a recovered Omega Force bone/weapon socket.
    const float cosine = std::cos(yaw_[attacker]);
    const float sine = std::sin(yaw_[attacker]);
    const std::array<float, 16> root_matrix{
        cosine, 0.0F, -sine, 0.0F,
        0.0F,   1.0F, 0.0F,  0.0F,
        sine,   0.0F, cosine,0.0F,
        x_[attacker], y_[attacker], z_[attacker], 1.0F
    };
    constexpr float local_forward = 0.85F;
    constexpr float local_height = 0.9F;
    const float center_x = root_matrix[8] * local_forward + root_matrix[12];
    const float center_y = root_matrix[13] + local_height;
    const float center_z = root_matrix[10] * local_forward + root_matrix[14];
    for (std::size_t target = 0; target < count_; ++target) {
        if (team_[target] == team_[attacker] || life_[target] <= 0.0F) continue;
        const float dx = x_[target] - center_x;
        const float dy = y_[target] + 0.9F - center_y;
        const float dz = z_[target] - center_z;
        const float reach = hit_radius_[attacker] + body_half_extent;
        if (squared(dx) + squared(dy) + squared(dz) > squared(reach)) continue;
        life_[target] = std::max(0.0F, life_[target] - hit_damage_[attacker]);
        musou_[attacker] = std::min(100.0F, musou_[attacker] + 7.0F);
        ++metrics_.hit_events;
        if (!hyper_armor_[target]) {
            flinch_seconds_[target] = 0.24F;
            if (state_[target] == UnitState::attack) attack_seconds_[target] = 0.0F;
            if (life_[target] > 0.0F) state_[target] = UnitState::engage;
        }
    }
}

void ActiveUnits::update_ai(std::size_t index, float fixed_seconds, std::size_t player) {
    if (life_[index] <= 0.0F || index == player || attack_seconds_[index] > 0.0F || flinch_seconds_[index] > 0.0F)
        return;
    const float dx = x_[player] - x_[index];
    const float dz = z_[player] - z_[index];
    const float distance_squared = squared(dx) + squared(dz);
    if (life_[index] < 15.0F) {
        state_[index] = UnitState::flee;
        if (distance_squared > 0.0001F) {
            const float distance = std::sqrt(distance_squared);
            x_[index] -= (dx / distance) * 2.4F * fixed_seconds;
            z_[index] -= (dz / distance) * 2.4F * fixed_seconds;
        }
        return;
    }
    if (distance_squared > 2.15F * 2.15F) {
        state_[index] = UnitState::march;
        const float distance = std::sqrt(distance_squared);
        if (distance > 0.0001F) {
            x_[index] += (dx / distance) * 2.6F * fixed_seconds;
            z_[index] += (dz / distance) * 2.6F * fixed_seconds;
            yaw_[index] = std::atan2(dx, dz);
        }
        return;
    }
    state_[index] = UnitState::engage;
    if (cooldown_seconds_[index] <= 0.0F) {
        begin_attack(index, AttackKind::normal, 0U);
        cooldown_seconds_[index] = officer_[index] ? 1.0F : 1.3F;
    }
}

void ActiveUnits::resolve_spatial_collisions() {
    using CellKey = std::pair<std::int32_t, std::int32_t>;
    std::map<CellKey, std::vector<std::size_t>> grid;
    for (std::size_t index = 0; index < count_; ++index) {
        if (life_[index] <= 0.0F) continue;
        const auto cell_x = static_cast<std::int32_t>(std::floor(x_[index] / spatial_cell_size));
        const auto cell_z = static_cast<std::int32_t>(std::floor(z_[index] / spatial_cell_size));
        grid[{cell_x, cell_z}].push_back(index);
    }
    for (auto& [cell, members] : grid) {
        for (std::int32_t dx = 0; dx <= 1; ++dx) {
            for (std::int32_t dz = -1; dz <= 1; ++dz) {
                if (dx == 0 && dz < 0) continue;
                const auto found = grid.find({cell.first + dx, cell.second + dz});
                if (found == grid.end()) continue;
                for (const std::size_t first : members) {
                    for (const std::size_t second : found->second) {
                        if (first >= second) continue;
                        const float difference_x = x_[second] - x_[first];
                        const float difference_z = z_[second] - z_[first];
                        const float overlap_x = body_half_extent * 2.0F - std::abs(difference_x);
                        const float overlap_z = body_half_extent * 2.0F - std::abs(difference_z);
                        if (overlap_x <= 0.0F || overlap_z <= 0.0F) continue;
                        ++metrics_.collision_pairs;
                        const float split = (player_[first] || player_[second]) ? 0.5F : 0.25F;
                        if (overlap_x < overlap_z) {
                            const float direction = difference_x < 0.0F ? -1.0F : 1.0F;
                            x_[first] -= direction * overlap_x * split;
                            x_[second] += direction * overlap_x * split;
                        } else {
                            const float direction = difference_z < 0.0F ? -1.0F : 1.0F;
                            z_[first] -= direction * overlap_z * split;
                            z_[second] += direction * overlap_z * split;
                        }
                    }
                }
            }
        }
    }
}

void ActiveUnits::update(float fixed_seconds_value, const PlayerInput& player_input) {
    if (!(fixed_seconds_value > 0.0F) || fixed_seconds_value > 0.05F || !std::isfinite(fixed_seconds_value))
        throw std::invalid_argument("GAMEPLAY: update requires a finite fixed step in (0, 0.05]");
    ++metrics_.fixed_steps;
    for (std::size_t index = 0; index < count_; ++index) {
        attack_seconds_[index] = std::max(0.0F, attack_seconds_[index] - fixed_seconds_value);
        cooldown_seconds_[index] = std::max(0.0F, cooldown_seconds_[index] - fixed_seconds_value);
        combo_seconds_[index] = std::max(0.0F, combo_seconds_[index] - fixed_seconds_value);
        flinch_seconds_[index] = std::max(0.0F, flinch_seconds_[index] - fixed_seconds_value);
        if (combo_seconds_[index] == 0.0F) combo_count_[index] = 0U;
        if (attack_seconds_[index] == 0.0F && attack_[index] != AttackKind::none) {
            attack_[index] = AttackKind::none;
            hyper_armor_[index] = false;
            if (life_[index] > 0.0F) state_[index] = UnitState::engage;
        }
    }
    if (count_ == 0U) return;
    const std::size_t player = player_index_;
    if (player < count_ && life_[player] > 0.0F && attack_seconds_[player] <= 0.0F && flinch_seconds_[player] <= 0.0F) {
        const bool true_musou = life_[player] <= 20.0F && musou_[player] >= 50.0F;
        if (player_input.musou_attack && (musou_[player] >= 100.0F || true_musou)) {
            begin_attack(player, AttackKind::musou, 0U);
        } else if (player_input.charge_attack) {
            charge_level_[player] = static_cast<std::uint8_t>(charge_level_[player] % 6U + 1U);
            begin_attack(player, AttackKind::charge, charge_level_[player]);
        } else if (player_input.normal_attack) {
            if (combo_seconds_[player] <= 0.0F) combo_count_[player] = 0U;
            begin_attack(player, AttackKind::normal, 0U);
        } else {
            float movement_x = clamp_unit(player_input.move_x);
            float movement_z = clamp_unit(player_input.move_z);
            const float magnitude = std::sqrt(squared(movement_x) + squared(movement_z));
            if (magnitude > 1.0F) {
                movement_x /= magnitude;
                movement_z /= magnitude;
            }
            if (magnitude > 0.001F) {
                state_[player] = UnitState::march;
                yaw_[player] = std::atan2(movement_x, movement_z);
                x_[player] += movement_x * 4.0F * fixed_seconds_value;
                z_[player] += movement_z * 4.0F * fixed_seconds_value;
            } else {
                state_[player] = UnitState::idle;
            }
        }
    }
    for (std::size_t index = 0; index < count_; ++index) update_ai(index, fixed_seconds_value, player);
    resolve_spatial_collisions();
}

std::size_t FixedStepGameLoop::advance(double elapsed_seconds,
    const std::function<void(float)>& fixed_update) {
    if (!fixed_update || !std::isfinite(elapsed_seconds) || elapsed_seconds < 0.0)
        throw std::invalid_argument("GAME_LOOP: elapsed time or update callback is invalid");
    constexpr double maximum_accumulation = 0.25;
    if (elapsed_seconds > maximum_accumulation) {
        dropped_steps_ += static_cast<std::uint64_t>((elapsed_seconds - maximum_accumulation) / fixed_seconds);
        elapsed_seconds = maximum_accumulation;
    }
    accumulator_ += elapsed_seconds;
    std::size_t steps{};
    while (accumulator_ >= fixed_seconds && steps < maximum_steps_per_frame) {
        fixed_update(static_cast<float>(fixed_seconds));
        accumulator_ -= fixed_seconds;
        ++steps;
    }
    if (accumulator_ >= fixed_seconds) {
        const auto discarded = static_cast<std::uint64_t>(accumulator_ / fixed_seconds);
        dropped_steps_ += discarded;
        accumulator_ -= static_cast<double>(discarded) * fixed_seconds;
    }
    return steps;
}

double FixedStepGameLoop::interpolation_alpha() const noexcept {
    return std::clamp(accumulator_ / fixed_seconds, 0.0, 1.0);
}

const char* state_name(UnitState state) noexcept {
    switch (state) {
    case UnitState::idle: return "IDLE";
    case UnitState::march: return "MARCH";
    case UnitState::engage: return "ENGAGE";
    case UnitState::attack: return "ATTACK";
    case UnitState::flee: return "FLEE";
    }
    return "UNKNOWN";
}

const char* attack_name(AttackKind attack) noexcept {
    switch (attack) {
    case AttackKind::none: return "NONE";
    case AttackKind::normal: return "SQUARE";
    case AttackKind::charge: return "CHARGE";
    case AttackKind::musou: return "MUSOU";
    }
    return "UNKNOWN";
}

} // namespace fate::gameplay
