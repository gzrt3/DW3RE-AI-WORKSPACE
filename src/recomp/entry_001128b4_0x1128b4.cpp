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

// Function: entry_001128b4
// Address: 0x1128b4 - 0x1128cc
void entry_001128b4_0x1128b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001128b4_0x1128b4");
#endif

    ctx->pc = 0x1128b4u;

    // 0x1128b4: 0x8f8484e8  lw          $a0, -0x7B18($gp)
    ctx->pc = 0x1128b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935784)));
    // 0x1128b8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1128b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1128bc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1128BCu;
    {
        const bool branch_taken_0x1128bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1128bc) {
            ctx->pc = 0x1128CCu;
            return;
        }
    }
    ctx->pc = 0x1128C4u;
    // 0x1128c4: 0xc070038  jal         func_1C00E0
    ctx->pc = 0x1128C4u;
    SET_GPR_U32(ctx, 31, 0x1128CCu);
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x1128C4u, 0x1128CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1128CCu;
}
