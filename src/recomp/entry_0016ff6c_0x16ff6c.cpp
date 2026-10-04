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

// Function: entry_0016ff6c
// Address: 0x16ff6c - 0x16ff78
void entry_0016ff6c_0x16ff6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016ff6c_0x16ff6c");
#endif

    switch (ctx->pc) {
        case 0x16ff74u: goto label_16ff74;
        default: break;
    }

    ctx->pc = 0x16ff6cu;

    // 0x16ff6c: 0xc05bd78  jal         func_16F5E0
    ctx->pc = 0x16FF6Cu;
    SET_GPR_U32(ctx, 31, 0x16FF74u);
    ctx->pc = 0x16F5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F5E0u, 0x16FF6Cu, 0x16FF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16FF74u;
label_16ff74:
    // 0x16ff74: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16ff74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16ff78u;
}
