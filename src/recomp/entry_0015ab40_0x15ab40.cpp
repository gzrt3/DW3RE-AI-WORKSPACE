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

// Function: entry_0015ab40
// Address: 0x15ab40 - 0x15ab58
void entry_0015ab40_0x15ab40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015ab40_0x15ab40");
#endif

    switch (ctx->pc) {
        case 0x15ab48u: goto label_15ab48;
        default: break;
    }

    ctx->pc = 0x15ab40u;

    // 0x15ab40: 0xc084af4  jal         func_212BD0
    ctx->pc = 0x15AB40u;
    SET_GPR_U32(ctx, 31, 0x15AB48u);
    ctx->pc = 0x212BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212BD0u, 0x15AB40u, 0x15AB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AB48u;
label_15ab48:
    // 0x15ab48: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15AB48u;
    {
        const bool branch_taken_0x15ab48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ab48) {
            ctx->pc = 0x15AB58u;
            return;
        }
    }
    ctx->pc = 0x15AB50u;
    // 0x15ab50: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x15AB50u;
    {
        const bool branch_taken_0x15ab50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AB50u;
        // 0x15ab54: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ab50) {
            ctx->pc = 0x15AB64u;
            return;
        }
    }
    ctx->pc = 0x15AB58u;
}
