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

// Function: FUN_001024c0
// Address: 0x1024c0 - 0x1024d8
void FUN_001024c0_0x1024c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001024c0_0x1024c0");
#endif

    switch (ctx->pc) {
        case 0x1024d4u: goto label_1024d4;
        default: break;
    }

    ctx->pc = 0x1024c0u;

    // 0x1024c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1024c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1024c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1024c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1024c8: 0x8c86002c  lw          $a2, 0x2C($a0)
    ctx->pc = 0x1024c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x1024cc: 0xc040938  jal         func_1024E0
    ctx->pc = 0x1024CCu;
    SET_GPR_U32(ctx, 31, 0x1024D4u);
    ctx->pc = 0x1024D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1024CCu;
    // 0x1024d0: 0x24870150  addiu       $a3, $a0, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1024E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1024E0u, 0x1024CCu, 0x1024D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1024D4u;
label_1024d4:
    // 0x1024d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1024d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1024d8u;
}
