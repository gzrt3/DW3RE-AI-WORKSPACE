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

// Function: entry_0014c1cc
// Address: 0x14c1cc - 0x14c1d4
void entry_0014c1cc_0x14c1cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014c1cc_0x14c1cc");
#endif

    ctx->pc = 0x14c1ccu;

    // 0x14c1cc: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x14C1CCu;
    {
        const bool branch_taken_0x14c1cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C1CCu;
        // 0x14c1d0: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c1cc) {
            ctx->pc = 0x14C270u;
            return;
        }
    }
    ctx->pc = 0x14C1D4u;
}
