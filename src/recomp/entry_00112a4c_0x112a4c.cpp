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

// Function: entry_00112a4c
// Address: 0x112a4c - 0x112a60
void entry_00112a4c_0x112a4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112a4c_0x112a4c");
#endif

    ctx->pc = 0x112a4cu;

    // 0x112a4c: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x112a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x112a50: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x112A50u;
    {
        const bool branch_taken_0x112a50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x112a50) {
            ctx->pc = 0x112A60u;
            return;
        }
    }
    ctx->pc = 0x112A58u;
    // 0x112a58: 0xc070038  jal         func_1C00E0
    ctx->pc = 0x112A58u;
    SET_GPR_U32(ctx, 31, 0x112A60u);
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x112A58u, 0x112A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112A60u;
}
