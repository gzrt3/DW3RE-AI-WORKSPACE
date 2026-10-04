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

// Function: FUN_00227610
// Address: 0x227610 - 0x227660
void FUN_00227610_0x227610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00227610_0x227610");
#endif

    switch (ctx->pc) {
        case 0x227658u: goto label_227658;
        default: break;
    }

    ctx->pc = 0x227610u;

    // 0x227610: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x227610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x227614: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x227614u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
    // 0x227618: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x227618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22761c: 0x24a52570  addiu       $a1, $a1, 0x2570
    ctx->pc = 0x22761cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9584));
    // 0x227620: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x227620u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x227624: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x227624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x227628: 0x61200  sll         $v0, $a2, 8
    ctx->pc = 0x227628u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x22762c: 0x462023  subu        $a0, $v0, $a2
    ctx->pc = 0x22762cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x227630: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x227630u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x227634: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x227634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x227638: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x227638u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x22763c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x22763cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x227640: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x227640u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x227644: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x227644u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x227648: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x227648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x22764c: 0x24420000  addiu       $v0, $v0, 0x0
    ctx->pc = 0x22764cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 0));
    // 0x227650: 0xc05d910  jal         func_176440
    ctx->pc = 0x227650u;
    SET_GPR_U32(ctx, 31, 0x227658u);
    ctx->pc = 0x227654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227650u;
    // 0x227654: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176440u, 0x227650u, 0x227658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227658u;
label_227658:
    // 0x227658: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x227658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22765c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x22765cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x227660u;
}
