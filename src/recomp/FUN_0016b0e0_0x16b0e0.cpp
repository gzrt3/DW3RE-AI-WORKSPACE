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

// Function: FUN_0016b0e0
// Address: 0x16b0e0 - 0x16b0f4
void FUN_0016b0e0_0x16b0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0016b0e0_0x16b0e0");
#endif

    switch (ctx->pc) {
        case 0x16b0f0u: goto label_16b0f0;
        default: break;
    }

    ctx->pc = 0x16b0e0u;

    // 0x16b0e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16b0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16b0e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16b0e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16b0e8: 0xc05a6c4  jal         func_169B10
    ctx->pc = 0x16B0E8u;
    SET_GPR_U32(ctx, 31, 0x16B0F0u);
    ctx->pc = 0x169B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169B10u, 0x16B0E8u, 0x16B0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B0F0u;
label_16b0f0:
    // 0x16b0f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16b0f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x16b0f4u;
}
