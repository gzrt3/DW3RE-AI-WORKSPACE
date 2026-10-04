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

// Function: entry_0023f6f8
// Address: 0x23f6f8 - 0x23f708
void entry_0023f6f8_0x23f6f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023f6f8_0x23f6f8");
#endif

    switch (ctx->pc) {
        case 0x23f700u: goto label_23f700;
        default: break;
    }

    ctx->pc = 0x23f6f8u;

    // 0x23f6f8: 0xc07aaa0  jal         func_1EAA80
    ctx->pc = 0x23F6F8u;
    SET_GPR_U32(ctx, 31, 0x23F700u);
    ctx->pc = 0x1EAA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAA80u, 0x23F6F8u, 0x23F700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F700u;
label_23f700:
    // 0x23f700: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x23F700u;
    {
        const bool branch_taken_0x23f700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f700) {
            ctx->pc = 0x23F730u;
            return;
        }
    }
    ctx->pc = 0x23F708u;
}
