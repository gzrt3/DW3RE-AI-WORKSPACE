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

// Function: entry_00123a04
// Address: 0x123a04 - 0x123a0c
void entry_00123a04_0x123a04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00123a04_0x123a04");
#endif

    ctx->pc = 0x123a04u;

    // 0x123a04: 0xc07e020  jal         func_1F8080
    ctx->pc = 0x123A04u;
    SET_GPR_U32(ctx, 31, 0x123A0Cu);
    ctx->pc = 0x1F8080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8080u, 0x123A04u, 0x123A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123A0Cu;
}
