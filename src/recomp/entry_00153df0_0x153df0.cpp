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

// Function: entry_00153df0
// Address: 0x153df0 - 0x153e08
void entry_00153df0_0x153df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00153df0_0x153df0");
#endif

    ctx->pc = 0x153df0u;

    // 0x153df0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x153df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x153df4: 0x1221823  subu        $v1, $t1, $v0
    ctx->pc = 0x153df4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x153df8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x153DF8u;
    {
        const bool branch_taken_0x153df8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x153DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153DF8u;
        // 0x153dfc: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153df8) {
            ctx->pc = 0x153E08u;
            return;
        }
    }
    ctx->pc = 0x153E00u;
    // 0x153e00: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x153e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x153e04: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x153e04u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    ctx->pc = 0x153e08u;
}
