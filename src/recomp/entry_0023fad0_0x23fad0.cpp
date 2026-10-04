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

// Function: entry_0023fad0
// Address: 0x23fad0 - 0x23fb20
void entry_0023fad0_0x23fad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023fad0_0x23fad0");
#endif

    switch (ctx->pc) {
        case 0x23fad8u: goto label_23fad8;
        case 0x23fae0u: goto label_23fae0;
        case 0x23fae8u: goto label_23fae8;
        case 0x23fb00u: goto label_23fb00;
        default: break;
    }

    ctx->pc = 0x23fad0u;

    // 0x23fad0: 0xc07a9d8  jal         func_1EA760
    ctx->pc = 0x23FAD0u;
    SET_GPR_U32(ctx, 31, 0x23FAD8u);
    ctx->pc = 0x1EA760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA760u, 0x23FAD0u, 0x23FAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FAD8u;
label_23fad8:
    // 0x23fad8: 0xc07a86c  jal         func_1EA1B0
    ctx->pc = 0x23FAD8u;
    SET_GPR_U32(ctx, 31, 0x23FAE0u);
    ctx->pc = 0x1EA1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA1B0u, 0x23FAD8u, 0x23FAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FAE0u;
label_23fae0:
    // 0x23fae0: 0xc060258  jal         func_180960
    ctx->pc = 0x23FAE0u;
    SET_GPR_U32(ctx, 31, 0x23FAE8u);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x23FAE0u, 0x23FAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FAE8u;
label_23fae8:
    // 0x23fae8: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x23fae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x23faec: 0x1682ff38  bne         $s4, $v0, . + 4 + (-0xC8 << 2)
    ctx->pc = 0x23FAECu;
    {
        const bool branch_taken_0x23faec = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x23FAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FAECu;
        // 0x23faf0: 0x2e810009  sltiu       $at, $s4, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23faec) {
            ctx->pc = 0x23F7D0u;
            return;
        }
    }
    ctx->pc = 0x23FAF4u;
    // 0x23faf4: 0x0  nop
    ctx->pc = 0x23faf4u;
    // NOP
    // 0x23faf8: 0xc041790  jal         func_105E40
    ctx->pc = 0x23FAF8u;
    SET_GPR_U32(ctx, 31, 0x23FB00u);
    ctx->pc = 0x105E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105E40u, 0x23FAF8u, 0x23FB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FB00u;
label_23fb00:
    // 0x23fb00: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x23fb00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x23fb04: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x23fb04u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23fb08: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x23fb08u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23fb0c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x23fb0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23fb10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23fb10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23fb14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23fb14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23fb18: 0x3e00008  jr          $ra
    ctx->pc = 0x23FB18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23FB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FB18u;
        // 0x23fb1c: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23FB18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23FB20u;
}
