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

// Function: entry_0015235c
// Address: 0x15235c - 0x152370
void entry_0015235c_0x15235c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015235c_0x15235c");
#endif

    ctx->pc = 0x15235cu;

    // 0x15235c: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x15235cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x152360: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x152360u;
    {
        const bool branch_taken_0x152360 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x152360) {
            ctx->pc = 0x152370u;
            return;
        }
    }
    ctx->pc = 0x152368u;
    // 0x152368: 0xc070038  jal         func_1C00E0
    ctx->pc = 0x152368u;
    SET_GPR_U32(ctx, 31, 0x152370u);
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x152368u, 0x152370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152370u;
}
