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

// Function: entry_0020f370
// Address: 0x20f370 - 0x20f388
void entry_0020f370_0x20f370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020f370_0x20f370");
#endif

    switch (ctx->pc) {
        case 0x20f378u: goto label_20f378;
        case 0x20f380u: goto label_20f380;
        default: break;
    }

    ctx->pc = 0x20f370u;

    // 0x20f370: 0xc0902ec  jal         func_240BB0
    ctx->pc = 0x20F370u;
    SET_GPR_U32(ctx, 31, 0x20F378u);
    ctx->pc = 0x240BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x240BB0u, 0x20F370u, 0x20F378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F378u;
label_20f378:
    // 0x20f378: 0xc055da0  jal         func_157680
    ctx->pc = 0x20F378u;
    SET_GPR_U32(ctx, 31, 0x20F380u);
    ctx->pc = 0x157680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157680u, 0x20F378u, 0x20F380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F380u;
label_20f380:
    // 0x20f380: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x20F380u;
    {
        const bool branch_taken_0x20f380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20f380) {
            ctx->pc = 0x20F390u;
            return;
        }
    }
    ctx->pc = 0x20F388u;
}
