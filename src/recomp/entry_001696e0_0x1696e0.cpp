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

// Function: entry_001696e0
// Address: 0x1696e0 - 0x1696e8
void entry_001696e0_0x1696e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001696e0_0x1696e0");
#endif

    ctx->pc = 0x1696e0u;

    // 0x1696e0: 0xc066322  jal         func_198C88
    ctx->pc = 0x1696E0u;
    SET_GPR_U32(ctx, 31, 0x1696E8u);
    ctx->pc = 0x198C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198C88u, 0x1696E0u, 0x1696E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1696E8u;
}
