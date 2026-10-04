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

// Function: entry_00203f04
// Address: 0x203f04 - 0x203f1c
void entry_00203f04_0x203f04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00203f04_0x203f04");
#endif

    switch (ctx->pc) {
        case 0x203f18u: goto label_203f18;
        default: break;
    }

    ctx->pc = 0x203f04u;

    // 0x203f04: 0x8f8390f0  lw          $v1, -0x6F10($gp)
    ctx->pc = 0x203f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938864)));
    // 0x203f08: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x203F08u;
    {
        const bool branch_taken_0x203f08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x203f08) {
            ctx->pc = 0x203F1Cu;
            return;
        }
    }
    ctx->pc = 0x203F10u;
    // 0x203f10: 0xc070e28  jal         func_1C38A0
    ctx->pc = 0x203F10u;
    SET_GPR_U32(ctx, 31, 0x203F18u);
    ctx->pc = 0x1C38A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C38A0u, 0x203F10u, 0x203F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203F18u;
label_203f18:
    // 0x203f18: 0xaf8290f0  sw          $v0, -0x6F10($gp)
    ctx->pc = 0x203f18u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938864), GPR_U32(ctx, 2));
    ctx->pc = 0x203f1cu;
}
