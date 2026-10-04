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

// Function: FUN_00113e70
// Address: 0x113e70 - 0x113e9c
void FUN_00113e70_0x113e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00113e70_0x113e70");
#endif

    switch (ctx->pc) {
        case 0x113e80u: goto label_113e80;
        case 0x113e98u: goto label_113e98;
        default: break;
    }

    ctx->pc = 0x113e70u;

    // 0x113e70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x113e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x113e74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x113e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x113e78: 0xc044fac  jal         func_113EB0
    ctx->pc = 0x113E78u;
    SET_GPR_U32(ctx, 31, 0x113E80u);
    ctx->pc = 0x113E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113E78u;
    // 0x113e7c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113EB0u, 0x113E78u, 0x113E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113E80u;
label_113e80:
    // 0x113e80: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x113e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x113e84: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x113e84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x113e88: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x113E88u;
    {
        const bool branch_taken_0x113e88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x113E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113E88u;
        // 0x113e8c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113e88) {
            ctx->pc = 0x113E98u;
            goto label_113e98;
        }
    }
    ctx->pc = 0x113E90u;
    // 0x113e90: 0xc044fac  jal         func_113EB0
    ctx->pc = 0x113E90u;
    SET_GPR_U32(ctx, 31, 0x113E98u);
    ctx->pc = 0x113EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113EB0u, 0x113E90u, 0x113E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113E98u;
label_113e98:
    // 0x113e98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x113e98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x113e9cu;
}
