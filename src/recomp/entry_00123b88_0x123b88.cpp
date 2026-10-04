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

// Function: entry_00123b88
// Address: 0x123b88 - 0x123b98
void entry_00123b88_0x123b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00123b88_0x123b88");
#endif

    switch (ctx->pc) {
        case 0x123b90u: goto label_123b90;
        default: break;
    }

    ctx->pc = 0x123b88u;

    // 0x123b88: 0xc071740  jal         func_1C5D00
    ctx->pc = 0x123B88u;
    SET_GPR_U32(ctx, 31, 0x123B90u);
    ctx->pc = 0x1C5D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5D00u, 0x123B88u, 0x123B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123B90u;
label_123b90:
    // 0x123b90: 0xc071728  jal         func_1C5CA0
    ctx->pc = 0x123B90u;
    SET_GPR_U32(ctx, 31, 0x123B98u);
    ctx->pc = 0x123B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123B90u;
    // 0x123b94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5CA0u, 0x123B90u, 0x123B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123B98u;
}
