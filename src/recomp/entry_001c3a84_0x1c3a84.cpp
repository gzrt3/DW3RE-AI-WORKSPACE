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

// Function: entry_001c3a84
// Address: 0x1c3a84 - 0x1c3a8c
void entry_001c3a84_0x1c3a84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c3a84_0x1c3a84");
#endif

    ctx->pc = 0x1c3a84u;

    // 0x1c3a84: 0xc070038  jal         func_1C00E0
    ctx->pc = 0x1C3A84u;
    SET_GPR_U32(ctx, 31, 0x1C3A8Cu);
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x1C3A84u, 0x1C3A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3A8Cu;
}
