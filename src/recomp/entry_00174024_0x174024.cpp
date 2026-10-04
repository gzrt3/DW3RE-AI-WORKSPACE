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

// Function: entry_00174024
// Address: 0x174024 - 0x174040
void entry_00174024_0x174024(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174024_0x174024");
#endif

    switch (ctx->pc) {
        case 0x17402cu: goto label_17402c;
        default: break;
    }

    ctx->pc = 0x174024u;

    // 0x174024: 0xc04bee0  jal         func_12FB80
    ctx->pc = 0x174024u;
    SET_GPR_U32(ctx, 31, 0x17402Cu);
    ctx->pc = 0x12FB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FB80u, 0x174024u, 0x17402Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17402Cu;
label_17402c:
    // 0x17402c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17402cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174030: 0x3e00008  jr          $ra
    ctx->pc = 0x174030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174030u;
        // 0x174034: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174030u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x174038u;
    // 0x174038: 0x0  nop
    ctx->pc = 0x174038u;
    // NOP
    // 0x17403c: 0x0  nop
    ctx->pc = 0x17403cu;
    // NOP
    ctx->pc = 0x174040u;
}
