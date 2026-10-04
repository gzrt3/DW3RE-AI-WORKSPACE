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

// Function: entry_0021b440
// Address: 0x21b440 - 0x21b450
void entry_0021b440_0x21b440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021b440_0x21b440");
#endif

    switch (ctx->pc) {
        case 0x21b448u: goto label_21b448;
        default: break;
    }

    ctx->pc = 0x21b440u;

    // 0x21b440: 0xc04e198  jal         func_138660
    ctx->pc = 0x21B440u;
    SET_GPR_U32(ctx, 31, 0x21B448u);
    ctx->pc = 0x138660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138660u, 0x21B440u, 0x21B448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B448u;
label_21b448:
    // 0x21b448: 0x1040ff4b  beqz        $v0, . + 4 + (-0xB5 << 2)
    ctx->pc = 0x21B448u;
    {
        const bool branch_taken_0x21b448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b448) {
            ctx->pc = 0x21B178u;
            return;
        }
    }
    ctx->pc = 0x21B450u;
}
