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

// Function: entry_001a7fa8
// Address: 0x1a7fa8 - 0x1a7fc8
void entry_001a7fa8_0x1a7fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a7fa8_0x1a7fa8");
#endif

    switch (ctx->pc) {
        case 0x1a7fb0u: goto label_1a7fb0;
        case 0x1a7fc0u: goto label_1a7fc0;
        default: break;
    }

    ctx->pc = 0x1a7fa8u;

label_1a7fa8:
    // 0x1a7fa8: 0xc069f5a  jal         func_1A7D68
    ctx->pc = 0x1A7FA8u;
    SET_GPR_U32(ctx, 31, 0x1A7FB0u);
    ctx->pc = 0x1A7FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7FA8u;
    // 0x1a7fac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7D68u, 0x1A7FA8u, 0x1A7FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7FB0u;
label_1a7fb0:
    // 0x1a7fb0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1A7FB0u;
    {
        const bool branch_taken_0x1a7fb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A7FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7FB0u;
        // 0x1a7fb4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7fb0) {
            ctx->pc = 0x1A7FA0u;
            return;
        }
    }
    ctx->pc = 0x1A7FB8u;
    // 0x1a7fb8: 0xc0691d0  jal         func_1A4740
    ctx->pc = 0x1A7FB8u;
    SET_GPR_U32(ctx, 31, 0x1A7FC0u);
    ctx->pc = 0x1A4740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4740u, 0x1A7FB8u, 0x1A7FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7FC0u;
label_1a7fc0:
    // 0x1a7fc0: 0x1000fff9  b           . + 4 + (-0x7 << 2)
    ctx->pc = 0x1A7FC0u;
    {
        const bool branch_taken_0x1a7fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7fc0) {
            ctx->pc = 0x1A7FA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a7fa8;
        }
    }
    ctx->pc = 0x1A7FC8u;
}
