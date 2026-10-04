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

// Function: FUN_001e01e0
// Address: 0x1e01e0 - 0x1e01f0
void FUN_001e01e0_0x1e01e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e01e0_0x1e01e0");
#endif

    ctx->pc = 0x1e01e0u;

    // 0x1e01e0: 0x8f838cf8  lw          $v1, -0x7308($gp)
    ctx->pc = 0x1e01e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937848)));
    // 0x1e01e4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E01E4u;
    {
        const bool branch_taken_0x1e01e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E01E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E01E4u;
        // 0x1e01e8: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e01e4) {
            ctx->pc = 0x1E01F0u;
            return;
        }
    }
    ctx->pc = 0x1E01ECu;
    // 0x1e01ec: 0xaf838cf8  sw          $v1, -0x7308($gp)
    ctx->pc = 0x1e01ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937848), GPR_U32(ctx, 3));
    ctx->pc = 0x1e01f0u;
}
