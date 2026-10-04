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

// Function: entry_0020d218
// Address: 0x20d218 - 0x20d228
void entry_0020d218_0x20d218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020d218_0x20d218");
#endif

    switch (ctx->pc) {
        case 0x20d220u: goto label_20d220;
        default: break;
    }

    ctx->pc = 0x20d218u;

    // 0x20d218: 0xc04e198  jal         func_138660
    ctx->pc = 0x20D218u;
    SET_GPR_U32(ctx, 31, 0x20D220u);
    ctx->pc = 0x138660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138660u, 0x20D218u, 0x20D220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D220u;
label_20d220:
    // 0x20d220: 0x1040ff69  beqz        $v0, . + 4 + (-0x97 << 2)
    ctx->pc = 0x20D220u;
    {
        const bool branch_taken_0x20d220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20d220) {
            ctx->pc = 0x20CFC8u;
            return;
        }
    }
    ctx->pc = 0x20D228u;
}
