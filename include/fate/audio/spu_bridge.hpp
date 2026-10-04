#pragma once

#include <cstdint>

struct R5900Context;
class PS2Runtime;

namespace fate {
namespace audio {

class SPUBridge {
public:
    static SPUBridge& get();

    void initialize();
    
    // HLE replacements
    int sceSdRemote(int mode, int arg);
    int sceSdInit(int mode);
    int sceSdSetParam(int core, int param, int value);
    int sceSdBlockTrans(int core, int mode, void* addr, int size);

private:
    SPUBridge() = default;
};

} // namespace audio
} // namespace fate

// Global hook entry points
extern "C" {
    void hle_sceSdRemote(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime);
    void hle_sceSdInit(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime);
    void hle_sceSdSetParam(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime);
    void hle_sceSdBlockTrans(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime);
}
