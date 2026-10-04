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

// Function: entry_0020420c
// Address: 0x20420c - 0x204240
void entry_0020420c_0x20420c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020420c_0x20420c");
#endif

    switch (ctx->pc) {
        case 0x204238u: goto label_204238;
        default: break;
    }

    ctx->pc = 0x20420cu;

    // 0x20420c: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x20420Cu;
    {
        const bool branch_taken_0x20420c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x204210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20420Cu;
        // 0x204210: 0x28a1001a  slti        $at, $a1, 0x1A (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)26) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20420c) {
            ctx->pc = 0x204240u;
            return;
        }
    }
    ctx->pc = 0x204214u;
    // 0x204214: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x204214u;
    {
        const bool branch_taken_0x204214 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x204218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204214u;
        // 0x204218: 0x24030022  addiu       $v1, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204214) {
            ctx->pc = 0x204244u;
            return;
        }
    }
    ctx->pc = 0x20421Cu;
    // 0x20421c: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x20421cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x204220: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x204220u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x204224: 0x2442d360  addiu       $v0, $v0, -0x2CA0
    ctx->pc = 0x204224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955872));
    // 0x204228: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x204228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20422c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x20422cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x204230: 0xc08f390  jal         func_23CE40
    ctx->pc = 0x204230u;
    SET_GPR_U32(ctx, 31, 0x204238u);
    ctx->pc = 0x204234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x204230u;
    // 0x204234: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23CE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23CE40u, 0x204230u, 0x204238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x204238u;
label_204238:
    // 0x204238: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x204238u;
    {
        const bool branch_taken_0x204238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x204238) {
            ctx->pc = 0x204298u;
            return;
        }
    }
    ctx->pc = 0x204240u;
}
