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

// Function: entry_001648bc
// Address: 0x1648bc - 0x1648d0
void entry_001648bc_0x1648bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001648bc_0x1648bc");
#endif

    ctx->pc = 0x1648bcu;

    // 0x1648bc: 0x14e40004  bne         $a3, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1648BCu;
    {
        const bool branch_taken_0x1648bc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 4));
        if (branch_taken_0x1648bc) {
            ctx->pc = 0x1648D0u;
            return;
        }
    }
    ctx->pc = 0x1648C4u;
    // 0x1648c4: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x1648c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1648c8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1648C8u;
    {
        const bool branch_taken_0x1648c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1648CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1648C8u;
        // 0x1648cc: 0xace00008  sw          $zero, 0x8($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1648c8) {
            ctx->pc = 0x1648E8u;
            return;
        }
    }
    ctx->pc = 0x1648D0u;
}
