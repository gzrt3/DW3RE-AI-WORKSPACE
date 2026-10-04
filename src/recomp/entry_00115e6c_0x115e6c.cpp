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

// Function: entry_00115e6c
// Address: 0x115e6c - 0x115e7c
void entry_00115e6c_0x115e6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00115e6c_0x115e6c");
#endif

    ctx->pc = 0x115e6cu;

    // 0x115e6c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x115e6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x115e70: 0x28e2001a  slti        $v0, $a3, 0x1A
    ctx->pc = 0x115e70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)26) ? 1 : 0);
    // 0x115e74: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x115E74u;
    {
        const bool branch_taken_0x115e74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x115E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115E74u;
        // 0x115e78: 0xc71021  addu        $v0, $a2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115e74) {
            ctx->pc = 0x115E50u;
            return;
        }
    }
    ctx->pc = 0x115E7Cu;
}
