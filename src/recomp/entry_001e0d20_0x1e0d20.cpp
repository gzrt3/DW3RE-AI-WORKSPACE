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

// Function: entry_001e0d20
// Address: 0x1e0d20 - 0x1e0d38
void entry_001e0d20_0x1e0d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e0d20_0x1e0d20");
#endif

    ctx->pc = 0x1e0d20u;

    // 0x1e0d20: 0x146a0005  bne         $v1, $t2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E0D20u;
    {
        const bool branch_taken_0x1e0d20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 10));
        if (branch_taken_0x1e0d20) {
            ctx->pc = 0x1E0D38u;
            return;
        }
    }
    ctx->pc = 0x1E0D28u;
    // 0x1e0d28: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1e0d28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1e0d2c: 0x240f7400  addiu       $t7, $zero, 0x7400
    ctx->pc = 0x1e0d2cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 29696));
    // 0x1e0d30: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1E0D30u;
    {
        const bool branch_taken_0x1e0d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0D30u;
        // 0x1e0d34: 0x340e9400  ori         $t6, $zero, 0x9400 (Delay Slot)
        SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37888);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0d30) {
            ctx->pc = 0x1E0D44u;
            return;
        }
    }
    ctx->pc = 0x1E0D38u;
}
