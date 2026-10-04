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

// Function: entry_001dfb8c
// Address: 0x1dfb8c - 0x1dfba4
void entry_001dfb8c_0x1dfb8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dfb8c_0x1dfb8c");
#endif

    ctx->pc = 0x1dfb8cu;

    // 0x1dfb8c: 0x8f8c8cd0  lw          $t4, -0x7330($gp)
    ctx->pc = 0x1dfb8cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937808)));
    // 0x1dfb90: 0x1866823  subu        $t5, $t4, $a2
    ctx->pc = 0x1dfb90u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 6)));
    // 0x1dfb94: 0x5a10003  bgez        $t5, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DFB94u;
    {
        const bool branch_taken_0x1dfb94 = (GPR_S32(ctx, 13) >= 0);
        ctx->pc = 0x1DFB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFB94u;
        // 0x1dfb98: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfb94) {
            ctx->pc = 0x1DFBA4u;
            return;
        }
    }
    ctx->pc = 0x1DFB9Cu;
    // 0x1dfb9c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1DFB9Cu;
    {
        const bool branch_taken_0x1dfb9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dfb9c) {
            ctx->pc = 0x1DFBF8u;
            return;
        }
    }
    ctx->pc = 0x1DFBA4u;
}
