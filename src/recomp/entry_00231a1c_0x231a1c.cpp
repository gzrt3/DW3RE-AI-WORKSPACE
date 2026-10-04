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

// Function: entry_00231a1c
// Address: 0x231a1c - 0x231a38
void entry_00231a1c_0x231a1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00231a1c_0x231a1c");
#endif

    ctx->pc = 0x231a1cu;

    // 0x231a1c: 0x8f8282d4  lw          $v0, -0x7D2C($gp)
    ctx->pc = 0x231a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935252)));
    // 0x231a20: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x231a20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x231a24: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x231A24u;
    {
        const bool branch_taken_0x231a24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x231A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231A24u;
        // 0x231a28: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231a24) {
            ctx->pc = 0x231A38u;
            return;
        }
    }
    ctx->pc = 0x231A2Cu;
    // 0x231a2c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x231a2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x231a30: 0x808db86  j           func_236E18
    ctx->pc = 0x231A30u;
    ctx->pc = 0x231A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231A30u;
    // 0x231a34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236E18u;
    FUN_00236e18_0x236e18(rdram, ctx, runtime); return;
    ctx->pc = 0x231A38u;
}
