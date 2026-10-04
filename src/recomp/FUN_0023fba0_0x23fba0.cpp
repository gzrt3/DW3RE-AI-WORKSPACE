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

// Function: FUN_0023fba0
// Address: 0x23fba0 - 0x23fbe4
void FUN_0023fba0_0x23fba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0023fba0_0x23fba0");
#endif

    switch (ctx->pc) {
        case 0x23fbb0u: goto label_23fbb0;
        case 0x23fbc4u: goto label_23fbc4;
        case 0x23fbccu: goto label_23fbcc;
        case 0x23fbd4u: goto label_23fbd4;
        default: break;
    }

    ctx->pc = 0x23fba0u;

    // 0x23fba0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23fba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23fba4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23fba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23fba8: 0xc07aa90  jal         func_1EAA40
    ctx->pc = 0x23FBA8u;
    SET_GPR_U32(ctx, 31, 0x23FBB0u);
    ctx->pc = 0x1EAA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAA40u, 0x23FBA8u, 0x23FBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FBB0u;
label_23fbb0:
    // 0x23fbb0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x23fbb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23fbb4: 0x14440009  bne         $v0, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x23FBB4u;
    {
        const bool branch_taken_0x23fbb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x23FBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FBB4u;
        // 0x23fbb8: 0x2405007f  addiu       $a1, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fbb4) {
            ctx->pc = 0x23FBDCu;
            goto label_23fbdc;
        }
    }
    ctx->pc = 0x23FBBCu;
    // 0x23fbbc: 0xc05b420  jal         func_16D080
    ctx->pc = 0x23FBBCu;
    SET_GPR_U32(ctx, 31, 0x23FBC4u);
    ctx->pc = 0x16D080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D080u, 0x23FBBCu, 0x23FBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FBC4u;
label_23fbc4:
    // 0x23fbc4: 0xc07aa8c  jal         func_1EAA30
    ctx->pc = 0x23FBC4u;
    SET_GPR_U32(ctx, 31, 0x23FBCCu);
    ctx->pc = 0x1EAA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAA30u, 0x23FBC4u, 0x23FBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FBCCu;
label_23fbcc:
    // 0x23fbcc: 0xc07ab18  jal         func_1EAC60
    ctx->pc = 0x23FBCCu;
    SET_GPR_U32(ctx, 31, 0x23FBD4u);
    ctx->pc = 0x23FBD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FBCCu;
    // 0x23fbd0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAC60u, 0x23FBCCu, 0x23FBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FBD4u;
label_23fbd4:
    // 0x23fbd4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x23FBD4u;
    {
        const bool branch_taken_0x23fbd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FBD4u;
        // 0x23fbd8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fbd4) {
            ctx->pc = 0x23FBE0u;
            goto label_23fbe0;
        }
    }
    ctx->pc = 0x23FBDCu;
label_23fbdc:
    // 0x23fbdc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x23fbdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23fbe0:
    // 0x23fbe0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23fbe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x23fbe4u;
}
