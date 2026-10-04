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

// Function: entry_001ecca0
// Address: 0x1ecca0 - 0x1eccc0
void entry_001ecca0_0x1ecca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ecca0_0x1ecca0");
#endif

    switch (ctx->pc) {
        case 0x1ecca8u: goto label_1ecca8;
        case 0x1eccb0u: goto label_1eccb0;
        default: break;
    }

    ctx->pc = 0x1ecca0u;

    // 0x1ecca0: 0xc07ab58  jal         func_1EAD60
    ctx->pc = 0x1ECCA0u;
    SET_GPR_U32(ctx, 31, 0x1ECCA8u);
    ctx->pc = 0x1EAD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAD60u, 0x1ECCA0u, 0x1ECCA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECCA8u;
label_1ecca8:
    // 0x1ecca8: 0xc04e19c  jal         func_138670
    ctx->pc = 0x1ECCA8u;
    SET_GPR_U32(ctx, 31, 0x1ECCB0u);
    ctx->pc = 0x138670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138670u, 0x1ECCA8u, 0x1ECCB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECCB0u;
label_1eccb0:
    // 0x1eccb0: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ECCB0u;
    {
        const bool branch_taken_0x1eccb0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECCB0u;
        // 0x1eccb4: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eccb0) {
            ctx->pc = 0x1ECCC0u;
            return;
        }
    }
    ctx->pc = 0x1ECCB8u;
    // 0x1eccb8: 0x16230005  bne         $s1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1ECCB8u;
    {
        const bool branch_taken_0x1eccb8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x1eccb8) {
            ctx->pc = 0x1ECCD0u;
            return;
        }
    }
    ctx->pc = 0x1ECCC0u;
}
