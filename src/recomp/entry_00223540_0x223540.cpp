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

// Function: entry_00223540
// Address: 0x223540 - 0x223564
void entry_00223540_0x223540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00223540_0x223540");
#endif

    switch (ctx->pc) {
        case 0x223554u: goto label_223554;
        default: break;
    }

    ctx->pc = 0x223540u;

    // 0x223540: 0x8f83863c  lw          $v1, -0x79C4($gp)
    ctx->pc = 0x223540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936124)));
    // 0x223544: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x223544u;
    {
        const bool branch_taken_0x223544 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x223548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223544u;
        // 0x223548: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223544) {
            ctx->pc = 0x223590u;
            return;
        }
    }
    ctx->pc = 0x22354Cu;
    // 0x22354c: 0xc059ec8  jal         func_167B20
    ctx->pc = 0x22354Cu;
    SET_GPR_U32(ctx, 31, 0x223554u);
    ctx->pc = 0x167B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167B20u, 0x22354Cu, 0x223554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223554u;
label_223554:
    // 0x223554: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x223554u;
    {
        const bool branch_taken_0x223554 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223554u;
        // 0x223558: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223554) {
            ctx->pc = 0x223590u;
            return;
        }
    }
    ctx->pc = 0x22355Cu;
    // 0x22355c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x22355Cu;
    {
        const bool branch_taken_0x22355c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22355Cu;
        // 0x223560: 0xaf8392e0  sw          $v1, -0x6D20($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939360), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22355c) {
            ctx->pc = 0x223590u;
            return;
        }
    }
    ctx->pc = 0x223564u;
}
