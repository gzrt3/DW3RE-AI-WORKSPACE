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

// Function: entry_00188d98
// Address: 0x188d98 - 0x188da0
void entry_00188d98_0x188d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00188d98_0x188d98");
#endif

    ctx->pc = 0x188d98u;

    // 0x188d98: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x188D98u;
    {
        const bool branch_taken_0x188d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188D98u;
        // 0x188d9c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188d98) {
            ctx->pc = 0x188DE4u;
            return;
        }
    }
    ctx->pc = 0x188DA0u;
}
