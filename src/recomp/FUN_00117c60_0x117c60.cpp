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

// Function: FUN_00117c60
// Address: 0x117c60 - 0x117c70
void FUN_00117c60_0x117c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00117c60_0x117c60");
#endif

    ctx->pc = 0x117c60u;

    // 0x117c60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x117c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x117c64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x117c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x117c68: 0xc0478ec  jal         func_11E3B0
    ctx->pc = 0x117C68u;
    SET_GPR_U32(ctx, 31, 0x117C70u);
    ctx->pc = 0x117C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117C68u;
    // 0x117c6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E3B0u, 0x117C68u, 0x117C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117C70u;
}
