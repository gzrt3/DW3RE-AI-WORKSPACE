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

// Function: entry_00100ab8
// Address: 0x100ab8 - 0x100ac0
void entry_00100ab8_0x100ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100ab8_0x100ab8");
#endif

    ctx->pc = 0x100ab8u;

    // 0x100ab8: 0x1000ffe3  b           . + 4 + (-0x1D << 2)
    ctx->pc = 0x100AB8u;
    {
        const bool branch_taken_0x100ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100AB8u;
        // 0x100abc: 0x24840050  addiu       $a0, $a0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100ab8) {
            ctx->pc = 0x100A48u;
            return;
        }
    }
    ctx->pc = 0x100AC0u;
}
