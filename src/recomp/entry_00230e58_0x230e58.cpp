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

// Function: entry_00230e58
// Address: 0x230e58 - 0x230e70
void entry_00230e58_0x230e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00230e58_0x230e58");
#endif

    switch (ctx->pc) {
        case 0x230e60u: goto label_230e60;
        default: break;
    }

    ctx->pc = 0x230e58u;

label_230e58:
    // 0x230e58: 0xc06c2e2  jal         func_1B0B88
    ctx->pc = 0x230E58u;
    SET_GPR_U32(ctx, 31, 0x230E60u);
    ctx->pc = 0x1B0B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0B88u, 0x230E58u, 0x230E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230E60u;
label_230e60:
    // 0x230e60: 0x1040fffd  beqz        $v0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x230E60u;
    {
        const bool branch_taken_0x230e60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230E60u;
        // 0x230e64: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230e60) {
            ctx->pc = 0x230E58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_230e58;
        }
    }
    ctx->pc = 0x230E68u;
    // 0x230e68: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x230E68u;
    {
        const bool branch_taken_0x230e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x230e68) {
            ctx->pc = 0x230E98u;
            return;
        }
    }
    ctx->pc = 0x230E70u;
}
