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

// Function: entry_00115900
// Address: 0x115900 - 0x115918
void entry_00115900_0x115900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00115900_0x115900");
#endif

    ctx->pc = 0x115900u;

    // 0x115900: 0x8f8380e0  lw          $v1, -0x7F20($gp)
    ctx->pc = 0x115900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934752)));
    // 0x115904: 0xaf8280dc  sw          $v0, -0x7F24($gp)
    ctx->pc = 0x115904u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934748), GPR_U32(ctx, 2));
    // 0x115908: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x115908u;
    {
        const bool branch_taken_0x115908 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x11590Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115908u;
        // 0x11590c: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115908) {
            ctx->pc = 0x115918u;
            return;
        }
    }
    ctx->pc = 0x115910u;
    // 0x115910: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x115910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x115914: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x115914u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    ctx->pc = 0x115918u;
}
