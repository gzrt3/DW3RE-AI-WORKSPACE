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

// Function: entry_0016ba00
// Address: 0x16ba00 - 0x16ba0c
void entry_0016ba00_0x16ba00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016ba00_0x16ba00");
#endif

    switch (ctx->pc) {
        case 0x16ba08u: goto label_16ba08;
        default: break;
    }

    ctx->pc = 0x16ba00u;

    // 0x16ba00: 0xc055e64  jal         func_157990
    ctx->pc = 0x16BA00u;
    SET_GPR_U32(ctx, 31, 0x16BA08u);
    ctx->pc = 0x157990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157990u, 0x16BA00u, 0x16BA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BA08u;
label_16ba08:
    // 0x16ba08: 0xaf82871c  sw          $v0, -0x78E4($gp)
    ctx->pc = 0x16ba08u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936348), GPR_U32(ctx, 2));
    ctx->pc = 0x16ba0cu;
}
