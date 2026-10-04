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

// Function: FUN_00172860
// Address: 0x172860 - 0x172874
void FUN_00172860_0x172860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00172860_0x172860");
#endif

    switch (ctx->pc) {
        case 0x172870u: goto label_172870;
        default: break;
    }

    ctx->pc = 0x172860u;

    // 0x172860: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x172860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x172864: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x172864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x172868: 0xc0713b8  jal         func_1C4EE0
    ctx->pc = 0x172868u;
    SET_GPR_U32(ctx, 31, 0x172870u);
    ctx->pc = 0x1C4EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4EE0u, 0x172868u, 0x172870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172870u;
label_172870:
    // 0x172870: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x172870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x172874u;
}
