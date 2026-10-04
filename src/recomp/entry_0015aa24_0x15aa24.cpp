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

// Function: entry_0015aa24
// Address: 0x15aa24 - 0x15aa2c
void entry_0015aa24_0x15aa24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015aa24_0x15aa24");
#endif

    ctx->pc = 0x15aa24u;

    // 0x15aa24: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x15AA24u;
    {
        const bool branch_taken_0x15aa24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AA24u;
        // 0x15aa28: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aa24) {
            ctx->pc = 0x15AB64u;
            return;
        }
    }
    ctx->pc = 0x15AA2Cu;
}
