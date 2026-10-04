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

// Function: entry_001768b0
// Address: 0x1768b0 - 0x17694c
void entry_001768b0_0x1768b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001768b0_0x1768b0");
#endif

    switch (ctx->pc) {
        case 0x176938u: goto label_176938;
        default: break;
    }

    ctx->pc = 0x1768b0u;

    // 0x1768b0: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x1768b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1768b4: 0x278281d0  addiu       $v0, $gp, -0x7E30
    ctx->pc = 0x1768b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934992));
    // 0x1768b8: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1768b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1768bc: 0x3c090025  lui         $t1, 0x25
    ctx->pc = 0x1768bcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)37 << 16));
    // 0x1768c0: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1768c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1768c4: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x1768c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x1768c8: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1768c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1768cc: 0x3c080025  lui         $t0, 0x25
    ctx->pc = 0x1768ccu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)37 << 16));
    // 0x1768d0: 0x25293b80  addiu       $t1, $t1, 0x3B80
    ctx->pc = 0x1768d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 15232));
    // 0x1768d4: 0x25082930  addiu       $t0, $t0, 0x2930
    ctx->pc = 0x1768d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 10544));
    // 0x1768d8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1768d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1768dc: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1768dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1768e0: 0x24424970  addiu       $v0, $v0, 0x4970
    ctx->pc = 0x1768e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18800));
    // 0x1768e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1768e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1768e8: 0x8c4a0000  lw          $t2, 0x0($v0)
    ctx->pc = 0x1768e8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1768ec: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x1768ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x1768f0: 0x24634670  addiu       $v1, $v1, 0x4670
    ctx->pc = 0x1768f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18032));
    // 0x1768f4: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x1768f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x1768f8: 0x473821  addu        $a3, $v0, $a3
    ctx->pc = 0x1768f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1768fc: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x1768fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x176900: 0x739c0  sll         $a3, $a3, 7
    ctx->pc = 0x176900u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 7));
    // 0x176904: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x176904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x176908: 0x673021  addu        $a2, $v1, $a3
    ctx->pc = 0x176908u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x17690c: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x17690cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x176910: 0x24c20000  addiu       $v0, $a2, 0x0
    ctx->pc = 0x176910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 0));
    // 0x176914: 0x433821  addu        $a3, $v0, $v1
    ctx->pc = 0x176914u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x176918: 0xa1100  sll         $v0, $t2, 4
    ctx->pc = 0x176918u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x17691c: 0x4a8023  subu        $s0, $v0, $t2
    ctx->pc = 0x17691cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x176920: 0x1301021  addu        $v0, $t1, $s0
    ctx->pc = 0x176920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 16)));
    // 0x176924: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x176924u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x176928: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x176928u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17692c: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x17692cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x176930: 0xc08f20e  jal         func_23C838
    ctx->pc = 0x176930u;
    SET_GPR_U32(ctx, 31, 0x176938u);
    ctx->pc = 0x176934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176930u;
    // 0x176934: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C838u, 0x176930u, 0x176938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176938u;
label_176938:
    // 0x176938: 0x3c020025  lui         $v0, 0x25
    ctx->pc = 0x176938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
    // 0x17693c: 0x24423b82  addiu       $v0, $v0, 0x3B82
    ctx->pc = 0x17693cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15234));
    // 0x176940: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x176940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x176944: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x176944u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x176948: 0x0  nop
    ctx->pc = 0x176948u;
    // NOP
    ctx->pc = 0x17694cu;
}
