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

// Function: FUN_0013ebe0
// Address: 0x13ebe0 - 0x13ec14
void FUN_0013ebe0_0x13ebe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0013ebe0_0x13ebe0");
#endif

    switch (ctx->pc) {
        case 0x13ebfcu: goto label_13ebfc;
        case 0x13ec10u: goto label_13ec10;
        default: break;
    }

    ctx->pc = 0x13ebe0u;

    // 0x13ebe0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13ebe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13ebe4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13ebe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13ebe8: 0x8f848528  lw          $a0, -0x7AD8($gp)
    ctx->pc = 0x13ebe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935848)));
    // 0x13ebec: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13EBECu;
    {
        const bool branch_taken_0x13ebec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ebec) {
            ctx->pc = 0x13EBFCu;
            goto label_13ebfc;
        }
    }
    ctx->pc = 0x13EBF4u;
    // 0x13ebf4: 0xc070038  jal         func_1C00E0
    ctx->pc = 0x13EBF4u;
    SET_GPR_U32(ctx, 31, 0x13EBFCu);
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x13EBF4u, 0x13EBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EBFCu;
label_13ebfc:
    // 0x13ebfc: 0x8f848530  lw          $a0, -0x7AD0($gp)
    ctx->pc = 0x13ebfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935856)));
    // 0x13ec00: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13EC00u;
    {
        const bool branch_taken_0x13ec00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ec00) {
            ctx->pc = 0x13EC10u;
            goto label_13ec10;
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
label_13ec10:
    // 0x13ec10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13ec10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x13ec14u;
}
