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

// Function: entry_0023f7f0
// Address: 0x23f7f0 - 0x23f804
void entry_0023f7f0_0x23f7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023f7f0_0x23f7f0");
#endif

    switch (ctx->pc) {
        case 0x23f7fcu: goto label_23f7fc;
        default: break;
    }

    ctx->pc = 0x23f7f0u;

    // 0x23f7f0: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x23f7f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
    // 0x23f7f4: 0xc07aaa8  jal         func_1EAAA0
    ctx->pc = 0x23F7F4u;
    SET_GPR_U32(ctx, 31, 0x23F7FCu);
    ctx->pc = 0x23F7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F7F4u;
    // 0x23f7f8: 0x8c24c980  lw          $a0, -0x3680($at) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953344)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAAA0u, 0x23F7F4u, 0x23F7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F7FCu;
label_23f7fc:
    // 0x23f7fc: 0x100000b4  b           . + 4 + (0xB4 << 2)
    ctx->pc = 0x23F7FCu;
    {
        const bool branch_taken_0x23f7fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F7FCu;
        // 0x23f800: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f7fc) {
            ctx->pc = 0x23FAD0u;
            return;
        }
    }
    ctx->pc = 0x23F804u;
}
