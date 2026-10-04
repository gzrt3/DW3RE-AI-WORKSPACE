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

// Function: entry_001b6f60
// Address: 0x1b6f60 - 0x1b6f78
void entry_001b6f60_0x1b6f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6f60_0x1b6f60");
#endif

    switch (ctx->pc) {
        case 0x1b6f68u: goto label_1b6f68;
        default: break;
    }

    ctx->pc = 0x1b6f60u;

    // 0x1b6f60: 0xc06db58  jal         func_1B6D60
    ctx->pc = 0x1B6F60u;
    SET_GPR_U32(ctx, 31, 0x1B6F68u);
    ctx->pc = 0x1B6D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6D60u, 0x1B6F60u, 0x1B6F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6F68u;
label_1b6f68:
    // 0x1b6f68: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b6f68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6f6c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1b6f6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6f70: 0xc06dd74  jal         func_1B75D0
    ctx->pc = 0x1B6F70u;
    SET_GPR_U32(ctx, 31, 0x1B6F78u);
    ctx->pc = 0x1B75D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B75D0u, 0x1B6F70u, 0x1B6F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6F78u;
}
