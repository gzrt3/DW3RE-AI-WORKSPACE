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

// Function: entry_001e4914
// Address: 0x1e4914 - 0x1e492c
void entry_001e4914_0x1e4914(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e4914_0x1e4914");
#endif

    ctx->pc = 0x1e4914u;

    // 0x1e4914: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1e4914u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e4918: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x1e4918u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1e491c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E491Cu;
    {
        const bool branch_taken_0x1e491c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1E4920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E491Cu;
        // 0x1e4920: 0x31143  sra         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e491c) {
            ctx->pc = 0x1E492Cu;
            return;
        }
    }
    ctx->pc = 0x1E4924u;
    // 0x1e4924: 0x2462001f  addiu       $v0, $v1, 0x1F
    ctx->pc = 0x1e4924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
    // 0x1e4928: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1e4928u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    ctx->pc = 0x1e492cu;
}
