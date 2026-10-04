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

// Function: FUN_001d2810
// Address: 0x1d2810 - 0x1d2a3c
void FUN_001d2810_0x1d2810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d2810_0x1d2810");
#endif

    ctx->pc = 0x1d2810u;

    // 0x1d2810: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d2810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d2814: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x1d2814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x1d2818: 0x34433ffc  ori         $v1, $v0, 0x3FFC
    ctx->pc = 0x1d2818u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16380);
    // 0x1d281c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d281cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d2820: 0x8c6a0000  lw          $t2, 0x0($v1)
    ctx->pc = 0x1d2820u;
    SET_GPR_S32(ctx, 10, (int32_t)runtime->Load32(rdram, ctx, 0x70003FFCu));
    // 0x1d2824: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1d2824u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d2828: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1d2828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1d282c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1d282cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1d2830: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x1d2830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d2834: 0x34210200  ori         $at, $at, 0x200
    ctx->pc = 0x1d2834u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)512);
    // 0x1d2838: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x1d2838u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1d283c: 0xa48c0  sll         $t1, $t2, 3
    ctx->pc = 0x1d283cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x1d2840: 0x84e20220  lh          $v0, 0x220($a3)
    ctx->pc = 0x1d2840u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 544)));
    // 0x1d2844: 0x12a5023  subu        $t2, $t1, $t2
    ctx->pc = 0x1d2844u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x1d2848: 0x24900  sll         $t1, $v0, 4
    ctx->pc = 0x1d2848u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d284c: 0xa1080  sll         $v0, $t2, 2
    ctx->pc = 0x1d284cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x1d2850: 0x1425021  addu        $t2, $t2, $v0
    ctx->pc = 0x1d2850u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x1d2854: 0xa5200  sll         $t2, $t2, 8
    ctx->pc = 0x1d2854u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 8));
    // 0x1d2858: 0x91083  sra         $v0, $t1, 2
    ctx->pc = 0x1d2858u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 9), 2));
    // 0x1d285c: 0xca3021  addu        $a2, $a2, $t2
    ctx->pc = 0x1d285cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x1d2860: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1d2860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1d2864: 0x5210003  bgez        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D2864u;
    {
        const bool branch_taken_0x1d2864 = (GPR_S32(ctx, 9) >= 0);
        ctx->pc = 0x1D2868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2864u;
        // 0x1d2868: 0x611821  addu        $v1, $v1, $at (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2864) {
            ctx->pc = 0x1D2874u;
            goto label_1d2874;
        }
    }
    ctx->pc = 0x1D286Cu;
    // 0x1d286c: 0x25220003  addiu       $v0, $t1, 0x3
    ctx->pc = 0x1d286cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 3));
    // 0x1d2870: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1d2870u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_1d2874:
    // 0x1d2874: 0x825821  addu        $t3, $a0, $v0
    ctx->pc = 0x1d2874u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1d2878: 0x84e2021c  lh          $v0, 0x21C($a3)
    ctx->pc = 0x1d2878u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 540)));
    // 0x1d287c: 0x23100  sll         $a2, $v0, 4
    ctx->pc = 0x1d287cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d2880: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D2880u;
    {
        const bool branch_taken_0x1d2880 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1D2884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2880u;
        // 0x1d2884: 0x61083  sra         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2880) {
            ctx->pc = 0x1D2890u;
            goto label_1d2890;
        }
    }
    ctx->pc = 0x1D2888u;
    // 0x1d2888: 0x24c20003  addiu       $v0, $a2, 0x3
    ctx->pc = 0x1d2888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
    // 0x1d288c: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1d288cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_1d2890:
    // 0x1d2890: 0x8d090004  lw          $t1, 0x4($t0)
    ctx->pc = 0x1d2890u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x1d2894: 0x826021  addu        $t4, $a0, $v0
    ctx->pc = 0x1d2894u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1d2898: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1d2898u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1d289c: 0x246a0010  addiu       $t2, $v1, 0x10
    ctx->pc = 0x1d289cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1d28a0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1d28a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1d28a4: 0x23100  sll         $a2, $v0, 4
    ctx->pc = 0x1d28a4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1d28a8: 0x611c3  sra         $v0, $a2, 7
    ctx->pc = 0x1d28a8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 7));
    // 0x1d28ac: 0xa4640080  sh          $a0, 0x80($v1)
    ctx->pc = 0x1d28acu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 128), (uint16_t)GPR_U32(ctx, 4));
    // 0x1d28b0: 0x252d0010  addiu       $t5, $t1, 0x10
    ctx->pc = 0x1d28b0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x1d28b4: 0x252e0028  addiu       $t6, $t1, 0x28
    ctx->pc = 0x1d28b4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 9), 40));
    // 0x1d28b8: 0xa46d0082  sh          $t5, 0x82($v1)
    ctx->pc = 0x1d28b8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 130), (uint16_t)GPR_U32(ctx, 13));
    // 0x1d28bc: 0x8d090008  lw          $t1, 0x8($t0)
    ctx->pc = 0x1d28bcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x1d28c0: 0xac690084  sw          $t1, 0x84($v1)
    ctx->pc = 0x1d28c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 9));
    // 0x1d28c4: 0xa46b0088  sh          $t3, 0x88($v1)
    ctx->pc = 0x1d28c4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 136), (uint16_t)GPR_U32(ctx, 11));
    // 0x1d28c8: 0xa46e008a  sh          $t6, 0x8A($v1)
    ctx->pc = 0x1d28c8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 138), (uint16_t)GPR_U32(ctx, 14));
    // 0x1d28cc: 0x8d090008  lw          $t1, 0x8($t0)
    ctx->pc = 0x1d28ccu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x1d28d0: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D28D0u;
    {
        const bool branch_taken_0x1d28d0 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1D28D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D28D0u;
        // 0x1d28d4: 0xac69008c  sw          $t1, 0x8C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 140), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d28d0) {
            ctx->pc = 0x1D28E0u;
            goto label_1d28e0;
        }
    }
    ctx->pc = 0x1D28D8u;
    // 0x1d28d8: 0x24c2007f  addiu       $v0, $a2, 0x7F
    ctx->pc = 0x1d28d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 127));
    // 0x1d28dc: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x1d28dcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
label_1d28e0:
    // 0x1d28e0: 0xa142006b  sb          $v0, 0x6B($t2)
    ctx->pc = 0x1d28e0u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 107), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d28e4: 0xa4640100  sh          $a0, 0x100($v1)
    ctx->pc = 0x1d28e4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 256), (uint16_t)GPR_U32(ctx, 4));
    // 0x1d28e8: 0xa46d0102  sh          $t5, 0x102($v1)
    ctx->pc = 0x1d28e8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 258), (uint16_t)GPR_U32(ctx, 13));
    // 0x1d28ec: 0x8d060008  lw          $a2, 0x8($t0)
    ctx->pc = 0x1d28ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x1d28f0: 0xac660104  sw          $a2, 0x104($v1)
    ctx->pc = 0x1d28f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 260), GPR_U32(ctx, 6));
    // 0x1d28f4: 0xa46c0110  sh          $t4, 0x110($v1)
    ctx->pc = 0x1d28f4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 272), (uint16_t)GPR_U32(ctx, 12));
    // 0x1d28f8: 0xa46d0112  sh          $t5, 0x112($v1)
    ctx->pc = 0x1d28f8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 274), (uint16_t)GPR_U32(ctx, 13));
    // 0x1d28fc: 0x8d060008  lw          $a2, 0x8($t0)
    ctx->pc = 0x1d28fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x1d2900: 0xac660114  sw          $a2, 0x114($v1)
    ctx->pc = 0x1d2900u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 276), GPR_U32(ctx, 6));
    // 0x1d2904: 0xa4640120  sh          $a0, 0x120($v1)
    ctx->pc = 0x1d2904u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 288), (uint16_t)GPR_U32(ctx, 4));
    // 0x1d2908: 0xa46e0122  sh          $t6, 0x122($v1)
    ctx->pc = 0x1d2908u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 290), (uint16_t)GPR_U32(ctx, 14));
    // 0x1d290c: 0x8d040008  lw          $a0, 0x8($t0)
    ctx->pc = 0x1d290cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x1d2910: 0xac640124  sw          $a0, 0x124($v1)
    ctx->pc = 0x1d2910u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 292), GPR_U32(ctx, 4));
    // 0x1d2914: 0xa46c0130  sh          $t4, 0x130($v1)
    ctx->pc = 0x1d2914u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 304), (uint16_t)GPR_U32(ctx, 12));
    // 0x1d2918: 0xa46e0132  sh          $t6, 0x132($v1)
    ctx->pc = 0x1d2918u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 306), (uint16_t)GPR_U32(ctx, 14));
    // 0x1d291c: 0x8d040008  lw          $a0, 0x8($t0)
    ctx->pc = 0x1d291cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x1d2920: 0xac640134  sw          $a0, 0x134($v1)
    ctx->pc = 0x1d2920u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 308), GPR_U32(ctx, 4));
    // 0x1d2924: 0x90e40234  lbu         $a0, 0x234($a3)
    ctx->pc = 0x1d2924u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 564)));
    // 0x1d2928: 0x1480001d  bnez        $a0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1D2928u;
    {
        const bool branch_taken_0x1d2928 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D292Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2928u;
        // 0x1d292c: 0x24620090  addiu       $v0, $v1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2928) {
            ctx->pc = 0x1D29A0u;
            goto label_1d29a0;
        }
    }
    ctx->pc = 0x1D2930u;
    // 0x1d2930: 0x240b0024  addiu       $t3, $zero, 0x24
    ctx->pc = 0x1d2930u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1d2934: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x1d2934u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1d2938: 0xa04b0068  sb          $t3, 0x68($v0)
    ctx->pc = 0x1d2938u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 104), (uint8_t)GPR_U32(ctx, 11));
    // 0x1d293c: 0x24090076  addiu       $t1, $zero, 0x76
    ctx->pc = 0x1d293cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
    // 0x1d2940: 0xa04a0069  sb          $t2, 0x69($v0)
    ctx->pc = 0x1d2940u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 105), (uint8_t)GPR_U32(ctx, 10));
    // 0x1d2944: 0x3c083f80  lui         $t0, 0x3F80
    ctx->pc = 0x1d2944u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16256 << 16));
    // 0x1d2948: 0xa049006a  sb          $t1, 0x6A($v0)
    ctx->pc = 0x1d2948u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 106), (uint8_t)GPR_U32(ctx, 9));
    // 0x1d294c: 0x24070060  addiu       $a3, $zero, 0x60
    ctx->pc = 0x1d294cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1d2950: 0xa045006b  sb          $a1, 0x6B($v0)
    ctx->pc = 0x1d2950u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 107), (uint8_t)GPR_U32(ctx, 5));
    // 0x1d2954: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x1d2954u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1d2958: 0xac48006c  sw          $t0, 0x6C($v0)
    ctx->pc = 0x1d2958u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 108), GPR_U32(ctx, 8));
    // 0x1d295c: 0x240400e0  addiu       $a0, $zero, 0xE0
    ctx->pc = 0x1d295cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x1d2960: 0xa04b0088  sb          $t3, 0x88($v0)
    ctx->pc = 0x1d2960u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 136), (uint8_t)GPR_U32(ctx, 11));
    // 0x1d2964: 0xa04a0089  sb          $t2, 0x89($v0)
    ctx->pc = 0x1d2964u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 137), (uint8_t)GPR_U32(ctx, 10));
    // 0x1d2968: 0xa049008a  sb          $t1, 0x8A($v0)
    ctx->pc = 0x1d2968u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 138), (uint8_t)GPR_U32(ctx, 9));
    // 0x1d296c: 0xa045008b  sb          $a1, 0x8B($v0)
    ctx->pc = 0x1d296cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 139), (uint8_t)GPR_U32(ctx, 5));
    // 0x1d2970: 0xac48008c  sw          $t0, 0x8C($v0)
    ctx->pc = 0x1d2970u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 140), GPR_U32(ctx, 8));
    // 0x1d2974: 0xa0470078  sb          $a3, 0x78($v0)
    ctx->pc = 0x1d2974u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 120), (uint8_t)GPR_U32(ctx, 7));
    // 0x1d2978: 0xa0460079  sb          $a2, 0x79($v0)
    ctx->pc = 0x1d2978u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 121), (uint8_t)GPR_U32(ctx, 6));
    // 0x1d297c: 0xa044007a  sb          $a0, 0x7A($v0)
    ctx->pc = 0x1d297cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 122), (uint8_t)GPR_U32(ctx, 4));
    // 0x1d2980: 0xa045007b  sb          $a1, 0x7B($v0)
    ctx->pc = 0x1d2980u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 123), (uint8_t)GPR_U32(ctx, 5));
    // 0x1d2984: 0xac48007c  sw          $t0, 0x7C($v0)
    ctx->pc = 0x1d2984u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 124), GPR_U32(ctx, 8));
    // 0x1d2988: 0xa0470098  sb          $a3, 0x98($v0)
    ctx->pc = 0x1d2988u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 152), (uint8_t)GPR_U32(ctx, 7));
    // 0x1d298c: 0xa0460099  sb          $a2, 0x99($v0)
    ctx->pc = 0x1d298cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 153), (uint8_t)GPR_U32(ctx, 6));
    // 0x1d2990: 0xa044009a  sb          $a0, 0x9A($v0)
    ctx->pc = 0x1d2990u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 154), (uint8_t)GPR_U32(ctx, 4));
    // 0x1d2994: 0xa045009b  sb          $a1, 0x9B($v0)
    ctx->pc = 0x1d2994u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 155), (uint8_t)GPR_U32(ctx, 5));
    // 0x1d2998: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1D2998u;
    {
        const bool branch_taken_0x1d2998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D299Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2998u;
        // 0x1d299c: 0xac48009c  sw          $t0, 0x9C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 156), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2998) {
            ctx->pc = 0x1D2A0Cu;
            goto label_1d2a0c;
        }
    }
    ctx->pc = 0x1D29A0u;
label_1d29a0:
    // 0x1d29a0: 0x240b00ff  addiu       $t3, $zero, 0xFF
    ctx->pc = 0x1d29a0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1d29a4: 0x240a005a  addiu       $t2, $zero, 0x5A
    ctx->pc = 0x1d29a4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x1d29a8: 0xa04b0068  sb          $t3, 0x68($v0)
    ctx->pc = 0x1d29a8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 104), (uint8_t)GPR_U32(ctx, 11));
    // 0x1d29ac: 0x2409006c  addiu       $t1, $zero, 0x6C
    ctx->pc = 0x1d29acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x1d29b0: 0xa04a0069  sb          $t2, 0x69($v0)
    ctx->pc = 0x1d29b0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 105), (uint8_t)GPR_U32(ctx, 10));
    // 0x1d29b4: 0x3c083f80  lui         $t0, 0x3F80
    ctx->pc = 0x1d29b4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16256 << 16));
    // 0x1d29b8: 0xa049006a  sb          $t1, 0x6A($v0)
    ctx->pc = 0x1d29b8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 106), (uint8_t)GPR_U32(ctx, 9));
    // 0x1d29bc: 0x240700ac  addiu       $a3, $zero, 0xAC
    ctx->pc = 0x1d29bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 172));
    // 0x1d29c0: 0xa045006b  sb          $a1, 0x6B($v0)
    ctx->pc = 0x1d29c0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 107), (uint8_t)GPR_U32(ctx, 5));
    // 0x1d29c4: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x1d29c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1d29c8: 0xac48006c  sw          $t0, 0x6C($v0)
    ctx->pc = 0x1d29c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 108), GPR_U32(ctx, 8));
    // 0x1d29cc: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x1d29ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1d29d0: 0xa04b0088  sb          $t3, 0x88($v0)
    ctx->pc = 0x1d29d0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 136), (uint8_t)GPR_U32(ctx, 11));
    // 0x1d29d4: 0xa04a0089  sb          $t2, 0x89($v0)
    ctx->pc = 0x1d29d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 137), (uint8_t)GPR_U32(ctx, 10));
    // 0x1d29d8: 0xa049008a  sb          $t1, 0x8A($v0)
    ctx->pc = 0x1d29d8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 138), (uint8_t)GPR_U32(ctx, 9));
    // 0x1d29dc: 0xa045008b  sb          $a1, 0x8B($v0)
    ctx->pc = 0x1d29dcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 139), (uint8_t)GPR_U32(ctx, 5));
    // 0x1d29e0: 0xac48008c  sw          $t0, 0x8C($v0)
    ctx->pc = 0x1d29e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 140), GPR_U32(ctx, 8));
    // 0x1d29e4: 0xa0470078  sb          $a3, 0x78($v0)
    ctx->pc = 0x1d29e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 120), (uint8_t)GPR_U32(ctx, 7));
    // 0x1d29e8: 0xa0460079  sb          $a2, 0x79($v0)
    ctx->pc = 0x1d29e8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 121), (uint8_t)GPR_U32(ctx, 6));
    // 0x1d29ec: 0xa044007a  sb          $a0, 0x7A($v0)
    ctx->pc = 0x1d29ecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 122), (uint8_t)GPR_U32(ctx, 4));
    // 0x1d29f0: 0xa045007b  sb          $a1, 0x7B($v0)
    ctx->pc = 0x1d29f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 123), (uint8_t)GPR_U32(ctx, 5));
    // 0x1d29f4: 0xac48007c  sw          $t0, 0x7C($v0)
    ctx->pc = 0x1d29f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 124), GPR_U32(ctx, 8));
    // 0x1d29f8: 0xa0470098  sb          $a3, 0x98($v0)
    ctx->pc = 0x1d29f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 152), (uint8_t)GPR_U32(ctx, 7));
    // 0x1d29fc: 0xa0460099  sb          $a2, 0x99($v0)
    ctx->pc = 0x1d29fcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 153), (uint8_t)GPR_U32(ctx, 6));
    // 0x1d2a00: 0xa044009a  sb          $a0, 0x9A($v0)
    ctx->pc = 0x1d2a00u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 154), (uint8_t)GPR_U32(ctx, 4));
    // 0x1d2a04: 0xa045009b  sb          $a1, 0x9B($v0)
    ctx->pc = 0x1d2a04u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 155), (uint8_t)GPR_U32(ctx, 5));
    // 0x1d2a08: 0xac48009c  sw          $t0, 0x9C($v0)
    ctx->pc = 0x1d2a08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 156), GPR_U32(ctx, 8));
label_1d2a0c:
    // 0x1d2a0c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1d2a0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2a10: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1d2a10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1d2a14: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1d2a14u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x70003FFCu));
    // 0x1d2a18: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1d2a18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1d2a1c: 0x24421e00  addiu       $v0, $v0, 0x1E00
    ctx->pc = 0x1d2a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7680));
    // 0x1d2a20: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x1d2a20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1d2a24: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d2a24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2a28: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d2a28u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2a2c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d2a2cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2a30: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x1d2a30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1d2a34: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x1D2A34u;
    SET_GPR_U32(ctx, 31, 0x1D2A3Cu);
    ctx->pc = 0x1D2A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2A34u;
    // 0x1d2a38: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1D2A34u, 0x1D2A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2A3Cu;
}
