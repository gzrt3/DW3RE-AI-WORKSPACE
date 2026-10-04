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

// Function: entry_001e4798
// Address: 0x1e4798 - 0x1e47ac
void entry_001e4798_0x1e4798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e4798_0x1e4798");
#endif

    ctx->pc = 0x1e4798u;

    // 0x1e4798: 0x8f878db8  lw          $a3, -0x7248($gp)
    ctx->pc = 0x1e4798u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
    // 0x1e479c: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x1e479cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e47a0: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x1e47a0u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e47a4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1E47A4u;
    {
        const bool branch_taken_0x1e47a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E47A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E47A4u;
        // 0x1e47a8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e47a4) {
            ctx->pc = 0x1E47D0u;
            return;
        }
    }
    ctx->pc = 0x1E47ACu;
}
