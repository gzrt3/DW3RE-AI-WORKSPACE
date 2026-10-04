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

// Function: FUN_0014ed70
// Address: 0x14ed70 - 0x14eda0

void FUN_0014ed70_0x14ed70(uint8_t* rdram, R5900Context* ctx, PS2Runtime* runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0014ed70_0x14ed70");
#endif

    switch (ctx->pc) {
        case 0x14ed90u: goto label_14ed90;
        default: break;
    }

    ctx->pc = 0x14ed70u;

    // 0x14ed70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14ed70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14ed74: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x14ed74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x14ed78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14ed78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14ed7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x14ed7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x14ed80: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14ed80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ed84: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x14ed84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ed88: 0xc066e44  jal         func_19B910
    ctx->pc = 0x14ED88u;
    SET_GPR_U32(ctx, 31, 0x14ED90u);
    ctx->pc = 0x14ED8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14ED88u;
    // 0x14ed8c: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B910u, 0x14ED88u, 0x14ED90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14ED90u;
label_14ed90:
    // 0x14ed90: 0xae110088  sw          $s1, 0x88($s0)
    ctx->pc = 0x14ed90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 17));
    // 0x14ed94: 0xa200008e  sb          $zero, 0x8E($s0)
    ctx->pc = 0x14ed94u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 142), (uint8_t)GPR_U32(ctx, 0));
    // 0x14ed98: 0xa200008f  sb          $zero, 0x8F($s0)
    ctx->pc = 0x14ed98u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 143), (uint8_t)GPR_U32(ctx, 0));
    // 0x14ed9c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x14ed9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x14eda0u;
}
