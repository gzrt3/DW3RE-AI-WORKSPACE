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

// Function: entry_001b1394
// Address: 0x1b1394 - 0x1b13bc
void entry_001b1394_0x1b1394(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1394_0x1b1394");
#endif

    switch (ctx->pc) {
        case 0x1b13a0u: goto label_1b13a0;
        default: break;
    }

    ctx->pc = 0x1b1394u;

    // 0x1b1394: 0x3c120029  lui         $s2, 0x29
    ctx->pc = 0x1b1394u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)41 << 16));
    // 0x1b1398: 0xc06921c  jal         func_1A4870
    ctx->pc = 0x1B1398u;
    SET_GPR_U32(ctx, 31, 0x1B13A0u);
    ctx->pc = 0x1B139Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1398u;
    // 0x1b139c: 0x8e448d0c  lw          $a0, -0x72F4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4870u, 0x1B1398u, 0x1B13A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B13A0u;
label_1b13a0:
    // 0x1b13a0: 0x4400028  bltz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1B13A0u;
    {
        const bool branch_taken_0x1b13a0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1B13A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B13A0u;
        // 0x1b13a4: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b13a0) {
            ctx->pc = 0x1B1444u;
            return;
        }
    }
    ctx->pc = 0x1B13A8u;
    // 0x1b13a8: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B13A8u;
    {
        const bool branch_taken_0x1b13a8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b13a8) {
            ctx->pc = 0x1B13BCu;
            return;
        }
    }
    ctx->pc = 0x1B13B0u;
    // 0x1b13b0: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x1b13b0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1b13b4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B13B4u;
    {
        const bool branch_taken_0x1b13b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B13B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B13B4u;
        // 0x1b13b8: 0x3c100037  lui         $s0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b13b4) {
            ctx->pc = 0x1B13CCu;
            return;
        }
    }
    ctx->pc = 0x1B13BCu;
}
