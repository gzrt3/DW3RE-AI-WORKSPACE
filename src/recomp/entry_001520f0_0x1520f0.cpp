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

// Function: entry_001520f0
// Address: 0x1520f0 - 0x152108
void entry_001520f0_0x1520f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001520f0_0x1520f0");
#endif

    ctx->pc = 0x1520f0u;

    // 0x1520f0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1520F0u;
    {
        const bool branch_taken_0x1520f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1520F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1520F0u;
        // 0x1520f4: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1520f0) {
            ctx->pc = 0x152108u;
            return;
        }
    }
    ctx->pc = 0x1520F8u;
    // 0x1520f8: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x1520f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x1520fc: 0x24100018  addiu       $s0, $zero, 0x18
    ctx->pc = 0x1520fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x152100: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x152100u;
    {
        const bool branch_taken_0x152100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x152104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152100u;
        // 0x152104: 0x24422520  addiu       $v0, $v0, 0x2520 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9504));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152100) {
            ctx->pc = 0x152164u;
            return;
        }
    }
    ctx->pc = 0x152108u;
}
