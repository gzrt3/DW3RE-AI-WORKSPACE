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

// Function: entry_001b1a38
// Address: 0x1b1a38 - 0x1b1a48
void entry_001b1a38_0x1b1a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1a38_0x1b1a38");
#endif

    switch (ctx->pc) {
        case 0x1b1a40u: goto label_1b1a40;
        default: break;
    }

    ctx->pc = 0x1b1a38u;

    // 0x1b1a38: 0xc069ea6  jal         func_1A7A98
    ctx->pc = 0x1B1A38u;
    SET_GPR_U32(ctx, 31, 0x1B1A40u);
    ctx->pc = 0x1B1A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1A38u;
    // 0x1b1a3c: 0x26246200  addiu       $a0, $s1, 0x6200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 25088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7A98u, 0x1B1A38u, 0x1B1A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1A40u;
label_1b1a40:
    // 0x1b1a40: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1B1A40u;
    {
        const bool branch_taken_0x1b1a40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1A40u;
        // 0x1b1a44: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1a40) {
            ctx->pc = 0x1B1A30u;
            return;
        }
    }
    ctx->pc = 0x1B1A48u;
}
