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

// Function: entry_00185bc0
// Address: 0x185bc0 - 0x185bd0
void entry_00185bc0_0x185bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00185bc0_0x185bc0");
#endif

    switch (ctx->pc) {
        case 0x185bc8u: goto label_185bc8;
        default: break;
    }

    ctx->pc = 0x185bc0u;

    // 0x185bc0: 0xc06237c  jal         func_188DF0
    ctx->pc = 0x185BC0u;
    SET_GPR_U32(ctx, 31, 0x185BC8u);
    ctx->pc = 0x188DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188DF0u, 0x185BC0u, 0x185BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185BC8u;
label_185bc8:
    // 0x185bc8: 0x1000034f  b           . + 4 + (0x34F << 2)
    ctx->pc = 0x185BC8u;
    {
        const bool branch_taken_0x185bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185BC8u;
        // 0x185bcc: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185bc8) {
            ctx->pc = 0x186908u;
            return;
        }
    }
    ctx->pc = 0x185BD0u;
}
