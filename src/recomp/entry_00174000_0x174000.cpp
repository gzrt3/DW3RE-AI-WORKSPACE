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

// Function: entry_00174000
// Address: 0x174000 - 0x174008
void entry_00174000_0x174000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174000_0x174000");
#endif

    ctx->pc = 0x174000u;

    // 0x174000: 0xc04df94  jal         func_137E50
    ctx->pc = 0x174000u;
    SET_GPR_U32(ctx, 31, 0x174008u);
    ctx->pc = 0x137E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137E50u, 0x174000u, 0x174008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174008u;
}
