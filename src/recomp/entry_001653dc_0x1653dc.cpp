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

// Function: entry_001653dc
// Address: 0x1653dc - 0x1653f8
void entry_001653dc_0x1653dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001653dc_0x1653dc");
#endif

    ctx->pc = 0x1653dcu;

    // 0x1653dc: 0x8f8486bc  lw          $a0, -0x7944($gp)
    ctx->pc = 0x1653dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936252)));
    // 0x1653e0: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1653E0u;
    {
        const bool branch_taken_0x1653e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1653e0) {
            ctx->pc = 0x1653F8u;
            return;
        }
    }
    ctx->pc = 0x1653E8u;
    // 0x1653e8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1653e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1653ec: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1653ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1653f0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1653F0u;
    {
        const bool branch_taken_0x1653f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1653F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1653F0u;
        // 0x1653f4: 0xaf8286bc  sw          $v0, -0x7944($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936252), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1653f0) {
            ctx->pc = 0x165404u;
            return;
        }
    }
    ctx->pc = 0x1653F8u;
}
