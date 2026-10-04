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

// Function: FUN_0013c8e0
// Address: 0x13c8e0 - 0x13c8f4
void FUN_0013c8e0_0x13c8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0013c8e0_0x13c8e0");
#endif

    switch (ctx->pc) {
        case 0x13c8f0u: goto label_13c8f0;
        default: break;
    }

    ctx->pc = 0x13c8e0u;

    // 0x13c8e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13c8e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13c8e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13c8e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13c8e8: 0xc04f240  jal         func_13C900
    ctx->pc = 0x13C8E8u;
    SET_GPR_U32(ctx, 31, 0x13C8F0u);
    ctx->pc = 0x13C900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C900u, 0x13C8E8u, 0x13C8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C8F0u;
label_13c8f0:
    // 0x13c8f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13c8f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x13c8f4u;
}
