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

// Function: entry_00203f28
// Address: 0x203f28 - 0x203f3c
void entry_00203f28_0x203f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00203f28_0x203f28");
#endif

    switch (ctx->pc) {
        case 0x203f30u: goto label_203f30;
        default: break;
    }

    ctx->pc = 0x203f28u;

    // 0x203f28: 0xc08f0cc  jal         func_23C330
    ctx->pc = 0x203F28u;
    SET_GPR_U32(ctx, 31, 0x203F30u);
    ctx->pc = 0x23C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C330u, 0x203F28u, 0x203F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203F30u;
label_203f30:
    // 0x203f30: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x203f30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x203f34: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x203f34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x203f38: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x203f38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->pc = 0x203f3cu;
}
