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

// Function: entry_001407b8
// Address: 0x1407b8 - 0x1407c4
void entry_001407b8_0x1407b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001407b8_0x1407b8");
#endif

    switch (ctx->pc) {
        case 0x1407c0u: goto label_1407c0;
        default: break;
    }

    ctx->pc = 0x1407b8u;

    // 0x1407b8: 0xc054bfc  jal         func_152FF0
    ctx->pc = 0x1407B8u;
    SET_GPR_U32(ctx, 31, 0x1407C0u);
    ctx->pc = 0x152FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152FF0u, 0x1407B8u, 0x1407C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1407C0u;
label_1407c0:
    // 0x1407c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1407c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x1407c4u;
}
