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

// Function: entry_001e45c8
// Address: 0x1e45c8 - 0x1e45e0
void entry_001e45c8_0x1e45c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e45c8_0x1e45c8");
#endif

    ctx->pc = 0x1e45c8u;

    // 0x1e45c8: 0x10c1821  addu        $v1, $t0, $t4
    ctx->pc = 0x1e45c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 12)));
    // 0x1e45cc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1e45ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e45d0: 0x15430003  bne         $t2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E45D0u;
    {
        const bool branch_taken_0x1e45d0 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e45d0) {
            ctx->pc = 0x1E45E0u;
            return;
        }
    }
    ctx->pc = 0x1E45D8u;
    // 0x1e45d8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1E45D8u;
    {
        const bool branch_taken_0x1e45d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E45DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E45D8u;
        // 0x1e45dc: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e45d8) {
            ctx->pc = 0x1E45F4u;
            return;
        }
    }
    ctx->pc = 0x1E45E0u;
}
