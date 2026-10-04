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

// Function: FUN_00100c60
// Address: 0x100c60 - 0x100c84
void FUN_00100c60_0x100c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00100c60_0x100c60");
#endif

    switch (ctx->pc) {
        case 0x100c7cu: goto label_100c7c;
        default: break;
    }

    ctx->pc = 0x100c60u;

    // 0x100c60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x100c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x100c64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x100c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x100c68: 0x8f848444  lw          $a0, -0x7BBC($gp)
    ctx->pc = 0x100c68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935620)));
    // 0x100c6c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x100C6Cu;
    {
        const bool branch_taken_0x100c6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x100c6c) {
            ctx->pc = 0x100C80u;
            goto label_100c80;
        }
    }
    ctx->pc = 0x100C74u;
    // 0x100c74: 0xc070038  jal         func_1C00E0
    ctx->pc = 0x100C74u;
    SET_GPR_U32(ctx, 31, 0x100C7Cu);
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x100C74u, 0x100C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100C7Cu;
label_100c7c:
    // 0x100c7c: 0xaf808444  sw          $zero, -0x7BBC($gp)
    ctx->pc = 0x100c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935620), GPR_U32(ctx, 0));
label_100c80:
    // 0x100c80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x100c80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x100c84u;
}
