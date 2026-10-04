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

// Function: entry_001f1960
// Address: 0x1f1960 - 0x1f1968
void entry_001f1960_0x1f1960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f1960_0x1f1960");
#endif

    ctx->pc = 0x1f1960u;

    // 0x1f1960: 0xc07b48c  jal         func_1ED230
    ctx->pc = 0x1F1960u;
    SET_GPR_U32(ctx, 31, 0x1F1968u);
    ctx->pc = 0x1ED230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED230u, 0x1F1960u, 0x1F1968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1968u;
}
