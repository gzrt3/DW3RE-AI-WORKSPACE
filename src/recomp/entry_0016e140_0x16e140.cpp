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

// Function: entry_0016e140
// Address: 0x16e140 - 0x16e154
void entry_0016e140_0x16e140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016e140_0x16e140");
#endif

    ctx->pc = 0x16e140u;

    // 0x16e140: 0x8f828184  lw          $v0, -0x7E7C($gp)
    ctx->pc = 0x16e140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934916)));
    // 0x16e144: 0x14440003  bne         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16E144u;
    {
        const bool branch_taken_0x16e144 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x16E148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E144u;
        // 0x16e148: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e144) {
            ctx->pc = 0x16E154u;
            return;
        }
    }
    ctx->pc = 0x16E14Cu;
    // 0x16e14c: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x16E14Cu;
    {
        const bool branch_taken_0x16e14c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E14Cu;
        // 0x16e150: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e14c) {
            ctx->pc = 0x16E27Cu;
            return;
        }
    }
    ctx->pc = 0x16E154u;
}
