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

// Function: entry_0010759c
// Address: 0x10759c - 0x1075b0
void entry_0010759c_0x10759c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010759c_0x10759c");
#endif

    ctx->pc = 0x10759cu;

    // 0x10759c: 0x8f84847c  lw          $a0, -0x7B84($gp)
    ctx->pc = 0x10759cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935676)));
    // 0x1075a0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1075A0u;
    {
        const bool branch_taken_0x1075a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1075a0) {
            ctx->pc = 0x1075B0u;
            return;
        }
    }
    ctx->pc = 0x1075A8u;
    // 0x1075a8: 0xc070038  jal         func_1C00E0
    ctx->pc = 0x1075A8u;
    SET_GPR_U32(ctx, 31, 0x1075B0u);
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x1075A8u, 0x1075B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1075B0u;
}
