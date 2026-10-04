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

// Function: entry_0017ff30
// Address: 0x17ff30 - 0x17ff50
void entry_0017ff30_0x17ff30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017ff30_0x17ff30");
#endif

    switch (ctx->pc) {
        case 0x17ff38u: goto label_17ff38;
        default: break;
    }

    ctx->pc = 0x17ff30u;

label_17ff30:
    // 0x17ff30: 0xc06bf82  jal         func_1AFE08
    ctx->pc = 0x17FF30u;
    SET_GPR_U32(ctx, 31, 0x17FF38u);
    ctx->pc = 0x17FF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FF30u;
    // 0x17ff34: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFE08u, 0x17FF30u, 0x17FF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FF38u;
label_17ff38:
    // 0x17ff38: 0x0  nop
    ctx->pc = 0x17ff38u;
    // NOP
    // 0x17ff3c: 0x0  nop
    ctx->pc = 0x17ff3cu;
    // NOP
    // 0x17ff40: 0x0  nop
    ctx->pc = 0x17ff40u;
    // NOP
    // 0x17ff44: 0x0  nop
    ctx->pc = 0x17ff44u;
    // NOP
    // 0x17ff48: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x17FF48u;
    {
        const bool branch_taken_0x17ff48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ff48) {
            ctx->pc = 0x17FF30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17ff30;
        }
    }
    ctx->pc = 0x17FF50u;
}
