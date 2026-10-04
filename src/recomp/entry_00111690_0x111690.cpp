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

// Function: entry_00111690
// Address: 0x111690 - 0x111698
void entry_00111690_0x111690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111690_0x111690");
#endif

    ctx->pc = 0x111690u;

    // 0x111690: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x111690u;
    {
        const bool branch_taken_0x111690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111690u;
        // 0x111694: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111690) {
            ctx->pc = 0x1116E8u;
            return;
        }
    }
    ctx->pc = 0x111698u;
}
