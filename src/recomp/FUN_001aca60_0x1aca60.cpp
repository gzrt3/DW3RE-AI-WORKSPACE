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

// Function: FUN_001aca60
// Address: 0x1aca60 - 0x1aca80
void FUN_001aca60_0x1aca60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001aca60_0x1aca60");
#endif

    switch (ctx->pc) {
        case 0x1aca70u: goto label_1aca70;
        default: break;
    }

    ctx->pc = 0x1aca60u;

    // 0x1aca60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1aca60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1aca64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1aca64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1aca68: 0xc06930c  jal         func_1A4C30
    ctx->pc = 0x1ACA68u;
    SET_GPR_U32(ctx, 31, 0x1ACA70u);
    ctx->pc = 0x1ACA6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACA68u;
    // 0x1aca6c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4C30u, 0x1ACA68u, 0x1ACA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACA70u;
label_1aca70:
    // 0x1aca70: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1aca70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x1aca74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1aca74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aca78: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1aca78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1aca7c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1aca7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->pc = 0x1aca80u;
}
