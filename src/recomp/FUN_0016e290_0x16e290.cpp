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

// Function: FUN_0016e290
// Address: 0x16e290 - 0x16e2b0
void FUN_0016e290_0x16e290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0016e290_0x16e290");
#endif

    ctx->pc = 0x16e290u;

    // 0x16e290: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16e290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16e294: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x16e294u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x16e298: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16e298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16e29c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16e29cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16e2a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16e2a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e2a4: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x16e2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
    // 0x16e2a8: 0xc08e93e  jal         func_23A4F8
    ctx->pc = 0x16E2A8u;
    SET_GPR_U32(ctx, 31, 0x16E2B0u);
    ctx->pc = 0x16E2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E2A8u;
    // 0x16e2ac: 0x24841ec0  addiu       $a0, $a0, 0x1EC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7872));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A4F8u, 0x16E2A8u, 0x16E2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E2B0u;
}
