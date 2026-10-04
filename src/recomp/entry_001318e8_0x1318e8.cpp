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

// Function: entry_001318e8
// Address: 0x1318e8 - 0x1318fc
void entry_001318e8_0x1318e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001318e8_0x1318e8");
#endif

    ctx->pc = 0x1318e8u;

    // 0x1318e8: 0x84820004  lh          $v0, 0x4($a0)
    ctx->pc = 0x1318e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1318ec: 0x15820003  bne         $t4, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1318ECu;
    {
        const bool branch_taken_0x1318ec = (GPR_U64(ctx, 12) != GPR_U64(ctx, 2));
        ctx->pc = 0x1318F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1318ECu;
        // 0x1318f0: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1318ec) {
            ctx->pc = 0x1318FCu;
            return;
        }
    }
    ctx->pc = 0x1318F4u;
    // 0x1318f4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1318F4u;
    {
        const bool branch_taken_0x1318f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1318f4) {
            ctx->pc = 0x131908u;
            return;
        }
    }
    ctx->pc = 0x1318FCu;
}
