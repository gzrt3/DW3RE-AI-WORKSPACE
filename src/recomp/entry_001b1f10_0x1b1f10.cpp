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

// Function: entry_001b1f10
// Address: 0x1b1f10 - 0x1b1f38
void entry_001b1f10_0x1b1f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1f10_0x1b1f10");
#endif

    switch (ctx->pc) {
        case 0x1b1f1cu: goto label_1b1f1c;
        default: break;
    }

    ctx->pc = 0x1b1f10u;

    // 0x1b1f10: 0x3c150029  lui         $s5, 0x29
    ctx->pc = 0x1b1f10u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)41 << 16));
    // 0x1b1f14: 0xc06921c  jal         func_1A4870
    ctx->pc = 0x1B1F14u;
    SET_GPR_U32(ctx, 31, 0x1B1F1Cu);
    ctx->pc = 0x1B1F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1F14u;
    // 0x1b1f18: 0x8ea48d0c  lw          $a0, -0x72F4($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4870u, 0x1B1F14u, 0x1B1F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1F1Cu;
label_1b1f1c:
    // 0x1b1f1c: 0x440002d  bltz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1B1F1Cu;
    {
        const bool branch_taken_0x1b1f1c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1B1F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1F1Cu;
        // 0x1b1f20: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1f1c) {
            ctx->pc = 0x1B1FD4u;
            return;
        }
    }
    ctx->pc = 0x1B1F24u;
    // 0x1b1f24: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B1F24u;
    {
        const bool branch_taken_0x1b1f24 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1f24) {
            ctx->pc = 0x1B1F38u;
            return;
        }
    }
    ctx->pc = 0x1B1F2Cu;
    // 0x1b1f2c: 0x82420000  lb          $v0, 0x0($s2)
    ctx->pc = 0x1b1f2cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1b1f30: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B1F30u;
    {
        const bool branch_taken_0x1b1f30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1F30u;
        // 0x1b1f34: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1f30) {
            ctx->pc = 0x1B1F48u;
            return;
        }
    }
    ctx->pc = 0x1B1F38u;
}
