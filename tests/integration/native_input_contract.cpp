#include "fate/input/xinput_provider.hpp"
#include <algorithm>
#include <iostream>
#include <stdexcept>
#include <string_view>

using namespace fate::input;

namespace {
void require(bool condition, const char* message) {
    if (!condition) throw std::runtime_error(message);
}

struct RecordedApi final : XInputApi {
    std::array<XInputReading, 4> inputs{};
    std::array<uint32_t, 4> errors{0, 0, 0, 0}, reads{}, writes{}, output_errors{};
    std::array<std::array<uint16_t, 2>, 4> motors{};
    uint32_t read(uint32_t index, XInputReading& state) noexcept override {
        if (index >= 4) return input_invalid_parameter;
        ++reads[index];
        state = inputs[index]; // Also writes stale data on error, intentionally.
        return errors[index];
    }
    uint32_t vibrate(uint32_t index, uint16_t left, uint16_t right) noexcept override {
        if (index >= 4) return input_invalid_parameter;
        ++writes[index];
        motors[index] = {left, right};
        return output_errors[index];
    }
};

void neutral_packet() {
    RecordedApi api;
    XInputProvider provider(api);
    require(!serializePad(provider.sample(0), PadPacketMode::pressure), "Unpolled pad produced packet");
    provider.poll(0);
    const PadPacket expected{0, 0x79, 0xff, 0xff, 128, 128, 128, 128};
    require(serializePad(provider.sample(0), PadPacketMode::pressure) == expected, "Neutral libpad layout");
    require(provider.sample(0).sequence == 1 && api.writes[0] == 0, "Read changed output");
}

void buttons_and_pressure_order() {
    RecordedApi api;
    // Start+A+RB, LT=31 and RT=200: PS2 Start+Cross+R1+L2+R2.
    api.inputs[0].buttons = 0x1210;
    api.inputs[0].left_trigger = 31;
    api.inputs[0].right_trigger = 200;
    XInputProvider provider(api);
    provider.poll(0);
    const PadPacket expected{0, 0x79, 0xf7, 0xb4, 128, 128, 128, 128,
                            0, 0, 0, 0, 0, 0, 255, 0, 0, 255, 31, 200};
    require(serializePad(provider.sample(0), PadPacketMode::pressure) == expected,
            "Buttons/active-low or L1,R1,L2,R2 pressure order");
    api.inputs[0].buttons = 0xf3ff;
    api.inputs[0].left_trigger = 255;
    api.inputs[0].right_trigger = 255;
    provider.poll(1);
    require(provider.sample(0).buttons == 0xffff, "Not all 16 PS2 buttons mapped");
    require(std::all_of(provider.sample(0).pressures.begin(), provider.sample(0).pressures.end(),
                        [](uint8_t value) { return value == 255; }), "Full pressures");
    api.inputs[0].buttons = 0x0c00; // XInput reserved bits.
    api.inputs[0].left_trigger = 30;
    api.inputs[0].right_trigger = 0;
    provider.poll(2);
    require(provider.sample(0).buttons == 0, "Reserved bits or trigger threshold leaked");
}

void distinct_button_bits() {
    RecordedApi api;
    XInputProvider provider(api);
    // PS2SDK libpad bit positions for each of the 16 XInput button positions.
    constexpr std::array<uint16_t, 16> expected{
        0x10, 0x40, 0x80, 0x20, 0x08, 0x01, 0x02, 0x04,
        0x400, 0x800, 0, 0, 0x4000, 0x2000, 0x8000, 0x1000};
    for (uint32_t bit = 0; bit < expected.size(); ++bit) {
        api.inputs[0].buttons = static_cast<uint16_t>(1u << bit);
        provider.poll(bit);
        require(provider.sample(0).buttons == expected[bit], "One-hot button correspondence");
    }
}

void axis_policy() {
    RecordedApi api;
    api.inputs[0].left_x = -32768;
    api.inputs[0].left_y = -32768;
    api.inputs[0].right_x = 32767;
    api.inputs[0].right_y = 32767;
    XInputProvider provider(api);
    provider.poll(0);
    require(provider.sample(0).sticks == std::array<uint8_t, 4>{255, 0, 0, 255}, "Stick endpoints/inversion");
    api.inputs[0].left_x = 7849;
    api.inputs[0].left_y = -7849;
    api.inputs[0].right_x = 8689;
    api.inputs[0].right_y = -8689;
    provider.poll(1);
    require(provider.sample(0).sticks == std::array<uint8_t, 4>{128, 128, 128, 128}, "Deadzone boundary");
    uint8_t previous_x = 0, previous_y = 255;
    for (int32_t raw = -32768; raw <= 32767; ++raw) {
        api.inputs[0].left_x = api.inputs[0].left_y = static_cast<int16_t>(raw);
        provider.poll(static_cast<uint64_t>(raw + 32770));
        const auto& sticks = provider.sample(0).sticks;
        require(sticks[2] >= previous_x && sticks[3] <= previous_y, "Axis monotonicity/overflow");
        previous_x = sticks[2]; previous_y = sticks[3];
    }
}

void mode_packets() {
    RecordedApi api;
    api.inputs[0].buttons = 0x1000;
    api.inputs[0].left_x = 32767;
    XInputProvider provider(api);
    provider.poll(0);
    const PadPacket digital{0, 0x41, 0xff, 0xbf, 128, 128, 128, 128};
    const PadPacket analog{0, 0x73, 0xff, 0xbf, 128, 128, 255, 128};
    require(serializePad(provider.sample(0), PadPacketMode::digital) == digital, "Digital packet candidate");
    require(serializePad(provider.sample(0), PadPacketMode::analog) == analog, "Analog packet candidate");
    bool rejected = false;
    try { (void)serializePad(provider.sample(0), static_cast<PadPacketMode>(0x70)); }
    catch (const std::invalid_argument&) { rejected = true; }
    require(rejected, "Invalid unnegotiated mode accepted");
}

void disconnect_reconnect() {
    RecordedApi api;
    api.inputs[0].buttons = 0x1010;
    api.inputs[0].packet = 42;
    XInputProvider provider(api);
    provider.poll(0);
    api.errors[0] = input_disconnected;
    provider.poll(1);
    require(provider.sample(0).connection == InputConnection::disconnected &&
            provider.sample(0).buttons == 0 && provider.sample(0).packet == 0, "Stale input after disconnect");
    require(!serializePad(provider.sample(0), PadPacketMode::pressure), "Disconnected packet accepted");
    api.errors[0] = 0;
    provider.poll(1000);
    require(api.reads[0] == 2 && provider.sample(0).sequence == 2, "Retry was not throttled");
    provider.poll(1001);
    require(api.reads[0] == 3 && provider.sample(0).packet == 42, "Reconnect failed");
    require(api.reads[1] == 4, "Connected second player was throttled");
}

void errors_are_not_disconnects() {
    RecordedApi api;
    api.errors[0] = 5;
    api.inputs[0].buttons = 0xffff;
    XInputProvider provider(api);
    provider.poll(0);
    require(provider.sample(0).connection == InputConnection::error && provider.sample(0).error == 5,
            "Read failure lost real error");
    require(provider.sample(0).buttons == 0 && provider.rumble(0, true, 255) == 5 && api.writes[0] == 0,
            "Failed read leaked data or actuated motors");
}

void fixed_player_assignment() {
    RecordedApi api;
    InputConfig config;
    config.player_indices = {3, 2};
    api.errors[3] = input_disconnected;
    api.inputs[2].buttons = 0x1000;
    XInputProvider provider(api, config);
    provider.poll(0);
    require(provider.sample(0).connection == InputConnection::disconnected && provider.sample(1).buttons == 0x4000,
            "Player2 migrated into disconnected player1");
    require(api.reads == std::array<uint32_t, 4>{0, 0, 1, 1}, "Wrong XInput indices queried");
}

void rumble_and_focus() {
    RecordedApi api;
    api.inputs[0].buttons = 0x1010;
    XInputProvider provider(api);
    provider.poll(0);
    require(provider.rumble(0, true, 128) == 0 && api.motors[0] == std::array<uint16_t, 2>{32896, 65535},
            "DS2 large/small motor mapping");
    api.output_errors[1] = 5;
    require(provider.setFocused(false) == std::array<uint32_t, 2>{0, 5}, "Focus stop error discarded");
    require(api.motors[0] == std::array<uint16_t, 2>{0, 0} && provider.sample(0).buttons == 0, "Focus loss kept input/output");
    provider.poll(1);
    require(provider.sample(0).buttons == 0 && provider.rumble(0, true, 255) == 0 && api.motors[0][0] == 0,
            "Unfocused input/output reactivated");
    (void)provider.setFocused(true);
    require(provider.sample(0).buttons == 0, "Focus gain reused stale buttons");
    provider.poll(2);
    require(provider.sample(0).buttons == 0x4008, "Focused read did not resume");
    api.output_errors[0] = input_disconnected;
    require(provider.rumble(0, true, 255) == input_disconnected, "Rumble disconnect lost");
    require(provider.rumble(2, true, 255) == input_invalid_parameter, "Invalid port accepted");
    require(provider.stopAll() == std::array<uint32_t, 2>{input_disconnected, 5}, "Shutdown failures lost");
}

void invalid_configuration_and_clock() {
    RecordedApi api;
    const auto rejects = [&](InputConfig config) {
        bool rejected = false;
        try { XInputProvider invalid(api, config); }
        catch (const std::invalid_argument&) { rejected = true; }
        require(rejected, "Invalid configuration accepted");
    };
    InputConfig config;
    config.player_indices = {0, 0}; rejects(config);
    config = {}; config.player_indices = {0, 4}; rejects(config);
    config = {}; config.left_deadzone = 32767; rejects(config);
    config = {}; config.right_deadzone = 65535; rejects(config);
    config = {}; config.trigger_threshold = 255; rejects(config);
    config = {}; config.disconnected_retry_ms = 0; rejects(config);
    XInputProvider provider(api);
    provider.poll(10);
    bool rejected = false;
    try { provider.poll(9); } catch (const std::invalid_argument&) { rejected = true; }
    require(rejected && api.reads[0] == 1, "Backward clock caused new side effects");
    rejected = false;
    try { (void)provider.sample(2); } catch (const std::out_of_range&) { rejected = true; }
    require(rejected, "Out-of-range sample access");
}

int probe() {
#ifdef _WIN32
    WindowsXInput api;
    bool error = false;
    std::cout << "READ_ONLY_XINPUT_1_4: no vibration or guest execution\n";
    for (uint32_t index = 0; index < 4; ++index) {
        XInputReading state;
        const auto result = api.read(index, state);
        std::cout << "index=" << index << " result=" << result;
        if (result == 0) std::cout << " packet=" << state.packet << " buttons=" << state.buttons;
        std::cout << '\n';
        error = error || (result != 0 && result != input_disconnected);
    }
    return error ? 1 : 0;
#else
    std::cerr << "Windows XInput API unavailable on this platform\n";
    return 2;
#endif
}
} // namespace

int main(int argc, char** argv) {
    if (argc == 2 && std::string_view(argv[1]) == "--probe") return probe();
    if (argc != 1) return 2;
    struct Case { const char* name; void (*run)(); };
    constexpr Case cases[]{
        {"neutral_packet", neutral_packet}, {"buttons_and_pressure_order", buttons_and_pressure_order},
        {"distinct_button_bits", distinct_button_bits}, {"axis_policy", axis_policy},
        {"mode_packets", mode_packets}, {"disconnect_reconnect", disconnect_reconnect},
        {"errors_are_not_disconnects", errors_are_not_disconnects}, {"fixed_player_assignment", fixed_player_assignment},
        {"rumble_and_focus", rumble_and_focus}, {"invalid_configuration_and_clock", invalid_configuration_and_clock}
    };
    for (const auto& test : cases) {
        try { test.run(); std::cout << "PASS " << test.name << '\n'; }
        catch (const std::exception& error) {
            std::cerr << "FAIL " << test.name << ": " << error.what() << '\n'; return 1;
        }
    }
    std::cout << "Host contracts only; retail ABI, real-controller gameplay and rumble are unverified.\n";
    return 0;
}
