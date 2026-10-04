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

// Function: FUN_001a54e0
// Address: 0x1a54e0 - 0x1a54f8
void FUN_001a54e0_0x1a54e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a54e0_0x1a54e0");
#endif

    switch (ctx->pc) {
        case 0x1a54f0u: goto label_1a54f0;
        default: break;
    }

    ctx->pc = 0x1a54e0u;

    // 0x1a54e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a54e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a54e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a54e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a54e8: 0xc069178  jal         func_1A45E0
    ctx->pc = 0x1A54E8u;
    SET_GPR_U32(ctx, 31, 0x1A54F0u);
    ctx->pc = 0x1A45E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A45E0u, 0x1A54E8u, 0x1A54F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A54F0u;
label_1a54f0:
    // 0x1a54f0: 0xf  sync
    ctx->pc = 0x1a54f0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1a54f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a54f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1a54f8u;
}
