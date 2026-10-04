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

// Function: entry_001644b0
// Address: 0x1644b0 - 0x1644bc
void entry_001644b0_0x1644b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001644b0_0x1644b0");
#endif

    ctx->pc = 0x1644b0u;

    // 0x1644b0: 0x8f838678  lw          $v1, -0x7988($gp)
    ctx->pc = 0x1644b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936184)));
    // 0x1644b4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1644B4u;
    {
        const bool branch_taken_0x1644b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1644B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1644B4u;
        // 0x1644b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1644b4) {
            ctx->pc = 0x1644CCu;
            return;
        }
    }
    ctx->pc = 0x1644BCu;
}
