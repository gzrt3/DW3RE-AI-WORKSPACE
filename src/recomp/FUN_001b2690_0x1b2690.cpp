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

// Function: FUN_001b2690
// Address: 0x1b2690 - 0x1b2790
void FUN_001b2690_0x1b2690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b2690_0x1b2690");
#endif

    switch (ctx->pc) {
        case 0x1b26dcu: goto label_1b26dc;
        case 0x1b2700u: goto label_1b2700;
        case 0x1b2724u: goto label_1b2724;
        case 0x1b2754u: goto label_1b2754;
        case 0x1b2774u: goto label_1b2774;
        default: break;
    }

    ctx->pc = 0x1b2690u;

    // 0x1b2690: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1b2690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1b2694: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b2694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1b2698: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1b2698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x1b269c: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1b269cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x1b26a0: 0x24546200  addiu       $s4, $v0, 0x6200
    ctx->pc = 0x1b26a0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 25088));
    // 0x1b26a4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1b26a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1b26a8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1b26a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b26ac: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1b26acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1b26b0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1b26b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b26b4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1b26b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1b26b8: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1b26b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1b26bc: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x1b26bcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x376224u));
    // 0x1b26c0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B26C0u;
    {
        const bool branch_taken_0x1b26c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B26C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B26C0u;
        // 0x1b26c4: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b26c0) {
            ctx->pc = 0x1B26D0u;
            goto label_1b26d0;
        }
    }
    ctx->pc = 0x1B26C8u;
    // 0x1b26c8: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x1B26C8u;
    {
        const bool branch_taken_0x1b26c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B26CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B26C8u;
        // 0x1b26cc: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b26c8) {
            ctx->pc = 0x1B2778u;
            goto label_1b2778;
        }
    }
    ctx->pc = 0x1B26D0u;
label_1b26d0:
    // 0x1b26d0: 0x3c110029  lui         $s1, 0x29
    ctx->pc = 0x1b26d0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)41 << 16));
    // 0x1b26d4: 0xc06921c  jal         func_1A4870
    ctx->pc = 0x1B26D4u;
    SET_GPR_U32(ctx, 31, 0x1B26DCu);
    ctx->pc = 0x1B26D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B26D4u;
    // 0x1b26d8: 0x8e248d0c  lw          $a0, -0x72F4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4870u, 0x1B26D4u, 0x1B26DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B26DCu;
label_1b26dc:
    // 0x1b26dc: 0x4400026  bltz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1B26DCu;
    {
        const bool branch_taken_0x1b26dc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1B26E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B26DCu;
        // 0x1b26e0: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b26dc) {
            ctx->pc = 0x1B2778u;
            goto label_1b2778;
        }
    }
    ctx->pc = 0x1B26E4u;
    // 0x1b26e4: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B26E4u;
    {
        const bool branch_taken_0x1b26e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b26e4) {
            ctx->pc = 0x1B26F8u;
            goto label_1b26f8;
        }
    }
    ctx->pc = 0x1B26ECu;
    // 0x1b26ec: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1b26ecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b26f0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B26F0u;
    {
        const bool branch_taken_0x1b26f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B26F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B26F0u;
        // 0x1b26f4: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b26f0) {
            ctx->pc = 0x1B2708u;
            goto label_1b2708;
        }
    }
    ctx->pc = 0x1B26F8u;
label_1b26f8:
    // 0x1b26f8: 0xc069210  jal         func_1A4840
    ctx->pc = 0x1B26F8u;
    SET_GPR_U32(ctx, 31, 0x1B2700u);
    ctx->pc = 0x1B26FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B26F8u;
    // 0x1b26fc: 0x8e248d0c  lw          $a0, -0x72F4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x1B26F8u, 0x1B2700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2700u;
label_1b2700:
    // 0x1b2700: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1B2700u;
    {
        const bool branch_taken_0x1b2700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2700u;
        // 0x1b2704: 0x2402ff2e  addiu       $v0, $zero, -0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967086));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2700) {
            ctx->pc = 0x1B2778u;
            goto label_1b2778;
        }
    }
    ctx->pc = 0x1B2708u;
label_1b2708:
    // 0x1b2708: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b2708u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b270c: 0x245062b0  addiu       $s0, $v0, 0x62B0
    ctx->pc = 0x1b270cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 25264));
    // 0x1b2710: 0xac5362b0  sw          $s3, 0x62B0($v0)
    ctx->pc = 0x1b2710u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 25264), GPR_U32(ctx, 19));
    // 0x1b2714: 0xae120004  sw          $s2, 0x4($s0)
    ctx->pc = 0x1b2714u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
    // 0x1b2718: 0x26040014  addiu       $a0, $s0, 0x14
    ctx->pc = 0x1b2718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x1b271c: 0xc08f4fe  jal         func_23D3F8
    ctx->pc = 0x1B271Cu;
    SET_GPR_U32(ctx, 31, 0x1B2724u);
    ctx->pc = 0x1B2720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B271Cu;
    // 0x1b2720: 0x240603ff  addiu       $a2, $zero, 0x3FF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D3F8u, 0x1B271Cu, 0x1B2724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2724u;
label_1b2724:
    // 0x1b2724: 0xa2000413  sb          $zero, 0x413($s0)
    ctx->pc = 0x1b2724u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1043), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b2728: 0x3c090037  lui         $t1, 0x37
    ctx->pc = 0x1b2728u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)55 << 16));
    // 0x1b272c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1b272cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2730: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1b2730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2734: 0x252977c0  addiu       $t1, $t1, 0x77C0
    ctx->pc = 0x1b2734u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 30656));
    // 0x1b2738: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x1b2738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1b273c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b273cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1b2740: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b2740u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b2744: 0x24080414  addiu       $t0, $zero, 0x414
    ctx->pc = 0x1b2744u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1044));
    // 0x1b2748: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1b2748u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b274c: 0xc069e2a  jal         func_1A78A8
    ctx->pc = 0x1B274Cu;
    SET_GPR_U32(ctx, 31, 0x1B2754u);
    ctx->pc = 0x1B2750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B274Cu;
    // 0x1b2750: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A78A8u, 0x1B274Cu, 0x1B2754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2754u;
label_1b2754:
    // 0x1b2754: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b2754u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2758: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B2758u;
    {
        const bool branch_taken_0x1b2758 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B275Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2758u;
        // 0x1b275c: 0x3c030029  lui         $v1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2758) {
            ctx->pc = 0x1B276Cu;
            goto label_1b276c;
        }
    }
    ctx->pc = 0x1B2760u;
    // 0x1b2760: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x1b2760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1b2764: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B2764u;
    {
        const bool branch_taken_0x1b2764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2764u;
        // 0x1b2768: 0xac628d08  sw          $v0, -0x72F8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294937864), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2764) {
            ctx->pc = 0x1B2774u;
            goto label_1b2774;
        }
    }
    ctx->pc = 0x1B276Cu;
label_1b276c:
    // 0x1b276c: 0xc069210  jal         func_1A4840
    ctx->pc = 0x1B276Cu;
    SET_GPR_U32(ctx, 31, 0x1B2774u);
    ctx->pc = 0x1B2770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B276Cu;
    // 0x1b2770: 0x8e248d0c  lw          $a0, -0x72F4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x1B276Cu, 0x1B2774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2774u;
label_1b2774:
    // 0x1b2774: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b2774u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b2778:
    // 0x1b2778: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1b2778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b277c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1b277cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b2780: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1b2780u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b2784: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1b2784u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b2788: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1b2788u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b278c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1b278cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x1b2790u;
}
