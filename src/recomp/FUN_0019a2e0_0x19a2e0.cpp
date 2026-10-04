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

// Function: FUN_0019a2e0
// Address: 0x19a2e0 - 0x19a48c
void FUN_0019a2e0_0x19a2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0019a2e0_0x19a2e0");
#endif

    switch (ctx->pc) {
        case 0x19a33cu: goto label_19a33c;
        case 0x19a364u: goto label_19a364;
        case 0x19a380u: goto label_19a380;
        case 0x19a39cu: goto label_19a39c;
        case 0x19a3b8u: goto label_19a3b8;
        case 0x19a3d4u: goto label_19a3d4;
        case 0x19a3f0u: goto label_19a3f0;
        case 0x19a438u: goto label_19a438;
        case 0x19a468u: goto label_19a468;
        default: break;
    }

    ctx->pc = 0x19a2e0u;

    // 0x19a2e0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x19a2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x19a2e4: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x19a2e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x19a2e8: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x19a2e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x19a2ec: 0x84400  sll         $t0, $t0, 16
    ctx->pc = 0x19a2ecu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x19a2f0: 0xffbe00b0  sd          $fp, 0xB0($sp)
    ctx->pc = 0x19a2f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
    // 0x19a2f4: 0x98400  sll         $s0, $t1, 16
    ctx->pc = 0x19a2f4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
    // 0x19a2f8: 0xffb700a0  sd          $s7, 0xA0($sp)
    ctx->pc = 0x19a2f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 23));
    // 0x19a2fc: 0xa5400  sll         $t2, $t2, 16
    ctx->pc = 0x19a2fcu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
    // 0x19a300: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x19a300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x19a304: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x19a304u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    // 0x19a308: 0xffb50080  sd          $s5, 0x80($sp)
    ctx->pc = 0x19a308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
    // 0x19a30c: 0x8b403  sra         $s6, $t0, 16
    ctx->pc = 0x19a30cu;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 8), 16));
    // 0x19a310: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x19a310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x19a314: 0x5ac03  sra         $s5, $a1, 16
    ctx->pc = 0x19a314u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 5), 16));
    // 0x19a318: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x19a318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x19a31c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x19a31cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a320: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x19a320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x19a324: 0xabc03  sra         $s7, $t2, 16
    ctx->pc = 0x19a324u;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 10), 16));
    // 0x19a328: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x19a328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x19a32c: 0x68c00  sll         $s1, $a2, 16
    ctx->pc = 0x19a32cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x19a330: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x19a330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x19a334: 0xc06614a  jal         func_198528
    ctx->pc = 0x19A334u;
    SET_GPR_U32(ctx, 31, 0x19A33Cu);
    ctx->pc = 0x19A338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A334u;
    // 0x19a338: 0x7f400  sll         $fp, $a3, 16 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198528u, 0x19A334u, 0x19A33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A33Cu;
label_19a33c:
    // 0x19a33c: 0x119c03  sra         $s3, $s1, 16
    ctx->pc = 0x19a33cu;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 17), 16));
    // 0x19a340: 0x1ea403  sra         $s4, $fp, 16
    ctx->pc = 0x19a340u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 30), 16));
    // 0x19a344: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x19a344u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x19a348: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19a348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a34c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x19a34cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a350: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x19a350u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a354: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x19a354u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a358: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x19a358u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a35c: 0xc066168  jal         func_1985A0
    ctx->pc = 0x19A35Cu;
    SET_GPR_U32(ctx, 31, 0x19A364u);
    ctx->pc = 0x19A360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A35Cu;
    // 0x19a360: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1985A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1985A0u, 0x19A35Cu, 0x19A364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A364u;
label_19a364:
    // 0x19a364: 0x26440028  addiu       $a0, $s2, 0x28
    ctx->pc = 0x19a364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
    // 0x19a368: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x19a368u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a36c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x19a36cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a370: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x19a370u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a374: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x19a374u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a378: 0xc066168  jal         func_1985A0
    ctx->pc = 0x19A378u;
    SET_GPR_U32(ctx, 31, 0x19A380u);
    ctx->pc = 0x19A37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A378u;
    // 0x19a37c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1985A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1985A0u, 0x19A378u, 0x19A380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A380u;
label_19a380:
    // 0x19a380: 0x26440060  addiu       $a0, $s2, 0x60
    ctx->pc = 0x19a380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    // 0x19a384: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x19a384u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a388: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x19a388u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a38c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x19a38cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a390: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x19a390u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a394: 0xc066266  jal         func_198998
    ctx->pc = 0x19A394u;
    SET_GPR_U32(ctx, 31, 0x19A39Cu);
    ctx->pc = 0x19A398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A394u;
    // 0x19a398: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198998u, 0x19A394u, 0x19A39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A39Cu;
label_19a39c:
    // 0x19a39c: 0x264400e0  addiu       $a0, $s2, 0xE0
    ctx->pc = 0x19a39cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
    // 0x19a3a0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x19a3a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a3a4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x19a3a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a3a8: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x19a3a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a3ac: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x19a3acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a3b0: 0xc06681e  jal         func_19A078
    ctx->pc = 0x19A3B0u;
    SET_GPR_U32(ctx, 31, 0x19A3B8u);
    ctx->pc = 0x19A3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A3B0u;
    // 0x19a3b4: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19A078u, 0x19A3B0u, 0x19A3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A3B8u;
label_19a3b8:
    // 0x19a3b8: 0x264401d0  addiu       $a0, $s2, 0x1D0
    ctx->pc = 0x19a3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 464));
    // 0x19a3bc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x19a3bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a3c0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x19a3c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a3c4: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x19a3c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a3c8: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x19a3c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a3cc: 0xc066266  jal         func_198998
    ctx->pc = 0x19A3CCu;
    SET_GPR_U32(ctx, 31, 0x19A3D4u);
    ctx->pc = 0x19A3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A3CCu;
    // 0x19a3d0: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198998u, 0x19A3CCu, 0x19A3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A3D4u;
label_19a3d4:
    // 0x19a3d4: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x19a3d4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a3d8: 0x26440250  addiu       $a0, $s2, 0x250
    ctx->pc = 0x19a3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 592));
    // 0x19a3dc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x19a3dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a3e0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x19a3e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a3e4: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x19a3e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a3e8: 0xc06681e  jal         func_19A078
    ctx->pc = 0x19A3E8u;
    SET_GPR_U32(ctx, 31, 0x19A3F0u);
    ctx->pc = 0x19A3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A3E8u;
    // 0x19a3ec: 0x2c0402d  daddu       $t0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19A078u, 0x19A3E8u, 0x19A3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A3F0u;
label_19a3f0:
    // 0x19a3f0: 0x12e0001d  beqz        $s7, . + 4 + (0x1D << 2)
    ctx->pc = 0x19A3F0u;
    {
        const bool branch_taken_0x19a3f0 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A3F0u;
        // 0x19a3f4: 0x111443  sra         $v0, $s1, 17 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a3f0) {
            ctx->pc = 0x19A468u;
            goto label_19a468;
        }
    }
    ctx->pc = 0x19A3F8u;
    // 0x19a3f8: 0x24100800  addiu       $s0, $zero, 0x800
    ctx->pc = 0x19a3f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x19a3fc: 0x1e8c43  sra         $s1, $fp, 17
    ctx->pc = 0x19a3fcu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 30), 17));
    // 0x19a400: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x19a400u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x19a404: 0x2118823  subu        $s1, $s0, $s1
    ctx->pc = 0x19a404u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x19a408: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x19a408u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x19a40c: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x19a40cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x19a410: 0x26440160  addiu       $a0, $s2, 0x160
    ctx->pc = 0x19a410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 352));
    // 0x19a414: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x19a414u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x19a418: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x19a418u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a41c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x19a41cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a420: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x19a420u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a424: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x19a424u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a428: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x19a428u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a42c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x19a42cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a430: 0xc0662e0  jal         func_198B80
    ctx->pc = 0x19A430u;
    SET_GPR_U32(ctx, 31, 0x19A438u);
    ctx->pc = 0x19A434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A430u;
    // 0x19a434: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198B80u, 0x19A430u, 0x19A438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A438u;
label_19a438:
    // 0x19a438: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x19a438u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a43c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x19a43cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a440: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x19a440u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a444: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x19a444u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x19a448: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x19a448u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x19a44c: 0x264402d0  addiu       $a0, $s2, 0x2D0
    ctx->pc = 0x19a44cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 720));
    // 0x19a450: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x19a450u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x19a454: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x19a454u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a458: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x19a458u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a45c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x19a45cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a460: 0xc0662e0  jal         func_198B80
    ctx->pc = 0x19A460u;
    SET_GPR_U32(ctx, 31, 0x19A468u);
    ctx->pc = 0x19A464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A460u;
    // 0x19a464: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198B80u, 0x19A460u, 0x19A468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A468u;
label_19a468:
    // 0x19a468: 0x700014a9  por         $v0, $zero, $zero
    ctx->pc = 0x19a468u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19a46c: 0x24070016  addiu       $a3, $zero, 0x16
    ctx->pc = 0x19a46cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x19a470: 0x7e420050  sq          $v0, 0x50($s2)
    ctx->pc = 0x19a470u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 80), GPR_VEC(ctx, 2));
    // 0x19a474: 0x24068000  addiu       $a2, $zero, -0x8000
    ctx->pc = 0x19a474u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x19a478: 0x7e4201c0  sq          $v0, 0x1C0($s2)
    ctx->pc = 0x19a478u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 448), GPR_VEC(ctx, 2));
    // 0x19a47c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x19a47cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x19a480: 0xde440050  ld          $a0, 0x50($s2)
    ctx->pc = 0x19a480u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x19a484: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x19a484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x19a488: 0xde4501c0  ld          $a1, 0x1C0($s2)
    ctx->pc = 0x19a488u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 448)));
    ctx->pc = 0x19a48cu;
}
