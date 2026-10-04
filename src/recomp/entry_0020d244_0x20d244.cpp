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

// Function: entry_0020d244
// Address: 0x20d244 - 0x20d24c
void entry_0020d244_0x20d244(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020d244_0x20d244");
#endif

    ctx->pc = 0x20d244u;

    // 0x20d244: 0xc078050  jal         func_1E0140
    ctx->pc = 0x20D244u;
    SET_GPR_U32(ctx, 31, 0x20D24Cu);
    ctx->pc = 0x1E0140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0140u, 0x20D244u, 0x20D24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20D24Cu;
}
