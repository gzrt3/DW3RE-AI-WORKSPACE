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

// Function: entry_0014dad0
// Address: 0x14dad0 - 0x14daec
void entry_0014dad0_0x14dad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014dad0_0x14dad0");
#endif

    ctx->pc = 0x14dad0u;

    // 0x14dad0: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x14dad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x14dad4: 0x8442021c  lh          $v0, 0x21C($v0)
    ctx->pc = 0x14dad4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 540)));
    // 0x14dad8: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x14dad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x14dadc: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14DADCu;
    {
        const bool branch_taken_0x14dadc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x14DAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DADCu;
        // 0x14dae0: 0x218c3  sra         $v1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14dadc) {
            ctx->pc = 0x14DAECu;
            return;
        }
    }
    ctx->pc = 0x14DAE4u;
    // 0x14dae4: 0x24420007  addiu       $v0, $v0, 0x7
    ctx->pc = 0x14dae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
    // 0x14dae8: 0x218c3  sra         $v1, $v0, 3
    ctx->pc = 0x14dae8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 3));
    ctx->pc = 0x14daecu;
}
