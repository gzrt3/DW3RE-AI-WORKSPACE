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

// Function: entry_001e47ac
// Address: 0x1e47ac - 0x1e47c8
void entry_001e47ac_0x1e47ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e47ac_0x1e47ac");
#endif

    ctx->pc = 0x1e47acu;

    // 0x1e47ac: 0x0  nop
    ctx->pc = 0x1e47acu;
    // NOP
    // 0x1e47b0: 0x1091821  addu        $v1, $t0, $t1
    ctx->pc = 0x1e47b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x1e47b4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1e47b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e47b8: 0x15630003  bne         $t3, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E47B8u;
    {
        const bool branch_taken_0x1e47b8 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e47b8) {
            ctx->pc = 0x1E47C8u;
            return;
        }
    }
    ctx->pc = 0x1E47C0u;
    // 0x1e47c0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1E47C0u;
    {
        const bool branch_taken_0x1e47c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E47C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E47C0u;
        // 0x1e47c4: 0x240c0001  addiu       $t4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e47c0) {
            ctx->pc = 0x1E47DCu;
            return;
        }
    }
    ctx->pc = 0x1E47C8u;
}
