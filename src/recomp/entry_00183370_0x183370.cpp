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

// Function: entry_00183370
// Address: 0x183370 - 0x18338c
void entry_00183370_0x183370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00183370_0x183370");
#endif

    switch (ctx->pc) {
        case 0x183384u: goto label_183384;
        default: break;
    }

    ctx->pc = 0x183370u;

    // 0x183370: 0x14e30006  bne         $a3, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x183370u;
    {
        const bool branch_taken_0x183370 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x183370) {
            ctx->pc = 0x18338Cu;
            return;
        }
    }
    ctx->pc = 0x183378u;
    // 0x183378: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x183378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18337c: 0xc061084  jal         func_184210
    ctx->pc = 0x18337Cu;
    SET_GPR_U32(ctx, 31, 0x183384u);
    ctx->pc = 0x183380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18337Cu;
    // 0x183380: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x184210u, 0x18337Cu, 0x183384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x183384u;
label_183384:
    // 0x183384: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x183384u;
    {
        const bool branch_taken_0x183384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x183384) {
            ctx->pc = 0x1833ACu;
            return;
        }
    }
    ctx->pc = 0x18338Cu;
}
