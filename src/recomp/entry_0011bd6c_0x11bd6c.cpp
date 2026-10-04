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

// Function: entry_0011bd6c
// Address: 0x11bd6c - 0x11bd80
void entry_0011bd6c_0x11bd6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011bd6c_0x11bd6c");
#endif

    switch (ctx->pc) {
        case 0x11bd74u: goto label_11bd74;
        default: break;
    }

    ctx->pc = 0x11bd6cu;

    // 0x11bd6c: 0xc071390  jal         func_1C4E40
    ctx->pc = 0x11BD6Cu;
    SET_GPR_U32(ctx, 31, 0x11BD74u);
    ctx->pc = 0x11BD70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BD6Cu;
    // 0x11bd70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4E40u, 0x11BD6Cu, 0x11BD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BD74u;
label_11bd74:
    // 0x11bd74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11bd74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bd78: 0xc0713a8  jal         func_1C4EA0
    ctx->pc = 0x11BD78u;
    SET_GPR_U32(ctx, 31, 0x11BD80u);
    ctx->pc = 0x11BD7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BD78u;
    // 0x11bd7c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4EA0u, 0x11BD78u, 0x11BD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BD80u;
}
