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

// Function: entry_001956a4
// Address: 0x1956a4 - 0x1956bc
void entry_001956a4_0x1956a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001956a4_0x1956a4");
#endif

    ctx->pc = 0x1956a4u;

    // 0x1956a4: 0x0  nop
    ctx->pc = 0x1956a4u;
    // NOP
    // 0x1956a8: 0x8e0400c0  lw          $a0, 0xC0($s0)
    ctx->pc = 0x1956a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x1956ac: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1956ACu;
    {
        const bool branch_taken_0x1956ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1956ac) {
            ctx->pc = 0x1956BCu;
            return;
        }
    }
    ctx->pc = 0x1956B4u;
    // 0x1956b4: 0xc070038  jal         func_1C00E0
    ctx->pc = 0x1956B4u;
    SET_GPR_U32(ctx, 31, 0x1956BCu);
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x1956B4u, 0x1956BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1956BCu;
}
