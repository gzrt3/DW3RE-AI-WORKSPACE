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

// Function: FUN_001804d0
// Address: 0x1804d0 - 0x1804e0
void FUN_001804d0_0x1804d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001804d0_0x1804d0");
#endif

    ctx->pc = 0x1804d0u;

    // 0x1804d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1804d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1804d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1804d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1804d8: 0xc08f0cc  jal         func_23C330
    ctx->pc = 0x1804D8u;
    SET_GPR_U32(ctx, 31, 0x1804E0u);
    ctx->pc = 0x23C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C330u, 0x1804D8u, 0x1804E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1804E0u;
}
