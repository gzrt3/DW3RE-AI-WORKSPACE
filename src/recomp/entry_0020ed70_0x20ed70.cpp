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

// Function: entry_0020ed70
// Address: 0x20ed70 - 0x20ed88
void entry_0020ed70_0x20ed70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020ed70_0x20ed70");
#endif

    ctx->pc = 0x20ed70u;

    // 0x20ed70: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x20ed70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x20ed74: 0x30a31700  andi        $v1, $a1, 0x1700
    ctx->pc = 0x20ed74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)5888);
    // 0x20ed78: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x20ED78u;
    {
        const bool branch_taken_0x20ed78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20ED7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ED78u;
        // 0x20ed7c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ed78) {
            ctx->pc = 0x20ED88u;
            return;
        }
    }
    ctx->pc = 0x20ED80u;
    // 0x20ed80: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x20ED80u;
    {
        const bool branch_taken_0x20ed80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20ED84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ED80u;
        // 0x20ed84: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ed80) {
            ctx->pc = 0x20EDA0u;
            return;
        }
    }
    ctx->pc = 0x20ED88u;
}
