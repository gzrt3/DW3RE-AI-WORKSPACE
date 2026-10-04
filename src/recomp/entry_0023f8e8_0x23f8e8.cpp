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

// Function: entry_0023f8e8
// Address: 0x23f8e8 - 0x23f90c
void entry_0023f8e8_0x23f8e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023f8e8_0x23f8e8");
#endif

    switch (ctx->pc) {
        case 0x23f8f0u: goto label_23f8f0;
        case 0x23f904u: goto label_23f904;
        default: break;
    }

    ctx->pc = 0x23f8e8u;

    // 0x23f8e8: 0xc06c1da  jal         func_1B0768
    ctx->pc = 0x23F8E8u;
    SET_GPR_U32(ctx, 31, 0x23F8F0u);
    ctx->pc = 0x1B0768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0768u, 0x23F8E8u, 0x23F8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F8F0u;
label_23f8f0:
    // 0x23f8f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23f8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23f8f4: 0x10430076  beq         $v0, $v1, . + 4 + (0x76 << 2)
    ctx->pc = 0x23F8F4u;
    {
        const bool branch_taken_0x23f8f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x23F8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F8F4u;
        // 0x23f8f8: 0x3c01002a  lui         $at, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f8f4) {
            ctx->pc = 0x23FAD0u;
            return;
        }
    }
    ctx->pc = 0x23F8FCu;
    // 0x23f8fc: 0xc07aaa8  jal         func_1EAAA0
    ctx->pc = 0x23F8FCu;
    SET_GPR_U32(ctx, 31, 0x23F904u);
    ctx->pc = 0x23F900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F8FCu;
    // 0x23f900: 0x8c24c978  lw          $a0, -0x3688($at) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953336)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAAA0u, 0x23F8FCu, 0x23F904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F904u;
label_23f904:
    // 0x23f904: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x23F904u;
    {
        const bool branch_taken_0x23f904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23F908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F904u;
        // 0x23f908: 0x24140006  addiu       $s4, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23f904) {
            ctx->pc = 0x23FAD0u;
            return;
        }
    }
    ctx->pc = 0x23F90Cu;
}
