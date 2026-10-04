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

// Function: entry_00214d94
// Address: 0x214d94 - 0x214dac
void entry_00214d94_0x214d94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00214d94_0x214d94");
#endif

    ctx->pc = 0x214d94u;

    // 0x214d94: 0x15400005  bnez        $t2, . + 4 + (0x5 << 2)
    ctx->pc = 0x214D94u;
    {
        const bool branch_taken_0x214d94 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x214d94) {
            ctx->pc = 0x214DACu;
            return;
        }
    }
    ctx->pc = 0x214D9Cu;
    // 0x214d9c: 0x15280003  bne         $t1, $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x214D9Cu;
    {
        const bool branch_taken_0x214d9c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 8));
        ctx->pc = 0x214DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214D9Cu;
        // 0x214da0: 0xcb1821  addu        $v1, $a2, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214d9c) {
            ctx->pc = 0x214DACu;
            return;
        }
    }
    ctx->pc = 0x214DA4u;
    // 0x214da4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x214DA4u;
    {
        const bool branch_taken_0x214da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214DA4u;
        // 0x214da8: 0xac670008  sw          $a3, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214da4) {
            ctx->pc = 0x214DC4u;
            return;
        }
    }
    ctx->pc = 0x214DACu;
}
