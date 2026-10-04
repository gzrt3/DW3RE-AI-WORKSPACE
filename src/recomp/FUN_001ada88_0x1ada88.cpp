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

// Function: FUN_001ada88
// Address: 0x1ada88 - 0x1adad0
void FUN_001ada88_0x1ada88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ada88_0x1ada88");
#endif

    switch (ctx->pc) {
        case 0x1adaa0u: goto label_1adaa0;
        case 0x1adaa8u: goto label_1adaa8;
        default: break;
    }

    ctx->pc = 0x1ada88u;

    // 0x1ada88: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ada88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ada8c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1ada8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1ada90: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ada90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ada94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1ada94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1ada98: 0xc06b63e  jal         func_1AD8F8
    ctx->pc = 0x1ADA98u;
    SET_GPR_U32(ctx, 31, 0x1ADAA0u);
    ctx->pc = 0x1ADA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADA98u;
    // 0x1ada9c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD8F8u, 0x1ADA98u, 0x1ADAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADAA0u;
label_1adaa0:
    // 0x1adaa0: 0xc06b684  jal         func_1ADA10
    ctx->pc = 0x1ADAA0u;
    SET_GPR_U32(ctx, 31, 0x1ADAA8u);
    ctx->pc = 0x1ADAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADAA0u;
    // 0x1adaa4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ADA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ADA10u, 0x1ADAA0u, 0x1ADAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADAA8u;
label_1adaa8:
    // 0x1adaa8: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x1adaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x1adaac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1adaacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adab0: 0x8c465f98  lw          $a2, 0x5F98($v0)
    ctx->pc = 0x1adab0u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x285F98u));
    // 0x1adab4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1adab4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1adab8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1adab8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1adabc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1adabcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1adac0: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x1adac0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x1adac4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1adac4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1adac8: 0x8069118  j           func_1A4460
    ctx->pc = 0x1ADAC8u;
    ctx->pc = 0x1ADACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADAC8u;
    // 0x1adacc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4460u;
    FUN_001a4460_0x1a4460(rdram, ctx, runtime); return;
    ctx->pc = 0x1ADAD0u;
}
