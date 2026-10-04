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

// Function: FUN_00237190
// Address: 0x237190 - 0x2371a0
void FUN_00237190_0x237190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00237190_0x237190");
#endif

    switch (ctx->pc) {
        case 0x237198u: goto label_237198;
        default: break;
    }

    ctx->pc = 0x237190u;

    // 0x237190: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x237190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x237194: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x237194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_237198:
    // 0x237198: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x237198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x23719c: 0xc08e708  jal         func_239C20
    ctx->pc = 0x23719Cu;
    SET_GPR_U32(ctx, 31, 0x2371A4u);
    ctx->pc = 0x239C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239C20u, 0x23719Cu, 0x2371A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2371A4u;
}
