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

// Function: FUN_001c20b0
// Address: 0x1c20b0 - 0x1c20c8
void FUN_001c20b0_0x1c20b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c20b0_0x1c20b0");
#endif

    switch (ctx->pc) {
        case 0x1c20c4u: goto label_1c20c4;
        default: break;
    }

    ctx->pc = 0x1c20b0u;

    // 0x1c20b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c20b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c20b4: 0x24850130  addiu       $a1, $a0, 0x130
    ctx->pc = 0x1c20b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 304));
    // 0x1c20b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c20b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c20bc: 0xc06064c  jal         func_181930
    ctx->pc = 0x1C20BCu;
    SET_GPR_U32(ctx, 31, 0x1C20C4u);
    ctx->pc = 0x1C20C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C20BCu;
    // 0x1c20c0: 0xdf848960  ld          $a0, -0x76A0($gp) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 28), 4294936928)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181930u, 0x1C20BCu, 0x1C20C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C20C4u;
label_1c20c4:
    // 0x1c20c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c20c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1c20c8u;
}
