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

// Function: entry_00100988
// Address: 0x100988 - 0x100994
void entry_00100988_0x100988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00100988_0x100988");
#endif

    switch (ctx->pc) {
        case 0x100990u: goto label_100990;
        default: break;
    }

    ctx->pc = 0x100988u;

    // 0x100988: 0xc0415a4  jal         func_105690
    ctx->pc = 0x100988u;
    SET_GPR_U32(ctx, 31, 0x100990u);
    ctx->pc = 0x10098Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100988u;
    // 0x10098c: 0x27858458  addiu       $a1, $gp, -0x7BA8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105690u, 0x100988u, 0x100990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100990u;
label_100990:
    // 0x100990: 0x8f82863c  lw          $v0, -0x79C4($gp)
    ctx->pc = 0x100990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936124)));
    ctx->pc = 0x100994u;
}
