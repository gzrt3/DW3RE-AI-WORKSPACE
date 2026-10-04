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

// Function: entry_001643c4
// Address: 0x1643c4 - 0x1643d0
void entry_001643c4_0x1643c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001643c4_0x1643c4");
#endif

    ctx->pc = 0x1643c4u;

    // 0x1643c4: 0x8f83869c  lw          $v1, -0x7964($gp)
    ctx->pc = 0x1643c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936220)));
    // 0x1643c8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1643C8u;
    {
        const bool branch_taken_0x1643c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1643CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1643C8u;
        // 0x1643cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1643c8) {
            ctx->pc = 0x1643E0u;
            return;
        }
    }
    ctx->pc = 0x1643D0u;
}
