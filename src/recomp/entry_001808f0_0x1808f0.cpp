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

// Function: entry_001808f0
// Address: 0x1808f0 - 0x180908
void entry_001808f0_0x1808f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001808f0_0x1808f0");
#endif

    switch (ctx->pc) {
        case 0x180900u: goto label_180900;
        default: break;
    }

    ctx->pc = 0x1808f0u;

label_1808f0:
    // 0x1808f0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1808f4:
    if (ctx->pc == 0x1808F4u) {
        ctx->pc = 0x1808F8u;
        goto label_1808f8;
    }
    ctx->pc = 0x1808F0u;
    {
        const bool branch_taken_0x1808f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1808f0) {
            ctx->pc = 0x180908u;
            return;
        }
    }
    ctx->pc = 0x1808F8u;
label_1808f8:
    // 0x1808f8: 0x40f809  jalr        $v0
label_1808fc:
    if (ctx->pc == 0x1808FCu) {
        ctx->pc = 0x180900u;
        goto label_180900;
    }
    ctx->pc = 0x1808F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x180900u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1808F8u, 0x180900u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x180900u;
label_180900:
    // 0x180900: 0x10000004  b           . + 4 + (0x4 << 2)
label_180904:
    if (ctx->pc == 0x180904u) {
        ctx->pc = 0x180904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180900u;
        // 0x180904: 0x8f848304  lw          $a0, -0x7CFC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935300)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180908u;
        goto label_fallthrough_0x180900;
    }
    ctx->pc = 0x180900u;
    {
        const bool branch_taken_0x180900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180900u;
        // 0x180904: 0x8f848304  lw          $a0, -0x7CFC($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935300)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180900) {
            ctx->pc = 0x180914u;
            return;
        }
    }
label_fallthrough_0x180900:
    ctx->pc = 0x180908u;
}
