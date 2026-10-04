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

// Function: entry_001dfbd0
// Address: 0x1dfbd0 - 0x1dfbe4
void entry_001dfbd0_0x1dfbd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dfbd0_0x1dfbd0");
#endif

    ctx->pc = 0x1dfbd0u;

    // 0x1dfbd0: 0xd61c0  sll         $t4, $t5, 7
    ctx->pc = 0x1dfbd0u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 13), 7));
    // 0x1dfbd4: 0x5810003  bgez        $t4, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DFBD4u;
    {
        const bool branch_taken_0x1dfbd4 = (GPR_S32(ctx, 12) >= 0);
        ctx->pc = 0x1DFBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFBD4u;
        // 0x1dfbd8: 0xc3983  sra         $a3, $t4, 6 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 12), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfbd4) {
            ctx->pc = 0x1DFBE4u;
            return;
        }
    }
    ctx->pc = 0x1DFBDCu;
    // 0x1dfbdc: 0x2587003f  addiu       $a3, $t4, 0x3F
    ctx->pc = 0x1dfbdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 12), 63));
    // 0x1dfbe0: 0x73983  sra         $a3, $a3, 6
    ctx->pc = 0x1dfbe0u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 6));
    ctx->pc = 0x1dfbe4u;
}
