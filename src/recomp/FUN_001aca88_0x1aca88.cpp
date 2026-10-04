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

// Function: FUN_001aca88
// Address: 0x1aca88 - 0x1acab8
void FUN_001aca88_0x1aca88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001aca88_0x1aca88");
#endif

    switch (ctx->pc) {
        case 0x1aca98u: goto label_1aca98;
        case 0x1acab0u: goto label_1acab0;
        default: break;
    }

    ctx->pc = 0x1aca88u;

    // 0x1aca88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1aca88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1aca8c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1aca8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1aca90: 0xc06930c  jal         func_1A4C30
    ctx->pc = 0x1ACA90u;
    SET_GPR_U32(ctx, 31, 0x1ACA98u);
    ctx->pc = 0x1ACA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACA90u;
    // 0x1aca94: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4C30u, 0x1ACA90u, 0x1ACA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACA98u;
label_1aca98:
    // 0x1aca98: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x1aca98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x1aca9c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1aca9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1acaa0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ACAA0u;
    {
        const bool branch_taken_0x1acaa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACAA0u;
        // 0x1acaa4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acaa0) {
            ctx->pc = 0x1ACAB4u;
            goto label_1acab4;
        }
    }
    ctx->pc = 0x1ACAA8u;
    // 0x1acaa8: 0xc069328  jal         func_1A4CA0
    ctx->pc = 0x1ACAA8u;
    SET_GPR_U32(ctx, 31, 0x1ACAB0u);
    ctx->pc = 0x1A4CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4CA0u, 0x1ACAA8u, 0x1ACAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACAB0u;
label_1acab0:
    // 0x1acab0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1acab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1acab4:
    // 0x1acab4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1acab4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1acab8u;
}
