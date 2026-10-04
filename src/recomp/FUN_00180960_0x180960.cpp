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

// Function: FUN_00180960
// Address: 0x180960 - 0x180970
void FUN_00180960_0x180960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00180960_0x180960");
#endif

    ctx->pc = 0x180960u;

    // 0x180960: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x180960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x180964: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x180964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x180968: 0xc08f0cc  jal         func_23C330
    ctx->pc = 0x180968u;
    SET_GPR_U32(ctx, 31, 0x180970u);
    ctx->pc = 0x23C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C330u, 0x180968u, 0x180970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180970u;
}
