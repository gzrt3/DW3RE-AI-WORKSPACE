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

// Function: FUN_00222d20
// Address: 0x222d20 - 0x222d40
void FUN_00222d20_0x222d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00222d20_0x222d20");
#endif

    switch (ctx->pc) {
        case 0x222d30u: goto label_222d30;
        case 0x222d38u: goto label_222d38;
        default: break;
    }

    ctx->pc = 0x222d20u;

    // 0x222d20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x222d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x222d24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x222d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x222d28: 0xc0569a4  jal         func_15A690
    ctx->pc = 0x222D28u;
    SET_GPR_U32(ctx, 31, 0x222D30u);
    ctx->pc = 0x222D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222D28u;
    // 0x222d2c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A690u, 0x222D28u, 0x222D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222D30u;
label_222d30:
    // 0x222d30: 0xc088cbc  jal         func_2232F0
    ctx->pc = 0x222D30u;
    SET_GPR_U32(ctx, 31, 0x222D38u);
    ctx->pc = 0x2232F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2232F0u, 0x222D30u, 0x222D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222D38u;
label_222d38:
    // 0x222d38: 0xc08f0cc  jal         func_23C330
    ctx->pc = 0x222D38u;
    SET_GPR_U32(ctx, 31, 0x222D40u);
    ctx->pc = 0x222D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222D38u;
    // 0x222d3c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C330u, 0x222D38u, 0x222D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222D40u;
}
