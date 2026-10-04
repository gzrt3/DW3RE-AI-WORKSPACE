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

// Function: entry_001477e0
// Address: 0x1477e0 - 0x1477f8
void entry_001477e0_0x1477e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001477e0_0x1477e0");
#endif

    switch (ctx->pc) {
        case 0x1477e8u: goto label_1477e8;
        case 0x1477f0u: goto label_1477f0;
        default: break;
    }

    ctx->pc = 0x1477e0u;

    // 0x1477e0: 0xc055478  jal         func_1551E0
    ctx->pc = 0x1477E0u;
    SET_GPR_U32(ctx, 31, 0x1477E8u);
    ctx->pc = 0x1551E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1551E0u, 0x1477E0u, 0x1477E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1477E8u;
label_1477e8:
    // 0x1477e8: 0xc064718  jal         func_191C60
    ctx->pc = 0x1477E8u;
    SET_GPR_U32(ctx, 31, 0x1477F0u);
    ctx->pc = 0x191C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191C60u, 0x1477E8u, 0x1477F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1477F0u;
label_1477f0:
    // 0x1477f0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1477f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1477f4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1477f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x1477f8u;
}
