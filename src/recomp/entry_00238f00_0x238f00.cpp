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

// Function: entry_00238f00
// Address: 0x238f00 - 0x238f10
void entry_00238f00_0x238f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00238f00_0x238f00");
#endif

    switch (ctx->pc) {
        case 0x238f08u: goto label_238f08;
        default: break;
    }

    ctx->pc = 0x238f00u;

    // 0x238f00: 0xc08e9fc  jal         func_23A7F0
    ctx->pc = 0x238F00u;
    SET_GPR_U32(ctx, 31, 0x238F08u);
    ctx->pc = 0x23A7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A7F0u, 0x238F00u, 0x238F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x238F08u;
label_238f08:
    // 0x238f08: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x238F08u;
    {
        const bool branch_taken_0x238f08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x238F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238F08u;
        // 0x238f0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238f08) {
            ctx->pc = 0x238F44u;
            return;
        }
    }
    ctx->pc = 0x238F10u;
}
