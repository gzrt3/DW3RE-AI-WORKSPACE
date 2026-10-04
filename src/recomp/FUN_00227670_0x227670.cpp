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

// Function: FUN_00227670
// Address: 0x227670 - 0x2276c0
void FUN_00227670_0x227670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00227670_0x227670");
#endif

    switch (ctx->pc) {
        case 0x2276b8u: goto label_2276b8;
        default: break;
    }

    ctx->pc = 0x227670u;

    // 0x227670: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x227670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x227674: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x227674u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
    // 0x227678: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x227678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22767c: 0x24a52570  addiu       $a1, $a1, 0x2570
    ctx->pc = 0x22767cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9584));
    // 0x227680: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x227680u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x227684: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x227684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x227688: 0x61200  sll         $v0, $a2, 8
    ctx->pc = 0x227688u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x22768c: 0x462023  subu        $a0, $v0, $a2
    ctx->pc = 0x22768cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x227690: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x227690u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x227694: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x227694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x227698: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x227698u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x22769c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x22769cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2276a0: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x2276a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2276a4: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x2276a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2276a8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2276a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2276ac: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x2276acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
    // 0x2276b0: 0xc05d914  jal         func_176450
    ctx->pc = 0x2276B0u;
    SET_GPR_U32(ctx, 31, 0x2276B8u);
    ctx->pc = 0x2276B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2276B0u;
    // 0x2276b4: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176450u, 0x2276B0u, 0x2276B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2276B8u;
label_2276b8:
    // 0x2276b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2276b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2276bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2276bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2276c0u;
}
