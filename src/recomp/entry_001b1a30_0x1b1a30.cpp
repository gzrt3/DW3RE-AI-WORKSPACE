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

// Function: entry_001b1a30
// Address: 0x1b1a30 - 0x1b1a38
void entry_001b1a30_0x1b1a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1a30_0x1b1a30");
#endif

    ctx->pc = 0x1b1a30u;

    // 0x1b1a30: 0xc06c660  jal         func_1B1980
    ctx->pc = 0x1B1A30u;
    SET_GPR_U32(ctx, 31, 0x1B1A38u);
    ctx->pc = 0x1B1A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1A30u;
    // 0x1b1a34: 0x2404003c  addiu       $a0, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1980u, 0x1B1A30u, 0x1B1A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1A38u;
}
