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

// Function: entry_0011bd60
// Address: 0x11bd60 - 0x11bd6c
void entry_0011bd60_0x11bd60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011bd60_0x11bd60");
#endif

    switch (ctx->pc) {
        case 0x11bd68u: goto label_11bd68;
        default: break;
    }

    ctx->pc = 0x11bd60u;

    // 0x11bd60: 0xc048e8c  jal         func_123A30
    ctx->pc = 0x11BD60u;
    SET_GPR_U32(ctx, 31, 0x11BD68u);
    ctx->pc = 0x11BD64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BD60u;
    // 0x11bd64: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123A30u, 0x11BD60u, 0x11BD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BD68u;
label_11bd68:
    // 0x11bd68: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11bd68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11bd6cu;
}
