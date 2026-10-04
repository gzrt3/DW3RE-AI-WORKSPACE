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

// Function: entry_00116374
// Address: 0x116374 - 0x116384
void entry_00116374_0x116374(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116374_0x116374");
#endif

    ctx->pc = 0x116374u;

    // 0x116374: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x116374u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x116378: 0x28e20014  slti        $v0, $a3, 0x14
    ctx->pc = 0x116378u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x11637c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x11637Cu;
    {
        const bool branch_taken_0x11637c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x116380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11637Cu;
        // 0x116380: 0xa71021  addu        $v0, $a1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11637c) {
            ctx->pc = 0x116358u;
            return;
        }
    }
    ctx->pc = 0x116384u;
}
