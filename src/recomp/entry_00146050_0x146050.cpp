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

// Function: entry_00146050
// Address: 0x146050 - 0x146058
void entry_00146050_0x146050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00146050_0x146050");
#endif

    ctx->pc = 0x146050u;

    // 0x146050: 0xc16a058  jal         func_5A8160
    ctx->pc = 0x146050u;
    SET_GPR_U32(ctx, 31, 0x146058u);
    ctx->pc = 0x5A8160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5A8160u, 0x146050u, 0x146058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146058u;
}
