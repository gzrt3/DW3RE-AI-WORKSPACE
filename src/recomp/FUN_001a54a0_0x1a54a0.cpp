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

// Function: FUN_001a54a0
// Address: 0x1a54a0 - 0x1a54b8
void FUN_001a54a0_0x1a54a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a54a0_0x1a54a0");
#endif

    switch (ctx->pc) {
        case 0x1a54b0u: goto label_1a54b0;
        default: break;
    }

    ctx->pc = 0x1a54a0u;

    // 0x1a54a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a54a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a54a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a54a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a54a8: 0xc069170  jal         func_1A45C0
    ctx->pc = 0x1A54A8u;
    SET_GPR_U32(ctx, 31, 0x1A54B0u);
    ctx->pc = 0x1A45C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A45C0u, 0x1A54A8u, 0x1A54B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A54B0u;
label_1a54b0:
    // 0x1a54b0: 0xf  sync
    ctx->pc = 0x1a54b0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1a54b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a54b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1a54b8u;
}
