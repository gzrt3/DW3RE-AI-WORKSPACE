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

// Function: entry_00231000
// Address: 0x231000 - 0x231008
void entry_00231000_0x231000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00231000_0x231000");
#endif

    ctx->pc = 0x231000u;

    // 0x231000: 0xc08c42e  jal         func_2310B8
    ctx->pc = 0x231000u;
    SET_GPR_U32(ctx, 31, 0x231008u);
    ctx->pc = 0x2310B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310B8u, 0x231000u, 0x231008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231008u;
}
