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

// Function: entry_001e0b28
// Address: 0x1e0b28 - 0x1e0b38
void entry_001e0b28_0x1e0b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e0b28_0x1e0b28");
#endif

    ctx->pc = 0x1e0b28u;

    // 0x1e0b28: 0x4e10003  bgez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E0B28u;
    {
        const bool branch_taken_0x1e0b28 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x1E0B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0B28u;
        // 0x1e0b2c: 0x71883  sra         $v1, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0b28) {
            ctx->pc = 0x1E0B38u;
            return;
        }
    }
    ctx->pc = 0x1E0B30u;
    // 0x1e0b30: 0x24e30003  addiu       $v1, $a3, 0x3
    ctx->pc = 0x1e0b30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
    // 0x1e0b34: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x1e0b34u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    ctx->pc = 0x1e0b38u;
}
