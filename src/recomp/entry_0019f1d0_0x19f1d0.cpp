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

// Function: entry_0019f1d0
// Address: 0x19f1d0 - 0x19f1e4
void entry_0019f1d0_0x19f1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f1d0_0x19f1d0");
#endif

    ctx->pc = 0x19f1d0u;

    // 0x19f1d0: 0x12c00004  beqz        $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x19F1D0u;
    {
        const bool branch_taken_0x19f1d0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F1D0u;
        // 0x19f1d4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f1d0) {
            ctx->pc = 0x19F1E4u;
            return;
        }
    }
    ctx->pc = 0x19F1D8u;
    // 0x19f1d8: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x19f1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x19f1dc: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x19f1dcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x19f1e0: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x19f1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    ctx->pc = 0x19f1e4u;
}
