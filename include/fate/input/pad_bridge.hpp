#pragma once

#include <cstdint>

// Forward declarations
struct R5900Context;
class PS2Runtime;

namespace fate {
namespace input {

struct scePadButtonStatus {
    uint8_t ok;
    uint8_t mode;
    uint16_t btns;
    uint8_t rjoy_h, rjoy_v;
    uint8_t ljoy_h, ljoy_v;
    uint8_t right_p, left_p, up_p, down_p;
    uint8_t triangle_p, circle_p, cross_p, square_p;
    uint8_t l1_p, r1_p, l2_p, r2_p;
};

class PadBridge {
public:
    static PadBridge& get();

    void initialize();
    
    // HLE replacements
    int scePadInit(int mode);
    int scePadPortOpen(int port, int slot, void* pAddr);
    int scePadRead(int port, int slot, void* rdata);

private:
    PadBridge() = default;
};

} // namespace input
} // namespace fate

// Global hook entry points
extern "C" {
    void hle_scePadInit(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime);
    void hle_scePadPortOpen(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime);
    void hle_scePadRead(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime);
}
