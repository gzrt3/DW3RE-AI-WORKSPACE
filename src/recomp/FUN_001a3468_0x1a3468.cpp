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

// Function: FUN_001a3468
// Address: 0x1a3468 - 0x1a3478
void FUN_001a3468_0x1a3468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a3468_0x1a3468");
#endif

    ctx->pc = 0x1a3468u;

    // 0x1a3468: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1a3468u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a346c: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1a346cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x1a3470: 0x808ee2e  j           func_23B8B8
    ctx->pc = 0x1A3470u;
    ctx->pc = 0x1A3474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3470u;
    // 0x1a3474: 0x2484a398  addiu       $a0, $a0, -0x5C68 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B8B8u;
    FUN_0023b8b8_0x23b8b8(rdram, ctx, runtime); return;
    ctx->pc = 0x1A3478u;
}
