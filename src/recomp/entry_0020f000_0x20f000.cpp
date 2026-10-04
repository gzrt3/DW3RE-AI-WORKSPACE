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

// Function: entry_0020f000
// Address: 0x20f000 - 0x20f018
void entry_0020f000_0x20f000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020f000_0x20f000");
#endif

    switch (ctx->pc) {
        case 0x20f014u: goto label_20f014;
        default: break;
    }

    ctx->pc = 0x20f000u;

    // 0x20f000: 0x8f849198  lw          $a0, -0x6E68($gp)
    ctx->pc = 0x20f000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939032)));
    // 0x20f004: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20F004u;
    {
        const bool branch_taken_0x20f004 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x20f004) {
            ctx->pc = 0x20F018u;
            return;
        }
    }
    ctx->pc = 0x20F00Cu;
    // 0x20f00c: 0xc070038  jal         func_1C00E0
    ctx->pc = 0x20F00Cu;
    SET_GPR_U32(ctx, 31, 0x20F014u);
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x20F00Cu, 0x20F014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F014u;
label_20f014:
    // 0x20f014: 0xaf809198  sw          $zero, -0x6E68($gp)
    ctx->pc = 0x20f014u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939032), GPR_U32(ctx, 0));
    ctx->pc = 0x20f018u;
}
