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

// Function: entry_001dfa88
// Address: 0x1dfa88 - 0x1dfaa4
void entry_001dfa88_0x1dfa88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dfa88_0x1dfa88");
#endif

    ctx->pc = 0x1dfa88u;

    // 0x1dfa88: 0x29610039  slti        $at, $t3, 0x39
    ctx->pc = 0x1dfa88u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x1dfa8c: 0x14200008  bnez        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1DFA8Cu;
    {
        const bool branch_taken_0x1dfa8c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dfa8c) {
            ctx->pc = 0x1DFAB0u;
            return;
        }
    }
    ctx->pc = 0x1DFA94u;
    // 0x1dfa94: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DFA94u;
    {
        const bool branch_taken_0x1dfa94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DFA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFA94u;
        // 0x1dfa98: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfa94) {
            ctx->pc = 0x1DFAA4u;
            return;
        }
    }
    ctx->pc = 0x1DFA9Cu;
    // 0x1dfa9c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1DFA9Cu;
    {
        const bool branch_taken_0x1dfa9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFA9Cu;
        // 0x1dfaa0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfa9c) {
            ctx->pc = 0x1DFAE4u;
            return;
        }
    }
    ctx->pc = 0x1DFAA4u;
}
