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

// Function: entry_00226c34
// Address: 0x226c34 - 0x226c44
void entry_00226c34_0x226c34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00226c34_0x226c34");
#endif

    ctx->pc = 0x226c34u;

    // 0x226c34: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x226C34u;
    {
        const bool branch_taken_0x226c34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x226C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226C34u;
        // 0x226c38: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226c34) {
            ctx->pc = 0x226C44u;
            return;
        }
    }
    ctx->pc = 0x226C3Cu;
    // 0x226c3c: 0xc06e45c  jal         func_1B9170
    ctx->pc = 0x226C3Cu;
    SET_GPR_U32(ctx, 31, 0x226C44u);
    ctx->pc = 0x1B9170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9170u, 0x226C3Cu, 0x226C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226C44u;
}
