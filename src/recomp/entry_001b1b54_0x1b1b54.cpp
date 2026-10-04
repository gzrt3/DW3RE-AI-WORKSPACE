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

// Function: entry_001b1b54
// Address: 0x1b1b54 - 0x1b1b70
void entry_001b1b54_0x1b1b54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1b54_0x1b1b54");
#endif

    switch (ctx->pc) {
        case 0x1b1b60u: goto label_1b1b60;
        default: break;
    }

    ctx->pc = 0x1b1b54u;

    // 0x1b1b54: 0x3c170029  lui         $s7, 0x29
    ctx->pc = 0x1b1b54u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)41 << 16));
    // 0x1b1b58: 0xc06921c  jal         func_1A4870
    ctx->pc = 0x1B1B58u;
    SET_GPR_U32(ctx, 31, 0x1B1B60u);
    ctx->pc = 0x1B1B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1B58u;
    // 0x1b1b5c: 0x8ee48d0c  lw          $a0, -0x72F4($s7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4870u, 0x1B1B58u, 0x1B1B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1B60u;
label_1b1b60:
    // 0x1b1b60: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B1B60u;
    {
        const bool branch_taken_0x1b1b60 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1B1B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1B60u;
        // 0x1b1b64: 0x3c110037  lui         $s1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1b60) {
            ctx->pc = 0x1B1B70u;
            return;
        }
    }
    ctx->pc = 0x1B1B68u;
    // 0x1b1b68: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x1B1B68u;
    {
        const bool branch_taken_0x1b1b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1B68u;
        // 0x1b1b6c: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1b68) {
            ctx->pc = 0x1B1C50u;
            return;
        }
    }
    ctx->pc = 0x1B1B70u;
}
