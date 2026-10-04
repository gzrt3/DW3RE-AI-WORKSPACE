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

// Function: entry_001c1b44
// Address: 0x1c1b44 - 0x1c1b54
void entry_001c1b44_0x1c1b44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c1b44_0x1c1b44");
#endif

    ctx->pc = 0x1c1b44u;

    // 0x1c1b44: 0x8f828920  lw          $v0, -0x76E0($gp)
    ctx->pc = 0x1c1b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936864)));
    // 0x1c1b48: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C1B48u;
    {
        const bool branch_taken_0x1c1b48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C1B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1B48u;
        // 0x1c1b4c: 0x2409018a  addiu       $t1, $zero, 0x18A (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 394));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1b48) {
            ctx->pc = 0x1C1B54u;
            return;
        }
    }
    ctx->pc = 0x1C1B50u;
    // 0x1c1b50: 0x24090182  addiu       $t1, $zero, 0x182
    ctx->pc = 0x1c1b50u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 386));
    ctx->pc = 0x1c1b54u;
}
