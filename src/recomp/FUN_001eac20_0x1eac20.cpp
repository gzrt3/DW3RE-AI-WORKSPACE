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

// Function: FUN_001eac20
// Address: 0x1eac20 - 0x1eac50
void FUN_001eac20_0x1eac20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001eac20_0x1eac20");
#endif

    ctx->pc = 0x1eac20u;

    // 0x1eac20: 0x8f858efc  lw          $a1, -0x7104($gp)
    ctx->pc = 0x1eac20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938364)));
    // 0x1eac24: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1eac24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1eac28: 0x10a30009  beq         $a1, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1EAC28u;
    {
        const bool branch_taken_0x1eac28 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1eac28) {
            ctx->pc = 0x1EAC50u;
            return;
        }
    }
    ctx->pc = 0x1EAC30u;
    // 0x1eac30: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EAC30u;
    {
        const bool branch_taken_0x1eac30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1eac30) {
            ctx->pc = 0x1EAC40u;
            goto label_1eac40;
        }
    }
    ctx->pc = 0x1EAC38u;
    // 0x1eac38: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1EAC38u;
    {
        const bool branch_taken_0x1eac38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAC38u;
        // 0x1eac3c: 0xaf838efc  sw          $v1, -0x7104($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938364), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eac38) {
            ctx->pc = 0x1EAC50u;
            return;
        }
    }
    ctx->pc = 0x1EAC40u;
label_1eac40:
    // 0x1eac40: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1eac40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1eac44: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1eac44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1eac48: 0xaf848efc  sw          $a0, -0x7104($gp)
    ctx->pc = 0x1eac48u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938364), GPR_U32(ctx, 4));
    // 0x1eac4c: 0xaf838ef4  sw          $v1, -0x710C($gp)
    ctx->pc = 0x1eac4cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938356), GPR_U32(ctx, 3));
    ctx->pc = 0x1eac50u;
}
