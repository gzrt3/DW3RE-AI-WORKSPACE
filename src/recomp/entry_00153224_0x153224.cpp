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

// Function: entry_00153224
// Address: 0x153224 - 0x153234
void entry_00153224_0x153224(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00153224_0x153224");
#endif

    ctx->pc = 0x153224u;

    // 0x153224: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x153224u;
    {
        const bool branch_taken_0x153224 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x153228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153224u;
        // 0x153228: 0x428c3  sra         $a1, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153224) {
            ctx->pc = 0x153234u;
            return;
        }
    }
    ctx->pc = 0x15322Cu;
    // 0x15322c: 0x24830007  addiu       $v1, $a0, 0x7
    ctx->pc = 0x15322cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 7));
    // 0x153230: 0x328c3  sra         $a1, $v1, 3
    ctx->pc = 0x153230u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 3));
    ctx->pc = 0x153234u;
}
