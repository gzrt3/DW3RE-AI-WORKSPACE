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

// Function: entry_001ad080
// Address: 0x1ad080 - 0x1ad084
void entry_001ad080_0x1ad080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ad080_0x1ad080");
#endif

    ctx->pc = 0x1ad080u;

    // 0x1ad080: 0x320802d  daddu       $s0, $t9, $zero
    ctx->pc = 0x1ad080u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1ad084u;
}
