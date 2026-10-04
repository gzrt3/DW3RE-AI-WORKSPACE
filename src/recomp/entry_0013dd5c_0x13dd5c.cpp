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

// Function: entry_0013dd5c
// Address: 0x13dd5c - 0x13dd70
void entry_0013dd5c_0x13dd5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013dd5c_0x13dd5c");
#endif

    ctx->pc = 0x13dd5cu;

    // 0x13dd5c: 0x8f848538  lw          $a0, -0x7AC8($gp)
    ctx->pc = 0x13dd5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935864)));
    // 0x13dd60: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13DD60u;
    {
        const bool branch_taken_0x13dd60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13dd60) {
            ctx->pc = 0x13DD70u;
            return;
        }
    }
    ctx->pc = 0x13DD68u;
    // 0x13dd68: 0xc070038  jal         func_1C00E0
    ctx->pc = 0x13DD68u;
    SET_GPR_U32(ctx, 31, 0x13DD70u);
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x13DD68u, 0x13DD70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DD70u;
}
