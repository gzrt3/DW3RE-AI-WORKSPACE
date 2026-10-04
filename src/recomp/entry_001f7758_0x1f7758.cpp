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

// Function: entry_001f7758
// Address: 0x1f7758 - 0x1f7770
void entry_001f7758_0x1f7758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f7758_0x1f7758");
#endif

    switch (ctx->pc) {
        case 0x1f7768u: goto label_1f7768;
        default: break;
    }

    ctx->pc = 0x1f7758u;

    // 0x1f7758: 0x14e00005  bnez        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F7758u;
    {
        const bool branch_taken_0x1f7758 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f7758) {
            ctx->pc = 0x1F7770u;
            return;
        }
    }
    ctx->pc = 0x1F7760u;
    // 0x1f7760: 0xc07b48c  jal         func_1ED230
    ctx->pc = 0x1F7760u;
    SET_GPR_U32(ctx, 31, 0x1F7768u);
    ctx->pc = 0x1ED230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED230u, 0x1F7760u, 0x1F7768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7768u;
label_1f7768:
    // 0x1f7768: 0x1000ffc3  b           . + 4 + (-0x3D << 2)
    ctx->pc = 0x1F7768u;
    {
        const bool branch_taken_0x1f7768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F776Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7768u;
        // 0x1f776c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7768) {
            ctx->pc = 0x1F7678u;
            return;
        }
    }
    ctx->pc = 0x1F7770u;
}
