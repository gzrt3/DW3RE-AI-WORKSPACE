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

// Function: FUN_00100820
// Address: 0x100820 - 0x100874
void FUN_00100820_0x100820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00100820_0x100820");
#endif

    switch (ctx->pc) {
        case 0x100834u: goto label_100834;
        case 0x100870u: goto label_100870;
        default: break;
    }

    ctx->pc = 0x100820u;

    // 0x100820: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x100820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x100824: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x100824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x100828: 0x8f848444  lw          $a0, -0x7BBC($gp)
    ctx->pc = 0x100828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935620)));
    // 0x10082c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x10082Cu;
    {
        const bool branch_taken_0x10082c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10082Cu;
        // 0x100830: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10082c) {
            ctx->pc = 0x100858u;
            goto label_100858;
        }
    }
    ctx->pc = 0x100834u;
label_100834:
    // 0x100834: 0xdc830040  ld          $v1, 0x40($a0)
    ctx->pc = 0x100834u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x100838: 0xdf828428  ld          $v0, -0x7BD8($gp)
    ctx->pc = 0x100838u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294935592)));
    // 0x10083c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10083Cu;
    {
        const bool branch_taken_0x10083c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x10083c) {
            ctx->pc = 0x10084Cu;
            goto label_10084c;
        }
    }
    ctx->pc = 0x100844u;
    // 0x100844: 0xdf828420  ld          $v0, -0x7BE0($gp)
    ctx->pc = 0x100844u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294935584)));
    // 0x100848: 0xfc820040  sd          $v0, 0x40($a0)
    ctx->pc = 0x100848u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 64), GPR_U64(ctx, 2));
label_10084c:
    // 0x10084c: 0x0  nop
    ctx->pc = 0x10084cu;
    // NOP
    // 0x100850: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x100850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x100854: 0x24840050  addiu       $a0, $a0, 0x50
    ctx->pc = 0x100854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
label_100858:
    // 0x100858: 0x8f828430  lw          $v0, -0x7BD0($gp)
    ctx->pc = 0x100858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935600)));
    // 0x10085c: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x10085cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x100860: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x100860u;
    {
        const bool branch_taken_0x100860 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x100860) {
            ctx->pc = 0x100834u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_100834;
        }
    }
    ctx->pc = 0x100868u;
    // 0x100868: 0xc05ee5c  jal         func_17B970
    ctx->pc = 0x100868u;
    SET_GPR_U32(ctx, 31, 0x100870u);
    ctx->pc = 0x17B970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B970u, 0x100868u, 0x100870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100870u;
label_100870:
    // 0x100870: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x100870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x100874u;
}
