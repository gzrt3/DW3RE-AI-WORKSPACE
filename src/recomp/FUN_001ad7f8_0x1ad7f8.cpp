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

// Function: FUN_001ad7f8
// Address: 0x1ad7f8 - 0x1ad89c
void FUN_001ad7f8_0x1ad7f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ad7f8_0x1ad7f8");
#endif

    switch (ctx->pc) {
        case 0x1ad810u: goto label_1ad810;
        case 0x1ad830u: goto label_1ad830;
        case 0x1ad848u: goto label_1ad848;
        case 0x1ad850u: goto label_1ad850;
        case 0x1ad858u: goto label_1ad858;
        case 0x1ad864u: goto label_1ad864;
        case 0x1ad868u: goto label_1ad868;
        case 0x1ad870u: goto label_1ad870;
        case 0x1ad880u: goto label_1ad880;
        default: break;
    }

    ctx->pc = 0x1ad7f8u;

    // 0x1ad7f8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1ad7f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1ad7fc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1ad7fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1ad800: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1ad800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1ad804: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1ad804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1ad808: 0xc06b5e4  jal         func_1AD790
    ctx->pc = 0x1AD808u;
    SET_GPR_U32(ctx, 31, 0x1AD810u);
    ctx->pc = 0x1AD80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD808u;
    // 0x1ad80c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD790u, 0x1AD808u, 0x1AD810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD810u;
label_1ad810:
    // 0x1ad810: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1AD810u;
    {
        const bool branch_taken_0x1ad810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD810u;
        // 0x1ad814: 0x3c020028  lui         $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad810) {
            ctx->pc = 0x1AD88Cu;
            goto label_1ad88c;
        }
    }
    ctx->pc = 0x1AD818u;
    // 0x1ad818: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x1ad818u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ad81c: 0x24506a38  addiu       $s0, $v0, 0x6A38
    ctx->pc = 0x1ad81cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 27192));
    // 0x1ad820: 0x8c446a38  lw          $a0, 0x6A38($v0)
    ctx->pc = 0x1ad820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 27192)));
    // 0x1ad824: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1ad824u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1ad828: 0xc06b5ca  jal         func_1AD728
    ctx->pc = 0x1AD828u;
    SET_GPR_U32(ctx, 31, 0x1AD830u);
    ctx->pc = 0x1AD82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD828u;
    // 0x1ad82c: 0x26110010  addiu       $s1, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD728u, 0x1AD828u, 0x1AD830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD830u;
label_1ad830:
    // 0x1ad830: 0x3c050028  lui         $a1, 0x28
    ctx->pc = 0x1ad830u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
    // 0x1ad834: 0x3c048007  lui         $a0, 0x8007
    ctx->pc = 0x1ad834u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32775 << 16));
    // 0x1ad838: 0x240607a8  addiu       $a2, $zero, 0x7A8
    ctx->pc = 0x1ad838u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1960));
    // 0x1ad83c: 0x24a56290  addiu       $a1, $a1, 0x6290
    ctx->pc = 0x1ad83cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25232));
    // 0x1ad840: 0xc06b5ce  jal         func_1AD738
    ctx->pc = 0x1AD840u;
    SET_GPR_U32(ctx, 31, 0x1AD848u);
    ctx->pc = 0x1AD844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD840u;
    // 0x1ad844: 0x34844000  ori         $a0, $a0, 0x4000 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD738u, 0x1AD840u, 0x1AD848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD848u;
label_1ad848:
    // 0x1ad848: 0xc0692a8  jal         func_1A4AA0
    ctx->pc = 0x1AD848u;
    SET_GPR_U32(ctx, 31, 0x1AD850u);
    ctx->pc = 0x1AD84Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD848u;
    // 0x1ad84c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4AA0u, 0x1AD848u, 0x1AD850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD850u;
label_1ad850:
    // 0x1ad850: 0xc0692a8  jal         func_1A4AA0
    ctx->pc = 0x1AD850u;
    SET_GPR_U32(ctx, 31, 0x1AD858u);
    ctx->pc = 0x1AD854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD850u;
    // 0x1ad854: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4AA0u, 0x1AD850u, 0x1AD858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD858u;
label_1ad858:
    // 0x1ad858: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1ad858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1ad85c: 0xc06b5ca  jal         func_1AD728
    ctx->pc = 0x1AD85Cu;
    SET_GPR_U32(ctx, 31, 0x1AD864u);
    ctx->pc = 0x1AD860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD85Cu;
    // 0x1ad860: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD728u, 0x1AD85Cu, 0x1AD864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD864u;
label_1ad864:
    // 0x1ad864: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1ad864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1ad868:
    // 0x1ad868: 0xc06b5e0  jal         func_1AD780
    ctx->pc = 0x1AD868u;
    SET_GPR_U32(ctx, 31, 0x1AD870u);
    ctx->pc = 0x1AD86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD868u;
    // 0x1ad86c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD780u, 0x1AD868u, 0x1AD870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD870u;
label_1ad870:
    // 0x1ad870: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1ad870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1ad874: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ad874u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad878: 0xc06b5ca  jal         func_1AD728
    ctx->pc = 0x1AD878u;
    SET_GPR_U32(ctx, 31, 0x1AD880u);
    ctx->pc = 0x1AD87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD878u;
    // 0x1ad87c: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD728u, 0x1AD878u, 0x1AD880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD880u;
label_1ad880:
    // 0x1ad880: 0x2e420003  sltiu       $v0, $s2, 0x3
    ctx->pc = 0x1ad880u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x1ad884: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1AD884u;
    {
        const bool branch_taken_0x1ad884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ad884) {
            ctx->pc = 0x1AD888u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AD884u;
            // 0x1ad888: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AD868u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ad868;
        }
    }
    ctx->pc = 0x1AD88Cu;
label_1ad88c:
    // 0x1ad88c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1ad88cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ad890: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1ad890u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ad894: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1ad894u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ad898: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ad898u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x1ad89cu;
}
