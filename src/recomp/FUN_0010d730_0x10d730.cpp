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

// Function: FUN_0010d730
// Address: 0x10d730 - 0x10d744
void FUN_0010d730_0x10d730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0010d730_0x10d730");
#endif

    switch (ctx->pc) {
        case 0x10d740u: goto label_10d740;
        default: break;
    }

    ctx->pc = 0x10d730u;

    // 0x10d730: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10d730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10d734: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10d734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10d738: 0xc0434f4  jal         func_10D3D0
    ctx->pc = 0x10D738u;
    SET_GPR_U32(ctx, 31, 0x10D740u);
    ctx->pc = 0x10D3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D3D0u, 0x10D738u, 0x10D740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D740u;
label_10d740:
    // 0x10d740: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10d740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x10d744u;
}
