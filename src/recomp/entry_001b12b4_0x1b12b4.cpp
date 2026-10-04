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

// Function: entry_001b12b4
// Address: 0x1b12b4 - 0x1b12d0
void entry_001b12b4_0x1b12b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b12b4_0x1b12b4");
#endif

    switch (ctx->pc) {
        case 0x1b12c0u: goto label_1b12c0;
        default: break;
    }

    ctx->pc = 0x1b12b4u;

    // 0x1b12b4: 0x3c110029  lui         $s1, 0x29
    ctx->pc = 0x1b12b4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)41 << 16));
    // 0x1b12b8: 0xc06921c  jal         func_1A4870
    ctx->pc = 0x1B12B8u;
    SET_GPR_U32(ctx, 31, 0x1B12C0u);
    ctx->pc = 0x1B12BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B12B8u;
    // 0x1b12bc: 0x8e248d0c  lw          $a0, -0x72F4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4870u, 0x1B12B8u, 0x1B12C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B12C0u;
label_1b12c0:
    // 0x1b12c0: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B12C0u;
    {
        const bool branch_taken_0x1b12c0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1B12C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B12C0u;
        // 0x1b12c4: 0x3c070037  lui         $a3, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b12c0) {
            ctx->pc = 0x1B12D0u;
            return;
        }
    }
    ctx->pc = 0x1B12C8u;
    // 0x1b12c8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1B12C8u;
    {
        const bool branch_taken_0x1b12c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B12CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B12C8u;
        // 0x1b12cc: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b12c8) {
            ctx->pc = 0x1B1328u;
            return;
        }
    }
    ctx->pc = 0x1B12D0u;
}
