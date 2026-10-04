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

// Function: entry_001695fc
// Address: 0x1695fc - 0x169604
void entry_001695fc_0x1695fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001695fc_0x1695fc");
#endif

    ctx->pc = 0x1695fcu;

    // 0x1695fc: 0xc066322  jal         func_198C88
    ctx->pc = 0x1695FCu;
    SET_GPR_U32(ctx, 31, 0x169604u);
    ctx->pc = 0x198C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198C88u, 0x1695FCu, 0x169604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169604u;
}
