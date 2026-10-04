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

// Function: FUN_00114ce0
// Address: 0x114ce0 - 0x114cf8
void FUN_00114ce0_0x114ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00114ce0_0x114ce0");
#endif

    switch (ctx->pc) {
        case 0x114cf4u: goto label_114cf4;
        default: break;
    }

    ctx->pc = 0x114ce0u;

    // 0x114ce0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x114ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x114ce4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x114ce4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114ce8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x114ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x114cec: 0xc045340  jal         func_114D00
    ctx->pc = 0x114CECu;
    SET_GPR_U32(ctx, 31, 0x114CF4u);
    ctx->pc = 0x114CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114CECu;
    // 0x114cf0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114D00u, 0x114CECu, 0x114CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114CF4u;
label_114cf4:
    // 0x114cf4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x114cf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x114cf8u;
}
