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

// Function: FUN_00123ca0
// Address: 0x123ca0 - 0x123cbc
void FUN_00123ca0_0x123ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00123ca0_0x123ca0");
#endif

    switch (ctx->pc) {
        case 0x123cb4u: goto label_123cb4;
        default: break;
    }

    ctx->pc = 0x123ca0u;

    // 0x123ca0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x123ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x123ca4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x123ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x123ca8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x123ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x123cac: 0xc071740  jal         func_1C5D00
    ctx->pc = 0x123CACu;
    SET_GPR_U32(ctx, 31, 0x123CB4u);
    ctx->pc = 0x123CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123CACu;
    // 0x123cb0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5D00u, 0x123CACu, 0x123CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123CB4u;
label_123cb4:
    // 0x123cb4: 0xc071728  jal         func_1C5CA0
    ctx->pc = 0x123CB4u;
    SET_GPR_U32(ctx, 31, 0x123CBCu);
    ctx->pc = 0x123CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123CB4u;
    // 0x123cb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5CA0u, 0x123CB4u, 0x123CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123CBCu;
}
