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

// Function: FUN_00233688
// Address: 0x233688 - 0x2336f8
void FUN_00233688_0x233688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00233688_0x233688");
#endif

    switch (ctx->pc) {
        case 0x2336a0u: goto label_2336a0;
        case 0x2336b4u: goto label_2336b4;
        case 0x2336bcu: goto label_2336bc;
        case 0x2336c0u: goto label_2336c0;
        default: break;
    }

    ctx->pc = 0x233688u;

    // 0x233688: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x233688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x23368c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23368cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x233690: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x233690u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233694: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x233694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x233698: 0xc08c94e  jal         func_232538
    ctx->pc = 0x233698u;
    SET_GPR_U32(ctx, 31, 0x2336A0u);
    ctx->pc = 0x23369Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233698u;
    // 0x23369c: 0x26040048  addiu       $a0, $s0, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232538u, 0x233698u, 0x2336A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2336A0u;
label_2336a0:
    // 0x2336a0: 0x8f8482d0  lw          $a0, -0x7D30($gp)
    ctx->pc = 0x2336a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
    // 0x2336a4: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x2336a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
    // 0x2336a8: 0x34211144  ori         $at, $at, 0x1144
    ctx->pc = 0x2336a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4420);
    // 0x2336ac: 0xc08cf68  jal         func_233DA0
    ctx->pc = 0x2336ACu;
    SET_GPR_U32(ctx, 31, 0x2336B4u);
    ctx->pc = 0x2336B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2336ACu;
    // 0x2336b0: 0x242021  addu        $a0, $at, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233DA0u, 0x2336ACu, 0x2336B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2336B4u;
label_2336b4:
    // 0x2336b4: 0xc08ce00  jal         func_233800
    ctx->pc = 0x2336B4u;
    SET_GPR_U32(ctx, 31, 0x2336BCu);
    ctx->pc = 0x2336B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2336B4u;
    // 0x2336b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233800u, 0x2336B4u, 0x2336BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2336BCu;
label_2336bc:
    // 0x2336bc: 0x8f8382d0  lw          $v1, -0x7D30($gp)
    ctx->pc = 0x2336bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_2336c0:
    // 0x2336c0: 0x3c020009  lui         $v0, 0x9
    ctx->pc = 0x2336c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9 << 16));
    // 0x2336c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2336c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2336c8: 0x8c421150  lw          $v0, 0x1150($v0)
    ctx->pc = 0x2336c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4432)));
    // 0x2336cc: 0x0  nop
    ctx->pc = 0x2336ccu;
    // NOP
    // 0x2336d0: 0x0  nop
    ctx->pc = 0x2336d0u;
    // NOP
    // 0x2336d4: 0x0  nop
    ctx->pc = 0x2336d4u;
    // NOP
    // 0x2336d8: 0x0  nop
    ctx->pc = 0x2336d8u;
    // NOP
    // 0x2336dc: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2336DCu;
    {
        const bool branch_taken_0x2336dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2336E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2336DCu;
        // 0x2336e0: 0xdfbf0008  ld          $ra, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2336dc) {
            ctx->pc = 0x2336C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2336c0;
        }
    }
    ctx->pc = 0x2336E4u;
    // 0x2336e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2336e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2336e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2336e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2336ec: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2336ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2336f0: 0x808cd36  j           func_2334D8
    ctx->pc = 0x2336F0u;
    ctx->pc = 0x2336F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2336F0u;
    // 0x2336f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2334D8u;
    FUN_002334d8_0x2334d8(rdram, ctx, runtime); return;
    ctx->pc = 0x2336F8u;
}
