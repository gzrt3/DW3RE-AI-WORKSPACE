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

// Function: entry_00240420
// Address: 0x240420 - 0x24043c
void entry_00240420_0x240420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00240420_0x240420");
#endif

    ctx->pc = 0x240420u;

    // 0x240420: 0x15070006  bne         $t0, $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x240420u;
    {
        const bool branch_taken_0x240420 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 7));
        ctx->pc = 0x240424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240420u;
        // 0x240424: 0x8bc821  addu        $t9, $a0, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240420) {
            ctx->pc = 0x24043Cu;
            return;
        }
    }
    ctx->pc = 0x240428u;
    // 0x240428: 0x8e2e0000  lw          $t6, 0x0($s1)
    ctx->pc = 0x240428u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x24042c: 0x8f390374  lw          $t9, 0x374($t9)
    ctx->pc = 0x24042cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 884)));
    // 0x240430: 0x1d9082a  slt         $at, $t6, $t9
    ctx->pc = 0x240430u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 25)) ? 1 : 0);
    // 0x240434: 0x14200009  bnez        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x240434u;
    {
        const bool branch_taken_0x240434 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x240434) {
            ctx->pc = 0x24045Cu;
            return;
        }
    }
    ctx->pc = 0x24043Cu;
}
