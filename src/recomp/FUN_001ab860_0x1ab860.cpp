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

// Function: FUN_001ab860
// Address: 0x1ab860 - 0x1ab874
void FUN_001ab860_0x1ab860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ab860_0x1ab860");
#endif

    switch (ctx->pc) {
        case 0x1ab870u: goto label_1ab870;
        default: break;
    }

    ctx->pc = 0x1ab860u;

    // 0x1ab860: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ab860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ab864: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ab864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ab868: 0xc06adfa  jal         func_1AB7E8
    ctx->pc = 0x1AB868u;
    SET_GPR_U32(ctx, 31, 0x1AB870u);
    ctx->pc = 0x1AB7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AB7E8u, 0x1AB868u, 0x1AB870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB870u;
label_1ab870:
    // 0x1ab870: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ab870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1ab874u;
}
