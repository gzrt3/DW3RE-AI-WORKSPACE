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

// Function: entry_001a7fa0
// Address: 0x1a7fa0 - 0x1a7fa8
void entry_001a7fa0_0x1a7fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a7fa0_0x1a7fa0");
#endif

    ctx->pc = 0x1a7fa0u;

    // 0x1a7fa0: 0xc069f70  jal         func_1A7DC0
    ctx->pc = 0x1A7FA0u;
    SET_GPR_U32(ctx, 31, 0x1A7FA8u);
    ctx->pc = 0x1A7DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7DC0u, 0x1A7FA0u, 0x1A7FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7FA8u;
}
