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

// Function: FUN_0013cf80
// Address: 0x13cf80 - 0x13cfa0
void FUN_0013cf80_0x13cf80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0013cf80_0x13cf80");
#endif

    switch (ctx->pc) {
        case 0x13cf9cu: goto label_13cf9c;
        default: break;
    }

    ctx->pc = 0x13cf80u;

    // 0x13cf80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13cf80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13cf84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13cf84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13cf88: 0x8f848524  lw          $a0, -0x7ADC($gp)
    ctx->pc = 0x13cf88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935844)));
    // 0x13cf8c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13CF8Cu;
    {
        const bool branch_taken_0x13cf8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13cf8c) {
            ctx->pc = 0x13CF9Cu;
            goto label_13cf9c;
        }
    }
    ctx->pc = 0x13CF94u;
    // 0x13cf94: 0xc070038  jal         func_1C00E0
    ctx->pc = 0x13CF94u;
    SET_GPR_U32(ctx, 31, 0x13CF9Cu);
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x13CF94u, 0x13CF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CF9Cu;
label_13cf9c:
    // 0x13cf9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13cf9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x13cfa0u;
}
