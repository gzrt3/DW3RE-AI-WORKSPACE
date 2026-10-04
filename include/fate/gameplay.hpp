#pragma once

#include <array>
#include <cstddef>
#include <cstdint>
#include <functional>
#include <vector>

namespace fate::gameplay {

inline constexpr std::size_t active_unit_capacity = 128U;

enum class UnitState : std::uint8_t { idle, march, engage, attack, flee };
enum class AttackKind : std::uint8_t { none, normal, charge, musou };

struct PlayerInput {
    float move_x{};
    float move_z{};
    bool normal_attack{};
    bool charge_attack{};
    bool musou_attack{};
};

struct ActorPose {
    std::uint32_t id{};
    float x{};
    float z{};
    float yaw{};
    float life{};
    float musou{};
    std::uint8_t team{};
    UnitState state{UnitState::idle};
};

struct UnitView {
    std::uint32_t id{};
    float life{};
    float musou{};
    float x{};
    float y{};
    float z{};
    float yaw{};
    UnitState state{UnitState::idle};
    AttackKind attack{AttackKind::none};
    std::uint8_t combo_count{};
    std::uint8_t charge_level{};
    std::uint8_t team{};
    bool officer{};
    bool hyper_armor{};
    float flinch_seconds{};
};

struct SimulationMetrics {
    std::uint64_t fixed_steps{};
    std::uint64_t attacks{};
    std::uint64_t hit_events{};
    std::uint64_t collision_pairs{};
};

class ActiveUnits {
public:
    [[nodiscard]] std::size_t spawn(std::uint32_t id, std::uint8_t team, float x, float y, float z,
        bool officer = false, bool player = false);
    void update(float fixed_seconds, const PlayerInput& player_input);
    void set_hyper_armor(std::size_t index, bool enabled);
    void set_resources(std::size_t index, float life, float musou);
    [[nodiscard]] std::size_t size() const noexcept { return count_; }
    [[nodiscard]] UnitView view(std::size_t index) const;
    [[nodiscard]] std::vector<ActorPose> actors() const;
    [[nodiscard]] const SimulationMetrics& metrics() const noexcept { return metrics_; }
    [[nodiscard]] std::size_t player_index() const noexcept { return player_index_; }
    [[nodiscard]] std::size_t alive_count(std::uint8_t team) const noexcept;

private:
    struct Cell { std::int32_t x{}; std::int32_t z{}; };
    std::array<std::uint32_t, active_unit_capacity> id_{};
    std::array<float, active_unit_capacity> life_{};
    std::array<float, active_unit_capacity> musou_{};
    std::array<float, active_unit_capacity> x_{};
    std::array<float, active_unit_capacity> y_{};
    std::array<float, active_unit_capacity> z_{};
    std::array<float, active_unit_capacity> yaw_{};
    std::array<float, active_unit_capacity> attack_seconds_{};
    std::array<float, active_unit_capacity> cooldown_seconds_{};
    std::array<float, active_unit_capacity> combo_seconds_{};
    std::array<float, active_unit_capacity> flinch_seconds_{};
    std::array<float, active_unit_capacity> hit_radius_{};
    std::array<float, active_unit_capacity> hit_damage_{};
    std::array<UnitState, active_unit_capacity> state_{};
    std::array<AttackKind, active_unit_capacity> attack_{};
    std::array<std::uint8_t, active_unit_capacity> team_{};
    std::array<std::uint8_t, active_unit_capacity> combo_count_{};
    std::array<std::uint8_t, active_unit_capacity> charge_level_{};
    std::array<bool, active_unit_capacity> officer_{};
    std::array<bool, active_unit_capacity> hyper_armor_{};
    std::array<bool, active_unit_capacity> player_{};
    std::array<bool, active_unit_capacity> hit_applied_{};
    std::size_t count_{};
    std::size_t player_index_{};
    SimulationMetrics metrics_{};

    void begin_attack(std::size_t attacker, AttackKind kind, std::uint8_t charge_level);
    void apply_attack(std::size_t attacker);
    void update_ai(std::size_t index, float fixed_seconds, std::size_t player);
    void resolve_spatial_collisions();
};

class FixedStepGameLoop {
public:
    static constexpr double fixed_seconds = 1.0 / 60.0;
    static constexpr std::size_t maximum_steps_per_frame = 8U;

    [[nodiscard]] std::size_t advance(double elapsed_seconds,
        const std::function<void(float)>& fixed_update);
    [[nodiscard]] double interpolation_alpha() const noexcept;
    [[nodiscard]] std::uint64_t dropped_steps() const noexcept { return dropped_steps_; }

private:
    double accumulator_{};
    std::uint64_t dropped_steps_{};
};

[[nodiscard]] const char* state_name(UnitState state) noexcept;
[[nodiscard]] const char* attack_name(AttackKind attack) noexcept;

} // namespace fate::gameplay
