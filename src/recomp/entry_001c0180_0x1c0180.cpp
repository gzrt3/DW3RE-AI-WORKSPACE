#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_001c0180
// Address: 0x1c0180 - 0x1c0188
void entry_001c0180_0x1c0180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c0180_0x1c0180");
#endif

    ctx->pc = 0x1c0180u;

    // 0x1c0180: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x1c0180u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
    // 0x1c0184: 0xac264a9c  sw          $a2, 0x4A9C($at)
    ctx->pc = 0x1c0184u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x464A9Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x464A9Cu, _value); } while (0);
    ctx->pc = 0x1c0188u;
}
