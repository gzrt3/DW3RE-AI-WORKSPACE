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

// Function: entry_0019925c
// Address: 0x19925c - 0x199268
void entry_0019925c_0x19925c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019925c_0x19925c");
#endif

    ctx->pc = 0x19925cu;

    // 0x19925c: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x19925cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x199260: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x199260u;
    {
        const bool branch_taken_0x199260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199260u;
        // 0x199264: 0x24849ad0  addiu       $a0, $a0, -0x6530 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941392));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199260) {
            ctx->pc = 0x199294u;
            return;
        }
    }
    ctx->pc = 0x199268u;
}
