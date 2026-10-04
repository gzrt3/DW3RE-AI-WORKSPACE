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

// Function: FUN_001a4cb0
// Address: 0x1a4cb0 - 0x1a4cc0
void FUN_001a4cb0_0x1a4cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a4cb0_0x1a4cb0");
#endif

    ctx->pc = 0x1a4cb0u;

    // 0x1a4cb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a4cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a4cb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a4cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a4cb8: 0xc06b518  jal         func_1AD460
    ctx->pc = 0x1A4CB8u;
    SET_GPR_U32(ctx, 31, 0x1A4CC0u);
    ctx->pc = 0x1AD460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD460u, 0x1A4CB8u, 0x1A4CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4CC0u;
}
