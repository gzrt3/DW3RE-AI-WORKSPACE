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

// Function: entry_00176650
// Address: 0x176650 - 0x176658
void entry_00176650_0x176650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00176650_0x176650");
#endif

    ctx->pc = 0x176650u;

    // 0x176650: 0xc05d99c  jal         func_176670
    ctx->pc = 0x176650u;
    SET_GPR_U32(ctx, 31, 0x176658u);
    ctx->pc = 0x176670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176670u, 0x176650u, 0x176658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176658u;
}
