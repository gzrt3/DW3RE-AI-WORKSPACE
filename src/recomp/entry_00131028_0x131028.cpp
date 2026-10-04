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

// Function: entry_00131028
// Address: 0x131028 - 0x131038
void entry_00131028_0x131028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131028_0x131028");
#endif

    switch (ctx->pc) {
        case 0x131030u: goto label_131030;
        default: break;
    }

    ctx->pc = 0x131028u;

    // 0x131028: 0xc0591f4  jal         func_1647D0
    ctx->pc = 0x131028u;
    SET_GPR_U32(ctx, 31, 0x131030u);
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x131028u, 0x131030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131030u;
label_131030:
    // 0x131030: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x131030u;
    {
        const bool branch_taken_0x131030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x131030) {
            ctx->pc = 0x1310B0u;
            return;
        }
    }
    ctx->pc = 0x131038u;
}
