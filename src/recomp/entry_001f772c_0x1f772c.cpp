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

// Function: entry_001f772c
// Address: 0x1f772c - 0x1f7748
void entry_001f772c_0x1f772c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f772c_0x1f772c");
#endif

    ctx->pc = 0x1f772cu;

    // 0x1f772c: 0x0  nop
    ctx->pc = 0x1f772cu;
    // NOP
    // 0x1f7730: 0xa81821  addu        $v1, $a1, $t0
    ctx->pc = 0x1f7730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x1f7734: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1f7734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f7738: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F7738u;
    {
        const bool branch_taken_0x1f7738 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f7738) {
            ctx->pc = 0x1F7748u;
            return;
        }
    }
    ctx->pc = 0x1F7740u;
    // 0x1f7740: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1F7740u;
    {
        const bool branch_taken_0x1f7740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7740u;
        // 0x1f7744: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7740) {
            ctx->pc = 0x1F7758u;
            return;
        }
    }
    ctx->pc = 0x1F7748u;
}
