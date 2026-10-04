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

// Function: entry_00157ffc
// Address: 0x157ffc - 0x158030
void entry_00157ffc_0x157ffc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00157ffc_0x157ffc");
#endif

    switch (ctx->pc) {
        case 0x158004u: goto label_158004;
        case 0x15800cu: goto label_15800c;
        case 0x158014u: goto label_158014;
        default: break;
    }

    ctx->pc = 0x157ffcu;

    // 0x157ffc: 0xc05af50  jal         func_16BD40
    ctx->pc = 0x157FFCu;
    SET_GPR_U32(ctx, 31, 0x158004u);
    ctx->pc = 0x16BD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16BD40u, 0x157FFCu, 0x158004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158004u;
label_158004:
    // 0x158004: 0xc05b1e0  jal         func_16C780
    ctx->pc = 0x158004u;
    SET_GPR_U32(ctx, 31, 0x15800Cu);
    ctx->pc = 0x16C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C780u, 0x158004u, 0x15800Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15800Cu;
label_15800c:
    // 0x15800c: 0xc05b578  jal         func_16D5E0
    ctx->pc = 0x15800Cu;
    SET_GPR_U32(ctx, 31, 0x158014u);
    ctx->pc = 0x158010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15800Cu;
    // 0x158010: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x15800Cu, 0x158014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158014u;
label_158014:
    // 0x158014: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x158014u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x158018: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x158018u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15801c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15801cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x158020: 0x3e00008  jr          $ra
    ctx->pc = 0x158020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x158024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158020u;
        // 0x158024: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158020u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x158028u;
    // 0x158028: 0x0  nop
    ctx->pc = 0x158028u;
    // NOP
    // 0x15802c: 0x0  nop
    ctx->pc = 0x15802cu;
    // NOP
    ctx->pc = 0x158030u;
}
