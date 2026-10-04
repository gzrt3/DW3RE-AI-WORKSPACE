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

// Function: entry_00145f14
// Address: 0x145f14 - 0x145f1c
void entry_00145f14_0x145f14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00145f14_0x145f14");
#endif

    ctx->pc = 0x145f14u;

    // 0x145f14: 0xc16a080  jal         func_5A8200
    ctx->pc = 0x145F14u;
    SET_GPR_U32(ctx, 31, 0x145F1Cu);
    ctx->pc = 0x5A8200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5A8200u, 0x145F14u, 0x145F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145F1Cu;
}
