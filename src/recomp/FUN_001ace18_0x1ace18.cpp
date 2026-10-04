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

// Function: FUN_001ace18
// Address: 0x1ace18 - 0x1ace40
void FUN_001ace18_0x1ace18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ace18_0x1ace18");
#endif

    switch (ctx->pc) {
        case 0x1ace3cu: goto label_1ace3c;
        default: break;
    }

    ctx->pc = 0x1ace18u;

    // 0x1ace18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ace18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ace1c: 0x2482fff3  addiu       $v0, $a0, -0xD
    ctx->pc = 0x1ace1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967283));
    // 0x1ace20: 0x2c420023  sltiu       $v0, $v0, 0x23
    ctx->pc = 0x1ace20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)35) ? 1 : 0);
    // 0x1ace24: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ACE24u;
    {
        const bool branch_taken_0x1ace24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ACE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACE24u;
        // 0x1ace28: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ace24) {
            ctx->pc = 0x1ACE34u;
            goto label_1ace34;
        }
    }
    ctx->pc = 0x1ACE2Cu;
    // 0x1ace2c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1ACE2Cu;
    {
        const bool branch_taken_0x1ace2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACE2Cu;
        // 0x1ace30: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ace2c) {
            ctx->pc = 0x1ACE3Cu;
            goto label_1ace3c;
        }
    }
    ctx->pc = 0x1ACE34u;
label_1ace34:
    // 0x1ace34: 0xc06b382  jal         func_1ACE08
    ctx->pc = 0x1ACE34u;
    SET_GPR_U32(ctx, 31, 0x1ACE3Cu);
    ctx->pc = 0x1ACE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ACE08u, 0x1ACE34u, 0x1ACE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACE3Cu;
label_1ace3c:
    // 0x1ace3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ace3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1ace40u;
}
