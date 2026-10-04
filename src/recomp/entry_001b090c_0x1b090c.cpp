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

// Function: entry_001b090c
// Address: 0x1b090c - 0x1b0920
void entry_001b090c_0x1b090c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b090c_0x1b090c");
#endif

    ctx->pc = 0x1b090cu;

    // 0x1b090c: 0x8e627290  lw          $v0, 0x7290($s3)
    ctx->pc = 0x1b090cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 29328)));
    // 0x1b0910: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B0910u;
    {
        const bool branch_taken_0x1b0910 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1B0914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0910u;
        // 0x1b0914: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0910) {
            ctx->pc = 0x1B0920u;
            return;
        }
    }
    ctx->pc = 0x1B0918u;
    // 0x1b0918: 0xc069a30  jal         func_1A68C0
    ctx->pc = 0x1B0918u;
    SET_GPR_U32(ctx, 31, 0x1B0920u);
    ctx->pc = 0x1B091Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0918u;
    // 0x1b091c: 0x2484ab38  addiu       $a0, $a0, -0x54C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A68C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A68C0u, 0x1B0918u, 0x1B0920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0920u;
}
