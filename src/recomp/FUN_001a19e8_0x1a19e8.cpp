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

// Function: FUN_001a19e8
// Address: 0x1a19e8 - 0x1a1b3c
void FUN_001a19e8_0x1a19e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a19e8_0x1a19e8");
#endif

    ctx->pc = 0x1a19e8u;

    // 0x1a19e8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1a19e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1a19ec: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x1a19ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
    // 0x1a19f0: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x1a19f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x1a19f4: 0x30c2ffff  andi        $v0, $a2, 0xFFFF
    ctx->pc = 0x1a19f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x1a19f8: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x1a19f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x1a19fc: 0x6763a  dsrl        $t6, $a2, 24
    ctx->pc = 0x1a19fcu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 6) >> 24);
    // 0x1a1a00: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x1a1a00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x1a1a04: 0x6683e  dsrl32      $t5, $a2, 0
    ctx->pc = 0x1a1a04u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x1a1a08: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1a1a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1a1a0c: 0x2603c  dsll32      $t4, $v0, 0
    ctx->pc = 0x1a1a0cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a1a10: 0xc603f  dsra32      $t4, $t4, 0
    ctx->pc = 0x1a1a10u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 12) >> (32 + 0));
    // 0x1a1a14: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1a1a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1a1a18: 0x24635978  addiu       $v1, $v1, 0x5978
    ctx->pc = 0x1a1a18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22904));
    // 0x1a1a1c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a1a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1a1a20: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1a1a20u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1a24: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a1a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1a1a28: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1a1a28u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1a2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a1a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a1a30: 0x340bffff  ori         $t3, $zero, 0xFFFF
    ctx->pc = 0x1a1a30u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1a1a34: 0xb5e38  dsll        $t3, $t3, 24
    ctx->pc = 0x1a1a34u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << 24);
    // 0x1a1a38: 0x3417ff00  ori         $s7, $zero, 0xFF00
    ctx->pc = 0x1a1a38u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x1a1a3c: 0x17be38  dsll        $s7, $s7, 24
    ctx->pc = 0x1a1a3cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) << 24);
    // 0x1a1a40: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x1a1a40u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a1a44: 0x16b63a  dsrl        $s6, $s6, 24
    ctx->pc = 0x1a1a44u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) >> 24);
    // 0x1a1a48: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x1a1a48u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a1a4c: 0x15aa3c  dsll32      $s5, $s5, 8
    ctx->pc = 0x1a1a4cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << (32 + 8));
    // 0x1a1a50: 0x15ae3a  dsrl        $s5, $s5, 24
    ctx->pc = 0x1a1a50u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) >> 24);
    // 0x1a1a54: 0x3414bd20  ori         $s4, $zero, 0xBD20
    ctx->pc = 0x1a1a54u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48416);
    // 0x1a1a58: 0x14a638  dsll        $s4, $s4, 24
    ctx->pc = 0x1a1a58u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) << 24);
    // 0x1a1a5c: 0x3413bd80  ori         $s3, $zero, 0xBD80
    ctx->pc = 0x1a1a5cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48512);
    // 0x1a1a60: 0x139e38  dsll        $s3, $s3, 24
    ctx->pc = 0x1a1a60u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) << 24);
    // 0x1a1a64: 0x3412bd90  ori         $s2, $zero, 0xBD90
    ctx->pc = 0x1a1a64u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48528);
    // 0x1a1a68: 0x129638  dsll        $s2, $s2, 24
    ctx->pc = 0x1a1a68u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) << 24);
    // 0x1a1a6c: 0x3411bda0  ori         $s1, $zero, 0xBDA0
    ctx->pc = 0x1a1a6cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48544);
    // 0x1a1a70: 0x118e38  dsll        $s1, $s1, 24
    ctx->pc = 0x1a1a70u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << 24);
    // 0x1a1a74: 0x3410ffe0  ori         $s0, $zero, 0xFFE0
    ctx->pc = 0x1a1a74u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65504);
    // 0x1a1a78: 0x108638  dsll        $s0, $s0, 24
    ctx->pc = 0x1a1a78u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << 24);
    // 0x1a1a7c: 0x3419fff8  ori         $t9, $zero, 0xFFF8
    ctx->pc = 0x1a1a7cu;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x1a1a80: 0x19ce38  dsll        $t9, $t9, 24
    ctx->pc = 0x1a1a80u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 25) << 24);
    // 0x1a1a84: 0x3418f000  ori         $t8, $zero, 0xF000
    ctx->pc = 0x1a1a84u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
    // 0x1a1a88: 0x18c638  dsll        $t8, $t8, 24
    ctx->pc = 0x1a1a88u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) << 24);
    // 0x1a1a8c: 0x340fc000  ori         $t7, $zero, 0xC000
    ctx->pc = 0x1a1a8cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
    // 0x1a1a90: 0xf7e38  dsll        $t7, $t7, 24
    ctx->pc = 0x1a1a90u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << 24);
    // 0x1a1a94: 0xdc670008  ld          $a3, 0x8($v1)
    ctx->pc = 0x1a1a94u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1a1a98: 0x10eb0011  beq         $a3, $t3, . + 4 + (0x11 << 2)
    ctx->pc = 0x1A1A98u;
    {
        const bool branch_taken_0x1a1a98 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 11));
        ctx->pc = 0x1A1A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1A98u;
        // 0x1a1a9c: 0x167102b  sltu        $v0, $t3, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1a98) {
            ctx->pc = 0x1A1AE0u;
            goto label_1a1ae0;
        }
    }
    ctx->pc = 0x1A1AA0u;
    // 0x1a1aa0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A1AA0u;
    {
        const bool branch_taken_0x1a1aa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a1aa0) {
            ctx->pc = 0x1A1AB8u;
            goto label_1a1ab8;
        }
    }
    ctx->pc = 0x1A1AA8u;
    // 0x1a1aa8: 0x50f70028  beql        $a3, $s7, . + 4 + (0x28 << 2)
    ctx->pc = 0x1A1AA8u;
    {
        const bool branch_taken_0x1a1aa8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 23));
        if (branch_taken_0x1a1aa8) {
            ctx->pc = 0x1A1AACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A1AA8u;
            // 0x1a1aac: 0xdc680000  ld          $t0, 0x0($v1) (Delay Slot)
            SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A1B4Cu;
            return;
        }
    }
    ctx->pc = 0x1A1AB0u;
    // 0x1a1ab0: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x1A1AB0u;
    {
        const bool branch_taken_0x1a1ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1AB0u;
        // 0x1a1ab4: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1ab0) {
            ctx->pc = 0x1A1BA4u;
            return;
        }
    }
    ctx->pc = 0x1A1AB8u;
label_1a1ab8:
    // 0x1a1ab8: 0x54f6003a  bnel        $a3, $s6, . + 4 + (0x3A << 2)
    ctx->pc = 0x1A1AB8u;
    {
        const bool branch_taken_0x1a1ab8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 22));
        if (branch_taken_0x1a1ab8) {
            ctx->pc = 0x1A1ABCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A1AB8u;
            // 0x1a1abc: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A1BA4u;
            return;
        }
    }
    ctx->pc = 0x1A1AC0u;
    // 0x1a1ac0: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x1a1ac0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a1ac4: 0xd53824  and         $a3, $a2, $s5
    ctx->pc = 0x1a1ac4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & GPR_U64(ctx, 21));
    // 0x1a1ac8: 0x54e20036  bnel        $a3, $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x1A1AC8u;
    {
        const bool branch_taken_0x1a1ac8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a1ac8) {
            ctx->pc = 0x1A1ACCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A1AC8u;
            // 0x1a1acc: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A1BA4u;
            return;
        }
    }
    ctx->pc = 0x1A1AD0u;
    // 0x1a1ad0: 0xac890000  sw          $t1, 0x0($a0)
    ctx->pc = 0x1a1ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 9));
    // 0x1a1ad4: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x1a1ad4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a1ad8: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x1A1AD8u;
    {
        const bool branch_taken_0x1a1ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1AD8u;
        // 0x1a1adc: 0xacac0000  sw          $t4, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1ad8) {
            ctx->pc = 0x1A1BA0u;
            return;
        }
    }
    ctx->pc = 0x1A1AE0u;
label_1a1ae0:
    // 0x1a1ae0: 0xdc680000  ld          $t0, 0x0($v1)
    ctx->pc = 0x1a1ae0u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a1ae4: 0x3402bd88  ori         $v0, $zero, 0xBD88
    ctx->pc = 0x1a1ae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48520);
    // 0x1a1ae8: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x1a1ae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x1a1aec: 0x11020011  beq         $t0, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1A1AECu;
    {
        const bool branch_taken_0x1a1aec = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A1AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1AECu;
        // 0x1a1af0: 0x48102b  sltu        $v0, $v0, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1aec) {
            ctx->pc = 0x1A1B34u;
            goto label_1a1b34;
        }
    }
    ctx->pc = 0x1A1AF4u;
    // 0x1a1af4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A1AF4u;
    {
        const bool branch_taken_0x1a1af4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a1af4) {
            ctx->pc = 0x1A1B14u;
            goto label_1a1b14;
        }
    }
    ctx->pc = 0x1A1AFCu;
    // 0x1a1afc: 0x1114000b  beq         $t0, $s4, . + 4 + (0xB << 2)
    ctx->pc = 0x1A1AFCu;
    {
        const bool branch_taken_0x1a1afc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 20));
        ctx->pc = 0x1A1B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1AFCu;
        // 0x1a1b00: 0xd03824  and         $a3, $a2, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1afc) {
            ctx->pc = 0x1A1B2Cu;
            goto label_1a1b2c;
        }
    }
    ctx->pc = 0x1A1B04u;
    // 0x1a1b04: 0x1113000b  beq         $t0, $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x1A1B04u;
    {
        const bool branch_taken_0x1a1b04 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 19));
        ctx->pc = 0x1A1B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1B04u;
        // 0x1a1b08: 0xcb3824  and         $a3, $a2, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1b04) {
            ctx->pc = 0x1A1B34u;
            goto label_1a1b34;
        }
    }
    ctx->pc = 0x1A1B0Cu;
    // 0x1a1b0c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1A1B0Cu;
    {
        const bool branch_taken_0x1a1b0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1B0Cu;
        // 0x1a1b10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1b0c) {
            ctx->pc = 0x1A1B3Cu;
            return;
        }
    }
    ctx->pc = 0x1A1B14u;
label_1a1b14:
    // 0x1a1b14: 0x11120008  beq         $t0, $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A1B14u;
    {
        const bool branch_taken_0x1a1b14 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 18));
        ctx->pc = 0x1A1B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1B14u;
        // 0x1a1b18: 0xd93824  and         $a3, $a2, $t9 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & GPR_U64(ctx, 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1b14) {
            ctx->pc = 0x1A1B38u;
            goto label_1a1b38;
        }
    }
    ctx->pc = 0x1A1B1Cu;
    // 0x1a1b1c: 0x11110005  beq         $t0, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A1B1Cu;
    {
        const bool branch_taken_0x1a1b1c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 17));
        ctx->pc = 0x1A1B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1B1Cu;
        // 0x1a1b20: 0xcb3824  and         $a3, $a2, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1b1c) {
            ctx->pc = 0x1A1B34u;
            goto label_1a1b34;
        }
    }
    ctx->pc = 0x1A1B24u;
    // 0x1a1b24: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1A1B24u;
    {
        const bool branch_taken_0x1a1b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1B24u;
        // 0x1a1b28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1b24) {
            ctx->pc = 0x1A1B3Cu;
            return;
        }
    }
    ctx->pc = 0x1A1B2Cu;
label_1a1b2c:
    // 0x1a1b2c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A1B2Cu;
    {
        const bool branch_taken_0x1a1b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1B2Cu;
        // 0x1a1b30: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1b2c) {
            ctx->pc = 0x1A1B3Cu;
            return;
        }
    }
    ctx->pc = 0x1A1B34u;
label_1a1b34:
    // 0x1a1b34: 0xd93824  and         $a3, $a2, $t9
    ctx->pc = 0x1a1b34u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & GPR_U64(ctx, 25));
label_1a1b38:
    // 0x1a1b38: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1a1b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->pc = 0x1a1b3cu;
}
