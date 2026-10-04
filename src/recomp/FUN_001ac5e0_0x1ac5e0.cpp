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

// Function: FUN_001ac5e0
// Address: 0x1ac5e0 - 0x1ac5f4
void FUN_001ac5e0_0x1ac5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ac5e0_0x1ac5e0");
#endif

    switch (ctx->pc) {
        case 0x1ac5f0u: goto label_1ac5f0;
        default: break;
    }

    ctx->pc = 0x1ac5e0u;

    // 0x1ac5e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ac5e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ac5e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ac5e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ac5e8: 0xc06b0e6  jal         func_1AC398
    ctx->pc = 0x1AC5E8u;
    SET_GPR_U32(ctx, 31, 0x1AC5F0u);
    ctx->pc = 0x1AC5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC5E8u;
    // 0x1ac5ec: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AC398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC398u, 0x1AC5E8u, 0x1AC5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC5F0u;
label_1ac5f0:
    // 0x1ac5f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ac5f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1ac5f4u;
}
