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

// Function: entry_00188d74
// Address: 0x188d74 - 0x188d7c
void entry_00188d74_0x188d74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188d74_0x188d74");
#endif

    ctx->pc = 0x188d74u;

    // 0x188d74: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x188D74u;
    {
        const bool branch_taken_0x188d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188D74u;
        // 0x188d78: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188d74) {
            ctx->pc = 0x188DE4u;
            return;
        }
    }
    ctx->pc = 0x188D7Cu;
}
