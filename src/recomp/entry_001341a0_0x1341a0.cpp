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

// Function: entry_001341a0
// Address: 0x1341a0 - 0x1341b0
void entry_001341a0_0x1341a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001341a0_0x1341a0");
#endif

    switch (ctx->pc) {
        case 0x1341a8u: goto label_1341a8;
        default: break;
    }

    ctx->pc = 0x1341a0u;

    // 0x1341a0: 0xc05b640  jal         func_16D900
    ctx->pc = 0x1341A0u;
    SET_GPR_U32(ctx, 31, 0x1341A8u);
    ctx->pc = 0x16D900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D900u, 0x1341A0u, 0x1341A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1341A8u;
label_1341a8:
    // 0x1341a8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1341A8u;
    {
        const bool branch_taken_0x1341a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1341a8) {
            ctx->pc = 0x1341C0u;
            return;
        }
    }
    ctx->pc = 0x1341B0u;
}
