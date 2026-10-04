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

// Function: entry_0021c570
// Address: 0x21c570 - 0x21c590
void entry_0021c570_0x21c570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021c570_0x21c570");
#endif

    switch (ctx->pc) {
        case 0x21c578u: goto label_21c578;
        default: break;
    }

    ctx->pc = 0x21c570u;

    // 0x21c570: 0xc0571f8  jal         func_15C7E0
    ctx->pc = 0x21C570u;
    SET_GPR_U32(ctx, 31, 0x21C578u);
    ctx->pc = 0x15C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C7E0u, 0x21C570u, 0x21C578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C578u;
label_21c578:
    // 0x21c578: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21c578u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21c57c: 0x3e00008  jr          $ra
    ctx->pc = 0x21C57Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C57Cu;
        // 0x21c580: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21C57Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21C584u;
    // 0x21c584: 0x0  nop
    ctx->pc = 0x21c584u;
    // NOP
    // 0x21c588: 0x0  nop
    ctx->pc = 0x21c588u;
    // NOP
    // 0x21c58c: 0x0  nop
    ctx->pc = 0x21c58cu;
    // NOP
    ctx->pc = 0x21c590u;
}
