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

// Function: entry_001e0b90
// Address: 0x1e0b90 - 0x1e0b9c
void entry_001e0b90_0x1e0b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e0b90_0x1e0b90");
#endif

    ctx->pc = 0x1e0b90u;

    // 0x1e0b90: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1e0b90u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0b94: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x1e0b94u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0b98: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x1e0b98u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1e0b9cu;
}
