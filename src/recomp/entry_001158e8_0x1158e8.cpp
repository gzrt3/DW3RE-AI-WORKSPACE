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

// Function: entry_001158e8
// Address: 0x1158e8 - 0x115900
void entry_001158e8_0x1158e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001158e8_0x1158e8");
#endif

    ctx->pc = 0x1158e8u;

    // 0x1158e8: 0x8f8380dc  lw          $v1, -0x7F24($gp)
    ctx->pc = 0x1158e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934748)));
    // 0x1158ec: 0xaf8280d8  sw          $v0, -0x7F28($gp)
    ctx->pc = 0x1158ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294934744), GPR_U32(ctx, 2));
    // 0x1158f0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1158F0u;
    {
        const bool branch_taken_0x1158f0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1158F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1158F0u;
        // 0x1158f4: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1158f0) {
            ctx->pc = 0x115900u;
            return;
        }
    }
    ctx->pc = 0x1158F8u;
    // 0x1158f8: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1158f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1158fc: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1158fcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    ctx->pc = 0x115900u;
}
