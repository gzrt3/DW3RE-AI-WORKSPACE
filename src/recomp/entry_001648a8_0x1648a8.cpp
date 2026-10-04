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

// Function: entry_001648a8
// Address: 0x1648a8 - 0x1648bc
void entry_001648a8_0x1648a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001648a8_0x1648a8");
#endif

    ctx->pc = 0x1648a8u;

    // 0x1648a8: 0x14c40004  bne         $a2, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1648A8u;
    {
        const bool branch_taken_0x1648a8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        if (branch_taken_0x1648a8) {
            ctx->pc = 0x1648BCu;
            return;
        }
    }
    ctx->pc = 0x1648B0u;
    // 0x1648b0: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x1648b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1648b4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1648B4u;
    {
        const bool branch_taken_0x1648b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1648B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1648B4u;
        // 0x1648b8: 0xacc0000c  sw          $zero, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1648b4) {
            ctx->pc = 0x1648E8u;
            return;
        }
    }
    ctx->pc = 0x1648BCu;
}
