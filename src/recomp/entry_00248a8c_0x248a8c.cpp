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

// Function: entry_00248a8c
// Address: 0x248a8c - 0x248a9c
void entry_00248a8c_0x248a8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00248a8c_0x248a8c");
#endif

    switch (ctx->pc) {
        case 0x248a94u: goto label_248a94;
        default: break;
    }

    ctx->pc = 0x248a8cu;

    // 0x248a8c: 0xc092368  jal         func_248DA0
    ctx->pc = 0x248A8Cu;
    SET_GPR_U32(ctx, 31, 0x248A94u);
    ctx->pc = 0x248DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248DA0u, 0x248A8Cu, 0x248A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248A94u;
label_248a94:
    // 0x248a94: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x248A94u;
    {
        const bool branch_taken_0x248a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x248a94) {
            ctx->pc = 0x248AC4u;
            return;
        }
    }
    ctx->pc = 0x248A9Cu;
}
