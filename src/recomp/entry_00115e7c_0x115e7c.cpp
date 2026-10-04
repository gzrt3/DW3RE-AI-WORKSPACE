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

// Function: entry_00115e7c
// Address: 0x115e7c - 0x115eac
void entry_00115e7c_0x115e7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00115e7c_0x115e7c");
#endif

    switch (ctx->pc) {
        case 0x115e88u: goto label_115e88;
        default: break;
    }

    ctx->pc = 0x115e7cu;

    // 0x115e7c: 0x0  nop
    ctx->pc = 0x115e7cu;
    // NOP
    // 0x115e80: 0xc044f58  jal         func_113D60
    ctx->pc = 0x115E80u;
    SET_GPR_U32(ctx, 31, 0x115E88u);
    ctx->pc = 0x113D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113D60u, 0x115E80u, 0x115E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115E88u;
label_115e88:
    // 0x115e88: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x115e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x115e8c: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x115e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x115e90: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x115e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x115e94: 0xae030028  sw          $v1, 0x28($s0)
    ctx->pc = 0x115e94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
    // 0x115e98: 0x8604003c  lh          $a0, 0x3C($s0)
    ctx->pc = 0x115e98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x115e9c: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x115e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x115ea0: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x115ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x115ea4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x115ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x115ea8: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x115ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    ctx->pc = 0x115eacu;
}
