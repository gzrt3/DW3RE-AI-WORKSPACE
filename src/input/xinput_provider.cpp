#include "fate/input/xinput_provider.hpp"

#include <stdexcept>

namespace fate::input {
namespace {

void neutralize(PadSample& sample) noexcept {
    sample.buttons = 0;
    sample.sticks = {128, 128, 128, 128};
    sample.pressures.fill(0);
}

// Axial deadzone with an explicit host policy: center 128 and full 0..255
// travel after the deadzone. Widen before negation, including -32768.
uint8_t axis(int16_t raw, uint16_t deadzone, bool invert) noexcept {
    const int32_t value = raw;
    const int32_t magnitude = value < 0 ? -value : value;
    if (magnitude <= deadzone) return 128;
    const bool negative = (value < 0) != invert;
    const int32_t maximum = value < 0 ? 32768 : 32767;
    const int32_t range = maximum - deadzone;
    const int32_t scale = negative ? 128 : 127;
    const int32_t offset = ((magnitude - deadzone) * scale + range / 2) / range;
    return static_cast<uint8_t>(negative ? 128 - offset : 128 + offset);
}

void translate(PadSample& sample, const XInputReading& raw, const InputConfig& config) {
    // XINPUT_GAMEPAD_* -> public PS2SDK PAD_* bits; reserved XInput bits ignored.
    constexpr std::array<std::array<uint16_t, 2>, 14> mapping{{
        {0x0001, 0x0010}, {0x0002, 0x0040}, {0x0004, 0x0080}, {0x0008, 0x0020},
        {0x0010, 0x0008}, {0x0020, 0x0001}, {0x0040, 0x0002}, {0x0080, 0x0004},
        {0x0100, 0x0400}, {0x0200, 0x0800}, {0x1000, 0x4000}, {0x2000, 0x2000},
        {0x4000, 0x8000}, {0x8000, 0x1000}
    }};
    sample.packet = raw.packet;
    for (const auto& pair : mapping) {
        if (raw.buttons & pair[0]) sample.buttons |= pair[1];
    }
    if (raw.left_trigger > config.trigger_threshold) sample.buttons |= 0x0100;
    if (raw.right_trigger > config.trigger_threshold) sample.buttons |= 0x0200;
    sample.sticks = {axis(raw.right_x, config.right_deadzone, false),
                     axis(raw.right_y, config.right_deadzone, true),
                     axis(raw.left_x, config.left_deadzone, false),
                     axis(raw.left_y, config.left_deadzone, true)};
    constexpr std::array<uint16_t, 10> pressure_bits{
        0x0020, 0x0080, 0x0010, 0x0040, 0x1000, 0x2000, 0x4000, 0x8000, 0x0400, 0x0800};
    for (size_t i = 0; i < pressure_bits.size(); ++i) {
        // XInput provides no physical analog pressure for these buttons.
        sample.pressures[i] = (sample.buttons & pressure_bits[i]) ? 255 : 0;
    }
    sample.pressures[10] = (sample.buttons & 0x0100) ? raw.left_trigger : 0;
    sample.pressures[11] = (sample.buttons & 0x0200) ? raw.right_trigger : 0;
}
} // namespace

XInputProvider::XInputProvider(XInputApi& api, InputConfig config) : m_api(api), m_config(config) {
    if (config.player_indices[0] >= 4 || config.player_indices[1] >= 4 ||
        config.player_indices[0] == config.player_indices[1] ||
        config.left_deadzone >= 32767 || config.right_deadzone >= 32767 ||
        config.trigger_threshold == 255 || config.disconnected_retry_ms == 0) {
        throw std::invalid_argument("Invalid XInput player assignment or deadzone policy");
    }
}

void XInputProvider::poll(uint64_t monotonic_ms) {
    if (m_polled && monotonic_ms < m_last_poll) throw std::invalid_argument("Input clock moved backwards");
    m_polled = true;
    m_last_poll = monotonic_ms;
    for (size_t port = 0; port < m_samples.size(); ++port) {
        auto& current = m_samples[port];
        if (current.connection != InputConnection::unpolled &&
            current.connection != InputConnection::connected &&
            monotonic_ms - m_last_attempt[port] < m_config.disconnected_retry_ms) continue;
        m_last_attempt[port] = monotonic_ms;
        XInputReading raw{};
        const uint32_t result = m_api.read(m_config.player_indices[port], raw);
        const uint64_t sequence = current.sequence + 1;
        current = PadSample{}; // An error never leaves stale buttons or packet data.
        current.sequence = sequence;
        current.error = result;
        if (result == input_success) {
            current.connection = InputConnection::connected;
            translate(current, raw, m_config);
            if (!m_focused) neutralize(current);
        } else {
            current.connection = result == input_disconnected ? InputConnection::disconnected : InputConnection::error;
        }
    }
}

const PadSample& XInputProvider::sample(uint32_t port) const { return m_samples.at(port); }

uint32_t XInputProvider::rumble(uint32_t port, bool small_motor, uint8_t large_motor) noexcept {
    if (port >= m_samples.size()) return input_invalid_parameter;
    if (m_samples[port].connection != InputConnection::connected) return m_samples[port].error;
    const uint16_t left = m_focused ? static_cast<uint16_t>(static_cast<uint16_t>(large_motor) * 257u) : 0;
    const uint16_t right = m_focused && small_motor ? 65535 : 0;
    return m_api.vibrate(m_config.player_indices[port], left, right);
}

std::array<uint32_t, 2> XInputProvider::stopAll() noexcept {
    return {m_api.vibrate(m_config.player_indices[0], 0, 0),
            m_api.vibrate(m_config.player_indices[1], 0, 0)};
}

std::array<uint32_t, 2> XInputProvider::setFocused(bool focused) noexcept {
    m_focused = focused;
    if (!focused) {
        for (auto& current : m_samples) neutralize(current);
        return stopAll();
    }
    return {input_success, input_success}; // No output command on focus gain.
}

std::optional<PadPacket> serializePad(const PadSample& sample, PadPacketMode mode) {
    if (sample.connection != InputConnection::connected || sample.error != input_success) return std::nullopt;
    if (mode != PadPacketMode::digital && mode != PadPacketMode::analog && mode != PadPacketMode::pressure) {
        throw std::invalid_argument("Unrecognized PS2 pad packet mode");
    }
    PadPacket result{};
    result[1] = static_cast<uint8_t>(mode);
    const uint16_t active_low = static_cast<uint16_t>(~sample.buttons);
    result[2] = static_cast<uint8_t>(active_low & 0xff);
    result[3] = static_cast<uint8_t>(active_low >> 8);
    for (size_t i = 0; i < sample.sticks.size(); ++i) result[4 + i] = mode == PadPacketMode::digital ? 128 : sample.sticks[i];
    if (mode == PadPacketMode::pressure) {
        for (size_t i = 0; i < sample.pressures.size(); ++i) result[8 + i] = sample.pressures[i];
    }
    return result;
}
} // namespace fate::input
