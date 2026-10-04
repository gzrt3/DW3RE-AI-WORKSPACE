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

// Function: FUN_0013f890
// Address: 0x13f890 - 0x13f8a4
void FUN_0013f890_0x13f890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0013f890_0x13f890");
#endif

    switch (ctx->pc) {
        case 0x13f8a0u: goto label_13f8a0;
        default: break;
    }

    ctx->pc = 0x13f890u;

    // 0x13f890: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13f890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13f894: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13f894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13f898: 0xc04fe2c  jal         func_13F8B0
    ctx->pc = 0x13F898u;
    SET_GPR_U32(ctx, 31, 0x13F8A0u);
    ctx->pc = 0x13F8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F8B0u, 0x13F898u, 0x13F8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F8A0u;
label_13f8a0:
    // 0x13f8a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13f8a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x13f8a4u;
}
