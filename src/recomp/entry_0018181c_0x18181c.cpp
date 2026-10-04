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

// Function: entry_0018181c
// Address: 0x18181c - 0x181848
void entry_0018181c_0x18181c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018181c_0x18181c");
#endif

    ctx->pc = 0x18181cu;

    // 0x18181c: 0x0  nop
    ctx->pc = 0x18181cu;
    // NOP
    // 0x181820: 0x5343c  dsll32      $a2, $a1, 16
    ctx->pc = 0x181820u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 16));
    // 0x181824: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x181824u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x181828: 0x4c00007  bltz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x181828u;
    {
        const bool branch_taken_0x181828 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x18182Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181828u;
        // 0x18182c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181828) {
            ctx->pc = 0x181848u;
            return;
        }
    }
    ctx->pc = 0x181830u;
    // 0x181830: 0x28c100b8  slti        $at, $a2, 0xB8
    ctx->pc = 0x181830u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)184) ? 1 : 0);
    // 0x181834: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x181834u;
    {
        const bool branch_taken_0x181834 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x181838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181834u;
        // 0x181838: 0x28c500b8  slti        $a1, $a2, 0xB8 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)184) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x181834) {
            ctx->pc = 0x18184Cu;
            return;
        }
    }
    ctx->pc = 0x18183Cu;
    // 0x18183c: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x18183cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x181840: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x181840u;
    {
        const bool branch_taken_0x181840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181840u;
        // 0x181844: 0x24a93ba0  addiu       $t1, $a1, 0x3BA0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 15264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181840) {
            ctx->pc = 0x181860u;
            return;
        }
    }
    ctx->pc = 0x181848u;
}
