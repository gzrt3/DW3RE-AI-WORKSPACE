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

// Function: entry_0013ebfc
// Address: 0x13ebfc - 0x13ec10
void entry_0013ebfc_0x13ebfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013ebfc_0x13ebfc");
#endif

    ctx->pc = 0x13ebfcu;

    // 0x13ebfc: 0x8f848530  lw          $a0, -0x7AD0($gp)
    ctx->pc = 0x13ebfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935856)));
    // 0x13ec00: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13EC00u;
    {
        const bool branch_taken_0x13ec00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ec00) {
            ctx->pc = 0x13EC10u;
            return;
        }
    }
    ctx->pc = 0x13EC08u;
    // 0x13ec08: 0xc070038  jal         func_1C00E0
    ctx->pc = 0x13EC08u;
    SET_GPR_U32(ctx, 31, 0x13EC10u);
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x13EC08u, 0x13EC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EC10u;
}
