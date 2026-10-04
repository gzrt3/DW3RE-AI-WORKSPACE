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

// Function: entry_001128d8
// Address: 0x1128d8 - 0x1128ec
void entry_001128d8_0x1128d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001128d8_0x1128d8");
#endif

    ctx->pc = 0x1128d8u;

    // 0x1128d8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1128d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1128dc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1128DCu;
    {
        const bool branch_taken_0x1128dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1128dc) {
            ctx->pc = 0x1128ECu;
            return;
        }
    }
    ctx->pc = 0x1128E4u;
    // 0x1128e4: 0xc070038  jal         func_1C00E0
    ctx->pc = 0x1128E4u;
    SET_GPR_U32(ctx, 31, 0x1128ECu);
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x1128E4u, 0x1128ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1128ECu;
}
