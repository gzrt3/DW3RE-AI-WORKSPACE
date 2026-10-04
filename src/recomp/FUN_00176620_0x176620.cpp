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

// Function: FUN_00176620
// Address: 0x176620 - 0x17665c
void FUN_00176620_0x176620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00176620_0x176620");
#endif

    switch (ctx->pc) {
        case 0x176658u: goto label_176658;
        default: break;
    }

    ctx->pc = 0x176620u;

    // 0x176620: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x176620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x176624: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x176624u;
    {
        const bool branch_taken_0x176624 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x176628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176624u;
        // 0x176628: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176624) {
            ctx->pc = 0x176644u;
            goto label_176644;
        }
    }
    ctx->pc = 0x17662Cu;
    // 0x17662c: 0x28a10017  slti        $at, $a1, 0x17
    ctx->pc = 0x17662cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)23) ? 1 : 0);
    // 0x176630: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x176630u;
    {
        const bool branch_taken_0x176630 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x176634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176630u;
        // 0x176634: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176630) {
            ctx->pc = 0x176648u;
            goto label_176648;
        }
    }
    ctx->pc = 0x176638u;
    // 0x176638: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x176638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x17663c: 0x14a30004  bne         $a1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x17663Cu;
    {
        const bool branch_taken_0x17663c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x17663c) {
            ctx->pc = 0x176650u;
            goto label_176650;
        }
    }
    ctx->pc = 0x176644u;
label_176644:
    // 0x176644: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x176644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_176648:
    // 0x176648: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x176648u;
    {
        const bool branch_taken_0x176648 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x176648) {
            ctx->pc = 0x176658u;
            goto label_176658;
        }
    }
    ctx->pc = 0x176650u;
label_176650:
    // 0x176650: 0xc05d99c  jal         func_176670
    ctx->pc = 0x176650u;
    SET_GPR_U32(ctx, 31, 0x176658u);
    ctx->pc = 0x176670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176670u, 0x176650u, 0x176658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176658u;
label_176658:
    // 0x176658: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x176658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x17665cu;
}
