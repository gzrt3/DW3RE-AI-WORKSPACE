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

// Function: entry_00244594
// Address: 0x244594 - 0x2445a8
void entry_00244594_0x244594(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00244594_0x244594");
#endif

    ctx->pc = 0x244594u;

    // 0x244594: 0x0  nop
    ctx->pc = 0x244594u;
    // NOP
    // 0x244598: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x244598u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x24459c: 0x29040013  slti        $a0, $t0, 0x13
    ctx->pc = 0x24459cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)19) ? 1 : 0);
    // 0x2445a0: 0x1480fff5  bnez        $a0, . + 4 + (-0xB << 2)
    ctx->pc = 0x2445A0u;
    {
        const bool branch_taken_0x2445a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2445A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2445A0u;
        // 0x2445a4: 0x1062004  sllv        $a0, $a2, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 8) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2445a0) {
            ctx->pc = 0x244578u;
            return;
        }
    }
    ctx->pc = 0x2445A8u;
}
