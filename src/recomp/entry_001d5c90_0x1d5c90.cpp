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

// Function: entry_001d5c90
// Address: 0x1d5c90 - 0x1d5c94
void entry_001d5c90_0x1d5c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d5c90_0x1d5c90");
#endif

    ctx->pc = 0x1d5c90u;

    // 0x1d5c90: 0x28620084  slti        $v0, $v1, 0x84
    ctx->pc = 0x1d5c90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)132) ? 1 : 0);
    ctx->pc = 0x1d5c94u;
}
