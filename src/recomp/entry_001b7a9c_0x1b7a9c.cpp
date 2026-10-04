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

// Function: entry_001b7a9c
// Address: 0x1b7a9c - 0x1b7ab8
void entry_001b7a9c_0x1b7a9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b7a9c_0x1b7a9c");
#endif

    switch (ctx->pc) {
        case 0x1b7aa4u: goto label_1b7aa4;
        default: break;
    }

    ctx->pc = 0x1b7a9cu;

    // 0x1b7a9c: 0xc06dc6a  jal         func_1B71A8
    ctx->pc = 0x1B7A9Cu;
    SET_GPR_U32(ctx, 31, 0x1B7AA4u);
    ctx->pc = 0x1B71A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B71A8u, 0x1B7A9Cu, 0x1B7AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7AA4u;
label_1b7aa4:
    // 0x1b7aa4: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x1b7aa4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b7aa8: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x1b7aa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1b7aac: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7AACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7AACu;
        // 0x1b7ab0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7AACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7AB4u;
    // 0x1b7ab4: 0x0  nop
    ctx->pc = 0x1b7ab4u;
    // NOP
    ctx->pc = 0x1b7ab8u;
}
