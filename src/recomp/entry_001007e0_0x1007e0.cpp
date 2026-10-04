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

// Function: entry_001007e0
// Address: 0x1007e0 - 0x1007f0
void entry_001007e0_0x1007e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001007e0_0x1007e0");
#endif

    ctx->pc = 0x1007e0u;

    // 0x1007e0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1007e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1007e4: 0xc7102b  sltu        $v0, $a2, $a3
    ctx->pc = 0x1007e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1007e8: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1007E8u;
    {
        const bool branch_taken_0x1007e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1007ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1007E8u;
        // 0x1007ec: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1007e8) {
            ctx->pc = 0x100798u;
            return;
        }
    }
    ctx->pc = 0x1007F0u;
}
