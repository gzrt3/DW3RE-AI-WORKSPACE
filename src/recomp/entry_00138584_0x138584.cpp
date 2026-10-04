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

// Function: entry_00138584
// Address: 0x138584 - 0x138594
void entry_00138584_0x138584(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00138584_0x138584");
#endif

    ctx->pc = 0x138584u;

    // 0x138584: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x138584u;
    {
        const bool branch_taken_0x138584 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x138584) {
            ctx->pc = 0x138594u;
            return;
        }
    }
    ctx->pc = 0x13858Cu;
    // 0x13858c: 0xc04e23c  jal         func_1388F0
    ctx->pc = 0x13858Cu;
    SET_GPR_U32(ctx, 31, 0x138594u);
    ctx->pc = 0x1388F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1388F0u, 0x13858Cu, 0x138594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138594u;
}
