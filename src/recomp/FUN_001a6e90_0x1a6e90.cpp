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

// Function: FUN_001a6e90
// Address: 0x1a6e90 - 0x1a6ea4
void FUN_001a6e90_0x1a6e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a6e90_0x1a6e90");
#endif

    ctx->pc = 0x1a6e90u;

    // 0x1a6e90: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1a6e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1a6e94: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x1a6e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x1a6e98: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1a6e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1a6e9c: 0xc06b52a  jal         func_1AD4A8
    ctx->pc = 0x1A6E9Cu;
    SET_GPR_U32(ctx, 31, 0x1A6EA4u);
    ctx->pc = 0x1AD4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD4A8u, 0x1A6E9Cu, 0x1A6EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6EA4u;
}
