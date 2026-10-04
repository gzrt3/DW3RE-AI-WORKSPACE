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

// Function: entry_0015aa34
// Address: 0x15aa34 - 0x15aa3c
void entry_0015aa34_0x15aa34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015aa34_0x15aa34");
#endif

    ctx->pc = 0x15aa34u;

    // 0x15aa34: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x15AA34u;
    {
        const bool branch_taken_0x15aa34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AA34u;
        // 0x15aa38: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aa34) {
            ctx->pc = 0x15AB64u;
            return;
        }
    }
    ctx->pc = 0x15AA3Cu;
}
