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

// Function: FUN_0023f660
// Address: 0x23f660 - 0x23f748
void FUN_0023f660_0x23f660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0023f660_0x23f660");
#endif

    switch (ctx->pc) {
        case 0x23f688u: goto label_23f688;
        case 0x23f69cu: goto label_23f69c;
        case 0x23f6a4u: goto label_23f6a4;
        case 0x23f6b0u: goto label_23f6b0;
        case 0x23f6c0u: goto label_23f6c0;
        case 0x23f6c8u: goto label_23f6c8;
        case 0x23f6dcu: goto label_23f6dc;
        case 0x23f700u: goto label_23f700;
        case 0x23f710u: goto label_23f710;
        case 0x23f718u: goto label_23f718;
        case 0x23f720u: goto label_23f720;
        case 0x23f728u: goto label_23f728;
        case 0x23f738u: goto label_23f738;
        case 0x23f740u: goto label_23f740;
        default: break;
    }

    ctx->pc = 0x23f660u;

    // 0x23f660: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23f660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23f664: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x23f664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x23f668: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x23f668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x23f66c: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x23f66cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x23f670: 0x240600a0  addiu       $a2, $zero, 0xA0
    ctx->pc = 0x23f670u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x23f674: 0x3407fff0  ori         $a3, $zero, 0xFFF0
    ctx->pc = 0x23f674u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65520);
    // 0x23f678: 0x240801f8  addiu       $t0, $zero, 0x1F8
    ctx->pc = 0x23f678u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 504));
    // 0x23f67c: 0x24090080  addiu       $t1, $zero, 0x80
    ctx->pc = 0x23f67cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x23f680: 0xc07aa5c  jal         func_1EA970
    ctx->pc = 0x23F680u;
    SET_GPR_U32(ctx, 31, 0x23F688u);
    ctx->pc = 0x23F684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F680u;
    // 0x23f684: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA970u, 0x23F680u, 0x23F688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F688u;
label_23f688:
    // 0x23f688: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x23f688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x23f68c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x23f68cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23f690: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x23f690u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x23f694: 0xc07aa7c  jal         func_1EA9F0
    ctx->pc = 0x23F694u;
    SET_GPR_U32(ctx, 31, 0x23F69Cu);
    ctx->pc = 0x23F698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F694u;
    // 0x23f698: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA9F0u, 0x23F694u, 0x23F69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F69Cu;
label_23f69c:
    // 0x23f69c: 0xc07ab08  jal         func_1EAC20
    ctx->pc = 0x23F69Cu;
    SET_GPR_U32(ctx, 31, 0x23F6A4u);
    ctx->pc = 0x23F6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F69Cu;
    // 0x23f6a0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAC20u, 0x23F69Cu, 0x23F6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F6A4u;
label_23f6a4:
    // 0x23f6a4: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x23f6a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
    // 0x23f6a8: 0xc07aaa8  jal         func_1EAAA0
    ctx->pc = 0x23F6A8u;
    SET_GPR_U32(ctx, 31, 0x23F6B0u);
    ctx->pc = 0x23F6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F6A8u;
    // 0x23f6ac: 0x8c24c960  lw          $a0, -0x36A0($at) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953312)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAAA0u, 0x23F6A8u, 0x23F6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F6B0u;
label_23f6b0:
    // 0x23f6b0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x23f6b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f6b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23f6b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f6b8: 0xc07aa94  jal         func_1EAA50
    ctx->pc = 0x23F6B8u;
    SET_GPR_U32(ctx, 31, 0x23F6C0u);
    ctx->pc = 0x23F6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F6B8u;
    // 0x23f6bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAA50u, 0x23F6B8u, 0x23F6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F6C0u;
label_23f6c0:
    // 0x23f6c0: 0xc07ab38  jal         func_1EACE0
    ctx->pc = 0x23F6C0u;
    SET_GPR_U32(ctx, 31, 0x23F6C8u);
    ctx->pc = 0x1EACE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EACE0u, 0x23F6C0u, 0x23F6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F6C8u;
label_23f6c8:
    // 0x23f6c8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x23f6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23f6cc: 0x1443000e  bne         $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x23F6CCu;
    {
        const bool branch_taken_0x23f6cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x23f6cc) {
            ctx->pc = 0x23F708u;
            goto label_23f708;
        }
    }
    ctx->pc = 0x23F6D4u;
    // 0x23f6d4: 0xc07aaa4  jal         func_1EAA90
    ctx->pc = 0x23F6D4u;
    SET_GPR_U32(ctx, 31, 0x23F6DCu);
    ctx->pc = 0x1EAA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAA90u, 0x23F6D4u, 0x23F6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F6DCu;
label_23f6dc:
    // 0x23f6dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23f6dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23f6e0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x23f6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23f6e4: 0x12020004  beq         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23F6E4u;
    {
        const bool branch_taken_0x23f6e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x23f6e4) {
            ctx->pc = 0x23F6F8u;
            goto label_23f6f8;
        }
    }
    ctx->pc = 0x23F6ECu;
    // 0x23f6ec: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x23f6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23f6f0: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23F6F0u;
    {
        const bool branch_taken_0x23f6f0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x23f6f0) {
            ctx->pc = 0x23F708u;
            goto label_23f708;
        }
    }
    ctx->pc = 0x23F6F8u;
label_23f6f8:
    // 0x23f6f8: 0xc07aaa0  jal         func_1EAA80
    ctx->pc = 0x23F6F8u;
    SET_GPR_U32(ctx, 31, 0x23F700u);
    ctx->pc = 0x1EAA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAA80u, 0x23F6F8u, 0x23F700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F700u;
label_23f700:
    // 0x23f700: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x23F700u;
    {
        const bool branch_taken_0x23f700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f700) {
            ctx->pc = 0x23F730u;
            goto label_23f730;
        }
    }
    ctx->pc = 0x23F708u;
label_23f708:
    // 0x23f708: 0xc07a9d8  jal         func_1EA760
    ctx->pc = 0x23F708u;
    SET_GPR_U32(ctx, 31, 0x23F710u);
    ctx->pc = 0x1EA760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA760u, 0x23F708u, 0x23F710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F710u;
label_23f710:
    // 0x23f710: 0xc07a86c  jal         func_1EA1B0
    ctx->pc = 0x23F710u;
    SET_GPR_U32(ctx, 31, 0x23F718u);
    ctx->pc = 0x1EA1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA1B0u, 0x23F710u, 0x23F718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F718u;
label_23f718:
    // 0x23f718: 0xc05b578  jal         func_16D5E0
    ctx->pc = 0x23F718u;
    SET_GPR_U32(ctx, 31, 0x23F720u);
    ctx->pc = 0x23F71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F718u;
    // 0x23f71c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x23F718u, 0x23F720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F720u;
label_23f720:
    // 0x23f720: 0xc060258  jal         func_180960
    ctx->pc = 0x23F720u;
    SET_GPR_U32(ctx, 31, 0x23F728u);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x23F720u, 0x23F728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F728u;
label_23f728:
    // 0x23f728: 0x1000ffe5  b           . + 4 + (-0x1B << 2)
    ctx->pc = 0x23F728u;
    {
        const bool branch_taken_0x23f728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23f728) {
            ctx->pc = 0x23F6C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23f6c0;
        }
    }
    ctx->pc = 0x23F730u;
label_23f730:
    // 0x23f730: 0xc07aaa0  jal         func_1EAA80
    ctx->pc = 0x23F730u;
    SET_GPR_U32(ctx, 31, 0x23F738u);
    ctx->pc = 0x1EAA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAA80u, 0x23F730u, 0x23F738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F738u;
label_23f738:
    // 0x23f738: 0xc07ab18  jal         func_1EAC60
    ctx->pc = 0x23F738u;
    SET_GPR_U32(ctx, 31, 0x23F740u);
    ctx->pc = 0x23F73Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F738u;
    // 0x23f73c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAC60u, 0x23F738u, 0x23F740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F740u;
label_23f740:
    // 0x23f740: 0xc060258  jal         func_180960
    ctx->pc = 0x23F740u;
    SET_GPR_U32(ctx, 31, 0x23F748u);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x23F740u, 0x23F748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F748u;
}
