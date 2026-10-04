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

// Function: entry_00190670
// Address: 0x190670 - 0x190690
void entry_00190670_0x190670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00190670_0x190670");
#endif

    switch (ctx->pc) {
        case 0x190678u: goto label_190678;
        default: break;
    }

    ctx->pc = 0x190670u;

    // 0x190670: 0xc0641a4  jal         func_190690
    ctx->pc = 0x190670u;
    SET_GPR_U32(ctx, 31, 0x190678u);
    ctx->pc = 0x190690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190690u, 0x190670u, 0x190678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190678u;
label_190678:
    // 0x190678: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x190678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19067c: 0x3e00008  jr          $ra
    ctx->pc = 0x19067Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19067Cu;
        // 0x190680: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19067Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190684u;
    // 0x190684: 0x0  nop
    ctx->pc = 0x190684u;
    // NOP
    // 0x190688: 0x0  nop
    ctx->pc = 0x190688u;
    // NOP
    // 0x19068c: 0x0  nop
    ctx->pc = 0x19068cu;
    // NOP
    ctx->pc = 0x190690u;
}
