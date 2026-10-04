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

// Function: FUN_0023d840
// Address: 0x23d840 - 0x23d880
void FUN_0023d840_0x23d840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0023d840_0x23d840");
#endif

    switch (ctx->pc) {
        case 0x23d870u: goto label_23d870;
        default: break;
    }

    ctx->pc = 0x23d840u;

    // 0x23d840: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x23d840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23d844: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23d844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23d848: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x23d848u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d84c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x23d84cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x23d850: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x23d850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x23d854: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23D854u;
    {
        const bool branch_taken_0x23d854 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D854u;
        // 0x23d858: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d854) {
            ctx->pc = 0x23D868u;
            goto label_23d868;
        }
    }
    ctx->pc = 0x23D85Cu;
    // 0x23d85c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x23D85Cu;
    {
        const bool branch_taken_0x23d85c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D85Cu;
        // 0x23d860: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d85c) {
            ctx->pc = 0x23D878u;
            goto label_23d878;
        }
    }
    ctx->pc = 0x23D864u;
    // 0x23d864: 0x0  nop
    ctx->pc = 0x23d864u;
    // NOP
label_23d868:
    // 0x23d868: 0xc08e3f2  jal         func_238FC8
    ctx->pc = 0x23D868u;
    SET_GPR_U32(ctx, 31, 0x23D870u);
    ctx->pc = 0x238FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238FC8u, 0x23D868u, 0x23D870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D870u;
label_23d870:
    // 0x23d870: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x23d870u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x23d874: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x23d874u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_23d878:
    // 0x23d878: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23d878u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23d87c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x23d87cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->pc = 0x23d880u;
}
