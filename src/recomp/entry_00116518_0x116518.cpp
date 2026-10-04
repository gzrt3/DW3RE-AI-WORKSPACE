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

// Function: entry_00116518
// Address: 0x116518 - 0x116530
void entry_00116518_0x116518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116518_0x116518");
#endif

    ctx->pc = 0x116518u;

    // 0x116518: 0x8f8480e0  lw          $a0, -0x7F20($gp)
    ctx->pc = 0x116518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x11651c: 0xaf8380dc  sw          $v1, -0x7F24($gp)
    ctx->pc = 0x11651cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934748), GPR_U32(ctx, 3));
    // 0x116520: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x116520u;
    {
        const bool branch_taken_0x116520 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x116524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116520u;
        // 0x116524: 0x41843  sra         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116520) {
            ctx->pc = 0x116530u;
            return;
        }
    }
    ctx->pc = 0x116528u;
    // 0x116528: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x116528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x11652c: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x11652cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    ctx->pc = 0x116530u;
}
