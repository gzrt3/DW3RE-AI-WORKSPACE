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

// Function: entry_001c4f64
// Address: 0x1c4f64 - 0x1c4f7c
void entry_001c4f64_0x1c4f64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c4f64_0x1c4f64");
#endif

    ctx->pc = 0x1c4f64u;

    // 0x1c4f64: 0xa74021  addu        $t0, $a1, $a3
    ctx->pc = 0x1c4f64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x1c4f68: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1c4f68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1c4f6c: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C4F6Cu;
    {
        const bool branch_taken_0x1c4f6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1c4f6c) {
            ctx->pc = 0x1C4F7Cu;
            return;
        }
    }
    ctx->pc = 0x1C4F74u;
    // 0x1c4f74: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1C4F74u;
    {
        const bool branch_taken_0x1c4f74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4F74u;
        // 0x1c4f78: 0xa1000000  sb          $zero, 0x0($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4f74) {
            ctx->pc = 0x1C4F90u;
            return;
        }
    }
    ctx->pc = 0x1C4F7Cu;
}
