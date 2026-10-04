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

// Function: entry_0024a2f0
// Address: 0x24a2f0 - 0x24a300
void entry_0024a2f0_0x24a2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024a2f0_0x24a2f0");
#endif

    ctx->pc = 0x24a2f0u;

    // 0x24a2f0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x24a2f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x24a2f4: 0xe2182a  slt         $v1, $a3, $v0
    ctx->pc = 0x24a2f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x24a2f8: 0x1460ffb6  bnez        $v1, . + 4 + (-0x4A << 2)
    ctx->pc = 0x24A2F8u;
    {
        const bool branch_taken_0x24a2f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x24A2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A2F8u;
        // 0x24a2fc: 0x24a500d0  addiu       $a1, $a1, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a2f8) {
            ctx->pc = 0x24A1D4u;
            return;
        }
    }
    ctx->pc = 0x24A300u;
}
