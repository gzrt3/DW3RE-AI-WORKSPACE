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

// Function: entry_001407ac
// Address: 0x1407ac - 0x1407b4
void entry_001407ac_0x1407ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001407ac_0x1407ac");
#endif

    ctx->pc = 0x1407acu;

    // 0x1407ac: 0xc0756dc  jal         func_1D5B70
    ctx->pc = 0x1407ACu;
    SET_GPR_U32(ctx, 31, 0x1407B4u);
    ctx->pc = 0x1D5B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5B70u, 0x1407ACu, 0x1407B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1407B4u;
}
