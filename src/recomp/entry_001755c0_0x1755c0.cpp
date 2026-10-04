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

// Function: entry_001755c0
// Address: 0x1755c0 - 0x1755d0
void entry_001755c0_0x1755c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001755c0_0x1755c0");
#endif

    ctx->pc = 0x1755c0u;

    // 0x1755c0: 0x14c30003  bne         $a2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1755C0u;
    {
        const bool branch_taken_0x1755c0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x1755C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1755C0u;
        // 0x1755c4: 0x240704e2  addiu       $a3, $zero, 0x4E2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1250));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1755c0) {
            ctx->pc = 0x1755D0u;
            return;
        }
    }
    ctx->pc = 0x1755C8u;
    // 0x1755c8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1755C8u;
    {
        const bool branch_taken_0x1755c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1755c8) {
            ctx->pc = 0x1755E4u;
            return;
        }
    }
    ctx->pc = 0x1755D0u;
}
