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

// Function: entry_001b79d0
// Address: 0x1b79d0 - 0x1b79e8
void entry_001b79d0_0x1b79d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b79d0_0x1b79d0");
#endif

    ctx->pc = 0x1b79d0u;

    // 0x1b79d0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B79D0u;
    {
        const bool branch_taken_0x1b79d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B79D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B79D0u;
        // 0x1b79d4: 0x38a20002  xori        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b79d0) {
            ctx->pc = 0x1B79E8u;
            return;
        }
    }
    ctx->pc = 0x1B79D8u;
    // 0x1b79d8: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x1b79d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x1b79dc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b79dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b79e0: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x1B79E0u;
    {
        const bool branch_taken_0x1b79e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B79E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B79E0u;
        // 0x1b79e4: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b79e0) {
            ctx->pc = 0x1B7A9Cu;
            return;
        }
    }
    ctx->pc = 0x1B79E8u;
}
