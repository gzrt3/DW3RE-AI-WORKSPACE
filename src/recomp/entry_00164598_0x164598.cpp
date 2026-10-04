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

// Function: entry_00164598
// Address: 0x164598 - 0x1645a4
void entry_00164598_0x164598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00164598_0x164598");
#endif

    ctx->pc = 0x164598u;

    // 0x164598: 0x8f838684  lw          $v1, -0x797C($gp)
    ctx->pc = 0x164598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936196)));
    // 0x16459c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x16459Cu;
    {
        const bool branch_taken_0x16459c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1645A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16459Cu;
        // 0x1645a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16459c) {
            ctx->pc = 0x1645B4u;
            return;
        }
    }
    ctx->pc = 0x1645A4u;
}
