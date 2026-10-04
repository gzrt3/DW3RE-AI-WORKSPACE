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

// Function: entry_001b3150
// Address: 0x1b3150 - 0x1b3160
void entry_001b3150_0x1b3150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3150_0x1b3150");
#endif

    ctx->pc = 0x1b3150u;

    // 0x1b3150: 0x28620000  slti        $v0, $v1, 0x0
    ctx->pc = 0x1b3150u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1b3154: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x1b3154u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x1b3158: 0x14a00009  bnez        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B3158u;
    {
        const bool branch_taken_0x1b3158 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B315Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B3158u;
        // 0x1b315c: 0x3c02007f  lui         $v0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3158) {
            ctx->pc = 0x1B3180u;
            return;
        }
    }
    ctx->pc = 0x1B3160u;
}
