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

// Function: FUN_001f1ae0
// Address: 0x1f1ae0 - 0x1f1b08
void FUN_001f1ae0_0x1f1ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001f1ae0_0x1f1ae0");
#endif

    switch (ctx->pc) {
        case 0x1f1afcu: goto label_1f1afc;
        case 0x1f1b04u: goto label_1f1b04;
        default: break;
    }

    ctx->pc = 0x1f1ae0u;

    // 0x1f1ae0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f1ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f1ae4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f1ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f1ae8: 0x8f838fd0  lw          $v1, -0x7030($gp)
    ctx->pc = 0x1f1ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938576)));
    // 0x1f1aec: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F1AECu;
    {
        const bool branch_taken_0x1f1aec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1aec) {
            ctx->pc = 0x1F1B04u;
            goto label_1f1b04;
        }
    }
    ctx->pc = 0x1F1AF4u;
    // 0x1f1af4: 0xc07c814  jal         func_1F2050
    ctx->pc = 0x1F1AF4u;
    SET_GPR_U32(ctx, 31, 0x1F1AFCu);
    ctx->pc = 0x1F2050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F2050u, 0x1F1AF4u, 0x1F1AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1AFCu;
label_1f1afc:
    // 0x1f1afc: 0xc07ca60  jal         func_1F2980
    ctx->pc = 0x1F1AFCu;
    SET_GPR_U32(ctx, 31, 0x1F1B04u);
    ctx->pc = 0x1F2980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F2980u, 0x1F1AFCu, 0x1F1B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1B04u;
label_1f1b04:
    // 0x1f1b04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f1b04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1f1b08u;
}
