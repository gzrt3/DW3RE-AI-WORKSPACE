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

// Function: entry_001eab80
// Address: 0x1eab80 - 0x1eab90
void entry_001eab80_0x1eab80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001eab80_0x1eab80");
#endif

    ctx->pc = 0x1eab80u;

    // 0x1eab80: 0x8f858ef0  lw          $a1, -0x7110($gp)
    ctx->pc = 0x1eab80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938352)));
    // 0x1eab84: 0x1ca00002  bgtz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1EAB84u;
    {
        const bool branch_taken_0x1eab84 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x1EAB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAB84u;
        // 0x1eab88: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eab84) {
            ctx->pc = 0x1EAB90u;
            return;
        }
    }
    ctx->pc = 0x1EAB8Cu;
    // 0x1eab8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1eab8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1eab90u;
}
