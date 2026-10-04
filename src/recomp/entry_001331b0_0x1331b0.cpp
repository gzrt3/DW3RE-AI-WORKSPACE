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

// Function: entry_001331b0
// Address: 0x1331b0 - 0x1331c0
void entry_001331b0_0x1331b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001331b0_0x1331b0");
#endif

    ctx->pc = 0x1331b0u;

    // 0x1331b0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1331B0u;
    {
        const bool branch_taken_0x1331b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1331b0) {
            ctx->pc = 0x1331C0u;
            return;
        }
    }
    ctx->pc = 0x1331B8u;
    // 0x1331b8: 0xc0452fc  jal         func_114BF0
    ctx->pc = 0x1331B8u;
    SET_GPR_U32(ctx, 31, 0x1331C0u);
    ctx->pc = 0x114BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114BF0u, 0x1331B8u, 0x1331C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1331C0u;
}
