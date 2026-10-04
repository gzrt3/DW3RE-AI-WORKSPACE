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

// Function: entry_0015aad0
// Address: 0x15aad0 - 0x15aad8
void entry_0015aad0_0x15aad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015aad0_0x15aad0");
#endif

    ctx->pc = 0x15aad0u;

    // 0x15aad0: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x15AAD0u;
    {
        const bool branch_taken_0x15aad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AAD0u;
        // 0x15aad4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aad0) {
            ctx->pc = 0x15AB64u;
            return;
        }
    }
    ctx->pc = 0x15AAD8u;
}
