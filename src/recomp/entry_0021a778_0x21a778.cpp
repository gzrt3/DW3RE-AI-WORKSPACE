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

// Function: entry_0021a778
// Address: 0x21a778 - 0x21a788
void entry_0021a778_0x21a778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021a778_0x21a778");
#endif

    switch (ctx->pc) {
        case 0x21a780u: goto label_21a780;
        default: break;
    }

    ctx->pc = 0x21a778u;

    // 0x21a778: 0xc04e198  jal         func_138660
    ctx->pc = 0x21A778u;
    SET_GPR_U32(ctx, 31, 0x21A780u);
    ctx->pc = 0x138660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138660u, 0x21A778u, 0x21A780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21A780u;
label_21a780:
    // 0x21a780: 0x1040ff4b  beqz        $v0, . + 4 + (-0xB5 << 2)
    ctx->pc = 0x21A780u;
    {
        const bool branch_taken_0x21a780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21a780) {
            ctx->pc = 0x21A4B0u;
            return;
        }
    }
    ctx->pc = 0x21A788u;
}
