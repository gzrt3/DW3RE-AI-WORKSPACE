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

// Function: entry_001007f0
// Address: 0x1007f0 - 0x1007f8
void entry_001007f0_0x1007f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001007f0_0x1007f0");
#endif

    ctx->pc = 0x1007f0u;

    // 0x1007f0: 0xc070038  jal         func_1C00E0
    ctx->pc = 0x1007F0u;
    SET_GPR_U32(ctx, 31, 0x1007F8u);
    ctx->pc = 0x1007F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1007F0u;
    // 0x1007f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x1007F0u, 0x1007F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1007F8u;
}
