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

// Function: entry_0014545c
// Address: 0x14545c - 0x145468
void entry_0014545c_0x14545c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014545c_0x14545c");
#endif

    switch (ctx->pc) {
        case 0x145464u: goto label_145464;
        default: break;
    }

    ctx->pc = 0x14545cu;

    // 0x14545c: 0xc055638  jal         func_1558E0
    ctx->pc = 0x14545Cu;
    SET_GPR_U32(ctx, 31, 0x145464u);
    ctx->pc = 0x1558E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1558E0u, 0x14545Cu, 0x145464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145464u;
label_145464:
    // 0x145464: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x145464u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x145468u;
}
