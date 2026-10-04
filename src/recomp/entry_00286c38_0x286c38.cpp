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

// Function: entry_00286c38
// Address: 0x286c38 - 0x286c58
void entry_00286c38_0x286c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00286c38_0x286c38");
#endif

    ctx->pc = 0x286c38u;

label_286c38:
    // 0x286c38: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x286c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x286c3c: 0x1040fff5  beqz        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x286C3Cu;
    {
        const bool branch_taken_0x286c3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x286C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286C3Cu;
        // 0x286c40: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286c3c) {
            ctx->pc = 0x286C14u;
            return;
        }
    }
    ctx->pc = 0x286C44u;
    // 0x286c44: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x286c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x286c48: 0x28620040  slti        $v0, $v1, 0x40
    ctx->pc = 0x286c48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x286c4c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x286C4Cu;
    {
        const bool branch_taken_0x286c4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x286C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286C4Cu;
        // 0x286c50: 0x641016  dsrlv       $v0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) >> (GPR_U32(ctx, 3) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286c4c) {
            ctx->pc = 0x286C38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_286c38;
        }
    }
    ctx->pc = 0x286C54u;
    // 0x286c54: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x286c54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x286c58u;
}
