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

// Function: FUN_00223810
// Address: 0x223810 - 0x2238d8
void FUN_00223810_0x223810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00223810_0x223810");
#endif

    switch (ctx->pc) {
        case 0x223820u: goto label_223820;
        case 0x22382cu: goto label_22382c;
        case 0x223838u: goto label_223838;
        case 0x22384cu: goto label_22384c;
        case 0x22387cu: goto label_22387c;
        case 0x22388cu: goto label_22388c;
        default: break;
    }

    ctx->pc = 0x223810u;

    // 0x223810: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x223810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x223814: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x223814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x223818: 0xc041738  jal         func_105CE0
    ctx->pc = 0x223818u;
    SET_GPR_U32(ctx, 31, 0x223820u);
    ctx->pc = 0x22381Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223818u;
    // 0x22381c: 0x240405ef  addiu       $a0, $zero, 0x5EF (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1519));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105CE0u, 0x223818u, 0x223820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223820u;
label_223820:
    // 0x223820: 0x22ac0  sll         $a1, $v0, 11
    ctx->pc = 0x223820u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x223824: 0xc070080  jal         func_1C0200
    ctx->pc = 0x223824u;
    SET_GPR_U32(ctx, 31, 0x22382Cu);
    ctx->pc = 0x223828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223824u;
    // 0x223828: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0200u, 0x223824u, 0x22382Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22382Cu;
label_22382c:
    // 0x22382c: 0x240405ef  addiu       $a0, $zero, 0x5EF
    ctx->pc = 0x22382cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1519));
    // 0x223830: 0xc0416e4  jal         func_105B90
    ctx->pc = 0x223830u;
    SET_GPR_U32(ctx, 31, 0x223838u);
    ctx->pc = 0x223834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223830u;
    // 0x223834: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105B90u, 0x223830u, 0x223838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223838u;
label_223838:
    // 0x223838: 0xaf8292dc  sw          $v0, -0x6D24($gp)
    ctx->pc = 0x223838u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939356), GPR_U32(ctx, 2));
    // 0x22383c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22383cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223840: 0x8f8692dc  lw          $a2, -0x6D24($gp)
    ctx->pc = 0x223840u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939356)));
    // 0x223844: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x223844u;
    {
        const bool branch_taken_0x223844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223844u;
        // 0x223848: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223844) {
            ctx->pc = 0x223860u;
            goto label_223860;
        }
    }
    ctx->pc = 0x22384Cu;
label_22384c:
    // 0x22384c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x22384cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x223850: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x223850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x223854: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x223854u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x223858: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x223858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x22385c: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x22385cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_223860:
    // 0x223860: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x223860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x223864: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x223864u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x223868: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x223868u;
    {
        const bool branch_taken_0x223868 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22386Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223868u;
        // 0x22386c: 0xc72021  addu        $a0, $a2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223868) {
            ctx->pc = 0x22384Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22384c;
        }
    }
    ctx->pc = 0x223870u;
    // 0x223870: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x223870u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223874: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x223874u;
    {
        const bool branch_taken_0x223874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223874u;
        // 0x223878: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223874) {
            ctx->pc = 0x2238C0u;
            goto label_2238c0;
        }
    }
    ctx->pc = 0x22387Cu;
label_22387c:
    // 0x22387c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x22387cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223880: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x223880u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x223884: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x223884u;
    {
        const bool branch_taken_0x223884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223884u;
        // 0x223888: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223884) {
            ctx->pc = 0x2238A8u;
            goto label_2238a8;
        }
    }
    ctx->pc = 0x22388Cu;
label_22388c:
    // 0x22388c: 0x0  nop
    ctx->pc = 0x22388cu;
    // NOP
    // 0x223890: 0xa82021  addu        $a0, $a1, $t0
    ctx->pc = 0x223890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x223894: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x223894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x223898: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x223898u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x22389c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x22389cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2238a0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2238a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2238a4: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x2238a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_2238a8:
    // 0x2238a8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2238a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2238ac: 0xe3182b  sltu        $v1, $a3, $v1
    ctx->pc = 0x2238acu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2238b0: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x2238B0u;
    {
        const bool branch_taken_0x2238b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2238b0) {
            ctx->pc = 0x22388Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22388c;
        }
    }
    ctx->pc = 0x2238B8u;
    // 0x2238b8: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x2238b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x2238bc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2238bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_2238c0:
    // 0x2238c0: 0x8f8492dc  lw          $a0, -0x6D24($gp)
    ctx->pc = 0x2238c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939356)));
    // 0x2238c4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2238c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2238c8: 0xc3182b  sltu        $v1, $a2, $v1
    ctx->pc = 0x2238c8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2238cc: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x2238CCu;
    {
        const bool branch_taken_0x2238cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2238D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2238CCu;
        // 0x2238d0: 0x891821  addu        $v1, $a0, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2238cc) {
            ctx->pc = 0x22387Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22387c;
        }
    }
    ctx->pc = 0x2238D4u;
    // 0x2238d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2238d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x2238d8u;
}
