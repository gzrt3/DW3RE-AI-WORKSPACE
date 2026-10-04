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

// Function: entry_00188d58
// Address: 0x188d58 - 0x188d60
void entry_00188d58_0x188d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188d58_0x188d58");
#endif

    ctx->pc = 0x188d58u;

    // 0x188d58: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x188D58u;
    {
        const bool branch_taken_0x188d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188D58u;
        // 0x188d5c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188d58) {
            ctx->pc = 0x188DE4u;
            return;
        }
    }
    ctx->pc = 0x188D60u;
}
