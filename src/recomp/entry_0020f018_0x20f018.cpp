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

// Function: entry_0020f018
// Address: 0x20f018 - 0x20f030
void entry_0020f018_0x20f018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020f018_0x20f018");
#endif

    switch (ctx->pc) {
        case 0x20f02cu: goto label_20f02c;
        default: break;
    }

    ctx->pc = 0x20f018u;

    // 0x20f018: 0x8f8491a4  lw          $a0, -0x6E5C($gp)
    ctx->pc = 0x20f018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939044)));
    // 0x20f01c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20F01Cu;
    {
        const bool branch_taken_0x20f01c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x20f01c) {
            ctx->pc = 0x20F030u;
            return;
        }
    }
    ctx->pc = 0x20F024u;
    // 0x20f024: 0xc070038  jal         func_1C00E0
    ctx->pc = 0x20F024u;
    SET_GPR_U32(ctx, 31, 0x20F02Cu);
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x20F024u, 0x20F02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F02Cu;
label_20f02c:
    // 0x20f02c: 0xaf8091a4  sw          $zero, -0x6E5C($gp)
    ctx->pc = 0x20f02cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939044), GPR_U32(ctx, 0));
    ctx->pc = 0x20f030u;
}
