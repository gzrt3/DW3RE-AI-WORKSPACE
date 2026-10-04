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

// Function: FUN_0023fc60
// Address: 0x23fc60 - 0x23fc90
void FUN_0023fc60_0x23fc60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0023fc60_0x23fc60");
#endif

    ctx->pc = 0x23fc60u;

    // 0x23fc60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23fc60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23fc64: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x23fc64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x23fc68: 0x3c02005a  lui         $v0, 0x5A
    ctx->pc = 0x23fc68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
    // 0x23fc6c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x23fc6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x23fc70: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x23fc70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x23fc74: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23fc74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x23fc78: 0x24a5b668  addiu       $a1, $a1, -0x4998
    ctx->pc = 0x23fc78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948456));
    // 0x23fc7c: 0x24420220  addiu       $v0, $v0, 0x220
    ctx->pc = 0x23fc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 544));
    // 0x23fc80: 0x2484cce8  addiu       $a0, $a0, -0x3318
    ctx->pc = 0x23fc80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954216));
    // 0x23fc84: 0x453023  subu        $a2, $v0, $a1
    ctx->pc = 0x23fc84u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x23fc88: 0xc08e93e  jal         func_23A4F8
    ctx->pc = 0x23FC88u;
    SET_GPR_U32(ctx, 31, 0x23FC90u);
    ctx->pc = 0x23FC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23FC88u;
    // 0x23fc8c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A4F8u, 0x23FC88u, 0x23FC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23FC90u;
}
