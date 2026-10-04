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

// Function: entry_00157734
// Address: 0x157734 - 0x15774c
void entry_00157734_0x157734(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00157734_0x157734");
#endif

    ctx->pc = 0x157734u;

    // 0x157734: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x157734u;
    {
        const bool branch_taken_0x157734 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x157738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157734u;
        // 0x157738: 0x431023  subu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157734) {
            ctx->pc = 0x15774Cu;
            return;
        }
    }
    ctx->pc = 0x15773Cu;
    // 0x15773c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15773Cu;
    {
        const bool branch_taken_0x15773c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x157740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15773Cu;
        // 0x157740: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15773c) {
            ctx->pc = 0x15774Cu;
            return;
        }
    }
    ctx->pc = 0x157744u;
    // 0x157744: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x157744u;
    {
        const bool branch_taken_0x157744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x157744) {
            ctx->pc = 0x157774u;
            return;
        }
    }
    ctx->pc = 0x15774Cu;
}
