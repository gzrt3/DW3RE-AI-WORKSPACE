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

// Function: entry_001e45b4
// Address: 0x1e45b4 - 0x1e45c8
void entry_001e45b4_0x1e45b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e45b4_0x1e45b4");
#endif

    ctx->pc = 0x1e45b4u;

    // 0x1e45b4: 0x8f878db8  lw          $a3, -0x7248($gp)
    ctx->pc = 0x1e45b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
    // 0x1e45b8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1e45b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e45bc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1e45bcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e45c0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1E45C0u;
    {
        const bool branch_taken_0x1e45c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E45C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E45C0u;
        // 0x1e45c4: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e45c0) {
            ctx->pc = 0x1E45E8u;
            return;
        }
    }
    ctx->pc = 0x1E45C8u;
}
