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

// Function: entry_001c03f0
// Address: 0x1c03f0 - 0x1c0404
void entry_001c03f0_0x1c03f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c03f0_0x1c03f0");
#endif

    ctx->pc = 0x1c03f0u;

    // 0x1c03f0: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1c03f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1c03f4: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x1C03F4u;
    {
        const bool branch_taken_0x1c03f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c03f4) {
            ctx->pc = 0x1C035Cu;
            return;
        }
    }
    ctx->pc = 0x1C03FCu;
    // 0x1c03fc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C03FCu;
    {
        const bool branch_taken_0x1c03fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C03FCu;
        // 0x1c0400: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c03fc) {
            ctx->pc = 0x1C0424u;
            return;
        }
    }
    ctx->pc = 0x1C0404u;
}
