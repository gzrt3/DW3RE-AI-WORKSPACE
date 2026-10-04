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

// Function: FUN_00201280
// Address: 0x201280 - 0x2014e0
void FUN_00201280_0x201280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00201280_0x201280");
#endif

    switch (ctx->pc) {
        case 0x201308u: goto label_201308;
        default: break;
    }

    ctx->pc = 0x201280u;

    // 0x201280: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x201280u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x201284: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x201284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x201288: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x201288u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x20128c: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x20128cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x201290: 0x14c30003  bne         $a2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x201290u;
    {
        const bool branch_taken_0x201290 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x201294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201290u;
        // 0x201294: 0xaca0000c  sw          $zero, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201290) {
            ctx->pc = 0x2012A0u;
            goto label_2012a0;
        }
    }
    ctx->pc = 0x201298u;
    // 0x201298: 0x90870074  lbu         $a3, 0x74($a0)
    ctx->pc = 0x201298u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x20129c: 0x0  nop
    ctx->pc = 0x20129cu;
    // NOP
label_2012a0:
    // 0x2012a0: 0x28e1000f  slti        $at, $a3, 0xF
    ctx->pc = 0x2012a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x2012a4: 0x10200046  beqz        $at, . + 4 + (0x46 << 2)
    ctx->pc = 0x2012A4u;
    {
        const bool branch_taken_0x2012a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2012A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2012A4u;
        // 0x2012a8: 0x71840  sll         $v1, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2012a4) {
            ctx->pc = 0x2013C0u;
            goto label_2013c0;
        }
    }
    ctx->pc = 0x2012ACu;
    // 0x2012ac: 0x3c0a002b  lui         $t2, 0x2B
    ctx->pc = 0x2012acu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)43 << 16));
    // 0x2012b0: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2012b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2012b4: 0x3c060028  lui         $a2, 0x28
    ctx->pc = 0x2012b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)40 << 16));
    // 0x2012b8: 0x358c0  sll         $t3, $v1, 3
    ctx->pc = 0x2012b8u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2012bc: 0x254a13cb  addiu       $t2, $t2, 0x13CB
    ctx->pc = 0x2012bcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 5067));
    // 0x2012c0: 0x14b3821  addu        $a3, $t2, $t3
    ctx->pc = 0x2012c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x2012c4: 0x24c65370  addiu       $a2, $a2, 0x5370
    ctx->pc = 0x2012c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21360));
    // 0x2012c8: 0x90e70000  lbu         $a3, 0x0($a3)
    ctx->pc = 0x2012c8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2012cc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2012ccu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2012d0: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x2012d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2012d4: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x2012d4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2012d8: 0x73980  sll         $a3, $a3, 6
    ctx->pc = 0x2012d8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
    // 0x2012dc: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x2012dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2012e0: 0x90c6003b  lbu         $a2, 0x3B($a2)
    ctx->pc = 0x2012e0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 59)));
    // 0x2012e4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2012e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2012e8: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x2012e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x2012ec: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x2012ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x2012f0: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x2012f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
    // 0x2012f4: 0x24c6c990  addiu       $a2, $a2, -0x3670
    ctx->pc = 0x2012f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953360));
    // 0x2012f8: 0x2463a4b0  addiu       $v1, $v1, -0x5B50
    ctx->pc = 0x2012f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943920));
    // 0x2012fc: 0xcb3821  addu        $a3, $a2, $t3
    ctx->pc = 0x2012fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
    // 0x201300: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x201300u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x201304: 0x24e70000  addiu       $a3, $a3, 0x0
    ctx->pc = 0x201304u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 0));
label_201308:
    // 0x201308: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x201308u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x20130c: 0xec5821  addu        $t3, $a3, $t4
    ctx->pc = 0x20130cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x201310: 0x34214a30  ori         $at, $at, 0x4A30
    ctx->pc = 0x201310u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18992);
    // 0x201314: 0x1615821  addu        $t3, $t3, $at
    ctx->pc = 0x201314u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 1)));
    // 0x201318: 0x916d0000  lbu         $t5, 0x0($t3)
    ctx->pc = 0x201318u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x20131c: 0x11a60023  beq         $t5, $a2, . + 4 + (0x23 << 2)
    ctx->pc = 0x20131Cu;
    {
        const bool branch_taken_0x20131c = (GPR_U64(ctx, 13) == GPR_U64(ctx, 6));
        if (branch_taken_0x20131c) {
            ctx->pc = 0x2013ACu;
            goto label_2013ac;
        }
    }
    ctx->pc = 0x201324u;
    // 0x201324: 0xd6900  sll         $t5, $t5, 4
    ctx->pc = 0x201324u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 4));
    // 0x201328: 0x6d6821  addu        $t5, $v1, $t5
    ctx->pc = 0x201328u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x20132c: 0xddaf0000  ld          $t7, 0x0($t5)
    ctx->pc = 0x20132cu;
    SET_GPR_U64(ctx, 15, READ64(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x201330: 0x31ed0008  andi        $t5, $t7, 0x8
    ctx->pc = 0x201330u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)8);
    // 0x201334: 0x11a00005  beqz        $t5, . + 4 + (0x5 << 2)
    ctx->pc = 0x201334u;
    {
        const bool branch_taken_0x201334 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        if (branch_taken_0x201334) {
            ctx->pc = 0x20134Cu;
            goto label_20134c;
        }
    }
    ctx->pc = 0x20133Cu;
    // 0x20133c: 0x916e0001  lbu         $t6, 0x1($t3)
    ctx->pc = 0x20133cu;
    SET_GPR_ZE32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 1)));
    // 0x201340: 0x8cad0000  lw          $t5, 0x0($a1)
    ctx->pc = 0x201340u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x201344: 0x1ae6821  addu        $t5, $t5, $t6
    ctx->pc = 0x201344u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
    // 0x201348: 0xacad0000  sw          $t5, 0x0($a1)
    ctx->pc = 0x201348u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 13));
label_20134c:
    // 0x20134c: 0x0  nop
    ctx->pc = 0x20134cu;
    // NOP
    // 0x201350: 0x31ed0004  andi        $t5, $t7, 0x4
    ctx->pc = 0x201350u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)4);
    // 0x201354: 0x11a00005  beqz        $t5, . + 4 + (0x5 << 2)
    ctx->pc = 0x201354u;
    {
        const bool branch_taken_0x201354 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        if (branch_taken_0x201354) {
            ctx->pc = 0x20136Cu;
            goto label_20136c;
        }
    }
    ctx->pc = 0x20135Cu;
    // 0x20135c: 0x916e0001  lbu         $t6, 0x1($t3)
    ctx->pc = 0x20135cu;
    SET_GPR_ZE32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 1)));
    // 0x201360: 0x8cad0004  lw          $t5, 0x4($a1)
    ctx->pc = 0x201360u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x201364: 0x1ae6821  addu        $t5, $t5, $t6
    ctx->pc = 0x201364u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
    // 0x201368: 0xacad0004  sw          $t5, 0x4($a1)
    ctx->pc = 0x201368u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 13));
label_20136c:
    // 0x20136c: 0x0  nop
    ctx->pc = 0x20136cu;
    // NOP
    // 0x201370: 0x31ed0010  andi        $t5, $t7, 0x10
    ctx->pc = 0x201370u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)16);
    // 0x201374: 0x11a00005  beqz        $t5, . + 4 + (0x5 << 2)
    ctx->pc = 0x201374u;
    {
        const bool branch_taken_0x201374 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        if (branch_taken_0x201374) {
            ctx->pc = 0x20138Cu;
            goto label_20138c;
        }
    }
    ctx->pc = 0x20137Cu;
    // 0x20137c: 0x916e0001  lbu         $t6, 0x1($t3)
    ctx->pc = 0x20137cu;
    SET_GPR_ZE32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 1)));
    // 0x201380: 0x8cad0008  lw          $t5, 0x8($a1)
    ctx->pc = 0x201380u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x201384: 0x1ae6821  addu        $t5, $t5, $t6
    ctx->pc = 0x201384u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 14)));
    // 0x201388: 0xacad0008  sw          $t5, 0x8($a1)
    ctx->pc = 0x201388u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 13));
label_20138c:
    // 0x20138c: 0x0  nop
    ctx->pc = 0x20138cu;
    // NOP
    // 0x201390: 0x31ed0020  andi        $t5, $t7, 0x20
    ctx->pc = 0x201390u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)32);
    // 0x201394: 0x11a00005  beqz        $t5, . + 4 + (0x5 << 2)
    ctx->pc = 0x201394u;
    {
        const bool branch_taken_0x201394 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        if (branch_taken_0x201394) {
            ctx->pc = 0x2013ACu;
            goto label_2013ac;
        }
    }
    ctx->pc = 0x20139Cu;
    // 0x20139c: 0x916d0001  lbu         $t5, 0x1($t3)
    ctx->pc = 0x20139cu;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 1)));
    // 0x2013a0: 0x8cab000c  lw          $t3, 0xC($a1)
    ctx->pc = 0x2013a0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2013a4: 0x16d5821  addu        $t3, $t3, $t5
    ctx->pc = 0x2013a4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 13)));
    // 0x2013a8: 0xacab000c  sw          $t3, 0xC($a1)
    ctx->pc = 0x2013a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 11));
label_2013ac:
    // 0x2013ac: 0x0  nop
    ctx->pc = 0x2013acu;
    // NOP
    // 0x2013b0: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x2013b0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x2013b4: 0x294b0003  slti        $t3, $t2, 0x3
    ctx->pc = 0x2013b4u;
    SET_GPR_U64(ctx, 11, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2013b8: 0x1560ffd3  bnez        $t3, . + 4 + (-0x2D << 2)
    ctx->pc = 0x2013B8u;
    {
        const bool branch_taken_0x2013b8 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x2013BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2013B8u;
        // 0x2013bc: 0x258c0002  addiu       $t4, $t4, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2013b8) {
            ctx->pc = 0x201308u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_201308;
        }
    }
    ctx->pc = 0x2013C0u;
label_2013c0:
    // 0x2013c0: 0x15000003  bnez        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2013C0u;
    {
        const bool branch_taken_0x2013c0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x2013c0) {
            ctx->pc = 0x2013D0u;
            goto label_2013d0;
        }
    }
    ctx->pc = 0x2013C8u;
    // 0x2013c8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2013C8u;
    {
        const bool branch_taken_0x2013c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2013CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2013C8u;
        // 0x2013cc: 0x2921000a  slti        $at, $t1, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)10) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2013c8) {
            ctx->pc = 0x2013DCu;
            goto label_2013dc;
        }
    }
    ctx->pc = 0x2013D0u;
label_2013d0:
    // 0x2013d0: 0x90890075  lbu         $t1, 0x75($a0)
    ctx->pc = 0x2013d0u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 117)));
    // 0x2013d4: 0x0  nop
    ctx->pc = 0x2013d4u;
    // NOP
    // 0x2013d8: 0x2921000a  slti        $at, $t1, 0xA
    ctx->pc = 0x2013d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)10) ? 1 : 0);
label_2013dc:
    // 0x2013dc: 0x10200029  beqz        $at, . + 4 + (0x29 << 2)
    ctx->pc = 0x2013DCu;
    {
        const bool branch_taken_0x2013dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2013E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2013DCu;
        // 0x2013e0: 0x3c03002a  lui         $v1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2013dc) {
            ctx->pc = 0x201484u;
            goto label_201484;
        }
    }
    ctx->pc = 0x2013E4u;
    // 0x2013e4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2013e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x2013e8: 0x92040  sll         $a0, $t1, 1
    ctx->pc = 0x2013e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x2013ec: 0x2463c990  addiu       $v1, $v1, -0x3670
    ctx->pc = 0x2013ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953360));
    // 0x2013f0: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2013f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2013f4: 0x34214a18  ori         $at, $at, 0x4A18
    ctx->pc = 0x2013f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18968);
    // 0x2013f8: 0x813821  addu        $a3, $a0, $at
    ctx->pc = 0x2013f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
    // 0x2013fc: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x2013fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
    // 0x201400: 0x90e40000  lbu         $a0, 0x0($a3)
    ctx->pc = 0x201400u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x201404: 0x2463a4b0  addiu       $v1, $v1, -0x5B50
    ctx->pc = 0x201404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943920));
    // 0x201408: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x201408u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x20140c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x20140cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x201410: 0xdc660000  ld          $a2, 0x0($v1)
    ctx->pc = 0x201410u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x201414: 0x30c30008  andi        $v1, $a2, 0x8
    ctx->pc = 0x201414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)8);
    // 0x201418: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x201418u;
    {
        const bool branch_taken_0x201418 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x201418) {
            ctx->pc = 0x201430u;
            goto label_201430;
        }
    }
    ctx->pc = 0x201420u;
    // 0x201420: 0x90e40001  lbu         $a0, 0x1($a3)
    ctx->pc = 0x201420u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x201424: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x201424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x201428: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x201428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x20142c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x20142cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_201430:
    // 0x201430: 0x30c30004  andi        $v1, $a2, 0x4
    ctx->pc = 0x201430u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4);
    // 0x201434: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x201434u;
    {
        const bool branch_taken_0x201434 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x201438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201434u;
        // 0x201438: 0x30c30010  andi        $v1, $a2, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x201434) {
            ctx->pc = 0x201450u;
            goto label_201450;
        }
    }
    ctx->pc = 0x20143Cu;
    // 0x20143c: 0x90e40001  lbu         $a0, 0x1($a3)
    ctx->pc = 0x20143cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x201440: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x201440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x201444: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x201444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x201448: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x201448u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x20144c: 0x30c30010  andi        $v1, $a2, 0x10
    ctx->pc = 0x20144cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16);
label_201450:
    // 0x201450: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x201450u;
    {
        const bool branch_taken_0x201450 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x201454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201450u;
        // 0x201454: 0x30c30020  andi        $v1, $a2, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x201450) {
            ctx->pc = 0x20146Cu;
            goto label_20146c;
        }
    }
    ctx->pc = 0x201458u;
    // 0x201458: 0x90e40001  lbu         $a0, 0x1($a3)
    ctx->pc = 0x201458u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x20145c: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x20145cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x201460: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x201460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x201464: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x201464u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x201468: 0x30c30020  andi        $v1, $a2, 0x20
    ctx->pc = 0x201468u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32);
label_20146c:
    // 0x20146c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x20146Cu;
    {
        const bool branch_taken_0x20146c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20146c) {
            ctx->pc = 0x201484u;
            goto label_201484;
        }
    }
    ctx->pc = 0x201474u;
    // 0x201474: 0x90e40001  lbu         $a0, 0x1($a3)
    ctx->pc = 0x201474u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x201478: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x201478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x20147c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x20147cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x201480: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x201480u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
label_201484:
    // 0x201484: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x201484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x201488: 0x28610097  slti        $at, $v1, 0x97
    ctx->pc = 0x201488u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)151) ? 1 : 0);
    // 0x20148c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x20148Cu;
    {
        const bool branch_taken_0x20148c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x20148c) {
            ctx->pc = 0x201498u;
            goto label_201498;
        }
    }
    ctx->pc = 0x201494u;
    // 0x201494: 0x24030096  addiu       $v1, $zero, 0x96
    ctx->pc = 0x201494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
label_201498:
    // 0x201498: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x201498u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x20149c: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x20149cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2014a0: 0x28610097  slti        $at, $v1, 0x97
    ctx->pc = 0x2014a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)151) ? 1 : 0);
    // 0x2014a4: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2014A4u;
    {
        const bool branch_taken_0x2014a4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2014a4) {
            ctx->pc = 0x2014B0u;
            goto label_2014b0;
        }
    }
    ctx->pc = 0x2014ACu;
    // 0x2014ac: 0x24030096  addiu       $v1, $zero, 0x96
    ctx->pc = 0x2014acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
label_2014b0:
    // 0x2014b0: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x2014b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x2014b4: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x2014b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2014b8: 0x28610065  slti        $at, $v1, 0x65
    ctx->pc = 0x2014b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)101) ? 1 : 0);
    // 0x2014bc: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2014BCu;
    {
        const bool branch_taken_0x2014bc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2014bc) {
            ctx->pc = 0x2014C8u;
            goto label_2014c8;
        }
    }
    ctx->pc = 0x2014C4u;
    // 0x2014c4: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x2014c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2014c8:
    // 0x2014c8: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x2014c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x2014cc: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x2014ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2014d0: 0x28610065  slti        $at, $v1, 0x65
    ctx->pc = 0x2014d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)101) ? 1 : 0);
    // 0x2014d4: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x2014D4u;
    {
        const bool branch_taken_0x2014d4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2014d4) {
            ctx->pc = 0x2014E0u;
            return;
        }
    }
    ctx->pc = 0x2014DCu;
    // 0x2014dc: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x2014dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->pc = 0x2014e0u;
}
