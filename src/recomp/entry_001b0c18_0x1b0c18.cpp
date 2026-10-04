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

// Function: entry_001b0c18
// Address: 0x1b0c18 - 0x1b0c30
void entry_001b0c18_0x1b0c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0c18_0x1b0c18");
#endif

    ctx->pc = 0x1b0c18u;

    // 0x1b0c18: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1b0c18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x1b0c1c: 0x8c438cf0  lw          $v1, -0x7310($v0)
    ctx->pc = 0x1b0c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x288CF0u));
    // 0x1b0c20: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B0C20u;
    {
        const bool branch_taken_0x1b0c20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B0C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0C20u;
        // 0x1b0c24: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0c20) {
            ctx->pc = 0x1B0C30u;
            return;
        }
    }
    ctx->pc = 0x1B0C28u;
    // 0x1b0c28: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x1B0C28u;
    {
        const bool branch_taken_0x1b0c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0C28u;
        // 0x1b0c2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0c28) {
            ctx->pc = 0x1B0D18u;
            return;
        }
    }
    ctx->pc = 0x1B0C30u;
}
