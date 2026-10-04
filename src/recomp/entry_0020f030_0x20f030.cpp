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

// Function: entry_0020f030
// Address: 0x20f030 - 0x20f048
void entry_0020f030_0x20f030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020f030_0x20f030");
#endif

    switch (ctx->pc) {
        case 0x20f044u: goto label_20f044;
        default: break;
    }

    ctx->pc = 0x20f030u;

    // 0x20f030: 0x8f849188  lw          $a0, -0x6E78($gp)
    ctx->pc = 0x20f030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939016)));
    // 0x20f034: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20F034u;
    {
        const bool branch_taken_0x20f034 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x20f034) {
            ctx->pc = 0x20F048u;
            return;
        }
    }
    ctx->pc = 0x20F03Cu;
    // 0x20f03c: 0xc070038  jal         func_1C00E0
    ctx->pc = 0x20F03Cu;
    SET_GPR_U32(ctx, 31, 0x20F044u);
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x20F03Cu, 0x20F044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F044u;
label_20f044:
    // 0x20f044: 0xaf809188  sw          $zero, -0x6E78($gp)
    ctx->pc = 0x20f044u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939016), GPR_U32(ctx, 0));
    ctx->pc = 0x20f048u;
}
