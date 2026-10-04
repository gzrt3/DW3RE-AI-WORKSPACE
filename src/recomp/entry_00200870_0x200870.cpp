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

// Function: entry_00200870
// Address: 0x200870 - 0x200894
void entry_00200870_0x200870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00200870_0x200870");
#endif

    ctx->pc = 0x200870u;

    // 0x200870: 0x1483000c  bne         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x200870u;
    {
        const bool branch_taken_0x200870 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x200870) {
            ctx->pc = 0x2008A4u;
            return;
        }
    }
    ctx->pc = 0x200878u;
    // 0x200878: 0x8f8490e8  lw          $a0, -0x6F18($gp)
    ctx->pc = 0x200878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938856)));
    // 0x20087c: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x20087cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x200880: 0x4082a  slt         $at, $zero, $a0
    ctx->pc = 0x200880u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x200884: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x200884u;
    {
        const bool branch_taken_0x200884 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x200888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200884u;
        // 0x200888: 0xaf8390e8  sw          $v1, -0x6F18($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938856), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200884) {
            ctx->pc = 0x200894u;
            return;
        }
    }
    ctx->pc = 0x20088Cu;
    // 0x20088c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20088Cu;
    {
        const bool branch_taken_0x20088c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20088Cu;
        // 0x200890: 0x8f8390e8  lw          $v1, -0x6F18($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938856)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20088c) {
            ctx->pc = 0x200898u;
            return;
        }
    }
    ctx->pc = 0x200894u;
}
