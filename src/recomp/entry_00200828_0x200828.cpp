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

// Function: entry_00200828
// Address: 0x200828 - 0x200854
void entry_00200828_0x200828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00200828_0x200828");
#endif

    ctx->pc = 0x200828u;

    // 0x200828: 0x8f8490ec  lw          $a0, -0x6F14($gp)
    ctx->pc = 0x200828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938860)));
    // 0x20082c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20082cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x200830: 0x1483000f  bne         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x200830u;
    {
        const bool branch_taken_0x200830 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x200834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200830u;
        // 0x200834: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200830) {
            ctx->pc = 0x200870u;
            return;
        }
    }
    ctx->pc = 0x200838u;
    // 0x200838: 0x8f8490e8  lw          $a0, -0x6F18($gp)
    ctx->pc = 0x200838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938856)));
    // 0x20083c: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x20083cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x200840: 0x2881000c  slti        $at, $a0, 0xC
    ctx->pc = 0x200840u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x200844: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x200844u;
    {
        const bool branch_taken_0x200844 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x200848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200844u;
        // 0x200848: 0xaf8390e8  sw          $v1, -0x6F18($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938856), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200844) {
            ctx->pc = 0x200854u;
            return;
        }
    }
    ctx->pc = 0x20084Cu;
    // 0x20084c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20084Cu;
    {
        const bool branch_taken_0x20084c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20084Cu;
        // 0x200850: 0x8f8390e8  lw          $v1, -0x6F18($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938856)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20084c) {
            ctx->pc = 0x200858u;
            return;
        }
    }
    ctx->pc = 0x200854u;
}
