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

// Function: entry_0023ab80
// Address: 0x23ab80 - 0x23ab94
void entry_0023ab80_0x23ab80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023ab80_0x23ab80");
#endif

    ctx->pc = 0x23ab80u;

    // 0x23ab80: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x23ab80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x23ab84: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23AB84u;
    {
        const bool branch_taken_0x23ab84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23AB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AB84u;
        // 0x23ab88: 0x3c02c000  lui         $v0, 0xC000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ab84) {
            ctx->pc = 0x23AB94u;
            return;
        }
    }
    ctx->pc = 0x23AB8Cu;
    // 0x23ab8c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x23ab8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x23ab90: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x23ab90u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    ctx->pc = 0x23ab94u;
}
