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

// Function: entry_001f199c
// Address: 0x1f199c - 0x1f19a4
void entry_001f199c_0x1f199c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f199c_0x1f199c");
#endif

    ctx->pc = 0x1f199cu;

    // 0x1f199c: 0xc07b48c  jal         func_1ED230
    ctx->pc = 0x1F199Cu;
    SET_GPR_U32(ctx, 31, 0x1F19A4u);
    ctx->pc = 0x1ED230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED230u, 0x1F199Cu, 0x1F19A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F19A4u;
}
