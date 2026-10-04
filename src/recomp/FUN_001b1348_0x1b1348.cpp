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

// Function: FUN_001b1348
// Address: 0x1b1348 - 0x1b1464
void FUN_001b1348_0x1b1348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b1348_0x1b1348");
#endif

    switch (ctx->pc) {
        case 0x1b13a0u: goto label_1b13a0;
        case 0x1b13c4u: goto label_1b13c4;
        case 0x1b13e0u: goto label_1b13e0;
        case 0x1b1420u: goto label_1b1420;
        case 0x1b1440u: goto label_1b1440;
        default: break;
    }

    ctx->pc = 0x1b1348u;

    // 0x1b1348: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1b1348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1b134c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b134cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1b1350: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x1b1350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x1b1354: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x1b1354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x1b1358: 0x24566200  addiu       $s6, $v0, 0x6200
    ctx->pc = 0x1b1358u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 25088));
    // 0x1b135c: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1b135cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x1b1360: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1b1360u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1364: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1b1364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x1b1368: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1b1368u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b136c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1b136cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1b1370: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1b1370u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1374: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1b1374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1b1378: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1b1378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1b137c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1b137cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1b1380: 0x8ec20024  lw          $v0, 0x24($s6)
    ctx->pc = 0x1b1380u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x376224u));
    // 0x1b1384: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B1384u;
    {
        const bool branch_taken_0x1b1384 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1384u;
        // 0x1b1388: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1384) {
            ctx->pc = 0x1B1394u;
            goto label_1b1394;
        }
    }
    ctx->pc = 0x1B138Cu;
    // 0x1b138c: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x1B138Cu;
    {
        const bool branch_taken_0x1b138c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B138Cu;
        // 0x1b1390: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b138c) {
            ctx->pc = 0x1B1444u;
            goto label_1b1444;
        }
    }
    ctx->pc = 0x1B1394u;
label_1b1394:
    // 0x1b1394: 0x3c120029  lui         $s2, 0x29
    ctx->pc = 0x1b1394u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)41 << 16));
    // 0x1b1398: 0xc06921c  jal         func_1A4870
    ctx->pc = 0x1B1398u;
    SET_GPR_U32(ctx, 31, 0x1B13A0u);
    ctx->pc = 0x1B139Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1398u;
    // 0x1b139c: 0x8e448d0c  lw          $a0, -0x72F4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4870u, 0x1B1398u, 0x1B13A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B13A0u;
label_1b13a0:
    // 0x1b13a0: 0x4400028  bltz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1B13A0u;
    {
        const bool branch_taken_0x1b13a0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1B13A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B13A0u;
        // 0x1b13a4: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b13a0) {
            ctx->pc = 0x1B1444u;
            goto label_1b1444;
        }
    }
    ctx->pc = 0x1B13A8u;
    // 0x1b13a8: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B13A8u;
    {
        const bool branch_taken_0x1b13a8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b13a8) {
            ctx->pc = 0x1B13BCu;
            goto label_1b13bc;
        }
    }
    ctx->pc = 0x1B13B0u;
    // 0x1b13b0: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x1b13b0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1b13b4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B13B4u;
    {
        const bool branch_taken_0x1b13b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B13B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B13B4u;
        // 0x1b13b8: 0x3c100037  lui         $s0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b13b4) {
            ctx->pc = 0x1B13CCu;
            goto label_1b13cc;
        }
    }
    ctx->pc = 0x1B13BCu;
label_1b13bc:
    // 0x1b13bc: 0xc069210  jal         func_1A4840
    ctx->pc = 0x1B13BCu;
    SET_GPR_U32(ctx, 31, 0x1B13C4u);
    ctx->pc = 0x1B13C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B13BCu;
    // 0x1b13c0: 0x8e448d0c  lw          $a0, -0x72F4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x1B13BCu, 0x1B13C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B13C4u;
label_1b13c4:
    // 0x1b13c4: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1B13C4u;
    {
        const bool branch_taken_0x1b13c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B13C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B13C4u;
        // 0x1b13c8: 0x2402ff2e  addiu       $v0, $zero, -0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967086));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b13c4) {
            ctx->pc = 0x1B1444u;
            goto label_1b1444;
        }
    }
    ctx->pc = 0x1B13CCu;
label_1b13cc:
    // 0x1b13cc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b13ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b13d0: 0x261062c4  addiu       $s0, $s0, 0x62C4
    ctx->pc = 0x1b13d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 25284));
    // 0x1b13d4: 0x240603ff  addiu       $a2, $zero, 0x3FF
    ctx->pc = 0x1b13d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x1b13d8: 0xc08f4fe  jal         func_23D3F8
    ctx->pc = 0x1B13D8u;
    SET_GPR_U32(ctx, 31, 0x1B13E0u);
    ctx->pc = 0x1B13DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B13D8u;
    // 0x1b13dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D3F8u, 0x1B13D8u, 0x1B13E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B13E0u;
label_1b13e0:
    // 0x1b13e0: 0x2603ffec  addiu       $v1, $s0, -0x14
    ctx->pc = 0x1b13e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
    // 0x1b13e4: 0xae14ffec  sw          $s4, -0x14($s0)
    ctx->pc = 0x1b13e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294967276), GPR_U32(ctx, 20));
    // 0x1b13e8: 0xac730008  sw          $s3, 0x8($v1)
    ctx->pc = 0x1b13e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 19));
    // 0x1b13ec: 0x3c090037  lui         $t1, 0x37
    ctx->pc = 0x1b13ecu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)55 << 16));
    // 0x1b13f0: 0xac750004  sw          $s5, 0x4($v1)
    ctx->pc = 0x1b13f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 21));
    // 0x1b13f4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1b13f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b13f8: 0xa0600413  sb          $zero, 0x413($v1)
    ctx->pc = 0x1b13f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1043), (uint8_t)GPR_U32(ctx, 0));
    // 0x1b13fc: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x1b13fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1400: 0x252977c0  addiu       $t1, $t1, 0x77C0
    ctx->pc = 0x1b1400u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 30656));
    // 0x1b1404: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1b1404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b1408: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1b1408u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1b140c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b140cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b1410: 0x24080414  addiu       $t0, $zero, 0x414
    ctx->pc = 0x1b1410u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1044));
    // 0x1b1414: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x1b1414u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b1418: 0xc069e2a  jal         func_1A78A8
    ctx->pc = 0x1B1418u;
    SET_GPR_U32(ctx, 31, 0x1B1420u);
    ctx->pc = 0x1B141Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1418u;
    // 0x1b141c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A78A8u, 0x1B1418u, 0x1B1420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1420u;
label_1b1420:
    // 0x1b1420: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b1420u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1424: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B1424u;
    {
        const bool branch_taken_0x1b1424 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1424u;
        // 0x1b1428: 0x3c030029  lui         $v1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1424) {
            ctx->pc = 0x1B1438u;
            goto label_1b1438;
        }
    }
    ctx->pc = 0x1B142Cu;
    // 0x1b142c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b142cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b1430: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B1430u;
    {
        const bool branch_taken_0x1b1430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1430u;
        // 0x1b1434: 0xac628d08  sw          $v0, -0x72F8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294937864), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1430) {
            ctx->pc = 0x1B1440u;
            goto label_1b1440;
        }
    }
    ctx->pc = 0x1B1438u;
label_1b1438:
    // 0x1b1438: 0xc069210  jal         func_1A4840
    ctx->pc = 0x1B1438u;
    SET_GPR_U32(ctx, 31, 0x1B1440u);
    ctx->pc = 0x1B143Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1438u;
    // 0x1b143c: 0x8e448d0c  lw          $a0, -0x72F4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294937868)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x1B1438u, 0x1B1440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1440u;
label_1b1440:
    // 0x1b1440: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b1440u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b1444:
    // 0x1b1444: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1b1444u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b1448: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x1b1448u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b144c: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x1b144cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b1450: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1b1450u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b1454: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x1b1454u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b1458: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1b1458u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b145c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x1b145cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b1460: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1b1460u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x1b1464u;
}
