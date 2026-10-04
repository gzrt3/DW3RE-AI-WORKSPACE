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

// Function: entry_001991c8
// Address: 0x1991c8 - 0x1991e4
void entry_001991c8_0x1991c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001991c8_0x1991c8");
#endif

    ctx->pc = 0x1991c8u;

label_1991c8:
    // 0x1991c8: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x1991c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1991cc: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x1991CCu;
    {
        const bool branch_taken_0x1991cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1991D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1991CCu;
        // 0x1991d0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1991cc) {
            ctx->pc = 0x199274u;
            return;
        }
    }
    ctx->pc = 0x1991D4u;
    // 0x1991d4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1991d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1991d8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1991d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1991dc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1991DCu;
    {
        const bool branch_taken_0x1991dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1991E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1991DCu;
        // 0x1991e0: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1991dc) {
            ctx->pc = 0x1991C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1991c8;
        }
    }
    ctx->pc = 0x1991E4u;
}
