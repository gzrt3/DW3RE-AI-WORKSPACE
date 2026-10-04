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

// Function: entry_0017ff9c
// Address: 0x17ff9c - 0x17ffc0
void entry_0017ff9c_0x17ff9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017ff9c_0x17ff9c");
#endif

    switch (ctx->pc) {
        case 0x17ffb4u: goto label_17ffb4;
        default: break;
    }

    ctx->pc = 0x17ff9cu;

label_17ff9c:
    // 0x17ff9c: 0x0  nop
    ctx->pc = 0x17ff9cu;
    // NOP
    // 0x17ffa0: 0x3c06002d  lui         $a2, 0x2D
    ctx->pc = 0x17ffa0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)45 << 16));
    // 0x17ffa4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x17ffa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17ffa8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17ffa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ffac: 0xc06b170  jal         func_1AC5C0
    ctx->pc = 0x17FFACu;
    SET_GPR_U32(ctx, 31, 0x17FFB4u);
    ctx->pc = 0x17FFB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17FFACu;
    // 0x17ffb0: 0x24c69840  addiu       $a2, $a2, -0x67C0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AC5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AC5C0u, 0x17FFACu, 0x17FFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17FFB4u;
label_17ffb4:
    // 0x17ffb4: 0x440fff9  bltz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x17FFB4u;
    {
        const bool branch_taken_0x17ffb4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x17ffb4) {
            ctx->pc = 0x17FF9Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17ff9c;
        }
    }
    ctx->pc = 0x17FFBCu;
    // 0x17ffbc: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x17ffbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->pc = 0x17ffc0u;
}
