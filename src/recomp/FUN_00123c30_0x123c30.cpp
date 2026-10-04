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

// Function: FUN_00123c30
// Address: 0x123c30 - 0x123c4c
void FUN_00123c30_0x123c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00123c30_0x123c30");
#endif

    switch (ctx->pc) {
        case 0x123c44u: goto label_123c44;
        default: break;
    }

    ctx->pc = 0x123c30u;

    // 0x123c30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x123c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x123c34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x123c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x123c38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x123c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x123c3c: 0xc071740  jal         func_1C5D00
    ctx->pc = 0x123C3Cu;
    SET_GPR_U32(ctx, 31, 0x123C44u);
    ctx->pc = 0x123C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123C3Cu;
    // 0x123c40: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5D00u, 0x123C3Cu, 0x123C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123C44u;
label_123c44:
    // 0x123c44: 0xc071728  jal         func_1C5CA0
    ctx->pc = 0x123C44u;
    SET_GPR_U32(ctx, 31, 0x123C4Cu);
    ctx->pc = 0x123C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123C44u;
    // 0x123c48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5CA0u, 0x123C44u, 0x123C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123C4Cu;
}
