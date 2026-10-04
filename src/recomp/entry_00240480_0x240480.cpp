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

// Function: entry_00240480
// Address: 0x240480 - 0x24048c
void entry_00240480_0x240480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00240480_0x240480");
#endif

    ctx->pc = 0x240480u;

    // 0x240480: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x240480u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x240484: 0x521ffe6  bgez        $t1, . + 4 + (-0x1A << 2)
    ctx->pc = 0x240484u;
    {
        const bool branch_taken_0x240484 = (GPR_S32(ctx, 9) >= 0);
        ctx->pc = 0x240488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240484u;
        // 0x240488: 0x256bfff8  addiu       $t3, $t3, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240484) {
            ctx->pc = 0x240420u;
            return;
        }
    }
    ctx->pc = 0x24048Cu;
}
