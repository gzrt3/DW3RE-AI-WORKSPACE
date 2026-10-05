#pragma once

#include <array>
#include <cstdint>
#include <optional>

namespace fate::input {

inline constexpr uint32_t input_success = 0;
inline constexpr uint32_t input_disconnected = 1167;
inline constexpr uint32_t input_invalid_parameter = 87;

struct XInputReading {
    uint32_t packet = 0;
    uint16_t buttons = 0;
    uint8_t left_trigger = 0, right_trigger = 0;
    int16_t left_x = 0, left_y = 0, right_x = 0, right_y = 0;
};

// This seam supplies real Windows input in production and recorded API results
// in contracts. Neither layer implements PS2 connection/mode negotiation.
class XInputApi {
public:
    virtual ~XInputApi() = default;
    virtual uint32_t read(uint32_t index, XInputReading& state) noexcept = 0;
    virtual uint32_t vibrate(uint32_t index, uint16_t left, uint16_t right) noexcept = 0;
};

#ifdef _WIN32
class WindowsXInput final : public XInputApi {
public:
    uint32_t read(uint32_t index, XInputReading& state) noexcept override;
    uint32_t vibrate(uint32_t index, uint16_t left, uint16_t right) noexcept override;
};
#endif

enum class InputConnection { unpolled, connected, disconnected, error };

struct PadSample {
    InputConnection connection = InputConnection::unpolled;
    uint32_t error = input_disconnected;
    uint64_t sequence = 0;
    uint32_t packet = 0;
    uint16_t buttons = 0; // PS2 bits, active high until serialization.
    std::array<uint8_t, 4> sticks{128, 128, 128, 128}; // RX, RY, LX, LY
    // Right, left, up, down, triangle, circle, cross, square, L1, R1, L2, R2.
    std::array<uint8_t, 12> pressures{};
};

struct InputConfig {
    std::array<uint32_t, 2> player_indices{0, 1};
    uint16_t left_deadzone = 7849, right_deadzone = 8689;
    uint8_t trigger_threshold = 30;
    uint64_t disconnected_retry_ms = 1000;
};

// Single-thread-owned. Consumers reuse one captured sample; they do not poll
// independently. The host must stopAll() on shutdown and propagate errors.
class XInputProvider {
public:
    explicit XInputProvider(XInputApi& api, InputConfig config = {});
    void poll(uint64_t monotonic_ms);
    const PadSample& sample(uint32_t port) const;
    uint32_t rumble(uint32_t port, bool small_motor, uint8_t large_motor) noexcept;
    std::array<uint32_t, 2> stopAll() noexcept;
    std::array<uint32_t, 2> setFocused(bool focused) noexcept;
private:
    XInputApi& m_api;
    InputConfig m_config;
    std::array<PadSample, 2> m_samples{};
    std::array<uint64_t, 2> m_last_attempt{};
    uint64_t m_last_poll = 0;
    bool m_polled = false, m_focused = true;
};

enum class PadPacketMode : uint8_t { digital = 0x41, analog = 0x73, pressure = 0x79 };
using PadPacket = std::array<uint8_t, 32>;

// Public libpad layout candidate, NOT a replacement for the game's unverified
// ABI. Caller supplies the negotiated mode; no packet on failure/disconnection.
std::optional<PadPacket> serializePad(const PadSample& sample, PadPacketMode mode);

} // namespace fate::input
