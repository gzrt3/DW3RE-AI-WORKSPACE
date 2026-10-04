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

// Function: FUN_001ac5c0
// Address: 0x1ac5c0 - 0x1ac5d8
void FUN_001ac5c0_0x1ac5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ac5c0_0x1ac5c0");
#endif

    switch (ctx->pc) {
        case 0x1ac5d4u: goto label_1ac5d4;
        default: break;
    }

    ctx->pc = 0x1ac5c0u;

    // 0x1ac5c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ac5c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ac5c4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ac5c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ac5c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ac5c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ac5cc: 0xc06b0e6  jal         func_1AC398
    ctx->pc = 0x1AC5CCu;
    SET_GPR_U32(ctx, 31, 0x1AC5D4u);
    ctx->pc = 0x1AC5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC5CCu;
    // 0x1ac5d0: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AC398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC398u, 0x1AC5CCu, 0x1AC5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC5D4u;
label_1ac5d4:
    // 0x1ac5d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ac5d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x1ac5d8u;
}
