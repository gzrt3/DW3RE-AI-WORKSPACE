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

// Function: entry_001dfa70
// Address: 0x1dfa70 - 0x1dfa88
void entry_001dfa70_0x1dfa70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dfa70_0x1dfa70");
#endif

    ctx->pc = 0x1dfa70u;

    // 0x1dfa70: 0x8f868cd0  lw          $a2, -0x7330($gp)
    ctx->pc = 0x1dfa70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937808)));
    // 0x1dfa74: 0xc85823  subu        $t3, $a2, $t0
    ctx->pc = 0x1dfa74u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x1dfa78: 0x5610003  bgez        $t3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DFA78u;
    {
        const bool branch_taken_0x1dfa78 = (GPR_S32(ctx, 11) >= 0);
        ctx->pc = 0x1DFA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFA78u;
        // 0x1dfa7c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfa78) {
            ctx->pc = 0x1DFA88u;
            return;
        }
    }
    ctx->pc = 0x1DFA80u;
    // 0x1dfa80: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1DFA80u;
    {
        const bool branch_taken_0x1dfa80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dfa80) {
            ctx->pc = 0x1DFAE4u;
            return;
        }
    }
    ctx->pc = 0x1DFA88u;
}
