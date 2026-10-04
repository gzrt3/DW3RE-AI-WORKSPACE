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

// Function: entry_001b26d0
// Address: 0x1b26d0 - 0x1b26f8
void entry_001b26d0_0x1b26d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b26d0_0x1b26d0");
#endif

    switch (ctx->pc) {
        case 0x1b26dcu: goto label_1b26dc;
        default: break;
    }

    ctx->pc = 0x1b26d0u;

    // 0x1b26d0: 0x3c110029  lui         $s1, 0x29
    ctx->pc = 0x1b26d0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)41 << 16));
    // 0x1b26d4: 0xc06921c  jal         func_1A4870
    ctx->pc = 0x1B26D4u;
    SET_GPR_U32(ctx, 31, 0x1B26DCu);
    ctx->pc = 0x1B26D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B26D4u;
    // 0x1b26d8: 0x8e248d0c  lw          $a0, -0x72F4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4870u, 0x1B26D4u, 0x1B26DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B26DCu;
label_1b26dc:
    // 0x1b26dc: 0x4400026  bltz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1B26DCu;
    {
        const bool branch_taken_0x1b26dc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1B26E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B26DCu;
        // 0x1b26e0: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b26dc) {
            ctx->pc = 0x1B2778u;
            return;
        }
    }
    ctx->pc = 0x1B26E4u;
    // 0x1b26e4: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B26E4u;
    {
        const bool branch_taken_0x1b26e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b26e4) {
            ctx->pc = 0x1B26F8u;
            return;
        }
    }
    ctx->pc = 0x1B26ECu;
    // 0x1b26ec: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1b26ecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b26f0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B26F0u;
    {
        const bool branch_taken_0x1b26f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B26F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B26F0u;
        // 0x1b26f4: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b26f0) {
            ctx->pc = 0x1B2708u;
            return;
        }
    }
    ctx->pc = 0x1B26F8u;
}
