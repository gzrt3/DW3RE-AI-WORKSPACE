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

// Function: FUN_001e01c0
// Address: 0x1e01c0 - 0x1e01d4
void FUN_001e01c0_0x1e01c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e01c0_0x1e01c0");
#endif

    ctx->pc = 0x1e01c0u;

    // 0x1e01c0: 0x8f848cf8  lw          $a0, -0x7308($gp)
    ctx->pc = 0x1e01c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937848)));
    // 0x1e01c4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1e01c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e01c8: 0x10830002  beq         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E01C8u;
    {
        const bool branch_taken_0x1e01c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1E01CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E01C8u;
        // 0x1e01cc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e01c8) {
            ctx->pc = 0x1E01D4u;
            return;
        }
    }
    ctx->pc = 0x1E01D0u;
    // 0x1e01d0: 0xaf838cf8  sw          $v1, -0x7308($gp)
    ctx->pc = 0x1e01d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937848), GPR_U32(ctx, 3));
    ctx->pc = 0x1e01d4u;
}
