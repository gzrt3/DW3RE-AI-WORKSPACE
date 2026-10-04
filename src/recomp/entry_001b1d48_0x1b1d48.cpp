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

// Function: entry_001b1d48
// Address: 0x1b1d48 - 0x1b1d70
void entry_001b1d48_0x1b1d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1d48_0x1b1d48");
#endif

    switch (ctx->pc) {
        case 0x1b1d54u: goto label_1b1d54;
        default: break;
    }

    ctx->pc = 0x1b1d48u;

    // 0x1b1d48: 0x3c150029  lui         $s5, 0x29
    ctx->pc = 0x1b1d48u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)41 << 16));
    // 0x1b1d4c: 0xc06921c  jal         func_1A4870
    ctx->pc = 0x1B1D4Cu;
    SET_GPR_U32(ctx, 31, 0x1B1D54u);
    ctx->pc = 0x1B1D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1D4Cu;
    // 0x1b1d50: 0x8ea48d0c  lw          $a0, -0x72F4($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4870u, 0x1B1D4Cu, 0x1B1D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1D54u;
label_1b1d54:
    // 0x1b1d54: 0x440002d  bltz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1B1D54u;
    {
        const bool branch_taken_0x1b1d54 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1B1D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1D54u;
        // 0x1b1d58: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1d54) {
            ctx->pc = 0x1B1E0Cu;
            return;
        }
    }
    ctx->pc = 0x1B1D5Cu;
    // 0x1b1d5c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B1D5Cu;
    {
        const bool branch_taken_0x1b1d5c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1d5c) {
            ctx->pc = 0x1B1D70u;
            return;
        }
    }
    ctx->pc = 0x1B1D64u;
    // 0x1b1d64: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1b1d64u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b1d68: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B1D68u;
    {
        const bool branch_taken_0x1b1d68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1D68u;
        // 0x1b1d6c: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1d68) {
            ctx->pc = 0x1B1D80u;
            return;
        }
    }
    ctx->pc = 0x1B1D70u;
}
