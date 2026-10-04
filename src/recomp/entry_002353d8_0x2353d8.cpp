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

// Function: entry_002353d8
// Address: 0x2353d8 - 0x2353e4
void entry_002353d8_0x2353d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002353d8_0x2353d8");
#endif

    switch (ctx->pc) {
        case 0x2353e0u: goto label_2353e0;
        default: break;
    }

    ctx->pc = 0x2353d8u;

    // 0x2353d8: 0xc069210  jal         func_1A4840
    ctx->pc = 0x2353D8u;
    SET_GPR_U32(ctx, 31, 0x2353E0u);
    ctx->pc = 0x2353DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2353D8u;
    // 0x2353dc: 0x8f8482e4  lw          $a0, -0x7D1C($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x2353D8u, 0x2353E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2353E0u;
label_2353e0:
    // 0x2353e0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2353e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2353e4u;
}
