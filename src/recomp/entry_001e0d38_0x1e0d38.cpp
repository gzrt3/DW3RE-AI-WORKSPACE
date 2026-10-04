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

// Function: entry_001e0d38
// Address: 0x1e0d38 - 0x1e0d44
void entry_001e0d38_0x1e0d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e0d38_0x1e0d38");
#endif

    ctx->pc = 0x1e0d38u;

    // 0x1e0d38: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e0d38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0d3c: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x1e0d3cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0d40: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x1e0d40u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1e0d44u;
}
