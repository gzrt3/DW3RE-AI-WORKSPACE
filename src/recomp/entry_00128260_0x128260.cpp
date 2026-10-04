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

// Function: entry_00128260
// Address: 0x128260 - 0x128270
void entry_00128260_0x128260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00128260_0x128260");
#endif

    switch (ctx->pc) {
        case 0x128268u: goto label_128268;
        default: break;
    }

    ctx->pc = 0x128260u;

    // 0x128260: 0xc0591f4  jal         func_1647D0
    ctx->pc = 0x128260u;
    SET_GPR_U32(ctx, 31, 0x128268u);
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x128260u, 0x128268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128268u;
label_128268:
    // 0x128268: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x128268u;
    {
        const bool branch_taken_0x128268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x128268) {
            ctx->pc = 0x12827Cu;
            return;
        }
    }
    ctx->pc = 0x128270u;
}
