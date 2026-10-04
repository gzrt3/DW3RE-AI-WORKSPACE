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

// Function: FUN_0018c8f0
// Address: 0x18c8f0 - 0x18c928
void FUN_0018c8f0_0x18c8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0018c8f0_0x18c8f0");
#endif

    switch (ctx->pc) {
        case 0x18c924u: goto label_18c924;
        default: break;
    }

    ctx->pc = 0x18c8f0u;

    // 0x18c8f0: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x18c8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x18c8f4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18c8f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18c8f8: 0x441823  subu        $v1, $v0, $a0
    ctx->pc = 0x18c8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x18c8fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18c8fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18c900: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x18c900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x18c904: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x18c904u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x18c908: 0x24422cc0  addiu       $v0, $v0, 0x2CC0
    ctx->pc = 0x18c908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11456));
    // 0x18c90c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x18c90cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x18c910: 0x452021  addu        $a0, $v0, $a1
    ctx->pc = 0x18c910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x18c914: 0x278288b8  addiu       $v0, $gp, -0x7748
    ctx->pc = 0x18c914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936760));
    // 0x18c918: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18c918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18c91c: 0xc064ba0  jal         func_192E80
    ctx->pc = 0x18C91Cu;
    SET_GPR_U32(ctx, 31, 0x18C924u);
    ctx->pc = 0x18C920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C91Cu;
    // 0x18c920: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192E80u, 0x18C91Cu, 0x18C924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C924u;
label_18c924:
    // 0x18c924: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18c924u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x18c928u;
}
