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

// Function: entry_0015aa54
// Address: 0x15aa54 - 0x15aa6c
void entry_0015aa54_0x15aa54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015aa54_0x15aa54");
#endif

    switch (ctx->pc) {
        case 0x15aa5cu: goto label_15aa5c;
        default: break;
    }

    ctx->pc = 0x15aa54u;

    // 0x15aa54: 0xc084af4  jal         func_212BD0
    ctx->pc = 0x15AA54u;
    SET_GPR_U32(ctx, 31, 0x15AA5Cu);
    ctx->pc = 0x212BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212BD0u, 0x15AA54u, 0x15AA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AA5Cu;
label_15aa5c:
    // 0x15aa5c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15AA5Cu;
    {
        const bool branch_taken_0x15aa5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15aa5c) {
            ctx->pc = 0x15AA6Cu;
            return;
        }
    }
    ctx->pc = 0x15AA64u;
    // 0x15aa64: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x15AA64u;
    {
        const bool branch_taken_0x15aa64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AA64u;
        // 0x15aa68: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aa64) {
            ctx->pc = 0x15AB64u;
            return;
        }
    }
    ctx->pc = 0x15AA6Cu;
}
