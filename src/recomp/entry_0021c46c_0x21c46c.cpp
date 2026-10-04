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

// Function: entry_0021c46c
// Address: 0x21c46c - 0x21c484
void entry_0021c46c_0x21c46c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021c46c_0x21c46c");
#endif

    ctx->pc = 0x21c46cu;

    // 0x21c46c: 0x8f8292c8  lw          $v0, -0x6D38($gp)
    ctx->pc = 0x21c46cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939336)));
    // 0x21c470: 0x14500004  bne         $v0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21C470u;
    {
        const bool branch_taken_0x21c470 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x21C474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C470u;
        // 0x21c474: 0x28410029  slti        $at, $v0, 0x29 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)41) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c470) {
            ctx->pc = 0x21C484u;
            return;
        }
    }
    ctx->pc = 0x21C478u;
    // 0x21c478: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x21c478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21c47c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x21C47Cu;
    {
        const bool branch_taken_0x21c47c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C47Cu;
        // 0x21c480: 0xaf8292cc  sw          $v0, -0x6D34($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c47c) {
            ctx->pc = 0x21C4C4u;
            return;
        }
    }
    ctx->pc = 0x21C484u;
}
