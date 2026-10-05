#define WIN32_LEAN_AND_MEAN
#define NOMINMAX
#include <Windows.h>
#include <Xinput.h>
#include "fate/input/xinput_provider.hpp"

namespace fate::input {
uint32_t WindowsXInput::read(uint32_t index, XInputReading& state) noexcept {
    state = {};
    if (index >= XUSER_MAX_COUNT) return input_invalid_parameter;
    XINPUT_STATE raw{};
    const DWORD result = XInputGetState(index, &raw);
    if (result == ERROR_SUCCESS) {
        state.packet = raw.dwPacketNumber;
        state.buttons = raw.Gamepad.wButtons;
        state.left_trigger = raw.Gamepad.bLeftTrigger;
        state.right_trigger = raw.Gamepad.bRightTrigger;
        state.left_x = raw.Gamepad.sThumbLX;
        state.left_y = raw.Gamepad.sThumbLY;
        state.right_x = raw.Gamepad.sThumbRX;
        state.right_y = raw.Gamepad.sThumbRY;
    }
    return result;
}

uint32_t WindowsXInput::vibrate(uint32_t index, uint16_t left, uint16_t right) noexcept {
    if (index >= XUSER_MAX_COUNT) return input_invalid_parameter;
    XINPUT_VIBRATION motors{left, right};
    return XInputSetState(index, &motors);
}
} // namespace fate::input
