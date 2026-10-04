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

// Function: entry_001643e0
// Address: 0x1643e0 - 0x1643fc
void entry_001643e0_0x1643e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001643e0_0x1643e0");
#endif

    ctx->pc = 0x1643e0u;

    // 0x1643e0: 0x8f878648  lw          $a3, -0x79B8($gp)
    ctx->pc = 0x1643e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936136)));
    // 0x1643e4: 0x28e1001e  slti        $at, $a3, 0x1E
    ctx->pc = 0x1643e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)30) ? 1 : 0);
    // 0x1643e8: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1643E8u;
    {
        const bool branch_taken_0x1643e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1643ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1643E8u;
        // 0x1643ec: 0x651021  addu        $v0, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1643e8) {
            ctx->pc = 0x1643FCu;
            return;
        }
    }
    ctx->pc = 0x1643F0u;
    // 0x1643f0: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x1643f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1643f4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1643F4u;
    {
        const bool branch_taken_0x1643f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1643f4) {
            ctx->pc = 0x1643D0u;
            return;
        }
    }
    ctx->pc = 0x1643FCu;
}
