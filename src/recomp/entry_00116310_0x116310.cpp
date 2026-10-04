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

// Function: entry_00116310
// Address: 0x116310 - 0x116324
void entry_00116310_0x116310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116310_0x116310");
#endif

    ctx->pc = 0x116310u;

    // 0x116310: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x116310u;
    {
        const bool branch_taken_0x116310 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x116314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116310u;
        // 0x116314: 0x3c100032  lui         $s0, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)50 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116310) {
            ctx->pc = 0x116324u;
            return;
        }
    }
    ctx->pc = 0x116318u;
    // 0x116318: 0xa22001a1  sb          $zero, 0x1A1($s1)
    ctx->pc = 0x116318u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 417), (uint8_t)GPR_U32(ctx, 0));
    // 0x11631c: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x11631Cu;
    {
        const bool branch_taken_0x11631c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11631Cu;
        // 0x116320: 0x261067b0  addiu       $s0, $s0, 0x67B0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 26544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11631c) {
            ctx->pc = 0x1163F0u;
            return;
        }
    }
    ctx->pc = 0x116324u;
}
