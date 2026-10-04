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

// Function: entry_001a797c
// Address: 0x1a797c - 0x1a798c
void entry_001a797c_0x1a797c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a797c_0x1a797c");
#endif

    ctx->pc = 0x1a797cu;

    // 0x1a797c: 0x1a600003  blez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A797Cu;
    {
        const bool branch_taken_0x1a797c = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x1A7980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A797Cu;
        // 0x1a7980: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a797c) {
            ctx->pc = 0x1A798Cu;
            return;
        }
    }
    ctx->pc = 0x1A7984u;
    // 0x1a7984: 0xc069bee  jal         func_1A6FB8
    ctx->pc = 0x1A7984u;
    SET_GPR_U32(ctx, 31, 0x1A798Cu);
    ctx->pc = 0x1A7988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7984u;
    // 0x1a7988: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6FB8u, 0x1A7984u, 0x1A798Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A798Cu;
}
