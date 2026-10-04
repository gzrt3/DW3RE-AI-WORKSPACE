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

// Function: entry_001b1710
// Address: 0x1b1710 - 0x1b172c
void entry_001b1710_0x1b1710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1710_0x1b1710");
#endif

    switch (ctx->pc) {
        case 0x1b171cu: goto label_1b171c;
        default: break;
    }

    ctx->pc = 0x1b1710u;

    // 0x1b1710: 0x3c160029  lui         $s6, 0x29
    ctx->pc = 0x1b1710u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)41 << 16));
    // 0x1b1714: 0xc06921c  jal         func_1A4870
    ctx->pc = 0x1B1714u;
    SET_GPR_U32(ctx, 31, 0x1B171Cu);
    ctx->pc = 0x1B1718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1714u;
    // 0x1b1718: 0x8ec48d0c  lw          $a0, -0x72F4($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4870u, 0x1B1714u, 0x1B171Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B171Cu;
label_1b171c:
    // 0x1b171c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B171Cu;
    {
        const bool branch_taken_0x1b171c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1B1720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B171Cu;
        // 0x1b1720: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b171c) {
            ctx->pc = 0x1B172Cu;
            return;
        }
    }
    ctx->pc = 0x1B1724u;
    // 0x1b1724: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1B1724u;
    {
        const bool branch_taken_0x1b1724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1724u;
        // 0x1b1728: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1724) {
            ctx->pc = 0x1B17B4u;
            return;
        }
    }
    ctx->pc = 0x1B172Cu;
}
