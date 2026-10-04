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

// Function: entry_001c01d0
// Address: 0x1c01d0 - 0x1c01d8
void entry_001c01d0_0x1c01d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c01d0_0x1c01d0");
#endif

    ctx->pc = 0x1c01d0u;

    // 0x1c01d0: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x1c01d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
    // 0x1c01d4: 0xac254a9c  sw          $a1, 0x4A9C($at)
    ctx->pc = 0x1c01d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x464A9Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x464A9Cu, _value); } while (0);
    ctx->pc = 0x1c01d8u;
}
