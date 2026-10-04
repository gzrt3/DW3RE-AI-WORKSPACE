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

// Function: entry_00128ab8
// Address: 0x128ab8 - 0x128ac8
void entry_00128ab8_0x128ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00128ab8_0x128ab8");
#endif

    switch (ctx->pc) {
        case 0x128ac0u: goto label_128ac0;
        default: break;
    }

    ctx->pc = 0x128ab8u;

    // 0x128ab8: 0xc071740  jal         func_1C5D00
    ctx->pc = 0x128AB8u;
    SET_GPR_U32(ctx, 31, 0x128AC0u);
    ctx->pc = 0x1C5D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5D00u, 0x128AB8u, 0x128AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128AC0u;
label_128ac0:
    // 0x128ac0: 0xc071728  jal         func_1C5CA0
    ctx->pc = 0x128AC0u;
    SET_GPR_U32(ctx, 31, 0x128AC8u);
    ctx->pc = 0x128AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128AC0u;
    // 0x128ac4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5CA0u, 0x128AC0u, 0x128AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128AC8u;
}
