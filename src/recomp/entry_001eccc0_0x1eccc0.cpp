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

// Function: entry_001eccc0
// Address: 0x1eccc0 - 0x1eccd0
void entry_001eccc0_0x1eccc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001eccc0_0x1eccc0");
#endif

    ctx->pc = 0x1eccc0u;

    // 0x1eccc0: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ECCC0u;
    {
        const bool branch_taken_0x1eccc0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eccc0) {
            ctx->pc = 0x1ECCD0u;
            return;
        }
    }
    ctx->pc = 0x1ECCC8u;
    // 0x1eccc8: 0xc041478  jal         func_1051E0
    ctx->pc = 0x1ECCC8u;
    SET_GPR_U32(ctx, 31, 0x1ECCD0u);
    ctx->pc = 0x1051E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051E0u, 0x1ECCC8u, 0x1ECCD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECCD0u;
}
