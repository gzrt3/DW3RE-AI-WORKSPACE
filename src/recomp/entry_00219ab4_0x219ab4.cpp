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

// Function: entry_00219ab4
// Address: 0x219ab4 - 0x219ac8
void entry_00219ab4_0x219ab4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00219ab4_0x219ab4");
#endif

    ctx->pc = 0x219ab4u;

    // 0x219ab4: 0x8f829258  lw          $v0, -0x6DA8($gp)
    ctx->pc = 0x219ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939224)));
    // 0x219ab8: 0x14e20003  bne         $a3, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x219AB8u;
    {
        const bool branch_taken_0x219ab8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x219ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219AB8u;
        // 0x219abc: 0x2081021  addu        $v0, $s0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219ab8) {
            ctx->pc = 0x219AC8u;
            return;
        }
    }
    ctx->pc = 0x219AC0u;
    // 0x219ac0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x219AC0u;
    {
        const bool branch_taken_0x219ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x219AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x219AC0u;
        // 0x219ac4: 0xa0432283  sb          $v1, 0x2283($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 8835), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219ac0) {
            ctx->pc = 0x219AD0u;
            return;
        }
    }
    ctx->pc = 0x219AC8u;
}
