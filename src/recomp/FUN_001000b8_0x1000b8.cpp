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

// Function: FUN_001000b8
// Address: 0x1000b8 - 0x1000c0
void FUN_001000b8_0x1000b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001000b8_0x1000b8");
#endif

    ctx->pc = 0x1000b8u;

    // 0x1000b8: 0x806b6b4  j           func_1ADAD0
    ctx->pc = 0x1000B8u;
    ctx->pc = 0x1000BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1000B8u;
    // 0x1000bc: 0x2025  move        $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ADAD0u;
    FUN_001adad0_0x1adad0(rdram, ctx, runtime); return;
    ctx->pc = 0x1000C0u;
}
