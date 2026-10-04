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

// Function: entry_00152108
// Address: 0x152108 - 0x15211c
void entry_00152108_0x152108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00152108_0x152108");
#endif

    ctx->pc = 0x152108u;

    // 0x152108: 0x12020004  beq         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x152108u;
    {
        const bool branch_taken_0x152108 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x15210Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152108u;
        // 0x15210c: 0x1018c0  sll         $v1, $s0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152108) {
            ctx->pc = 0x15211Cu;
            return;
        }
    }
    ctx->pc = 0x152110u;
    // 0x152110: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x152110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x152114: 0x16020009  bne         $s0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x152114u;
    {
        const bool branch_taken_0x152114 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x152114) {
            ctx->pc = 0x15213Cu;
            return;
        }
    }
    ctx->pc = 0x15211Cu;
}
