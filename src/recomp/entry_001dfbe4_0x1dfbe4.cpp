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

// Function: entry_001dfbe4
// Address: 0x1dfbe4 - 0x1dfbf4
void entry_001dfbe4_0x1dfbe4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dfbe4_0x1dfbe4");
#endif

    ctx->pc = 0x1dfbe4u;

    // 0x1dfbe4: 0x4e10003  bgez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DFBE4u;
    {
        const bool branch_taken_0x1dfbe4 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x1DFBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFBE4u;
        // 0x1dfbe8: 0x76043  sra         $t4, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfbe4) {
            ctx->pc = 0x1DFBF4u;
            return;
        }
    }
    ctx->pc = 0x1DFBECu;
    // 0x1dfbec: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1dfbecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1dfbf0: 0x76043  sra         $t4, $a3, 1
    ctx->pc = 0x1dfbf0u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 7), 1));
    ctx->pc = 0x1dfbf4u;
}
