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

// Function: entry_00157774
// Address: 0x157774 - 0x1577a0
void entry_00157774_0x157774(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00157774_0x157774");
#endif

    switch (ctx->pc) {
        case 0x15777cu: goto label_15777c;
        case 0x157790u: goto label_157790;
        default: break;
    }

    ctx->pc = 0x157774u;

    // 0x157774: 0xc05b228  jal         func_16C8A0
    ctx->pc = 0x157774u;
    SET_GPR_U32(ctx, 31, 0x15777Cu);
    ctx->pc = 0x16C8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C8A0u, 0x157774u, 0x15777Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15777Cu;
label_15777c:
    // 0x15777c: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x15777cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
    // 0x157780: 0x8c24ca48  lw          $a0, -0x35B8($at)
    ctx->pc = 0x157780u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x29CA48u));
    // 0x157784: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x157784u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
    // 0x157788: 0xc06dfe4  jal         func_1B7F90
    ctx->pc = 0x157788u;
    SET_GPR_U32(ctx, 31, 0x157790u);
    ctx->pc = 0x15778Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157788u;
    // 0x15778c: 0x8c25ca4c  lw          $a1, -0x35B4($at) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953548)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7F90u, 0x157788u, 0x157790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157790u;
label_157790:
    // 0x157790: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x157790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x157794: 0x3e00008  jr          $ra
    ctx->pc = 0x157794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x157798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157794u;
        // 0x157798: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x157794u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15779Cu;
    // 0x15779c: 0x0  nop
    ctx->pc = 0x15779cu;
    // NOP
    ctx->pc = 0x1577a0u;
}
