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

// Function: FUN_00116840
// Address: 0x116840 - 0x1168bc
void FUN_00116840_0x116840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00116840_0x116840");
#endif

    switch (ctx->pc) {
        case 0x116868u: goto label_116868;
        case 0x11687cu: goto label_11687c;
        case 0x1168a4u: goto label_1168a4;
        case 0x1168b8u: goto label_1168b8;
        default: break;
    }

    ctx->pc = 0x116840u;

    // 0x116840: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x116840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x116844: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x116844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x116848: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x116848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x11684c: 0x908301a2  lbu         $v1, 0x1A2($a0)
    ctx->pc = 0x11684cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 418)));
    // 0x116850: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x116850u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x116854: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x116854u;
    {
        const bool branch_taken_0x116854 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x116858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116854u;
        // 0x116858: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116854) {
            ctx->pc = 0x11687Cu;
            goto label_11687c;
        }
    }
    ctx->pc = 0x11685Cu;
    // 0x11685c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x11685cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116860: 0xc045180  jal         func_114600
    ctx->pc = 0x116860u;
    SET_GPR_U32(ctx, 31, 0x116868u);
    ctx->pc = 0x116864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116860u;
    // 0x116864: 0x26050150  addiu       $a1, $s0, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114600u, 0x116860u, 0x116868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116868u;
label_116868:
    // 0x116868: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x116868u;
    {
        const bool branch_taken_0x116868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11686Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116868u;
        // 0x11686c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116868) {
            ctx->pc = 0x11687Cu;
            goto label_11687c;
        }
    }
    ctx->pc = 0x116870u;
    // 0x116870: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x116870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116874: 0xc045a34  jal         func_1168D0
    ctx->pc = 0x116874u;
    SET_GPR_U32(ctx, 31, 0x11687Cu);
    ctx->pc = 0x116878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116874u;
    // 0x116878: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1168D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1168D0u, 0x116874u, 0x11687Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11687Cu;
label_11687c:
    // 0x11687c: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x11687cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x116880: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x116880u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x116884: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x116884u;
    {
        const bool branch_taken_0x116884 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x116884) {
            ctx->pc = 0x1168B8u;
            goto label_1168b8;
        }
    }
    ctx->pc = 0x11688Cu;
    // 0x11688c: 0x920301a2  lbu         $v1, 0x1A2($s0)
    ctx->pc = 0x11688cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 418)));
    // 0x116890: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x116890u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x116894: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x116894u;
    {
        const bool branch_taken_0x116894 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x116898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116894u;
        // 0x116898: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116894) {
            ctx->pc = 0x1168B8u;
            goto label_1168b8;
        }
    }
    ctx->pc = 0x11689Cu;
    // 0x11689c: 0xc045180  jal         func_114600
    ctx->pc = 0x11689Cu;
    SET_GPR_U32(ctx, 31, 0x1168A4u);
    ctx->pc = 0x1168A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11689Cu;
    // 0x1168a0: 0x26050150  addiu       $a1, $s0, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114600u, 0x11689Cu, 0x1168A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1168A4u;
label_1168a4:
    // 0x1168a4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1168A4u;
    {
        const bool branch_taken_0x1168a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1168A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1168A4u;
        // 0x1168a8: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1168a4) {
            ctx->pc = 0x1168B8u;
            goto label_1168b8;
        }
    }
    ctx->pc = 0x1168ACu;
    // 0x1168ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1168acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1168b0: 0xc045a34  jal         func_1168D0
    ctx->pc = 0x1168B0u;
    SET_GPR_U32(ctx, 31, 0x1168B8u);
    ctx->pc = 0x1168B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1168B0u;
    // 0x1168b4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1168D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1168D0u, 0x1168B0u, 0x1168B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1168B8u;
label_1168b8:
    // 0x1168b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1168b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x1168bcu;
}
