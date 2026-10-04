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

// Function: FUN_00237158
// Address: 0x237158 - 0x237184
void FUN_00237158_0x237158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00237158_0x237158");
#endif

    switch (ctx->pc) {
        case 0x237168u: goto label_237168;
        default: break;
    }

    ctx->pc = 0x237158u;

    // 0x237158: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x237158u;
    {
        const bool branch_taken_0x237158 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x23715Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237158u;
        // 0x23715c: 0x24a2ffff  addiu       $v0, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237158) {
            ctx->pc = 0x237184u;
            return;
        }
    }
    ctx->pc = 0x237160u;
    // 0x237160: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x237160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x237164: 0x0  nop
    ctx->pc = 0x237164u;
    // NOP
label_237168:
    // 0x237168: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x237168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x23716c: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x23716cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x237170: 0x0  nop
    ctx->pc = 0x237170u;
    // NOP
    // 0x237174: 0x0  nop
    ctx->pc = 0x237174u;
    // NOP
    // 0x237178: 0x0  nop
    ctx->pc = 0x237178u;
    // NOP
    // 0x23717c: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x23717Cu;
    {
        const bool branch_taken_0x23717c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x237180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23717Cu;
        // 0x237180: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23717c) {
            ctx->pc = 0x237168u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_237168;
        }
    }
    ctx->pc = 0x237184u;
}
