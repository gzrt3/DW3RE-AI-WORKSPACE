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

// Function: entry_00134b90
// Address: 0x134b90 - 0x134ba0
void entry_00134b90_0x134b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134b90_0x134b90");
#endif

    switch (ctx->pc) {
        case 0x134b98u: goto label_134b98;
        default: break;
    }

    ctx->pc = 0x134b90u;

    // 0x134b90: 0xc04bfa8  jal         func_12FEA0
    ctx->pc = 0x134B90u;
    SET_GPR_U32(ctx, 31, 0x134B98u);
    ctx->pc = 0x134B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134B90u;
    // 0x134b94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FEA0u, 0x134B90u, 0x134B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134B98u;
label_134b98:
    // 0x134b98: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x134B98u;
    {
        const bool branch_taken_0x134b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134b98) {
            ctx->pc = 0x134E40u;
            return;
        }
    }
    ctx->pc = 0x134BA0u;
}
