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

// Function: FUN_00217570
// Address: 0x217570 - 0x217590
void FUN_00217570_0x217570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00217570_0x217570");
#endif

    switch (ctx->pc) {
        case 0x217580u: goto label_217580;
        case 0x217588u: goto label_217588;
        default: break;
    }

    ctx->pc = 0x217570u;

    // 0x217570: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x217570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x217574: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x217574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x217578: 0xc085da4  jal         func_217690
    ctx->pc = 0x217578u;
    SET_GPR_U32(ctx, 31, 0x217580u);
    ctx->pc = 0x217690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217690u, 0x217578u, 0x217580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217580u;
label_217580:
    // 0x217580: 0xc085e24  jal         func_217890
    ctx->pc = 0x217580u;
    SET_GPR_U32(ctx, 31, 0x217588u);
    ctx->pc = 0x217890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217890u, 0x217580u, 0x217588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217588u;
label_217588:
    // 0x217588: 0xc060258  jal         func_180960
    ctx->pc = 0x217588u;
    SET_GPR_U32(ctx, 31, 0x217590u);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x217588u, 0x217590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217590u;
}
