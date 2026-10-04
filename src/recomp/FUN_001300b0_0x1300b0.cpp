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

// Function: FUN_001300b0
// Address: 0x1300b0 - 0x1300c0
void FUN_001300b0_0x1300b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001300b0_0x1300b0");
#endif

    ctx->pc = 0x1300b0u;

    // 0x1300b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1300b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1300b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1300b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1300b8: 0xc088f1c  jal         func_223C70
    ctx->pc = 0x1300B8u;
    SET_GPR_U32(ctx, 31, 0x1300C0u);
    ctx->pc = 0x1300BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1300B8u;
    // 0x1300bc: 0x84840002  lh          $a0, 0x2($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223C70u, 0x1300B8u, 0x1300C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1300C0u;
}
