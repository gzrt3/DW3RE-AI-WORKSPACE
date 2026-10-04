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

// Function: entry_001151c8
// Address: 0x1151c8 - 0x1151e0
void entry_001151c8_0x1151c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001151c8_0x1151c8");
#endif

    switch (ctx->pc) {
        case 0x1151d0u: goto label_1151d0;
        default: break;
    }

    ctx->pc = 0x1151c8u;

    // 0x1151c8: 0xc045508  jal         func_115420
    ctx->pc = 0x1151C8u;
    SET_GPR_U32(ctx, 31, 0x1151D0u);
    ctx->pc = 0x115420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115420u, 0x1151C8u, 0x1151D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1151D0u;
label_1151d0:
    // 0x1151d0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1151D0u;
    {
        const bool branch_taken_0x1151d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1151D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1151D0u;
        // 0x1151d4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1151d0) {
            ctx->pc = 0x1151E0u;
            return;
        }
    }
    ctx->pc = 0x1151D8u;
    // 0x1151d8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1151D8u;
    {
        const bool branch_taken_0x1151d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1151DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1151D8u;
        // 0x1151dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1151d8) {
            ctx->pc = 0x115208u;
            return;
        }
    }
    ctx->pc = 0x1151E0u;
}
