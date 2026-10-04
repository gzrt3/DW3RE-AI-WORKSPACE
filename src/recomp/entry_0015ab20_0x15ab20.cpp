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

// Function: entry_0015ab20
// Address: 0x15ab20 - 0x15ab28
void entry_0015ab20_0x15ab20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015ab20_0x15ab20");
#endif

    ctx->pc = 0x15ab20u;

    // 0x15ab20: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x15AB20u;
    {
        const bool branch_taken_0x15ab20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AB20u;
        // 0x15ab24: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ab20) {
            ctx->pc = 0x15AB64u;
            return;
        }
    }
    ctx->pc = 0x15AB28u;
}
