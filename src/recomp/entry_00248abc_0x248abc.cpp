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

// Function: entry_00248abc
// Address: 0x248abc - 0x248ac4
void entry_00248abc_0x248abc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00248abc_0x248abc");
#endif

    ctx->pc = 0x248abcu;

    // 0x248abc: 0xc0922b4  jal         func_248AD0
    ctx->pc = 0x248ABCu;
    SET_GPR_U32(ctx, 31, 0x248AC4u);
    ctx->pc = 0x248AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248AD0u, 0x248ABCu, 0x248AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248AC4u;
}
