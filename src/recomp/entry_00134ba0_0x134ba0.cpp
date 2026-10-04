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

// Function: entry_00134ba0
// Address: 0x134ba0 - 0x134bb0
void entry_00134ba0_0x134ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134ba0_0x134ba0");
#endif

    switch (ctx->pc) {
        case 0x134ba8u: goto label_134ba8;
        default: break;
    }

    ctx->pc = 0x134ba0u;

    // 0x134ba0: 0xc088f1c  jal         func_223C70
    ctx->pc = 0x134BA0u;
    SET_GPR_U32(ctx, 31, 0x134BA8u);
    ctx->pc = 0x134BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134BA0u;
    // 0x134ba4: 0x86040002  lh          $a0, 0x2($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223C70u, 0x134BA0u, 0x134BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134BA8u;
label_134ba8:
    // 0x134ba8: 0x100000a5  b           . + 4 + (0xA5 << 2)
    ctx->pc = 0x134BA8u;
    {
        const bool branch_taken_0x134ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134ba8) {
            ctx->pc = 0x134E40u;
            return;
        }
    }
    ctx->pc = 0x134BB0u;
}
