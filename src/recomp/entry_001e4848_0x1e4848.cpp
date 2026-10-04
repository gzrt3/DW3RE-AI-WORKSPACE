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

// Function: entry_001e4848
// Address: 0x1e4848 - 0x1e4868
void entry_001e4848_0x1e4848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e4848_0x1e4848");
#endif

    ctx->pc = 0x1e4848u;

    // 0x1e4848: 0x163182a  slt         $v1, $t3, $v1
    ctx->pc = 0x1e4848u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1e484c: 0x1460ffd2  bnez        $v1, . + 4 + (-0x2E << 2)
    ctx->pc = 0x1E484Cu;
    {
        const bool branch_taken_0x1e484c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e484c) {
            ctx->pc = 0x1E4798u;
            return;
        }
    }
    ctx->pc = 0x1E4854u;
    // 0x1e4854: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x1e4854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1e4858: 0x14e20003  bne         $a3, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E4858u;
    {
        const bool branch_taken_0x1e4858 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E485Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4858u;
        // 0x1e485c: 0x8f838d84  lw          $v1, -0x727C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937988)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4858) {
            ctx->pc = 0x1E4868u;
            return;
        }
    }
    ctx->pc = 0x1E4860u;
    // 0x1e4860: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E4860u;
    {
        const bool branch_taken_0x1e4860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4860u;
        // 0x1e4864: 0x24020017  addiu       $v0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4860) {
            ctx->pc = 0x1E486Cu;
            return;
        }
    }
    ctx->pc = 0x1E4868u;
}
