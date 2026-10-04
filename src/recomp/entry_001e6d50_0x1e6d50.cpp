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

// Function: entry_001e6d50
// Address: 0x1e6d50 - 0x1e6d5c
void entry_001e6d50_0x1e6d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e6d50_0x1e6d50");
#endif

    ctx->pc = 0x1e6d50u;

    // 0x1e6d50: 0x8f848dcc  lw          $a0, -0x7234($gp)
    ctx->pc = 0x1e6d50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938060)));
    // 0x1e6d54: 0xc070e2c  jal         func_1C38B0
    ctx->pc = 0x1E6D54u;
    SET_GPR_U32(ctx, 31, 0x1E6D5Cu);
    ctx->pc = 0x1E6D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6D54u;
    // 0x1e6d58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C38B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C38B0u, 0x1E6D54u, 0x1E6D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6D5Cu;
}
