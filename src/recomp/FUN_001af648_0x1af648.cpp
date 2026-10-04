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

// Function: FUN_001af648
// Address: 0x1af648 - 0x1af954
void FUN_001af648_0x1af648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001af648_0x1af648");
#endif

    switch (ctx->pc) {
        case 0x1af688u: goto label_1af688;
        case 0x1af694u: goto label_1af694;
        case 0x1af6c0u: goto label_1af6c0;
        case 0x1af6c8u: goto label_1af6c8;
        case 0x1af6d8u: goto label_1af6d8;
        case 0x1af6f8u: goto label_1af6f8;
        case 0x1af700u: goto label_1af700;
        case 0x1af720u: goto label_1af720;
        case 0x1af734u: goto label_1af734;
        case 0x1af754u: goto label_1af754;
        case 0x1af760u: goto label_1af760;
        case 0x1af7c0u: goto label_1af7c0;
        case 0x1af814u: goto label_1af814;
        case 0x1af830u: goto label_1af830;
        case 0x1af858u: goto label_1af858;
        case 0x1af86cu: goto label_1af86c;
        case 0x1af8e0u: goto label_1af8e0;
        case 0x1af8f8u: goto label_1af8f8;
        case 0x1af910u: goto label_1af910;
        case 0x1af928u: goto label_1af928;
        default: break;
    }

    ctx->pc = 0x1af648u;

    // 0x1af648: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1af648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1af64c: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x1af64cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x1af650: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1af650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x1af654: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1af654u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af658: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x1af658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x1af65c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1af65cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af660: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x1af660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x1af664: 0x3c160028  lui         $s6, 0x28
    ctx->pc = 0x1af664u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)40 << 16));
    // 0x1af668: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x1af668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x1af66c: 0xffb70090  sd          $s7, 0x90($sp)
    ctx->pc = 0x1af66cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x1af670: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x1af670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x1af674: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x1af674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x1af678: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x1af678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x1af67c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1af67cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1af680: 0xc06bcfa  jal         func_1AF3E8
    ctx->pc = 0x1AF680u;
    SET_GPR_U32(ctx, 31, 0x1AF688u);
    ctx->pc = 0x1AF684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF680u;
    // 0x1af684: 0xafa60010  sw          $a2, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF3E8u, 0x1AF680u, 0x1AF688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF688u;
label_1af688:
    // 0x1af688: 0x8ec472a8  lw          $a0, 0x72A8($s6)
    ctx->pc = 0x1af688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 29352)));
    // 0x1af68c: 0xc06921c  jal         func_1A4870
    ctx->pc = 0x1AF68Cu;
    SET_GPR_U32(ctx, 31, 0x1AF694u);
    ctx->pc = 0x1A4870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4870u, 0x1AF68Cu, 0x1AF694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF694u;
label_1af694:
    // 0x1af694: 0x8ec372a8  lw          $v1, 0x72A8($s6)
    ctx->pc = 0x1af694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 29352)));
    // 0x1af698: 0x146200a4  bne         $v1, $v0, . + 4 + (0xA4 << 2)
    ctx->pc = 0x1AF698u;
    {
        const bool branch_taken_0x1af698 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AF69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF698u;
        // 0x1af69c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af698) {
            ctx->pc = 0x1AF92Cu;
            goto label_1af92c;
        }
    }
    ctx->pc = 0x1AF6A0u;
    // 0x1af6a0: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1af6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1af6a4: 0x3c060028  lui         $a2, 0x28
    ctx->pc = 0x1af6a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)40 << 16));
    // 0x1af6a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1af6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1af6ac: 0x8c445f50  lw          $a0, 0x5F50($v0)
    ctx->pc = 0x1af6acu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x375F50u));
    // 0x1af6b0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1af6b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1af6b4: 0xacc3729c  sw          $v1, 0x729C($a2)
    ctx->pc = 0x1af6b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x28729Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x28729Cu, _value); } while (0);
    // 0x1af6b8: 0xc0691c8  jal         func_1A4720
    ctx->pc = 0x1AF6B8u;
    SET_GPR_U32(ctx, 31, 0x1AF6C0u);
    ctx->pc = 0x1AF6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF6B8u;
    // 0x1af6bc: 0x24a55f58  addiu       $a1, $a1, 0x5F58 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4720u, 0x1AF6B8u, 0x1AF6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF6C0u;
label_1af6c0:
    // 0x1af6c0: 0xc06bee2  jal         func_1AFB88
    ctx->pc = 0x1AF6C0u;
    SET_GPR_U32(ctx, 31, 0x1AF6C8u);
    ctx->pc = 0x1AF6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF6C0u;
    // 0x1af6c4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFB88u, 0x1AF6C0u, 0x1AF6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF6C8u;
label_1af6c8:
    // 0x1af6c8: 0x14400065  bnez        $v0, . + 4 + (0x65 << 2)
    ctx->pc = 0x1AF6C8u;
    {
        const bool branch_taken_0x1af6c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AF6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF6C8u;
        // 0x1af6cc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af6c8) {
            ctx->pc = 0x1AF860u;
            goto label_1af860;
        }
    }
    ctx->pc = 0x1AF6D0u;
    // 0x1af6d0: 0xc069c1a  jal         func_1A7068
    ctx->pc = 0x1AF6D0u;
    SET_GPR_U32(ctx, 31, 0x1AF6D8u);
    ctx->pc = 0x1AF6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF6D0u;
    // 0x1af6d4: 0x3c110028  lui         $s1, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)40 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7068u, 0x1AF6D0u, 0x1AF6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF6D8u;
label_1af6d8:
    // 0x1af6d8: 0x8e2272c0  lw          $v0, 0x72C0($s1)
    ctx->pc = 0x1af6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 29376)));
    // 0x1af6dc: 0x441002d  bgez        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1AF6DCu;
    {
        const bool branch_taken_0x1af6dc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1AF6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF6DCu;
        // 0x1af6e0: 0x3c170037  lui         $s7, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af6dc) {
            ctx->pc = 0x1AF794u;
            goto label_1af794;
        }
    }
    ctx->pc = 0x1AF6E4u;
    // 0x1af6e4: 0x3c140028  lui         $s4, 0x28
    ctx->pc = 0x1af6e4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)40 << 16));
    // 0x1af6e8: 0x3c150037  lui         $s5, 0x37
    ctx->pc = 0x1af6e8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)55 << 16));
    // 0x1af6ec: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1AF6ECu;
    {
        const bool branch_taken_0x1af6ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF6ECu;
        // 0x1af6f0: 0x3c1e0037  lui         $fp, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af6ec) {
            ctx->pc = 0x1AF71Cu;
            goto label_1af71c;
        }
    }
    ctx->pc = 0x1AF6F4u;
    // 0x1af6f4: 0x0  nop
    ctx->pc = 0x1af6f4u;
    // NOP
label_1af6f8:
    // 0x1af6f8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1af6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1af6fc: 0x0  nop
    ctx->pc = 0x1af6fcu;
    // NOP
label_1af700:
    // 0x1af700: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1af700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1af704: 0x0  nop
    ctx->pc = 0x1af704u;
    // NOP
    // 0x1af708: 0x0  nop
    ctx->pc = 0x1af708u;
    // NOP
    // 0x1af70c: 0x0  nop
    ctx->pc = 0x1af70cu;
    // NOP
    // 0x1af710: 0x0  nop
    ctx->pc = 0x1af710u;
    // NOP
    // 0x1af714: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1AF714u;
    {
        const bool branch_taken_0x1af714 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1af714) {
            ctx->pc = 0x1AF700u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1af700;
        }
    }
    ctx->pc = 0x1AF71Cu;
label_1af71c:
    // 0x1af71c: 0x26f06140  addiu       $s0, $s7, 0x6140
    ctx->pc = 0x1af71cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 24896));
label_1af720:
    // 0x1af720: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x1af720u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x1af724: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1af724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af728: 0x34a50597  ori         $a1, $a1, 0x597
    ctx->pc = 0x1af728u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1431);
    // 0x1af72c: 0xc069db6  jal         func_1A76D8
    ctx->pc = 0x1AF72Cu;
    SET_GPR_U32(ctx, 31, 0x1AF734u);
    ctx->pc = 0x1AF730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF72Cu;
    // 0x1af730: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A76D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A76D8u, 0x1AF72Cu, 0x1AF734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF734u;
label_1af734:
    // 0x1af734: 0x4430013  bgezl       $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1AF734u;
    {
        const bool branch_taken_0x1af734 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1af734) {
            ctx->pc = 0x1AF738u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AF734u;
            // 0x1af738: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AF784u;
            goto label_1af784;
        }
    }
    ctx->pc = 0x1AF73Cu;
    // 0x1af73c: 0x8e827290  lw          $v0, 0x7290($s4)
    ctx->pc = 0x1af73cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 29328)));
    // 0x1af740: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AF740u;
    {
        const bool branch_taken_0x1af740 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1AF744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF740u;
        // 0x1af744: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af740) {
            ctx->pc = 0x1AF758u;
            goto label_1af758;
        }
    }
    ctx->pc = 0x1AF748u;
    // 0x1af748: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1af748u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x1af74c: 0xc069a30  jal         func_1A68C0
    ctx->pc = 0x1AF74Cu;
    SET_GPR_U32(ctx, 31, 0x1AF754u);
    ctx->pc = 0x1AF750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF74Cu;
    // 0x1af750: 0x2484a978  addiu       $a0, $a0, -0x5688 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A68C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A68C0u, 0x1AF74Cu, 0x1AF754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF754u;
label_1af754:
    // 0x1af754: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x1af754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
label_1af758:
    // 0x1af758: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1af758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1af75c: 0x0  nop
    ctx->pc = 0x1af75cu;
    // NOP
label_1af760:
    // 0x1af760: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1af760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1af764: 0x0  nop
    ctx->pc = 0x1af764u;
    // NOP
    // 0x1af768: 0x0  nop
    ctx->pc = 0x1af768u;
    // NOP
    // 0x1af76c: 0x0  nop
    ctx->pc = 0x1af76cu;
    // NOP
    // 0x1af770: 0x0  nop
    ctx->pc = 0x1af770u;
    // NOP
    // 0x1af774: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1AF774u;
    {
        const bool branch_taken_0x1af774 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1af774) {
            ctx->pc = 0x1AF760u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1af760;
        }
    }
    ctx->pc = 0x1AF77Cu;
    // 0x1af77c: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x1AF77Cu;
    {
        const bool branch_taken_0x1af77c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF77Cu;
        // 0x1af780: 0x26f06140  addiu       $s0, $s7, 0x6140 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 24896));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af77c) {
            ctx->pc = 0x1AF720u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1af720;
        }
    }
    ctx->pc = 0x1AF784u;
label_1af784:
    // 0x1af784: 0x1040ffdc  beqz        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x1AF784u;
    {
        const bool branch_taken_0x1af784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF784u;
        // 0x1af788: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af784) {
            ctx->pc = 0x1AF6F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1af6f8;
        }
    }
    ctx->pc = 0x1AF78Cu;
    // 0x1af78c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1AF78Cu;
    {
        const bool branch_taken_0x1af78c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF78Cu;
        // 0x1af790: 0xae2072c0  sw          $zero, 0x72C0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 29376), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af78c) {
            ctx->pc = 0x1AF7A0u;
            goto label_1af7a0;
        }
    }
    ctx->pc = 0x1AF794u;
label_1af794:
    // 0x1af794: 0x3c140028  lui         $s4, 0x28
    ctx->pc = 0x1af794u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)40 << 16));
    // 0x1af798: 0x3c150037  lui         $s5, 0x37
    ctx->pc = 0x1af798u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)55 << 16));
    // 0x1af79c: 0x3c1e0037  lui         $fp, 0x37
    ctx->pc = 0x1af79cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)55 << 16));
label_1af7a0:
    // 0x1af7a0: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x1af7a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1af7a4: 0x26a45fc0  addiu       $a0, $s5, 0x5FC0
    ctx->pc = 0x1af7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 24512));
    // 0x1af7a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1af7a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af7ac: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x1af7acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1af7b0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1AF7B0u;
    {
        const bool branch_taken_0x1af7b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF7B0u;
        // 0x1af7b4: 0xa0830024  sb          $v1, 0x24($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 36), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af7b0) {
            ctx->pc = 0x1AF7E4u;
            goto label_1af7e4;
        }
    }
    ctx->pc = 0x1AF7B8u;
    // 0x1af7b8: 0x24860024  addiu       $a2, $a0, 0x24
    ctx->pc = 0x1af7b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
    // 0x1af7bc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1af7bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1af7c0:
    // 0x1af7c0: 0x28a20100  slti        $v0, $a1, 0x100
    ctx->pc = 0x1af7c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x1af7c4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AF7C4u;
    {
        const bool branch_taken_0x1af7c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF7C4u;
        // 0x1af7c8: 0x2451021  addu        $v0, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af7c4) {
            ctx->pc = 0x1AF7E4u;
            goto label_1af7e4;
        }
    }
    ctx->pc = 0x1AF7CCu;
    // 0x1af7cc: 0xa62021  addu        $a0, $a1, $a2
    ctx->pc = 0x1af7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1af7d0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1af7d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1af7d4: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x1af7d4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1af7d8: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1af7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1af7dc: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1AF7DCu;
    {
        const bool branch_taken_0x1af7dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1af7dc) {
            ctx->pc = 0x1AF7E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AF7DCu;
            // 0x1af7e0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AF7C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1af7c0;
        }
    }
    ctx->pc = 0x1AF7E4u;
label_1af7e4:
    // 0x1af7e4: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x1af7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1af7e8: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AF7E8u;
    {
        const bool branch_taken_0x1af7e8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AF7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF7E8u;
        // 0x1af7ec: 0x8e827290  lw          $v0, 0x7290($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 29328)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af7e8) {
            ctx->pc = 0x1AF7FCu;
            goto label_1af7fc;
        }
    }
    ctx->pc = 0x1AF7F0u;
    // 0x1af7f0: 0x26a25fc0  addiu       $v0, $s5, 0x5FC0
    ctx->pc = 0x1af7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 24512));
    // 0x1af7f4: 0xa0400123  sb          $zero, 0x123($v0)
    ctx->pc = 0x1af7f4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 291), (uint8_t)GPR_U32(ctx, 0));
    // 0x1af7f8: 0x8e827290  lw          $v0, 0x7290($s4)
    ctx->pc = 0x1af7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 29328)));
label_1af7fc:
    // 0x1af7fc: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AF7FCu;
    {
        const bool branch_taken_0x1af7fc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1AF800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF7FCu;
        // 0x1af800: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af7fc) {
            ctx->pc = 0x1AF814u;
            goto label_1af814;
        }
    }
    ctx->pc = 0x1AF804u;
    // 0x1af804: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1af804u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1af808: 0x2484a998  addiu       $a0, $a0, -0x5668
    ctx->pc = 0x1af808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945176));
    // 0x1af80c: 0xc069a30  jal         func_1A68C0
    ctx->pc = 0x1AF80Cu;
    SET_GPR_U32(ctx, 31, 0x1AF814u);
    ctx->pc = 0x1AF810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF80Cu;
    // 0x1af810: 0x24a55fe4  addiu       $a1, $a1, 0x5FE4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24548));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A68C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A68C0u, 0x1AF80Cu, 0x1AF814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF814u;
label_1af814:
    // 0x1af814: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1af814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af818: 0x26b05fc0  addiu       $s0, $s5, 0x5FC0
    ctx->pc = 0x1af818u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 24512));
    // 0x1af81c: 0x2405012c  addiu       $a1, $zero, 0x12C
    ctx->pc = 0x1af81cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x1af820: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1af820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af824: 0xae020128  sw          $v0, 0x128($s0)
    ctx->pc = 0x1af824u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 2));
    // 0x1af828: 0xc069bee  jal         func_1A6FB8
    ctx->pc = 0x1AF828u;
    SET_GPR_U32(ctx, 31, 0x1AF830u);
    ctx->pc = 0x1AF82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF828u;
    // 0x1af82c: 0xae100124  sw          $s0, 0x124($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6FB8u, 0x1AF828u, 0x1AF830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF830u;
label_1af830:
    // 0x1af830: 0x26e46140  addiu       $a0, $s7, 0x6140
    ctx->pc = 0x1af830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 24896));
    // 0x1af834: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1af834u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1af838: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1af838u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af83c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1af83cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af840: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1af840u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af844: 0x2408012c  addiu       $t0, $zero, 0x12C
    ctx->pc = 0x1af844u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x1af848: 0x27c96100  addiu       $t1, $fp, 0x6100
    ctx->pc = 0x1af848u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 30), 24832));
    // 0x1af84c: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1af84cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1af850: 0xc069e2a  jal         func_1A78A8
    ctx->pc = 0x1AF850u;
    SET_GPR_U32(ctx, 31, 0x1AF858u);
    ctx->pc = 0x1AF854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF850u;
    // 0x1af854: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A78A8u, 0x1AF850u, 0x1AF858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF858u;
label_1af858:
    // 0x1af858: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AF858u;
    {
        const bool branch_taken_0x1af858 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1AF85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF858u;
        // 0x1af85c: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af858) {
            ctx->pc = 0x1AF874u;
            goto label_1af874;
        }
    }
    ctx->pc = 0x1AF860u;
label_1af860:
    // 0x1af860: 0x8ec472a8  lw          $a0, 0x72A8($s6)
    ctx->pc = 0x1af860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 29352)));
    // 0x1af864: 0xc069210  jal         func_1A4840
    ctx->pc = 0x1AF864u;
    SET_GPR_U32(ctx, 31, 0x1AF86Cu);
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x1AF864u, 0x1AF86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF86Cu;
label_1af86c:
    // 0x1af86c: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x1AF86Cu;
    {
        const bool branch_taken_0x1af86c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF86Cu;
        // 0x1af870: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af86c) {
            ctx->pc = 0x1AF92Cu;
            goto label_1af92c;
        }
    }
    ctx->pc = 0x1AF874u;
label_1af874:
    // 0x1af874: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x1af874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1af878: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x1af878u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1af87c: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x1af87cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1af880: 0x6844000f  ldl         $a0, 0xF($v0)
    ctx->pc = 0x1af880u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1af884: 0x6c440008  ldr         $a0, 0x8($v0)
    ctx->pc = 0x1af884u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1af888: 0x68450017  ldl         $a1, 0x17($v0)
    ctx->pc = 0x1af888u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1af88c: 0x6c450010  ldr         $a1, 0x10($v0)
    ctx->pc = 0x1af88cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1af890: 0x6846001f  ldl         $a2, 0x1F($v0)
    ctx->pc = 0x1af890u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1af894: 0x6c460018  ldr         $a2, 0x18($v0)
    ctx->pc = 0x1af894u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1af898: 0xb2630007  sdl         $v1, 0x7($s3)
    ctx->pc = 0x1af898u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1af89c: 0xb6630000  sdr         $v1, 0x0($s3)
    ctx->pc = 0x1af89cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1af8a0: 0xb264000f  sdl         $a0, 0xF($s3)
    ctx->pc = 0x1af8a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1af8a4: 0xb6640008  sdr         $a0, 0x8($s3)
    ctx->pc = 0x1af8a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1af8a8: 0xb2650017  sdl         $a1, 0x17($s3)
    ctx->pc = 0x1af8a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1af8ac: 0xb6650010  sdr         $a1, 0x10($s3)
    ctx->pc = 0x1af8acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1af8b0: 0xb266001f  sdl         $a2, 0x1F($s3)
    ctx->pc = 0x1af8b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1af8b4: 0xb6660018  sdr         $a2, 0x18($s3)
    ctx->pc = 0x1af8b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1af8b8: 0x88430023  lwl         $v1, 0x23($v0)
    ctx->pc = 0x1af8b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 35); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x1af8bc: 0x98430020  lwr         $v1, 0x20($v0)
    ctx->pc = 0x1af8bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x1af8c0: 0xaa630023  swl         $v1, 0x23($s3)
    ctx->pc = 0x1af8c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 35); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1af8c4: 0xba630020  swr         $v1, 0x20($s3)
    ctx->pc = 0x1af8c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 32); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1af8c8: 0x8e837290  lw          $v1, 0x7290($s4)
    ctx->pc = 0x1af8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 29328)));
    // 0x1af8cc: 0x18600010  blez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1AF8CCu;
    {
        const bool branch_taken_0x1af8cc = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1AF8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF8CCu;
        // 0x1af8d0: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af8cc) {
            ctx->pc = 0x1AF910u;
            goto label_1af910;
        }
    }
    ctx->pc = 0x1AF8D4u;
    // 0x1af8d4: 0x26650008  addiu       $a1, $s3, 0x8
    ctx->pc = 0x1af8d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x1af8d8: 0xc069a30  jal         func_1A68C0
    ctx->pc = 0x1AF8D8u;
    SET_GPR_U32(ctx, 31, 0x1AF8E0u);
    ctx->pc = 0x1AF8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF8D8u;
    // 0x1af8dc: 0x2484a9b0  addiu       $a0, $a0, -0x5650 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A68C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A68C0u, 0x1AF8D8u, 0x1AF8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF8E0u;
label_1af8e0:
    // 0x1af8e0: 0x8e827290  lw          $v0, 0x7290($s4)
    ctx->pc = 0x1af8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 29328)));
    // 0x1af8e4: 0x1840000a  blez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1AF8E4u;
    {
        const bool branch_taken_0x1af8e4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1AF8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF8E4u;
        // 0x1af8e8: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af8e4) {
            ctx->pc = 0x1AF910u;
            goto label_1af910;
        }
    }
    ctx->pc = 0x1AF8ECu;
    // 0x1af8ec: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x1af8ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1af8f0: 0xc069a30  jal         func_1A68C0
    ctx->pc = 0x1AF8F0u;
    SET_GPR_U32(ctx, 31, 0x1AF8F8u);
    ctx->pc = 0x1AF8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF8F0u;
    // 0x1af8f4: 0x2484a9c0  addiu       $a0, $a0, -0x5640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A68C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A68C0u, 0x1AF8F0u, 0x1AF8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF8F8u;
label_1af8f8:
    // 0x1af8f8: 0x8e827290  lw          $v0, 0x7290($s4)
    ctx->pc = 0x1af8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 29328)));
    // 0x1af8fc: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AF8FCu;
    {
        const bool branch_taken_0x1af8fc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1AF900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF8FCu;
        // 0x1af900: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af8fc) {
            ctx->pc = 0x1AF910u;
            goto label_1af910;
        }
    }
    ctx->pc = 0x1AF904u;
    // 0x1af904: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x1af904u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1af908: 0xc069a30  jal         func_1A68C0
    ctx->pc = 0x1AF908u;
    SET_GPR_U32(ctx, 31, 0x1AF910u);
    ctx->pc = 0x1AF90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF908u;
    // 0x1af90c: 0x2484a9d0  addiu       $a0, $a0, -0x5630 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A68C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A68C0u, 0x1AF908u, 0x1AF910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF910u;
label_1af910:
    // 0x1af910: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1af910u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1af914: 0x27c26100  addiu       $v0, $fp, 0x6100
    ctx->pc = 0x1af914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 24832));
    // 0x1af918: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1af918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1af91c: 0x8ec472a8  lw          $a0, 0x72A8($s6)
    ctx->pc = 0x1af91cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 29352)));
    // 0x1af920: 0xc069210  jal         func_1A4840
    ctx->pc = 0x1AF920u;
    SET_GPR_U32(ctx, 31, 0x1AF928u);
    ctx->pc = 0x1AF924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF920u;
    // 0x1af924: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x1AF920u, 0x1AF928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF928u;
label_1af928:
    // 0x1af928: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1af928u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1af92c:
    // 0x1af92c: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x1af92cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1af930: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x1af930u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1af934: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x1af934u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1af938: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x1af938u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1af93c: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x1af93cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1af940: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x1af940u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1af944: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x1af944u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1af948: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1af948u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1af94c: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x1af94cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1af950: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1af950u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x1af954u;
}
