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

// Function: entry_00116500
// Address: 0x116500 - 0x116518
void entry_00116500_0x116500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116500_0x116500");
#endif

    ctx->pc = 0x116500u;

    // 0x116500: 0x8f8480dc  lw          $a0, -0x7F24($gp)
    ctx->pc = 0x116500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934748)));
    // 0x116504: 0xaf8380d8  sw          $v1, -0x7F28($gp)
    ctx->pc = 0x116504u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934744), GPR_U32(ctx, 3));
    // 0x116508: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x116508u;
    {
        const bool branch_taken_0x116508 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x11650Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116508u;
        // 0x11650c: 0x41843  sra         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116508) {
            ctx->pc = 0x116518u;
            return;
        }
    }
    ctx->pc = 0x116510u;
    // 0x116510: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x116510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x116514: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x116514u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    ctx->pc = 0x116518u;
}
