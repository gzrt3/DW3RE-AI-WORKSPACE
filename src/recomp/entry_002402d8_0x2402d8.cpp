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

// Function: entry_002402d8
// Address: 0x2402d8 - 0x2402f0
void entry_002402d8_0x2402d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002402d8_0x2402d8");
#endif

    ctx->pc = 0x2402d8u;

    // 0x2402d8: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2402D8u;
    {
        const bool branch_taken_0x2402d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2402DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2402D8u;
        // 0x2402dc: 0x2d610002  sltiu       $at, $t3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2402d8) {
            ctx->pc = 0x2402F0u;
            return;
        }
    }
    ctx->pc = 0x2402E0u;
    // 0x2402e0: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2402E0u;
    {
        const bool branch_taken_0x2402e0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2402e0) {
            ctx->pc = 0x2402F0u;
            return;
        }
    }
    ctx->pc = 0x2402E8u;
    // 0x2402e8: 0x14aa0006  bne         $a1, $t2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2402E8u;
    {
        const bool branch_taken_0x2402e8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 10));
        if (branch_taken_0x2402e8) {
            ctx->pc = 0x240304u;
            return;
        }
    }
    ctx->pc = 0x2402F0u;
}
