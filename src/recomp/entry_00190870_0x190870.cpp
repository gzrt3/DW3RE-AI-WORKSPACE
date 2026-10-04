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

// Function: entry_00190870
// Address: 0x190870 - 0x190890
void entry_00190870_0x190870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00190870_0x190870");
#endif

    switch (ctx->pc) {
        case 0x190878u: goto label_190878;
        default: break;
    }

    ctx->pc = 0x190870u;

    // 0x190870: 0xc064224  jal         func_190890
    ctx->pc = 0x190870u;
    SET_GPR_U32(ctx, 31, 0x190878u);
    ctx->pc = 0x190890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190890u, 0x190870u, 0x190878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190878u;
label_190878:
    // 0x190878: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x190878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19087c: 0x3e00008  jr          $ra
    ctx->pc = 0x19087Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19087Cu;
        // 0x190880: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19087Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190884u;
    // 0x190884: 0x0  nop
    ctx->pc = 0x190884u;
    // NOP
    // 0x190888: 0x0  nop
    ctx->pc = 0x190888u;
    // NOP
    // 0x19088c: 0x0  nop
    ctx->pc = 0x19088cu;
    // NOP
    ctx->pc = 0x190890u;
}
