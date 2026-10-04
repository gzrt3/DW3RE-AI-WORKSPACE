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

// Function: FUN_001b7d80
// Address: 0x1b7d80 - 0x1b7da0
void FUN_001b7d80_0x1b7d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b7d80_0x1b7d80");
#endif

    ctx->pc = 0x1b7d80u;

    // 0x1b7d80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b7d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b7d84: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1b7d84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1b7d88: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b7d88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7d8c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b7d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1b7d90: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x1b7d90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x1b7d94: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x1b7d94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x1b7d98: 0xc06dc6a  jal         func_1B71A8
    ctx->pc = 0x1B7D98u;
    SET_GPR_U32(ctx, 31, 0x1B7DA0u);
    ctx->pc = 0x1B7D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7D98u;
    // 0x1b7d9c: 0xffa70010  sd          $a3, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B71A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B71A8u, 0x1B7D98u, 0x1B7DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7DA0u;
}
