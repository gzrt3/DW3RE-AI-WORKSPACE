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

// Function: FUN_00175460
// Address: 0x175460 - 0x1755f8
void FUN_00175460_0x175460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00175460_0x175460");
#endif

    ctx->pc = 0x175460u;

    // 0x175460: 0x9083003d  lbu         $v1, 0x3D($a0)
    ctx->pc = 0x175460u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 61)));
    // 0x175464: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x175464u;
    {
        const bool branch_taken_0x175464 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x175468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175464u;
        // 0x175468: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175464) {
            ctx->pc = 0x175498u;
            goto label_175498;
        }
    }
    ctx->pc = 0x17546Cu;
    // 0x17546c: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x17546cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x175470: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x175470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x175474: 0x90c60015  lbu         $a2, 0x15($a2)
    ctx->pc = 0x175474u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 21)));
    // 0x175478: 0x10c30006  beq         $a2, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x175478u;
    {
        const bool branch_taken_0x175478 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x17547Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175478u;
        // 0x17547c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175478) {
            ctx->pc = 0x175494u;
            goto label_175494;
        }
    }
    ctx->pc = 0x175480u;
    // 0x175480: 0x10c30004  beq         $a2, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x175480u;
    {
        const bool branch_taken_0x175480 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x175480) {
            ctx->pc = 0x175494u;
            goto label_175494;
        }
    }
    ctx->pc = 0x175488u;
    // 0x175488: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x175488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17548c: 0x14c300dc  bne         $a2, $v1, . + 4 + (0xDC << 2)
    ctx->pc = 0x17548Cu;
    {
        const bool branch_taken_0x17548c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x17548c) {
            ctx->pc = 0x175800u;
            return;
        }
    }
    ctx->pc = 0x175494u;
label_175494:
    // 0x175494: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x175494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_175498:
    // 0x175498: 0x10a30044  beq         $a1, $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x175498u;
    {
        const bool branch_taken_0x175498 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x17549Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175498u;
        // 0x17549c: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175498) {
            ctx->pc = 0x1755ACu;
            goto label_1755ac;
        }
    }
    ctx->pc = 0x1754A0u;
    // 0x1754a0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1754a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1754a4: 0x10a30031  beq         $a1, $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x1754A4u;
    {
        const bool branch_taken_0x1754a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1754A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1754A4u;
        // 0x1754a8: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1754a4) {
            ctx->pc = 0x17556Cu;
            goto label_17556c;
        }
    }
    ctx->pc = 0x1754ACu;
    // 0x1754ac: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1754acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1754b0: 0x10a6001f  beq         $a1, $a2, . + 4 + (0x1F << 2)
    ctx->pc = 0x1754B0u;
    {
        const bool branch_taken_0x1754b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x1754B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1754B0u;
        // 0x1754b4: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1754b0) {
            ctx->pc = 0x175530u;
            goto label_175530;
        }
    }
    ctx->pc = 0x1754B8u;
    // 0x1754b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1754b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1754bc: 0x10a3000d  beq         $a1, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1754BCu;
    {
        const bool branch_taken_0x1754bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1754C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1754BCu;
        // 0x1754c0: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1754bc) {
            ctx->pc = 0x1754F4u;
            goto label_1754f4;
        }
    }
    ctx->pc = 0x1754C4u;
    // 0x1754c4: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1754C4u;
    {
        const bool branch_taken_0x1754c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1754C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1754C4u;
        // 0x1754c8: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1754c4) {
            ctx->pc = 0x1754D4u;
            goto label_1754d4;
        }
    }
    ctx->pc = 0x1754CCu;
    // 0x1754cc: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x1754CCu;
    {
        const bool branch_taken_0x1754cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1754D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1754CCu;
        // 0x1754d0: 0x240703e8  addiu       $a3, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1754cc) {
            ctx->pc = 0x1755E4u;
            goto label_1755e4;
        }
    }
    ctx->pc = 0x1754D4u;
label_1754d4:
    // 0x1754d4: 0x90264af2  lbu         $a2, 0x4AF2($at)
    ctx->pc = 0x1754d4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19186)));
    // 0x1754d8: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x1754d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1754dc: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x1754dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1754e0: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x1754e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1754e4: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1754e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1754e8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x1754e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1754ec: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x1754ECu;
    {
        const bool branch_taken_0x1754ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1754F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1754ECu;
        // 0x1754f0: 0x24670384  addiu       $a3, $v1, 0x384 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 900));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1754ec) {
            ctx->pc = 0x1755E4u;
            goto label_1755e4;
        }
    }
    ctx->pc = 0x1754F4u;
label_1754f4:
    // 0x1754f4: 0x8c274afc  lw          $a3, 0x4AFC($at)
    ctx->pc = 0x1754f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19196)));
    // 0x1754f8: 0x14e00003  bnez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1754F8u;
    {
        const bool branch_taken_0x1754f8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x1754f8) {
            ctx->pc = 0x175508u;
            goto label_175508;
        }
    }
    ctx->pc = 0x175500u;
    // 0x175500: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x175500u;
    {
        const bool branch_taken_0x175500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175500u;
        // 0x175504: 0x24070578  addiu       $a3, $zero, 0x578 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175500) {
            ctx->pc = 0x1755E4u;
            goto label_1755e4;
        }
    }
    ctx->pc = 0x175508u;
label_175508:
    // 0x175508: 0x14e30003  bne         $a3, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x175508u;
    {
        const bool branch_taken_0x175508 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x175508) {
            ctx->pc = 0x175518u;
            goto label_175518;
        }
    }
    ctx->pc = 0x175510u;
    // 0x175510: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x175510u;
    {
        const bool branch_taken_0x175510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175510u;
        // 0x175514: 0x240705dc  addiu       $a3, $zero, 0x5DC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1500));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175510) {
            ctx->pc = 0x1755E4u;
            goto label_1755e4;
        }
    }
    ctx->pc = 0x175518u;
label_175518:
    // 0x175518: 0x14e60003  bne         $a3, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x175518u;
    {
        const bool branch_taken_0x175518 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        if (branch_taken_0x175518) {
            ctx->pc = 0x175528u;
            goto label_175528;
        }
    }
    ctx->pc = 0x175520u;
    // 0x175520: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x175520u;
    {
        const bool branch_taken_0x175520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175520u;
        // 0x175524: 0x24070640  addiu       $a3, $zero, 0x640 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1600));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175520) {
            ctx->pc = 0x1755E4u;
            goto label_1755e4;
        }
    }
    ctx->pc = 0x175528u;
label_175528:
    // 0x175528: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x175528u;
    {
        const bool branch_taken_0x175528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17552Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175528u;
        // 0x17552c: 0x24070708  addiu       $a3, $zero, 0x708 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1800));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175528) {
            ctx->pc = 0x1755E4u;
            goto label_1755e4;
        }
    }
    ctx->pc = 0x175530u;
label_175530:
    // 0x175530: 0x8c274afc  lw          $a3, 0x4AFC($at)
    ctx->pc = 0x175530u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19196)));
    // 0x175534: 0x14e00003  bnez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x175534u;
    {
        const bool branch_taken_0x175534 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x175538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175534u;
        // 0x175538: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175534) {
            ctx->pc = 0x175544u;
            goto label_175544;
        }
    }
    ctx->pc = 0x17553Cu;
    // 0x17553c: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x17553Cu;
    {
        const bool branch_taken_0x17553c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17553Cu;
        // 0x175540: 0x2407044c  addiu       $a3, $zero, 0x44C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17553c) {
            ctx->pc = 0x1755E4u;
            goto label_1755e4;
        }
    }
    ctx->pc = 0x175544u;
label_175544:
    // 0x175544: 0x14e30003  bne         $a3, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x175544u;
    {
        const bool branch_taken_0x175544 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        if (branch_taken_0x175544) {
            ctx->pc = 0x175554u;
            goto label_175554;
        }
    }
    ctx->pc = 0x17554Cu;
    // 0x17554c: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x17554Cu;
    {
        const bool branch_taken_0x17554c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17554Cu;
        // 0x175550: 0x24070546  addiu       $a3, $zero, 0x546 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1350));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17554c) {
            ctx->pc = 0x1755E4u;
            goto label_1755e4;
        }
    }
    ctx->pc = 0x175554u;
label_175554:
    // 0x175554: 0x14e60003  bne         $a3, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x175554u;
    {
        const bool branch_taken_0x175554 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        if (branch_taken_0x175554) {
            ctx->pc = 0x175564u;
            goto label_175564;
        }
    }
    ctx->pc = 0x17555Cu;
    // 0x17555c: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x17555Cu;
    {
        const bool branch_taken_0x17555c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17555Cu;
        // 0x175560: 0x24070578  addiu       $a3, $zero, 0x578 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17555c) {
            ctx->pc = 0x1755E4u;
            goto label_1755e4;
        }
    }
    ctx->pc = 0x175564u;
label_175564:
    // 0x175564: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x175564u;
    {
        const bool branch_taken_0x175564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175564u;
        // 0x175568: 0x24070640  addiu       $a3, $zero, 0x640 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1600));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175564) {
            ctx->pc = 0x1755E4u;
            goto label_1755e4;
        }
    }
    ctx->pc = 0x17556Cu;
label_17556c:
    // 0x17556c: 0x8c264afc  lw          $a2, 0x4AFC($at)
    ctx->pc = 0x17556cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19196)));
    // 0x175570: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x175570u;
    {
        const bool branch_taken_0x175570 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x175574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175570u;
        // 0x175574: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175570) {
            ctx->pc = 0x175580u;
            goto label_175580;
        }
    }
    ctx->pc = 0x175578u;
    // 0x175578: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x175578u;
    {
        const bool branch_taken_0x175578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17557Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175578u;
        // 0x17557c: 0x2407041a  addiu       $a3, $zero, 0x41A (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1050));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175578) {
            ctx->pc = 0x1755E4u;
            goto label_1755e4;
        }
    }
    ctx->pc = 0x175580u;
label_175580:
    // 0x175580: 0x14c30003  bne         $a2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x175580u;
    {
        const bool branch_taken_0x175580 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x175584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175580u;
        // 0x175584: 0x24070514  addiu       $a3, $zero, 0x514 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1300));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175580) {
            ctx->pc = 0x175590u;
            goto label_175590;
        }
    }
    ctx->pc = 0x175588u;
    // 0x175588: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x175588u;
    {
        const bool branch_taken_0x175588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x175588) {
            ctx->pc = 0x1755E4u;
            goto label_1755e4;
        }
    }
    ctx->pc = 0x175590u;
label_175590:
    // 0x175590: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x175590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x175594: 0x14c30003  bne         $a2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x175594u;
    {
        const bool branch_taken_0x175594 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x175598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175594u;
        // 0x175598: 0x24070672  addiu       $a3, $zero, 0x672 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1650));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175594) {
            ctx->pc = 0x1755A4u;
            goto label_1755a4;
        }
    }
    ctx->pc = 0x17559Cu;
    // 0x17559c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x17559Cu;
    {
        const bool branch_taken_0x17559c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1755A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17559Cu;
        // 0x1755a0: 0x24070546  addiu       $a3, $zero, 0x546 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1350));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17559c) {
            ctx->pc = 0x1755E4u;
            goto label_1755e4;
        }
    }
    ctx->pc = 0x1755A4u;
label_1755a4:
    // 0x1755a4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1755A4u;
    {
        const bool branch_taken_0x1755a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1755a4) {
            ctx->pc = 0x1755E4u;
            goto label_1755e4;
        }
    }
    ctx->pc = 0x1755ACu;
label_1755ac:
    // 0x1755ac: 0x8c264afc  lw          $a2, 0x4AFC($at)
    ctx->pc = 0x1755acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19196)));
    // 0x1755b0: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1755B0u;
    {
        const bool branch_taken_0x1755b0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1755B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1755B0u;
        // 0x1755b4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1755b0) {
            ctx->pc = 0x1755C0u;
            goto label_1755c0;
        }
    }
    ctx->pc = 0x1755B8u;
    // 0x1755b8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1755B8u;
    {
        const bool branch_taken_0x1755b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1755BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1755B8u;
        // 0x1755bc: 0x240703e8  addiu       $a3, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1755b8) {
            ctx->pc = 0x1755E4u;
            goto label_1755e4;
        }
    }
    ctx->pc = 0x1755C0u;
label_1755c0:
    // 0x1755c0: 0x14c30003  bne         $a2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1755C0u;
    {
        const bool branch_taken_0x1755c0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x1755C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1755C0u;
        // 0x1755c4: 0x240704e2  addiu       $a3, $zero, 0x4E2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1250));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1755c0) {
            ctx->pc = 0x1755D0u;
            goto label_1755d0;
        }
    }
    ctx->pc = 0x1755C8u;
    // 0x1755c8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1755C8u;
    {
        const bool branch_taken_0x1755c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1755c8) {
            ctx->pc = 0x1755E4u;
            goto label_1755e4;
        }
    }
    ctx->pc = 0x1755D0u;
label_1755d0:
    // 0x1755d0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1755d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1755d4: 0x14c30003  bne         $a2, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1755D4u;
    {
        const bool branch_taken_0x1755d4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x1755D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1755D4u;
        // 0x1755d8: 0x24070640  addiu       $a3, $zero, 0x640 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1600));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1755d4) {
            ctx->pc = 0x1755E4u;
            goto label_1755e4;
        }
    }
    ctx->pc = 0x1755DCu;
    // 0x1755dc: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x1755DCu;
    {
        const bool branch_taken_0x1755dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1755E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1755DCu;
        // 0x1755e0: 0x24070514  addiu       $a3, $zero, 0x514 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1300));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1755dc) {
            ctx->pc = 0x1755E4u;
            goto label_1755e4;
        }
    }
    ctx->pc = 0x1755E4u;
label_1755e4:
    // 0x1755e4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1755e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1755e8: 0x3c031062  lui         $v1, 0x1062
    ctx->pc = 0x1755e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4194 << 16));
    // 0x1755ec: 0x8c294968  lw          $t1, 0x4968($at)
    ctx->pc = 0x1755ecu;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x334968u));
    // 0x1755f0: 0x34634dd3  ori         $v1, $v1, 0x4DD3
    ctx->pc = 0x1755f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)19923);
    // 0x1755f4: 0x9126024b  lbu         $a2, 0x24B($t1)
    ctx->pc = 0x1755f4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 587)));
    ctx->pc = 0x1755f8u;
}
