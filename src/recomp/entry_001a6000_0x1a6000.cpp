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

// Function: entry_001a6000
// Address: 0x1a6000 - 0x1a6004
void entry_001a6000_0x1a6000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a6000_0x1a6000");
#endif

    ctx->pc = 0x1a6000u;

    // 0x1a6000: 0x3c120037  lui         $s2, 0x37
    ctx->pc = 0x1a6000u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)55 << 16));
    ctx->pc = 0x1a6004u;
}
