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

// Function: FUN_001172e0
// Address: 0x1172e0 - 0x117300
void FUN_001172e0_0x1172e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001172e0_0x1172e0");
#endif

    ctx->pc = 0x1172e0u;

    // 0x1172e0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1172e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1172e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1172e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1172e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1172e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1172ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1172ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1172f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1172f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1172f4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1172f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1172f8: 0xc066e26  jal         func_19B898
    ctx->pc = 0x1172F8u;
    SET_GPR_U32(ctx, 31, 0x117300u);
    ctx->pc = 0x1172FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1172F8u;
    // 0x1172fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x1172F8u, 0x117300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117300u;
}
