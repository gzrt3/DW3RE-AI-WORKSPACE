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

// Function: entry_0017fef4
// Address: 0x17fef4 - 0x17ff30
void entry_0017fef4_0x17fef4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017fef4_0x17fef4");
#endif

    switch (ctx->pc) {
        case 0x17ff00u: goto label_17ff00;
        case 0x17ff20u: goto label_17ff20;
        case 0x17ff28u: goto label_17ff28;
        default: break;
    }

    ctx->pc = 0x17fef4u;

label_17fef4:
    // 0x17fef4: 0x0  nop
    ctx->pc = 0x17fef4u;
    // NOP
    // 0x17fef8: 0xc06b2a2  jal         func_1ACA88
    ctx->pc = 0x17FEF8u;
    SET_GPR_U32(ctx, 31, 0x17FF00u);
    ctx->pc = 0x1ACA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ACA88u, 0x17FEF8u, 0x17FF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FF00u;
label_17ff00:
    // 0x17ff00: 0x0  nop
    ctx->pc = 0x17ff00u;
    // NOP
    // 0x17ff04: 0x0  nop
    ctx->pc = 0x17ff04u;
    // NOP
    // 0x17ff08: 0x0  nop
    ctx->pc = 0x17ff08u;
    // NOP
    // 0x17ff0c: 0x0  nop
    ctx->pc = 0x17ff0cu;
    // NOP
    // 0x17ff10: 0x1040fff8  beqz        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x17FF10u;
    {
        const bool branch_taken_0x17ff10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17ff10) {
            ctx->pc = 0x17FEF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17fef4;
        }
    }
    ctx->pc = 0x17FF18u;
    // 0x17ff18: 0xc069c1a  jal         func_1A7068
    ctx->pc = 0x17FF18u;
    SET_GPR_U32(ctx, 31, 0x17FF20u);
    ctx->pc = 0x17FF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FF18u;
    // 0x17ff1c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7068u, 0x17FF18u, 0x17FF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FF20u;
label_17ff20:
    // 0x17ff20: 0xc06af54  jal         func_1ABD50
    ctx->pc = 0x17FF20u;
    SET_GPR_U32(ctx, 31, 0x17FF28u);
    ctx->pc = 0x1ABD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ABD50u, 0x17FF20u, 0x17FF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FF28u;
label_17ff28:
    // 0x17ff28: 0xc06a226  jal         func_1A8898
    ctx->pc = 0x17FF28u;
    SET_GPR_U32(ctx, 31, 0x17FF30u);
    ctx->pc = 0x1A8898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8898u, 0x17FF28u, 0x17FF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FF30u;
}
