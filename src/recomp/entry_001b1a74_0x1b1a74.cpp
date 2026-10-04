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

// Function: entry_001b1a74
// Address: 0x1b1a74 - 0x1b1a84
void entry_001b1a74_0x1b1a74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1a74_0x1b1a74");
#endif

    switch (ctx->pc) {
        case 0x1b1a80u: goto label_1b1a80;
        default: break;
    }

    ctx->pc = 0x1b1a74u;

    // 0x1b1a74: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x1b1a74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x1b1a78: 0xc069210  jal         func_1A4840
    ctx->pc = 0x1B1A78u;
    SET_GPR_U32(ctx, 31, 0x1B1A80u);
    ctx->pc = 0x1B1A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1A78u;
    // 0x1b1a7c: 0x8c448d0c  lw          $a0, -0x72F4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x1B1A78u, 0x1B1A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1A80u;
label_1b1a80:
    // 0x1b1a80: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b1a80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1b1a84u;
}
