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

// Function: entry_0020f388
// Address: 0x20f388 - 0x20f390
void entry_0020f388_0x20f388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020f388_0x20f388");
#endif

    ctx->pc = 0x20f388u;

    // 0x20f388: 0xc083688  jal         func_20DA20
    ctx->pc = 0x20F388u;
    SET_GPR_U32(ctx, 31, 0x20F390u);
    ctx->pc = 0x20DA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DA20u, 0x20F388u, 0x20F390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F390u;
}
