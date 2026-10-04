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

// Function: entry_001c88e0
// Address: 0x1c88e0 - 0x1c88f4
void entry_001c88e0_0x1c88e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c88e0_0x1c88e0");
#endif

    ctx->pc = 0x1c88e0u;

    // 0x1c88e0: 0x24020c2d  addiu       $v0, $zero, 0xC2D
    ctx->pc = 0x1c88e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3117));
    // 0x1c88e4: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C88E4u;
    {
        const bool branch_taken_0x1c88e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C88E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C88E4u;
        // 0x1c88e8: 0x3c020029  lui         $v0, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c88e4) {
            ctx->pc = 0x1C88F4u;
            return;
        }
    }
    ctx->pc = 0x1C88ECu;
    // 0x1c88ec: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1C88ECu;
    {
        const bool branch_taken_0x1c88ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C88F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C88ECu;
        // 0x1c88f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c88ec) {
            ctx->pc = 0x1C8908u;
            return;
        }
    }
    ctx->pc = 0x1C88F4u;
}
