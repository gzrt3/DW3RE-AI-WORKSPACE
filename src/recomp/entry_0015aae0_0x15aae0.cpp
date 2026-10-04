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

// Function: entry_0015aae0
// Address: 0x15aae0 - 0x15aae8
void entry_0015aae0_0x15aae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015aae0_0x15aae0");
#endif

    ctx->pc = 0x15aae0u;

    // 0x15aae0: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x15AAE0u;
    {
        const bool branch_taken_0x15aae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AAE0u;
        // 0x15aae4: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aae0) {
            ctx->pc = 0x15AB64u;
            return;
        }
    }
    ctx->pc = 0x15AAE8u;
}
