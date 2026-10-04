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

// Function: FUN_001914d0
// Address: 0x1914d0 - 0x1914f8
void FUN_001914d0_0x1914d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001914d0_0x1914d0");
#endif

    ctx->pc = 0x1914d0u;

    // 0x1914d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1914d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1914d4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1914d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1914d8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1914d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1914dc: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1914dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1914e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1914e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1914e4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1914e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1914e8: 0x3c100028  lui         $s0, 0x28
    ctx->pc = 0x1914e8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)40 << 16));
    // 0x1914ec: 0x26102cc0  addiu       $s0, $s0, 0x2CC0
    ctx->pc = 0x1914ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 11456));
    // 0x1914f0: 0xc08e93e  jal         func_23A4F8
    ctx->pc = 0x1914F0u;
    SET_GPR_U32(ctx, 31, 0x1914F8u);
    ctx->pc = 0x1914F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1914F0u;
    // 0x1914f4: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A4F8u, 0x1914F0u, 0x1914F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1914F8u;
}
