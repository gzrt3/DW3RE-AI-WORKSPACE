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

// Function: entry_0012d348
// Address: 0x12d348 - 0x12d358
void entry_0012d348_0x12d348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012d348_0x12d348");
#endif

    switch (ctx->pc) {
        case 0x12d350u: goto label_12d350;
        default: break;
    }

    ctx->pc = 0x12d348u;

    // 0x12d348: 0xc071740  jal         func_1C5D00
    ctx->pc = 0x12D348u;
    SET_GPR_U32(ctx, 31, 0x12D350u);
    ctx->pc = 0x1C5D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5D00u, 0x12D348u, 0x12D350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D350u;
label_12d350:
    // 0x12d350: 0xc071728  jal         func_1C5CA0
    ctx->pc = 0x12D350u;
    SET_GPR_U32(ctx, 31, 0x12D358u);
    ctx->pc = 0x12D354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D350u;
    // 0x12d354: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5CA0u, 0x12D350u, 0x12D358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D358u;
}
