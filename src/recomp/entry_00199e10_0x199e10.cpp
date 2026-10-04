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

// Function: entry_00199e10
// Address: 0x199e10 - 0x199e30
void entry_00199e10_0x199e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199e10_0x199e10");
#endif

    ctx->pc = 0x199e10u;

label_199e10:
    // 0x199e10: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x199e10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x199e14: 0x1440ffa8  bnez        $v0, . + 4 + (-0x58 << 2)
    ctx->pc = 0x199E14u;
    {
        const bool branch_taken_0x199e14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x199E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199E14u;
        // 0x199e18: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199e14) {
            ctx->pc = 0x199CB8u;
            return;
        }
    }
    ctx->pc = 0x199E1Cu;
    // 0x199e1c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x199e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x199e20: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x199e20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x199e24: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x199E24u;
    {
        const bool branch_taken_0x199e24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x199E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199E24u;
        // 0x199e28: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199e24) {
            ctx->pc = 0x199E10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_199e10;
        }
    }
    ctx->pc = 0x199E2Cu;
    // 0x199e2c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x199e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    ctx->pc = 0x199e30u;
}
