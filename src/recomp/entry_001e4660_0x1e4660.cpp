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

// Function: entry_001e4660
// Address: 0x1e4660 - 0x1e4680
void entry_001e4660_0x1e4660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e4660_0x1e4660");
#endif

    ctx->pc = 0x1e4660u;

    // 0x1e4660: 0x143182a  slt         $v1, $t2, $v1
    ctx->pc = 0x1e4660u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1e4664: 0x1460ffd3  bnez        $v1, . + 4 + (-0x2D << 2)
    ctx->pc = 0x1E4664u;
    {
        const bool branch_taken_0x1e4664 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e4664) {
            ctx->pc = 0x1E45B4u;
            return;
        }
    }
    ctx->pc = 0x1E466Cu;
    // 0x1e466c: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x1e466cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1e4670: 0x14e20003  bne         $a3, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E4670u;
    {
        const bool branch_taken_0x1e4670 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E4674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4670u;
        // 0x1e4674: 0x8f838d84  lw          $v1, -0x727C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937988)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4670) {
            ctx->pc = 0x1E4680u;
            return;
        }
    }
    ctx->pc = 0x1E4678u;
    // 0x1e4678: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E4678u;
    {
        const bool branch_taken_0x1e4678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E467Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4678u;
        // 0x1e467c: 0x24020017  addiu       $v0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4678) {
            ctx->pc = 0x1E4684u;
            return;
        }
    }
    ctx->pc = 0x1E4680u;
}
