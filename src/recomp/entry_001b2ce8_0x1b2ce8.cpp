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

// Function: entry_001b2ce8
// Address: 0x1b2ce8 - 0x1b2d0c
void entry_001b2ce8_0x1b2ce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b2ce8_0x1b2ce8");
#endif

    switch (ctx->pc) {
        case 0x1b2cfcu: goto label_1b2cfc;
        case 0x1b2d04u: goto label_1b2d04;
        default: break;
    }

    ctx->pc = 0x1b2ce8u;

    // 0x1b2ce8: 0x0  nop
    ctx->pc = 0x1b2ce8u;
    // NOP
    // 0x1b2cec: 0x0  nop
    ctx->pc = 0x1b2cecu;
    // NOP
    // 0x1b2cf0: 0x460d0b03  div.s       $f12, $f1, $f13
    ctx->pc = 0x1b2cf0u;
    if (ctx->f[13] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[12] = ctx->f[1] / ctx->f[13];
    // 0x1b2cf4: 0xc06d448  jal         func_1B5120
    ctx->pc = 0x1B2CF4u;
    SET_GPR_U32(ctx, 31, 0x1B2CFCu);
    ctx->pc = 0x1B5120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5120u, 0x1B2CF4u, 0x1B2CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2CFCu;
label_1b2cfc:
    // 0x1b2cfc: 0xc06d35a  jal         func_1B4D68
    ctx->pc = 0x1B2CFCu;
    SET_GPR_U32(ctx, 31, 0x1B2D04u);
    ctx->pc = 0x1B2D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2CFCu;
    // 0x1b2d00: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4D68u, 0x1B2CFCu, 0x1B2D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2D04u;
label_1b2d04:
    // 0x1b2d04: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x1b2d04u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x1b2d08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b2d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1b2d0cu;
}
