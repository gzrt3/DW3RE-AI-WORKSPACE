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

// Function: entry_0023fa44
// Address: 0x23fa44 - 0x23fa58
void entry_0023fa44_0x23fa44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023fa44_0x23fa44");
#endif

    ctx->pc = 0x23fa44u;

    // 0x23fa44: 0x0  nop
    ctx->pc = 0x23fa44u;
    // NOP
    // 0x23fa48: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x23FA48u;
    {
        const bool branch_taken_0x23fa48 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x23FA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23FA48u;
        // 0x23fa4c: 0x24140009  addiu       $s4, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23fa48) {
            ctx->pc = 0x23FA58u;
            return;
        }
    }
    ctx->pc = 0x23FA50u;
    // 0x23fa50: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x23FA50u;
    {
        const bool branch_taken_0x23fa50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23fa50) {
            ctx->pc = 0x23FAD0u;
            return;
        }
    }
    ctx->pc = 0x23FA58u;
}
