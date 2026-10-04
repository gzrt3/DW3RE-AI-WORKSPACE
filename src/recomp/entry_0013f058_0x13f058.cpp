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

// Function: entry_0013f058
// Address: 0x13f058 - 0x13f064
void entry_0013f058_0x13f058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013f058_0x13f058");
#endif

    switch (ctx->pc) {
        case 0x13f060u: goto label_13f060;
        default: break;
    }

    ctx->pc = 0x13f058u;

    // 0x13f058: 0xc0500b0  jal         func_1402C0
    ctx->pc = 0x13F058u;
    SET_GPR_U32(ctx, 31, 0x13F060u);
    ctx->pc = 0x1402C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1402C0u, 0x13F058u, 0x13F060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F060u;
label_13f060:
    // 0x13f060: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13f060u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x13f064u;
}
