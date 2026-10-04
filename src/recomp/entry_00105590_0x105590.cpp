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

// Function: entry_00105590
// Address: 0x105590 - 0x1055a0
void entry_00105590_0x105590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00105590_0x105590");
#endif

    switch (ctx->pc) {
        case 0x105598u: goto label_105598;
        default: break;
    }

    ctx->pc = 0x105590u;

    // 0x105590: 0xc05af18  jal         func_16BC60
    ctx->pc = 0x105590u;
    SET_GPR_U32(ctx, 31, 0x105598u);
    ctx->pc = 0x16BC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16BC60u, 0x105590u, 0x105598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105598u;
label_105598:
    // 0x105598: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x105598u;
    {
        const bool branch_taken_0x105598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x105598) {
            ctx->pc = 0x105680u;
            return;
        }
    }
    ctx->pc = 0x1055A0u;
}
