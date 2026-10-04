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

// Function: entry_00134db8
// Address: 0x134db8 - 0x134dc8
void entry_00134db8_0x134db8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134db8_0x134db8");
#endif

    ctx->pc = 0x134db8u;

    // 0x134db8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x134db8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x134dbc: 0xc5182a  slt         $v1, $a2, $a1
    ctx->pc = 0x134dbcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x134dc0: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x134DC0u;
    {
        const bool branch_taken_0x134dc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x134DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134DC0u;
        // 0x134dc4: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134dc0) {
            ctx->pc = 0x134DA0u;
            return;
        }
    }
    ctx->pc = 0x134DC8u;
}
