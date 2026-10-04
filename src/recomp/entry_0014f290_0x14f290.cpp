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

// Function: entry_0014f290
// Address: 0x14f290 - 0x14f298
void entry_0014f290_0x14f290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014f290_0x14f290");
#endif

    ctx->pc = 0x14f290u;

    // 0x14f290: 0xc053df4  jal         func_14F7D0
    ctx->pc = 0x14F290u;
    SET_GPR_U32(ctx, 31, 0x14F298u);
    ctx->pc = 0x14F7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F7D0u, 0x14F290u, 0x14F298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F298u;
}
