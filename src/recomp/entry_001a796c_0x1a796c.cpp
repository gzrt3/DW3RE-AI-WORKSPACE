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

// Function: entry_001a796c
// Address: 0x1a796c - 0x1a797c
void entry_001a796c_0x1a796c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a796c_0x1a796c");
#endif

    ctx->pc = 0x1a796cu;

    // 0x1a796c: 0x1a400003  blez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A796Cu;
    {
        const bool branch_taken_0x1a796c = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x1A7970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A796Cu;
        // 0x1a7970: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a796c) {
            ctx->pc = 0x1A797Cu;
            return;
        }
    }
    ctx->pc = 0x1A7974u;
    // 0x1a7974: 0xc069bee  jal         func_1A6FB8
    ctx->pc = 0x1A7974u;
    SET_GPR_U32(ctx, 31, 0x1A797Cu);
    ctx->pc = 0x1A7978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7974u;
    // 0x1a7978: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6FB8u, 0x1A7974u, 0x1A797Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A797Cu;
}
