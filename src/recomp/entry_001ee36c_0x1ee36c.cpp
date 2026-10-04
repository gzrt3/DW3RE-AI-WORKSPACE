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

// Function: entry_001ee36c
// Address: 0x1ee36c - 0x1ee380
void entry_001ee36c_0x1ee36c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ee36c_0x1ee36c");
#endif

    switch (ctx->pc) {
        case 0x1ee378u: goto label_1ee378;
        default: break;
    }

    ctx->pc = 0x1ee36cu;

    // 0x1ee36c: 0x0  nop
    ctx->pc = 0x1ee36cu;
    // NOP
    // 0x1ee370: 0xc07ab38  jal         func_1EACE0
    ctx->pc = 0x1EE370u;
    SET_GPR_U32(ctx, 31, 0x1EE378u);
    ctx->pc = 0x1EACE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EACE0u, 0x1EE370u, 0x1EE378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE378u;
label_1ee378:
    // 0x1ee378: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EE378u;
    {
        const bool branch_taken_0x1ee378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee378) {
            ctx->pc = 0x1EE390u;
            return;
        }
    }
    ctx->pc = 0x1EE380u;
}
