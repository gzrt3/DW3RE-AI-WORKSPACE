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

// Function: entry_0021edf8
// Address: 0x21edf8 - 0x21ee10
void entry_0021edf8_0x21edf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021edf8_0x21edf8");
#endif

    switch (ctx->pc) {
        case 0x21ee08u: goto label_21ee08;
        default: break;
    }

    ctx->pc = 0x21edf8u;

    // 0x21edf8: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x21EDF8u;
    {
        const bool branch_taken_0x21edf8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x21edf8) {
            ctx->pc = 0x21EE10u;
            return;
        }
    }
    ctx->pc = 0x21EE00u;
    // 0x21ee00: 0xc087be8  jal         func_21EFA0
    ctx->pc = 0x21EE00u;
    SET_GPR_U32(ctx, 31, 0x21EE08u);
    ctx->pc = 0x21EE04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EE00u;
    // 0x21ee04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21EFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21EFA0u, 0x21EE00u, 0x21EE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EE08u;
label_21ee08:
    // 0x21ee08: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x21EE08u;
    {
        const bool branch_taken_0x21ee08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21ee08) {
            ctx->pc = 0x21EE24u;
            return;
        }
    }
    ctx->pc = 0x21EE10u;
}
