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

// Function: entry_001b24b4
// Address: 0x1b24b4 - 0x1b24e4
void entry_001b24b4_0x1b24b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b24b4_0x1b24b4");
#endif

    switch (ctx->pc) {
        case 0x1b24c0u: goto label_1b24c0;
        default: break;
    }

    ctx->pc = 0x1b24b4u;

    // 0x1b24b4: 0x3c150029  lui         $s5, 0x29
    ctx->pc = 0x1b24b4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)41 << 16));
    // 0x1b24b8: 0xc06921c  jal         func_1A4870
    ctx->pc = 0x1B24B8u;
    SET_GPR_U32(ctx, 31, 0x1B24C0u);
    ctx->pc = 0x1B24BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B24B8u;
    // 0x1b24bc: 0x8ea48d0c  lw          $a0, -0x72F4($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4870u, 0x1B24B8u, 0x1B24C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B24C0u;
label_1b24c0:
    // 0x1b24c0: 0x4400035  bltz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x1B24C0u;
    {
        const bool branch_taken_0x1b24c0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1B24C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B24C0u;
        // 0x1b24c4: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b24c0) {
            ctx->pc = 0x1B2598u;
            return;
        }
    }
    ctx->pc = 0x1B24C8u;
    // 0x1b24c8: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B24C8u;
    {
        const bool branch_taken_0x1b24c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b24c8) {
            ctx->pc = 0x1B24E4u;
            return;
        }
    }
    ctx->pc = 0x1B24D0u;
    // 0x1b24d0: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1b24d0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b24d4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B24D4u;
    {
        const bool branch_taken_0x1b24d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b24d4) {
            ctx->pc = 0x1B24E4u;
            return;
        }
    }
    ctx->pc = 0x1B24DCu;
    // 0x1b24dc: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B24DCu;
    {
        const bool branch_taken_0x1b24dc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B24E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B24DCu;
        // 0x1b24e0: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b24dc) {
            ctx->pc = 0x1B24F4u;
            return;
        }
    }
    ctx->pc = 0x1B24E4u;
}
