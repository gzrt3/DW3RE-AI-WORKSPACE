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

// Function: entry_001ace34
// Address: 0x1ace34 - 0x1ace3c
void entry_001ace34_0x1ace34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ace34_0x1ace34");
#endif

    ctx->pc = 0x1ace34u;

    // 0x1ace34: 0xc06b382  jal         func_1ACE08
    ctx->pc = 0x1ACE34u;
    SET_GPR_U32(ctx, 31, 0x1ACE3Cu);
    ctx->pc = 0x1ACE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ACE08u, 0x1ACE34u, 0x1ACE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ACE3Cu;
}
