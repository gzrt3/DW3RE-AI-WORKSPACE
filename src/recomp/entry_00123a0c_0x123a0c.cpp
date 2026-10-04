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

// Function: entry_00123a0c
// Address: 0x123a0c - 0x123a20
void entry_00123a0c_0x123a0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00123a0c_0x123a0c");
#endif

    switch (ctx->pc) {
        case 0x123a14u: goto label_123a14;
        case 0x123a1cu: goto label_123a1c;
        default: break;
    }

    ctx->pc = 0x123a0cu;

    // 0x123a0c: 0xc04e4f0  jal         func_1393C0
    ctx->pc = 0x123A0Cu;
    SET_GPR_U32(ctx, 31, 0x123A14u);
    ctx->pc = 0x1393C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1393C0u, 0x123A0Cu, 0x123A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123A14u;
label_123a14:
    // 0x123a14: 0xc049d48  jal         func_127520
    ctx->pc = 0x123A14u;
    SET_GPR_U32(ctx, 31, 0x123A1Cu);
    ctx->pc = 0x127520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127520u, 0x123A14u, 0x123A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123A1Cu;
label_123a1c:
    // 0x123a1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x123a1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x123a20u;
}
