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

// Function: entry_00199d50
// Address: 0x199d50 - 0x199d6c
void entry_00199d50_0x199d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00199d50_0x199d50");
#endif

    ctx->pc = 0x199d50u;

label_199d50:
    // 0x199d50: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x199d50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x199d54: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x199D54u;
    {
        const bool branch_taken_0x199d54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x199D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199D54u;
        // 0x199d58: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199d54) {
            ctx->pc = 0x199CACu;
            return;
        }
    }
    ctx->pc = 0x199D5Cu;
    // 0x199d5c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x199d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x199d60: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x199d60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x199d64: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x199D64u;
    {
        const bool branch_taken_0x199d64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x199D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199D64u;
        // 0x199d68: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199d64) {
            ctx->pc = 0x199D50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_199d50;
        }
    }
    ctx->pc = 0x199D6Cu;
}
