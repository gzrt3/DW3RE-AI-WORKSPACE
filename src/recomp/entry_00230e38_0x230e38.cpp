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

// Function: entry_00230e38
// Address: 0x230e38 - 0x230e58
void entry_00230e38_0x230e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00230e38_0x230e38");
#endif

    switch (ctx->pc) {
        case 0x230e48u: goto label_230e48;
        default: break;
    }

    ctx->pc = 0x230e38u;

    // 0x230e38: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x230e38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x230e3c: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x230e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x230e40: 0xc06c2f0  jal         func_1B0BC0
    ctx->pc = 0x230E40u;
    SET_GPR_U32(ctx, 31, 0x230E48u);
    ctx->pc = 0x230E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230E40u;
    // 0x230e44: 0x27a70004  addiu       $a3, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0BC0u, 0x230E40u, 0x230E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230E48u;
label_230e48:
    // 0x230e48: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x230e48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230e4c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x230e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x230e50: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x230E50u;
    {
        const bool branch_taken_0x230e50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230E50u;
        // 0x230e54: 0x8f8382d0  lw          $v1, -0x7D30($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230e50) {
            ctx->pc = 0x230ED4u;
            return;
        }
    }
    ctx->pc = 0x230E58u;
}
