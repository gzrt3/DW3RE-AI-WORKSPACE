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

// Function: entry_002319c0
// Address: 0x2319c0 - 0x2319cc
void entry_002319c0_0x2319c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002319c0_0x2319c0");
#endif

    switch (ctx->pc) {
        case 0x2319c8u: goto label_2319c8;
        default: break;
    }

    ctx->pc = 0x2319c0u;

    // 0x2319c0: 0xc06c2e2  jal         func_1B0B88
    ctx->pc = 0x2319C0u;
    SET_GPR_U32(ctx, 31, 0x2319C8u);
    ctx->pc = 0x1B0B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0B88u, 0x2319C0u, 0x2319C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2319C8u;
label_2319c8:
    // 0x2319c8: 0x8f8482d0  lw          $a0, -0x7D30($gp)
    ctx->pc = 0x2319c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
    ctx->pc = 0x2319ccu;
}
