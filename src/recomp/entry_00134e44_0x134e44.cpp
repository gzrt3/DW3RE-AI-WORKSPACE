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

// Function: entry_00134e44
// Address: 0x134e44 - 0x134e4c
void entry_00134e44_0x134e44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134e44_0x134e44");
#endif

    ctx->pc = 0x134e44u;

    // 0x134e44: 0x1000feae  b           . + 4 + (-0x152 << 2)
    ctx->pc = 0x134E44u;
    {
        const bool branch_taken_0x134e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134E44u;
        // 0x134e48: 0x86040000  lh          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134e44) {
            ctx->pc = 0x134900u;
            return;
        }
    }
    ctx->pc = 0x134E4Cu;
}
