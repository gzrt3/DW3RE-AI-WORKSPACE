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

// Function: FUN_001b16c8
// Address: 0x1b16c8 - 0x1b17d4
void FUN_001b16c8_0x1b16c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b16c8_0x1b16c8");
#endif

    switch (ctx->pc) {
        case 0x1b171cu: goto label_1b171c;
        case 0x1b1754u: goto label_1b1754;
        case 0x1b1760u: goto label_1b1760;
        case 0x1b1790u: goto label_1b1790;
        case 0x1b17b0u: goto label_1b17b0;
        default: break;
    }

    ctx->pc = 0x1b16c8u;

    // 0x1b16c8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1b16c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1b16cc: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b16ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1b16d0: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x1b16d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x1b16d4: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1b16d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x1b16d8: 0x24556200  addiu       $s5, $v0, 0x6200
    ctx->pc = 0x1b16d8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 25088));
    // 0x1b16dc: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1b16dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x1b16e0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1b16e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b16e4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1b16e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1b16e8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1b16e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b16ec: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1b16ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1b16f0: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x1b16f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x1b16f4: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1b16f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1b16f8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1b16f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1b16fc: 0x8ea20024  lw          $v0, 0x24($s5)
    ctx->pc = 0x1b16fcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x376224u));
    // 0x1b1700: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B1700u;
    {
        const bool branch_taken_0x1b1700 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1700u;
        // 0x1b1704: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1700) {
            ctx->pc = 0x1B1710u;
            goto label_1b1710;
        }
    }
    ctx->pc = 0x1B1708u;
    // 0x1b1708: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x1B1708u;
    {
        const bool branch_taken_0x1b1708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B170Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1708u;
        // 0x1b170c: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1708) {
            ctx->pc = 0x1B17B4u;
            goto label_1b17b4;
        }
    }
    ctx->pc = 0x1B1710u;
label_1b1710:
    // 0x1b1710: 0x3c160029  lui         $s6, 0x29
    ctx->pc = 0x1b1710u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)41 << 16));
    // 0x1b1714: 0xc06921c  jal         func_1A4870
    ctx->pc = 0x1B1714u;
    SET_GPR_U32(ctx, 31, 0x1B171Cu);
    ctx->pc = 0x1B1718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1714u;
    // 0x1b1718: 0x8ec48d0c  lw          $a0, -0x72F4($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4870u, 0x1B1714u, 0x1B171Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B171Cu;
label_1b171c:
    // 0x1b171c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B171Cu;
    {
        const bool branch_taken_0x1b171c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1B1720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B171Cu;
        // 0x1b1720: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b171c) {
            ctx->pc = 0x1B172Cu;
            goto label_1b172c;
        }
    }
    ctx->pc = 0x1B1724u;
    // 0x1b1724: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x1B1724u;
    {
        const bool branch_taken_0x1b1724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1724u;
        // 0x1b1728: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1724) {
            ctx->pc = 0x1B17B4u;
            goto label_1b17b4;
        }
    }
    ctx->pc = 0x1B172Cu;
label_1b172c:
    // 0x1b172c: 0x3c100037  lui         $s0, 0x37
    ctx->pc = 0x1b172cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
    // 0x1b1730: 0x26106700  addiu       $s0, $s0, 0x6700
    ctx->pc = 0x1b1730u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 26368));
    // 0x1b1734: 0x24516280  addiu       $s1, $v0, 0x6280
    ctx->pc = 0x1b1734u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 25216));
    // 0x1b1738: 0xac546280  sw          $s4, 0x6280($v0)
    ctx->pc = 0x1b1738u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 25216), GPR_U32(ctx, 20));
    // 0x1b173c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b173cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1740: 0xae30001c  sw          $s0, 0x1C($s1)
    ctx->pc = 0x1b1740u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 16));
    // 0x1b1744: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1b1744u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1748: 0xae330018  sw          $s3, 0x18($s1)
    ctx->pc = 0x1b1748u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 19));
    // 0x1b174c: 0xc069bee  jal         func_1A6FB8
    ctx->pc = 0x1B174Cu;
    SET_GPR_U32(ctx, 31, 0x1B1754u);
    ctx->pc = 0x1B1750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B174Cu;
    // 0x1b1750: 0xae32000c  sw          $s2, 0xC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6FB8u, 0x1B174Cu, 0x1B1754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1754u;
label_1b1754:
    // 0x1b1754: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b1754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1758: 0xc069bee  jal         func_1A6FB8
    ctx->pc = 0x1B1758u;
    SET_GPR_U32(ctx, 31, 0x1B1760u);
    ctx->pc = 0x1B175Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1758u;
    // 0x1b175c: 0x240500c0  addiu       $a1, $zero, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6FB8u, 0x1B1758u, 0x1B1760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1760u;
label_1b1760:
    // 0x1b1760: 0x3c090037  lui         $t1, 0x37
    ctx->pc = 0x1b1760u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)55 << 16));
    // 0x1b1764: 0x3c0b001b  lui         $t3, 0x1B
    ctx->pc = 0x1b1764u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)27 << 16));
    // 0x1b1768: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x1b1768u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    // 0x1b176c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b176cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1770: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1b1770u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1774: 0x252977c0  addiu       $t1, $t1, 0x77C0
    ctx->pc = 0x1b1774u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 30656));
    // 0x1b1778: 0x256b1638  addiu       $t3, $t3, 0x1638
    ctx->pc = 0x1b1778u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 5688));
    // 0x1b177c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1b177cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b1780: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b1780u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b1784: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x1b1784u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1b1788: 0xc069e2a  jal         func_1A78A8
    ctx->pc = 0x1B1788u;
    SET_GPR_U32(ctx, 31, 0x1B1790u);
    ctx->pc = 0x1B178Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1788u;
    // 0x1b178c: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A78A8u, 0x1B1788u, 0x1B1790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1790u;
label_1b1790:
    // 0x1b1790: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b1790u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1794: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B1794u;
    {
        const bool branch_taken_0x1b1794 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1794u;
        // 0x1b1798: 0x3c030029  lui         $v1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1794) {
            ctx->pc = 0x1B17A8u;
            goto label_1b17a8;
        }
    }
    ctx->pc = 0x1B179Cu;
    // 0x1b179c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1b179cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1b17a0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B17A0u;
    {
        const bool branch_taken_0x1b17a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B17A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B17A0u;
        // 0x1b17a4: 0xac628d08  sw          $v0, -0x72F8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294937864), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b17a0) {
            ctx->pc = 0x1B17B0u;
            goto label_1b17b0;
        }
    }
    ctx->pc = 0x1B17A8u;
label_1b17a8:
    // 0x1b17a8: 0xc069210  jal         func_1A4840
    ctx->pc = 0x1B17A8u;
    SET_GPR_U32(ctx, 31, 0x1B17B0u);
    ctx->pc = 0x1B17ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B17A8u;
    // 0x1b17ac: 0x8ec48d0c  lw          $a0, -0x72F4($s6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x1B17A8u, 0x1B17B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B17B0u;
label_1b17b0:
    // 0x1b17b0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b17b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b17b4:
    // 0x1b17b4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1b17b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b17b8: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x1b17b8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b17bc: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x1b17bcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b17c0: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1b17c0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b17c4: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1b17c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b17c8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1b17c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b17cc: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1b17ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b17d0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1b17d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x1b17d4u;
}
