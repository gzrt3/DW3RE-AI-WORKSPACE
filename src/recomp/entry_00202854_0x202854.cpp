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

// Function: entry_00202854
// Address: 0x202854 - 0x202890
void entry_00202854_0x202854(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00202854_0x202854");
#endif

    switch (ctx->pc) {
        case 0x20285cu: goto label_20285c;
        case 0x202864u: goto label_202864;
        default: break;
    }

    ctx->pc = 0x202854u;

label_202854:
    // 0x202854: 0xc05b578  jal         func_16D5E0
    ctx->pc = 0x202854u;
    SET_GPR_U32(ctx, 31, 0x20285Cu);
    ctx->pc = 0x202858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202854u;
    // 0x202858: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x202854u, 0x20285Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20285Cu;
label_20285c:
    // 0x20285c: 0xc060258  jal         func_180960
    ctx->pc = 0x20285Cu;
    SET_GPR_U32(ctx, 31, 0x202864u);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x20285Cu, 0x202864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202864u;
label_202864:
    // 0x202864: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x202864u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x202868: 0x2a03003c  slti        $v1, $s0, 0x3C
    ctx->pc = 0x202868u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)60) ? 1 : 0);
    // 0x20286c: 0x0  nop
    ctx->pc = 0x20286cu;
    // NOP
    // 0x202870: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x202870u;
    {
        const bool branch_taken_0x202870 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x202870) {
            ctx->pc = 0x202854u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_202854;
        }
    }
    ctx->pc = 0x202878u;
    // 0x202878: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x202878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20287c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20287cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x202880: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x202880u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x202884: 0x3e00008  jr          $ra
    ctx->pc = 0x202884u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202884u;
        // 0x202888: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202884u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20288Cu;
    // 0x20288c: 0x0  nop
    ctx->pc = 0x20288cu;
    // NOP
    ctx->pc = 0x202890u;
}
