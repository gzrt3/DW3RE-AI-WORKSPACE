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

// Function: entry_0019f8e0
// Address: 0x19f8e0 - 0x19f8e8
void entry_0019f8e0_0x19f8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f8e0_0x19f8e0");
#endif

    ctx->pc = 0x19f8e0u;

    // 0x19f8e0: 0xc067d96  jal         func_19F658
    ctx->pc = 0x19F8E0u;
    SET_GPR_U32(ctx, 31, 0x19F8E8u);
    ctx->pc = 0x19F658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F658u, 0x19F8E0u, 0x19F8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F8E8u;
}
