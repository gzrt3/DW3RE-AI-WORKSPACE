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

// Function: FUN_00155790
// Address: 0x155790 - 0x1557b4
void FUN_00155790_0x155790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00155790_0x155790");
#endif

    switch (ctx->pc) {
        case 0x1557acu: goto label_1557ac;
        default: break;
    }

    ctx->pc = 0x155790u;

    // 0x155790: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x155790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x155794: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x155794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x155798: 0x8f848630  lw          $a0, -0x79D0($gp)
    ctx->pc = 0x155798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936112)));
    // 0x15579c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15579Cu;
    {
        const bool branch_taken_0x15579c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x15579c) {
            ctx->pc = 0x1557ACu;
            goto label_1557ac;
        }
    }
    ctx->pc = 0x1557A4u;
    // 0x1557a4: 0xc070038  jal         func_1C00E0
    ctx->pc = 0x1557A4u;
    SET_GPR_U32(ctx, 31, 0x1557ACu);
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x1557A4u, 0x1557ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1557ACu;
label_1557ac:
    // 0x1557ac: 0xaf808630  sw          $zero, -0x79D0($gp)
    ctx->pc = 0x1557acu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936112), GPR_U32(ctx, 0));
    // 0x1557b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1557b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1557b4u;
}
