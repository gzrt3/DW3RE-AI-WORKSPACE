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

// Function: FUN_001ce000
// Address: 0x1ce000 - 0x1ce020
void FUN_001ce000_0x1ce000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ce000_0x1ce000");
#endif

    ctx->pc = 0x1ce000u;

    // 0x1ce000: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ce000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ce004: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ce004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ce008: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ce008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ce00c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ce00cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce010: 0x26040250  addiu       $a0, $s0, 0x250
    ctx->pc = 0x1ce010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 592));
    // 0x1ce014: 0x26060330  addiu       $a2, $s0, 0x330
    ctx->pc = 0x1ce014u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 816));
    // 0x1ce018: 0xc066e02  jal         func_19B808
    ctx->pc = 0x1CE018u;
    SET_GPR_U32(ctx, 31, 0x1CE020u);
    ctx->pc = 0x1CE01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE018u;
    // 0x1ce01c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B808u, 0x1CE018u, 0x1CE020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE020u;
}
