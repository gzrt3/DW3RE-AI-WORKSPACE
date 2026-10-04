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

// Function: FUN_001b2468
// Address: 0x1b2468 - 0x1b25b8
void FUN_001b2468_0x1b2468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b2468_0x1b2468");
#endif

    switch (ctx->pc) {
        case 0x1b24c0u: goto label_1b24c0;
        case 0x1b24ecu: goto label_1b24ec;
        case 0x1b2518u: goto label_1b2518;
        case 0x1b2534u: goto label_1b2534;
        case 0x1b2548u: goto label_1b2548;
        case 0x1b2574u: goto label_1b2574;
        case 0x1b2594u: goto label_1b2594;
        default: break;
    }

    ctx->pc = 0x1b2468u;

    // 0x1b2468: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1b2468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1b246c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b246cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1b2470: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x1b2470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x1b2474: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1b2474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x1b2478: 0x24566200  addiu       $s6, $v0, 0x6200
    ctx->pc = 0x1b2478u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 25088));
    // 0x1b247c: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1b247cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x1b2480: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1b2480u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2484: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1b2484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1b2488: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1b2488u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b248c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1b248cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1b2490: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1b2490u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2494: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1b2494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1b2498: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x1b2498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x1b249c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1b249cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1b24a0: 0x8ec20024  lw          $v0, 0x24($s6)
    ctx->pc = 0x1b24a0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x376224u));
    // 0x1b24a4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B24A4u;
    {
        const bool branch_taken_0x1b24a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B24A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B24A4u;
        // 0x1b24a8: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b24a4) {
            ctx->pc = 0x1B24B4u;
            goto label_1b24b4;
        }
    }
    ctx->pc = 0x1B24ACu;
    // 0x1b24ac: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x1B24ACu;
    {
        const bool branch_taken_0x1b24ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B24B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B24ACu;
        // 0x1b24b0: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b24ac) {
            ctx->pc = 0x1B2598u;
            goto label_1b2598;
        }
    }
    ctx->pc = 0x1B24B4u;
label_1b24b4:
    // 0x1b24b4: 0x3c150029  lui         $s5, 0x29
    ctx->pc = 0x1b24b4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)41 << 16));
    // 0x1b24b8: 0xc06921c  jal         func_1A4870
    ctx->pc = 0x1B24B8u;
    SET_GPR_U32(ctx, 31, 0x1B24C0u);
    ctx->pc = 0x1B24BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B24B8u;
    // 0x1b24bc: 0x8ea48d0c  lw          $a0, -0x72F4($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4870u, 0x1B24B8u, 0x1B24C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B24C0u;
label_1b24c0:
    // 0x1b24c0: 0x4400035  bltz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x1B24C0u;
    {
        const bool branch_taken_0x1b24c0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1B24C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B24C0u;
        // 0x1b24c4: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b24c0) {
            ctx->pc = 0x1B2598u;
            goto label_1b2598;
        }
    }
    ctx->pc = 0x1B24C8u;
    // 0x1b24c8: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B24C8u;
    {
        const bool branch_taken_0x1b24c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b24c8) {
            ctx->pc = 0x1B24E4u;
            goto label_1b24e4;
        }
    }
    ctx->pc = 0x1B24D0u;
    // 0x1b24d0: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1b24d0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b24d4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B24D4u;
    {
        const bool branch_taken_0x1b24d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b24d4) {
            ctx->pc = 0x1B24E4u;
            goto label_1b24e4;
        }
    }
    ctx->pc = 0x1B24DCu;
    // 0x1b24dc: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B24DCu;
    {
        const bool branch_taken_0x1b24dc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B24E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B24DCu;
        // 0x1b24e0: 0x3c020037  lui         $v0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b24dc) {
            ctx->pc = 0x1B24F4u;
            goto label_1b24f4;
        }
    }
    ctx->pc = 0x1B24E4u;
label_1b24e4:
    // 0x1b24e4: 0xc069210  jal         func_1A4840
    ctx->pc = 0x1B24E4u;
    SET_GPR_U32(ctx, 31, 0x1B24ECu);
    ctx->pc = 0x1B24E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B24E4u;
    // 0x1b24e8: 0x8ea48d0c  lw          $a0, -0x72F4($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x1B24E4u, 0x1B24ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B24ECu;
label_1b24ec:
    // 0x1b24ec: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x1B24ECu;
    {
        const bool branch_taken_0x1b24ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B24F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B24ECu;
        // 0x1b24f0: 0x2402ff2e  addiu       $v0, $zero, -0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967086));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b24ec) {
            ctx->pc = 0x1B2598u;
            goto label_1b2598;
        }
    }
    ctx->pc = 0x1B24F4u;
label_1b24f4:
    // 0x1b24f4: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1b24f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1b24f8: 0x245162b0  addiu       $s1, $v0, 0x62B0
    ctx->pc = 0x1b24f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 25264));
    // 0x1b24fc: 0xac5462b0  sw          $s4, 0x62B0($v0)
    ctx->pc = 0x1b24fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 25264), GPR_U32(ctx, 20));
    // 0x1b2500: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b2500u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2504: 0xae330004  sw          $s3, 0x4($s1)
    ctx->pc = 0x1b2504u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 19));
    // 0x1b2508: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x1b2508u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x1b250c: 0x26240014  addiu       $a0, $s1, 0x14
    ctx->pc = 0x1b250cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x1b2510: 0xc08f4fe  jal         func_23D3F8
    ctx->pc = 0x1B2510u;
    SET_GPR_U32(ctx, 31, 0x1B2518u);
    ctx->pc = 0x1B2514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2510u;
    // 0x1b2514: 0x240603ff  addiu       $a2, $zero, 0x3FF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D3F8u, 0x1B2510u, 0x1B2518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2518u;
label_1b2518:
    // 0x1b2518: 0x3c100037  lui         $s0, 0x37
    ctx->pc = 0x1b2518u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
    // 0x1b251c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1b251cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2520: 0x26106260  addiu       $s0, $s0, 0x6260
    ctx->pc = 0x1b2520u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 25184));
    // 0x1b2524: 0xa2200413  sb          $zero, 0x413($s1)
    ctx->pc = 0x1b2524u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1043), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b2528: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b2528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b252c: 0xc08f4fe  jal         func_23D3F8
    ctx->pc = 0x1B252Cu;
    SET_GPR_U32(ctx, 31, 0x1B2534u);
    ctx->pc = 0x1B2530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B252Cu;
    // 0x1b2530: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D3F8u, 0x1B252Cu, 0x1B2534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2534u;
label_1b2534:
    // 0x1b2534: 0x2610ffe0  addiu       $s0, $s0, -0x20
    ctx->pc = 0x1b2534u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967264));
    // 0x1b2538: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b2538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b253c: 0xae300010  sw          $s0, 0x10($s1)
    ctx->pc = 0x1b253cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 16));
    // 0x1b2540: 0xc0692a8  jal         func_1A4AA0
    ctx->pc = 0x1B2540u;
    SET_GPR_U32(ctx, 31, 0x1B2548u);
    ctx->pc = 0x1B2544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2540u;
    // 0x1b2544: 0xa200003f  sb          $zero, 0x3F($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 63), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4AA0u, 0x1B2540u, 0x1B2548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2548u;
label_1b2548:
    // 0x1b2548: 0x3c090037  lui         $t1, 0x37
    ctx->pc = 0x1b2548u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)55 << 16));
    // 0x1b254c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b254cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2550: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1b2550u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2554: 0x252977c0  addiu       $t1, $t1, 0x77C0
    ctx->pc = 0x1b2554u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 30656));
    // 0x1b2558: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b2558u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1b255c: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1b255cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1b2560: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b2560u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b2564: 0x24080414  addiu       $t0, $zero, 0x414
    ctx->pc = 0x1b2564u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1044));
    // 0x1b2568: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1b2568u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b256c: 0xc069e2a  jal         func_1A78A8
    ctx->pc = 0x1B256Cu;
    SET_GPR_U32(ctx, 31, 0x1B2574u);
    ctx->pc = 0x1B2570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B256Cu;
    // 0x1b2570: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A78A8u, 0x1B256Cu, 0x1B2574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2574u;
label_1b2574:
    // 0x1b2574: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b2574u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2578: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B2578u;
    {
        const bool branch_taken_0x1b2578 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B257Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2578u;
        // 0x1b257c: 0x3c030029  lui         $v1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2578) {
            ctx->pc = 0x1B258Cu;
            goto label_1b258c;
        }
    }
    ctx->pc = 0x1B2580u;
    // 0x1b2580: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x1b2580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1b2584: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B2584u;
    {
        const bool branch_taken_0x1b2584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2584u;
        // 0x1b2588: 0xac628d08  sw          $v0, -0x72F8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294937864), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2584) {
            ctx->pc = 0x1B2594u;
            goto label_1b2594;
        }
    }
    ctx->pc = 0x1B258Cu;
label_1b258c:
    // 0x1b258c: 0xc069210  jal         func_1A4840
    ctx->pc = 0x1B258Cu;
    SET_GPR_U32(ctx, 31, 0x1B2594u);
    ctx->pc = 0x1B2590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B258Cu;
    // 0x1b2590: 0x8ea48d0c  lw          $a0, -0x72F4($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x1B258Cu, 0x1B2594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2594u;
label_1b2594:
    // 0x1b2594: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b2594u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b2598:
    // 0x1b2598: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1b2598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b259c: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x1b259cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b25a0: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x1b25a0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b25a4: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1b25a4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b25a8: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1b25a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b25ac: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1b25acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b25b0: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1b25b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b25b4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1b25b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x1b25b8u;
}
