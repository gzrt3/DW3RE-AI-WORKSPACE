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

// Function: FUN_0023d5b8
// Address: 0x23d5b8 - 0x23d6b0
void FUN_0023d5b8_0x23d5b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0023d5b8_0x23d5b8");
#endif

    switch (ctx->pc) {
        case 0x23d600u: goto label_23d600;
        default: break;
    }

    ctx->pc = 0x23d5b8u;

    // 0x23d5b8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x23d5b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x23d5bc: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x23d5bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x23d5c0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x23d5c0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d5c4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x23d5c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x23d5c8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x23d5c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x23d5cc: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x23d5ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x23d5d0: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x23d5d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x23d5d4: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x23d5d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x23d5d8: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x23d5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x23d5dc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x23d5dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x23d5e0: 0x2a0902d  daddu       $s2, $s5, $zero
    ctx->pc = 0x23d5e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d5e4: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x23d5e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x23d5e8: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x23d5e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d5ec: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x23d5ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x23d5f0: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x23d5f0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d5f4: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x23d5f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x23d5f8: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x23d5f8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23d5fc: 0x0  nop
    ctx->pc = 0x23d5fcu;
    // NOP
label_23d600:
    // 0x23d600: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x23d600u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x23d604: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x23d604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
    // 0x23d608: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x23d608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x23d60c: 0x9042e1f1  lbu         $v0, -0x1E0F($v0)
    ctx->pc = 0x23d60cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294959601)));
    // 0x23d610: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x23d610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x23d614: 0x0  nop
    ctx->pc = 0x23d614u;
    // NOP
    // 0x23d618: 0x0  nop
    ctx->pc = 0x23d618u;
    // NOP
    // 0x23d61c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x23D61Cu;
    {
        const bool branch_taken_0x23d61c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D61Cu;
        // 0x23d620: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d61c) {
            ctx->pc = 0x23D600u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23d600;
        }
    }
    ctx->pc = 0x23D624u;
    // 0x23d624: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x23d624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x23d628: 0x16220005  bne         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23D628u;
    {
        const bool branch_taken_0x23d628 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x23D62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D628u;
        // 0x23d62c: 0x2402002b  addiu       $v0, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d628) {
            ctx->pc = 0x23D640u;
            goto label_23d640;
        }
    }
    ctx->pc = 0x23D630u;
    // 0x23d630: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x23d630u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x23d634: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x23d634u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x23d638: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x23D638u;
    {
        const bool branch_taken_0x23d638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D638u;
        // 0x23d63c: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d638) {
            ctx->pc = 0x23D650u;
            goto label_23d650;
        }
    }
    ctx->pc = 0x23D640u;
label_23d640:
    // 0x23d640: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23D640u;
    {
        const bool branch_taken_0x23d640 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x23d640) {
            ctx->pc = 0x23D650u;
            goto label_23d650;
        }
    }
    ctx->pc = 0x23D648u;
    // 0x23d648: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x23d648u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x23d64c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x23d64cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_23d650:
    // 0x23d650: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x23D650u;
    {
        const bool branch_taken_0x23d650 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D650u;
        // 0x23d654: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d650) {
            ctx->pc = 0x23D660u;
            goto label_23d660;
        }
    }
    ctx->pc = 0x23D658u;
    // 0x23d658: 0x1662000c  bne         $s3, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x23D658u;
    {
        const bool branch_taken_0x23d658 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x23d658) {
            ctx->pc = 0x23D68Cu;
            goto label_23d68c;
        }
    }
    ctx->pc = 0x23D660u;
label_23d660:
    // 0x23d660: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x23d660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x23d664: 0x16220009  bne         $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x23D664u;
    {
        const bool branch_taken_0x23d664 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x23D668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D664u;
        // 0x23d668: 0x24020078  addiu       $v0, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d664) {
            ctx->pc = 0x23D68Cu;
            goto label_23d68c;
        }
    }
    ctx->pc = 0x23D66Cu;
    // 0x23d66c: 0x82430000  lb          $v1, 0x0($s2)
    ctx->pc = 0x23d66cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x23d670: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23D670u;
    {
        const bool branch_taken_0x23d670 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23D674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D670u;
        // 0x23d674: 0x24020058  addiu       $v0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d670) {
            ctx->pc = 0x23D680u;
            goto label_23d680;
        }
    }
    ctx->pc = 0x23D678u;
    // 0x23d678: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23D678u;
    {
        const bool branch_taken_0x23d678 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23d678) {
            ctx->pc = 0x23D68Cu;
            goto label_23d68c;
        }
    }
    ctx->pc = 0x23D680u;
label_23d680:
    // 0x23d680: 0x82510001  lb          $s1, 0x1($s2)
    ctx->pc = 0x23d680u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x23d684: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x23d684u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x23d688: 0x24130010  addiu       $s3, $zero, 0x10
    ctx->pc = 0x23d688u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_23d68c:
    // 0x23d68c: 0x16600004  bnez        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x23D68Cu;
    {
        const bool branch_taken_0x23d68c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D68Cu;
        // 0x23d690: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d68c) {
            ctx->pc = 0x23D6A0u;
            goto label_23d6a0;
        }
    }
    ctx->pc = 0x23D694u;
    // 0x23d694: 0x24130008  addiu       $s3, $zero, 0x8
    ctx->pc = 0x23d694u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x23d698: 0x3a220030  xori        $v0, $s1, 0x30
    ctx->pc = 0x23d698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)48);
    // 0x23d69c: 0x62980b  movn        $s3, $v1, $v0
    ctx->pc = 0x23d69cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
label_23d6a0:
    // 0x23d6a0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x23d6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23d6a4: 0x2107a  dsrl        $v0, $v0, 1
    ctx->pc = 0x23d6a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 1);
    // 0x23d6a8: 0x34148000  ori         $s4, $zero, 0x8000
    ctx->pc = 0x23d6a8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x23d6ac: 0x14a43c  dsll32      $s4, $s4, 16
    ctx->pc = 0x23d6acu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) << (32 + 16));
    ctx->pc = 0x23d6b0u;
}
