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

// Function: FUN_001b7628
// Address: 0x1b7628 - 0x1b767c
void FUN_001b7628_0x1b7628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b7628_0x1b7628");
#endif

    switch (ctx->pc) {
        case 0x1b7648u: goto label_1b7648;
        case 0x1b7658u: goto label_1b7658;
        case 0x1b7674u: goto label_1b7674;
        default: break;
    }

    ctx->pc = 0x1b7628u;

    // 0x1b7628: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1b7628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1b762c: 0xffa40060  sd          $a0, 0x60($sp)
    ctx->pc = 0x1b762cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 4));
    // 0x1b7630: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1b7630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1b7634: 0xffa50068  sd          $a1, 0x68($sp)
    ctx->pc = 0x1b7634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 5));
    // 0x1b7638: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x1b7638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x1b763c: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x1b763cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x1b7640: 0xc06dcb0  jal         func_1B72C0
    ctx->pc = 0x1B7640u;
    SET_GPR_U32(ctx, 31, 0x1B7648u);
    ctx->pc = 0x1B7644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7640u;
    // 0x1b7644: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B72C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B72C0u, 0x1B7640u, 0x1B7648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7648u;
label_1b7648:
    // 0x1b7648: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x1b7648u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1b764c: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x1b764cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x1b7650: 0xc06dcb0  jal         func_1B72C0
    ctx->pc = 0x1B7650u;
    SET_GPR_U32(ctx, 31, 0x1B7658u);
    ctx->pc = 0x1B7654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7650u;
    // 0x1b7654: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B72C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B72C0u, 0x1B7650u, 0x1B7658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7658u;
label_1b7658:
    // 0x1b7658: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b7658u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b765c: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x1b765cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1b7660: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b7660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7664: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1b7664u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1b7668: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1b7668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1b766c: 0xc06dcdc  jal         func_1B7370
    ctx->pc = 0x1B766Cu;
    SET_GPR_U32(ctx, 31, 0x1B7674u);
    ctx->pc = 0x1B7670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B766Cu;
    // 0x1b7670: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7370u, 0x1B766Cu, 0x1B7674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7674u;
label_1b7674:
    // 0x1b7674: 0xc06dc6a  jal         func_1B71A8
    ctx->pc = 0x1B7674u;
    SET_GPR_U32(ctx, 31, 0x1B767Cu);
    ctx->pc = 0x1B7678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7674u;
    // 0x1b7678: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B71A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B71A8u, 0x1B7674u, 0x1B767Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B767Cu;
}
