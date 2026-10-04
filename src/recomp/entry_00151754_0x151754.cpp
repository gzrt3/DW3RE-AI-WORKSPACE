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

// Function: entry_00151754
// Address: 0x151754 - 0x151764
void entry_00151754_0x151754(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00151754_0x151754");
#endif

    ctx->pc = 0x151754u;

    // 0x151754: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x151754u;
    {
        const bool branch_taken_0x151754 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x151754) {
            ctx->pc = 0x151768u;
            return;
        }
    }
    ctx->pc = 0x15175Cu;
    // 0x15175c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x15175Cu;
    {
        const bool branch_taken_0x15175c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15175Cu;
        // 0x151760: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15175c) {
            ctx->pc = 0x151768u;
            return;
        }
    }
    ctx->pc = 0x151764u;
}
