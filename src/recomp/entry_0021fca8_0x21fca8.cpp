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

// Function: entry_0021fca8
// Address: 0x21fca8 - 0x21fcc8
void entry_0021fca8_0x21fca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021fca8_0x21fca8");
#endif

    switch (ctx->pc) {
        case 0x21fcb0u: goto label_21fcb0;
        case 0x21fcc0u: goto label_21fcc0;
        default: break;
    }

    ctx->pc = 0x21fca8u;

    // 0x21fca8: 0xc084af4  jal         func_212BD0
    ctx->pc = 0x21FCA8u;
    SET_GPR_U32(ctx, 31, 0x21FCB0u);
    ctx->pc = 0x21FCACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FCA8u;
    // 0x21fcac: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212BD0u, 0x21FCA8u, 0x21FCB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FCB0u;
label_21fcb0:
    // 0x21fcb0: 0x104001f7  beqz        $v0, . + 4 + (0x1F7 << 2)
    ctx->pc = 0x21FCB0u;
    {
        const bool branch_taken_0x21fcb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FCB0u;
        // 0x21fcb4: 0x2404003a  addiu       $a0, $zero, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21fcb0) {
            ctx->pc = 0x220490u;
            return;
        }
    }
    ctx->pc = 0x21FCB8u;
    // 0x21fcb8: 0xc0882f8  jal         func_220BE0
    ctx->pc = 0x21FCB8u;
    SET_GPR_U32(ctx, 31, 0x21FCC0u);
    ctx->pc = 0x21FCBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21FCB8u;
    // 0x21fcbc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x220BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x220BE0u, 0x21FCB8u, 0x21FCC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21FCC0u;
label_21fcc0:
    // 0x21fcc0: 0x100001f3  b           . + 4 + (0x1F3 << 2)
    ctx->pc = 0x21FCC0u;
    {
        const bool branch_taken_0x21fcc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21fcc0) {
            ctx->pc = 0x220490u;
            return;
        }
    }
    ctx->pc = 0x21FCC8u;
}
