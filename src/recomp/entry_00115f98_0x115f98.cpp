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

// Function: entry_00115f98
// Address: 0x115f98 - 0x115fa8
void entry_00115f98_0x115f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00115f98_0x115f98");
#endif

    ctx->pc = 0x115f98u;

    // 0x115f98: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x115f98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x115f9c: 0x28e20014  slti        $v0, $a3, 0x14
    ctx->pc = 0x115f9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x115fa0: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x115FA0u;
    {
        const bool branch_taken_0x115fa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x115FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115FA0u;
        // 0x115fa4: 0xa71021  addu        $v0, $a1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115fa0) {
            ctx->pc = 0x115F7Cu;
            return;
        }
    }
    ctx->pc = 0x115FA8u;
}
