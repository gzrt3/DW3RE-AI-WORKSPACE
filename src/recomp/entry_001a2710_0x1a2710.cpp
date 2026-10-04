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

// Function: entry_001a2710
// Address: 0x1a2710 - 0x1a2738
void entry_001a2710_0x1a2710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2710_0x1a2710");
#endif

    switch (ctx->pc) {
        case 0x1a2734u: goto label_1a2734;
        default: break;
    }

    ctx->pc = 0x1a2710u;

    // 0x1a2710: 0x3402be00  ori         $v0, $zero, 0xBE00
    ctx->pc = 0x1a2710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48640);
    // 0x1a2714: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x1a2714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x1a2718: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A2718u;
    {
        const bool branch_taken_0x1a2718 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A271Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2718u;
        // 0x1a271c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2718) {
            ctx->pc = 0x1A2738u;
            return;
        }
    }
    ctx->pc = 0x1A2720u;
    // 0x1a2720: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x1a2720u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1a2724: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A2724u;
    {
        const bool branch_taken_0x1a2724 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2724u;
        // 0x1a2728: 0xdfbf00b0  ld          $ra, 0xB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2724) {
            ctx->pc = 0x1A273Cu;
            return;
        }
    }
    ctx->pc = 0x1A272Cu;
    // 0x1a272c: 0xc068636  jal         func_1A18D8
    ctx->pc = 0x1A272Cu;
    SET_GPR_U32(ctx, 31, 0x1A2734u);
    ctx->pc = 0x1A2730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A272Cu;
    // 0x1a2730: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A18D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A18D8u, 0x1A272Cu, 0x1A2734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2734u;
label_1a2734:
    // 0x1a2734: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a2734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1a2738u;
}
