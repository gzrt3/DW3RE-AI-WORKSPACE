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

// Function: entry_001c892c
// Address: 0x1c892c - 0x1c8950
void entry_001c892c_0x1c892c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c892c_0x1c892c");
#endif

    ctx->pc = 0x1c892cu;

    // 0x1c892c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1c892cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1c8930: 0x24428df0  addiu       $v0, $v0, -0x7210
    ctx->pc = 0x1c8930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938096));
    // 0x1c8934: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1c8934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c8938: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1c8938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c893c: 0x24020c2d  addiu       $v0, $zero, 0xC2D
    ctx->pc = 0x1c893cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3117));
    // 0x1c8940: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C8940u;
    {
        const bool branch_taken_0x1c8940 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C8944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8940u;
        // 0x1c8944: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8940) {
            ctx->pc = 0x1C8950u;
            return;
        }
    }
    ctx->pc = 0x1C8948u;
    // 0x1c8948: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1C8948u;
    {
        const bool branch_taken_0x1c8948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C894Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8948u;
        // 0x1c894c: 0x24020c2d  addiu       $v0, $zero, 0xC2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3117));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8948) {
            ctx->pc = 0x1C896Cu;
            return;
        }
    }
    ctx->pc = 0x1C8950u;
}
