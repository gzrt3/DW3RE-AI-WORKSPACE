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

// Function: entry_00248aac
// Address: 0x248aac - 0x248abc
void entry_00248aac_0x248aac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00248aac_0x248aac");
#endif

    switch (ctx->pc) {
        case 0x248ab4u: goto label_248ab4;
        default: break;
    }

    ctx->pc = 0x248aacu;

    // 0x248aac: 0xc0922f0  jal         func_248BC0
    ctx->pc = 0x248AACu;
    SET_GPR_U32(ctx, 31, 0x248AB4u);
    ctx->pc = 0x248BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248BC0u, 0x248AACu, 0x248AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248AB4u;
label_248ab4:
    // 0x248ab4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x248AB4u;
    {
        const bool branch_taken_0x248ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x248ab4) {
            ctx->pc = 0x248AC4u;
            return;
        }
    }
    ctx->pc = 0x248ABCu;
}
