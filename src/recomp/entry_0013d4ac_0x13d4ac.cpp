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

// Function: entry_0013d4ac
// Address: 0x13d4ac - 0x13d4c0
void entry_0013d4ac_0x13d4ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013d4ac_0x13d4ac");
#endif

    ctx->pc = 0x13d4acu;

    // 0x13d4ac: 0x8f848550  lw          $a0, -0x7AB0($gp)
    ctx->pc = 0x13d4acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935888)));
    // 0x13d4b0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13D4B0u;
    {
        const bool branch_taken_0x13d4b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d4b0) {
            ctx->pc = 0x13D4C0u;
            return;
        }
    }
    ctx->pc = 0x13D4B8u;
    // 0x13d4b8: 0xc070038  jal         func_1C00E0
    ctx->pc = 0x13D4B8u;
    SET_GPR_U32(ctx, 31, 0x13D4C0u);
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x13D4B8u, 0x13D4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D4C0u;
}
