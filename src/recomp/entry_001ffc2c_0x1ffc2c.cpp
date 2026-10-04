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

// Function: entry_001ffc2c
// Address: 0x1ffc2c - 0x1ffc44
void entry_001ffc2c_0x1ffc2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ffc2c_0x1ffc2c");
#endif

    ctx->pc = 0x1ffc2cu;

    // 0x1ffc2c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1ffc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ffc30: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x1ffc30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1ffc34: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FFC34u;
    {
        const bool branch_taken_0x1ffc34 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1FFC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFC34u;
        // 0x1ffc38: 0x31143  sra         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ffc34) {
            ctx->pc = 0x1FFC44u;
            return;
        }
    }
    ctx->pc = 0x1FFC3Cu;
    // 0x1ffc3c: 0x2462001f  addiu       $v0, $v1, 0x1F
    ctx->pc = 0x1ffc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
    // 0x1ffc40: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x1ffc40u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    ctx->pc = 0x1ffc44u;
}
