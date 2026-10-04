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

// Function: FUN_00190840
// Address: 0x190840 - 0x19087c
void FUN_00190840_0x190840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00190840_0x190840");
#endif

    switch (ctx->pc) {
        case 0x190860u: goto label_190860;
        case 0x190868u: goto label_190868;
        case 0x190878u: goto label_190878;
        default: break;
    }

    ctx->pc = 0x190840u;

    // 0x190840: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x190840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x190844: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x190844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x190848: 0x8f828590  lw          $v0, -0x7A70($gp)
    ctx->pc = 0x190848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x19084c: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x19084cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x190850: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x190850u;
    {
        const bool branch_taken_0x190850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x190854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190850u;
        // 0x190854: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190850) {
            ctx->pc = 0x190870u;
            goto label_190870;
        }
    }
    ctx->pc = 0x190858u;
    // 0x190858: 0xc064224  jal         func_190890
    ctx->pc = 0x190858u;
    SET_GPR_U32(ctx, 31, 0x190860u);
    ctx->pc = 0x19085Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190858u;
    // 0x19085c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190890u, 0x190858u, 0x190860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190860u;
label_190860:
    // 0x190860: 0xc064224  jal         func_190890
    ctx->pc = 0x190860u;
    SET_GPR_U32(ctx, 31, 0x190868u);
    ctx->pc = 0x190864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190860u;
    // 0x190864: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190890u, 0x190860u, 0x190868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190868u;
label_190868:
    // 0x190868: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x190868u;
    {
        const bool branch_taken_0x190868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19086Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190868u;
        // 0x19086c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190868) {
            ctx->pc = 0x19087Cu;
            return;
        }
    }
    ctx->pc = 0x190870u;
label_190870:
    // 0x190870: 0xc064224  jal         func_190890
    ctx->pc = 0x190870u;
    SET_GPR_U32(ctx, 31, 0x190878u);
    ctx->pc = 0x190890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190890u, 0x190870u, 0x190878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190878u;
label_190878:
    // 0x190878: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x190878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x19087cu;
}
