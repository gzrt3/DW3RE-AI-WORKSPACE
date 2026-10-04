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

// Function: entry_0019fe88
// Address: 0x19fe88 - 0x19fe90
void entry_0019fe88_0x19fe88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019fe88_0x19fe88");
#endif

    ctx->pc = 0x19fe88u;

    // 0x19fe88: 0xc067d96  jal         func_19F658
    ctx->pc = 0x19FE88u;
    SET_GPR_U32(ctx, 31, 0x19FE90u);
    ctx->pc = 0x19F658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F658u, 0x19FE88u, 0x19FE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FE90u;
}
