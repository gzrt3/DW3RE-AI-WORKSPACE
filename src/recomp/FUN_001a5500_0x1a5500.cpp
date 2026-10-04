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

// Function: FUN_001a5500
// Address: 0x1a5500 - 0x1a5518
void FUN_001a5500_0x1a5500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a5500_0x1a5500");
#endif

    switch (ctx->pc) {
        case 0x1a5510u: goto label_1a5510;
        default: break;
    }

    ctx->pc = 0x1a5500u;

    // 0x1a5500: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a5500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a5504: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a5504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a5508: 0xc06917c  jal         func_1A45F0
    ctx->pc = 0x1A5508u;
    SET_GPR_U32(ctx, 31, 0x1A5510u);
    ctx->pc = 0x1A45F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A45F0u, 0x1A5508u, 0x1A5510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5510u;
label_1a5510:
    // 0x1a5510: 0xf  sync
    ctx->pc = 0x1a5510u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x1a5514: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a5514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1a5518u;
}
