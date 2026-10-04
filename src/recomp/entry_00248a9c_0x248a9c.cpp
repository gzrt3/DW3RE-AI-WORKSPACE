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

// Function: entry_00248a9c
// Address: 0x248a9c - 0x248aac
void entry_00248a9c_0x248a9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00248a9c_0x248a9c");
#endif

    switch (ctx->pc) {
        case 0x248aa4u: goto label_248aa4;
        default: break;
    }

    ctx->pc = 0x248a9cu;

    // 0x248a9c: 0xc09232c  jal         func_248CB0
    ctx->pc = 0x248A9Cu;
    SET_GPR_U32(ctx, 31, 0x248AA4u);
    ctx->pc = 0x248CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248CB0u, 0x248A9Cu, 0x248AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248AA4u;
label_248aa4:
    // 0x248aa4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x248AA4u;
    {
        const bool branch_taken_0x248aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x248aa4) {
            ctx->pc = 0x248AC4u;
            return;
        }
    }
    ctx->pc = 0x248AACu;
}
