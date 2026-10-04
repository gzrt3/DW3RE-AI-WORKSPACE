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

// Function: entry_00127ab8
// Address: 0x127ab8 - 0x127ac0
void entry_00127ab8_0x127ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00127ab8_0x127ab8");
#endif

    ctx->pc = 0x127ab8u;

    // 0x127ab8: 0xc08f0cc  jal         func_23C330
    ctx->pc = 0x127AB8u;
    SET_GPR_U32(ctx, 31, 0x127AC0u);
    ctx->pc = 0x23C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C330u, 0x127AB8u, 0x127AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127AC0u;
}
