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

// Function: FUN_0017b2f0
// Address: 0x17b2f0 - 0x17b304
void FUN_0017b2f0_0x17b2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017b2f0_0x17b2f0");
#endif

    ctx->pc = 0x17b2f0u;

    // 0x17b2f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17b2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17b2f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17b2f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x17b2f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17b2f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17b2fc: 0xc08f0cc  jal         func_23C330
    ctx->pc = 0x17B2FCu;
    SET_GPR_U32(ctx, 31, 0x17B304u);
    ctx->pc = 0x17B300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B2FCu;
    // 0x17b300: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C330u, 0x17B2FCu, 0x17B304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B304u;
}
