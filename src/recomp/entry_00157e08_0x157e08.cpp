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

// Function: entry_00157e08
// Address: 0x157e08 - 0x157e30
void entry_00157e08_0x157e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00157e08_0x157e08");
#endif

    switch (ctx->pc) {
        case 0x157e10u: goto label_157e10;
        case 0x157e18u: goto label_157e18;
        case 0x157e20u: goto label_157e20;
        default: break;
    }

    ctx->pc = 0x157e08u;

    // 0x157e08: 0xc05af50  jal         func_16BD40
    ctx->pc = 0x157E08u;
    SET_GPR_U32(ctx, 31, 0x157E10u);
    ctx->pc = 0x16BD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16BD40u, 0x157E08u, 0x157E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157E10u;
label_157e10:
    // 0x157e10: 0xc05b1e0  jal         func_16C780
    ctx->pc = 0x157E10u;
    SET_GPR_U32(ctx, 31, 0x157E18u);
    ctx->pc = 0x16C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C780u, 0x157E10u, 0x157E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157E18u;
label_157e18:
    // 0x157e18: 0xc05b578  jal         func_16D5E0
    ctx->pc = 0x157E18u;
    SET_GPR_U32(ctx, 31, 0x157E20u);
    ctx->pc = 0x157E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157E18u;
    // 0x157e1c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x157E18u, 0x157E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157E20u;
label_157e20:
    // 0x157e20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x157e20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x157e24: 0x3e00008  jr          $ra
    ctx->pc = 0x157E24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x157E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157E24u;
        // 0x157e28: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x157E24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x157E2Cu;
    // 0x157e2c: 0x0  nop
    ctx->pc = 0x157e2cu;
    // NOP
    ctx->pc = 0x157e30u;
}
