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

// Function: entry_002360b0
// Address: 0x2360b0 - 0x2360bc
void entry_002360b0_0x2360b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002360b0_0x2360b0");
#endif

    switch (ctx->pc) {
        case 0x2360b8u: goto label_2360b8;
        default: break;
    }

    ctx->pc = 0x2360b0u;

    // 0x2360b0: 0xc069210  jal         func_1A4840
    ctx->pc = 0x2360B0u;
    SET_GPR_U32(ctx, 31, 0x2360B8u);
    ctx->pc = 0x2360B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2360B0u;
    // 0x2360b4: 0x8f8482f0  lw          $a0, -0x7D10($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935280)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x2360B0u, 0x2360B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2360B8u;
label_2360b8:
    // 0x2360b8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2360b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2360bcu;
}
