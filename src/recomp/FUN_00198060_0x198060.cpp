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

// Function: FUN_00198060
// Address: 0x198060 - 0x1982e8
void FUN_00198060_0x198060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00198060_0x198060");
#endif

    switch (ctx->pc) {
        case 0x19816cu: goto label_19816c;
        case 0x1981d8u: goto label_1981d8;
        case 0x19824cu: goto label_19824c;
        case 0x1982b8u: goto label_1982b8;
        default: break;
    }

    ctx->pc = 0x198060u;

    // 0x198060: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x198060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x198064: 0x8c860228  lw          $a2, 0x228($a0)
    ctx->pc = 0x198064u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 552)));
    // 0x198068: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x198068u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19806c: 0x9c850220  lwu         $a1, 0x220($a0)
    ctx->pc = 0x19806cu;
    SET_GPR_ZE32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 544)));
    // 0x198070: 0x30430040  andi        $v1, $v0, 0x40
    ctx->pc = 0x198070u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x198074: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x198074u;
    {
        const bool branch_taken_0x198074 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x198078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198074u;
        // 0x198078: 0x9c870224  lwu         $a3, 0x224($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 548)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198074) {
            ctx->pc = 0x1980DCu;
            goto label_1980dc;
        }
    }
    ctx->pc = 0x19807Cu;
    // 0x19807c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x19807cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x198080: 0x9c890234  lwu         $t1, 0x234($a0)
    ctx->pc = 0x198080u;
    SET_GPR_ZE32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 4), 564)));
    // 0x198084: 0x2403c  dsll32      $t0, $v0, 0
    ctx->pc = 0x198084u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 0));
    // 0x198088: 0x7583c  dsll32      $t3, $a3, 0
    ctx->pc = 0x198088u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 7) << (32 + 0));
    // 0x19808c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x19808cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x198090: 0x8c8a0018  lw          $t2, 0x18($a0)
    ctx->pc = 0x198090u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x198094: 0x23c38  dsll        $a3, $v0, 16
    ctx->pc = 0x198094u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << 16);
    // 0x198098: 0xb583f  dsra32      $t3, $t3, 0
    ctx->pc = 0x198098u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 0));
    // 0x19809c: 0x34e7fff0  ori         $a3, $a3, 0xFFF0
    ctx->pc = 0x19809cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65520);
    // 0x1980a0: 0x61138  dsll        $v0, $a2, 4
    ctx->pc = 0x1980a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << 4);
    // 0x1980a4: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x1980a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x1980a8: 0x940b8  dsll        $t0, $t1, 2
    ctx->pc = 0x1980a8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) << 2);
    // 0x1980ac: 0x6508000f  daddiu      $t0, $t0, 0xF
    ctx->pc = 0x1980acu;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 8) + (int64_t)(int32_t)15);
    // 0x1980b0: 0x1073824  and         $a3, $t0, $a3
    ctx->pc = 0x1980b0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & GPR_U64(ctx, 7));
    // 0x1980b4: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x1980b4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x1980b8: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x1980b8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x1980bc: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x1980bcu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x1980c0: 0x1475021  addu        $t2, $t2, $a3
    ctx->pc = 0x1980c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x1980c4: 0xa383c  dsll32      $a3, $t2, 0
    ctx->pc = 0x1980c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 10) << (32 + 0));
    // 0x1980c8: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x1980c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x1980cc: 0xe2102d  daddu       $v0, $a3, $v0
    ctx->pc = 0x1980ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 2));
    // 0x1980d0: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x1980d0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1980d4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1980D4u;
    {
        const bool branch_taken_0x1980d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1980D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1980D4u;
        // 0x1980d8: 0x7383f  dsra32      $a3, $a3, 0 (Delay Slot)
        SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1980d4) {
            ctx->pc = 0x1980FCu;
            goto label_1980fc;
        }
    }
    ctx->pc = 0x1980DCu;
label_1980dc:
    // 0x1980dc: 0x7403c  dsll32      $t0, $a3, 0
    ctx->pc = 0x1980dcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) << (32 + 0));
    // 0x1980e0: 0x61138  dsll        $v0, $a2, 4
    ctx->pc = 0x1980e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << 4);
    // 0x1980e4: 0x8c870018  lw          $a3, 0x18($a0)
    ctx->pc = 0x1980e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1980e8: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x1980e8u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x1980ec: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1980ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1980f0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1980f0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1980f4: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x1980f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x1980f8: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x1980f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_1980fc:
    // 0x1980fc: 0x8c880230  lw          $t0, 0x230($a0)
    ctx->pc = 0x1980fcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 560)));
    // 0x198100: 0x11000002  beqz        $t0, . + 4 + (0x2 << 2)
    ctx->pc = 0x198100u;
    {
        const bool branch_taken_0x198100 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x198100) {
            ctx->pc = 0x19810Cu;
            goto label_19810c;
        }
    }
    ctx->pc = 0x198108u;
    // 0x198108: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x198108u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_19810c:
    // 0x19810c: 0x11000005  beqz        $t0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19810Cu;
    {
        const bool branch_taken_0x19810c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x198110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19810Cu;
        // 0x198110: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19810c) {
            ctx->pc = 0x198124u;
            goto label_198124;
        }
    }
    ctx->pc = 0x198114u;
    // 0x198114: 0x24e7fff0  addiu       $a3, $a3, -0x10
    ctx->pc = 0x198114u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967280));
    // 0x198118: 0x78e80000  lq          $t0, 0x0($a3)
    ctx->pc = 0x198118u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x19811c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x19811Cu;
    {
        const bool branch_taken_0x19811c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19811Cu;
        // 0x198120: 0x7c880200  sq          $t0, 0x200($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 512), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19811c) {
            ctx->pc = 0x198140u;
            goto label_198140;
        }
    }
    ctx->pc = 0x198124u;
label_198124:
    // 0x198124: 0x24080009  addiu       $t0, $zero, 0x9
    ctx->pc = 0x198124u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x198128: 0x14c80006  bne         $a2, $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x198128u;
    {
        const bool branch_taken_0x198128 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 8));
        ctx->pc = 0x19812Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198128u;
        // 0x19812c: 0x6583c  dsll32      $t3, $a2, 0 (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 6) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198128) {
            ctx->pc = 0x198144u;
            goto label_198144;
        }
    }
    ctx->pc = 0x198130u;
    // 0x198130: 0x24e7fff0  addiu       $a3, $a3, -0x10
    ctx->pc = 0x198130u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967280));
    // 0x198134: 0x64c6ffff  daddiu      $a2, $a2, -0x1
    ctx->pc = 0x198134u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)4294967295);
    // 0x198138: 0x78e80000  lq          $t0, 0x0($a3)
    ctx->pc = 0x198138u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x19813c: 0x7c880200  sq          $t0, 0x200($a0)
    ctx->pc = 0x19813cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 512), GPR_VEC(ctx, 8));
label_198140:
    // 0x198140: 0x6583c  dsll32      $t3, $a2, 0
    ctx->pc = 0x198140u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 6) << (32 + 0));
label_198144:
    // 0x198144: 0x6082b  sltu        $at, $zero, $a2
    ctx->pc = 0x198144u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x198148: 0xb583f  dsra32      $t3, $t3, 0
    ctx->pc = 0x198148u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 0));
    // 0x19814c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x19814cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198150: 0xb5900  sll         $t3, $t3, 4
    ctx->pc = 0x198150u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x198154: 0x1020002b  beqz        $at, . + 4 + (0x2B << 2)
    ctx->pc = 0x198154u;
    {
        const bool branch_taken_0x198154 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x198158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198154u;
        // 0x198158: 0xeb3823  subu        $a3, $a3, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198154) {
            ctx->pc = 0x198204u;
            goto label_198204;
        }
    }
    ctx->pc = 0x19815Cu;
    // 0x19815c: 0x2cc10009  sltiu       $at, $a2, 0x9
    ctx->pc = 0x19815cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x198160: 0x1420001a  bnez        $at, . + 4 + (0x1A << 2)
    ctx->pc = 0x198160u;
    {
        const bool branch_taken_0x198160 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x198164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198160u;
        // 0x198164: 0x64cdfff8  daddiu      $t5, $a2, -0x8 (Delay Slot)
        SET_GPR_S64(ctx, 13, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)4294967288);
        ctx->in_delay_slot = false;
        if (branch_taken_0x198160) {
            ctx->pc = 0x1981CCu;
            goto label_1981cc;
        }
    }
    ctx->pc = 0x198168u;
    // 0x198168: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x198168u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19816c:
    // 0x19816c: 0x78ec0000  lq          $t4, 0x0($a3)
    ctx->pc = 0x19816cu;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x198170: 0x8e7821  addu        $t7, $a0, $t6
    ctx->pc = 0x198170u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 14)));
    // 0x198174: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x198174u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x198178: 0x25ce0080  addiu       $t6, $t6, 0x80
    ctx->pc = 0x198178u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 128));
    // 0x19817c: 0x8583c  dsll32      $t3, $t0, 0
    ctx->pc = 0x19817cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 8) << (32 + 0));
    // 0x198180: 0xb583f  dsra32      $t3, $t3, 0
    ctx->pc = 0x198180u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 0));
    // 0x198184: 0x16d582b  sltu        $t3, $t3, $t5
    ctx->pc = 0x198184u;
    SET_GPR_U64(ctx, 11, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 13)) ? 1 : 0);
    // 0x198188: 0x7dec0120  sq          $t4, 0x120($t7)
    ctx->pc = 0x198188u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 288), GPR_VEC(ctx, 12));
    // 0x19818c: 0x78ec0010  lq          $t4, 0x10($a3)
    ctx->pc = 0x19818cu;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x198190: 0x7dec0130  sq          $t4, 0x130($t7)
    ctx->pc = 0x198190u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 304), GPR_VEC(ctx, 12));
    // 0x198194: 0x78ec0020  lq          $t4, 0x20($a3)
    ctx->pc = 0x198194u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x198198: 0x7dec0140  sq          $t4, 0x140($t7)
    ctx->pc = 0x198198u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 320), GPR_VEC(ctx, 12));
    // 0x19819c: 0x78ec0030  lq          $t4, 0x30($a3)
    ctx->pc = 0x19819cu;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x1981a0: 0x7dec0150  sq          $t4, 0x150($t7)
    ctx->pc = 0x1981a0u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 336), GPR_VEC(ctx, 12));
    // 0x1981a4: 0x78ec0040  lq          $t4, 0x40($a3)
    ctx->pc = 0x1981a4u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 7), 64)));
    // 0x1981a8: 0x7dec0160  sq          $t4, 0x160($t7)
    ctx->pc = 0x1981a8u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 352), GPR_VEC(ctx, 12));
    // 0x1981ac: 0x78ec0050  lq          $t4, 0x50($a3)
    ctx->pc = 0x1981acu;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 7), 80)));
    // 0x1981b0: 0x7dec0170  sq          $t4, 0x170($t7)
    ctx->pc = 0x1981b0u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 368), GPR_VEC(ctx, 12));
    // 0x1981b4: 0x78ec0060  lq          $t4, 0x60($a3)
    ctx->pc = 0x1981b4u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 7), 96)));
    // 0x1981b8: 0x7dec0180  sq          $t4, 0x180($t7)
    ctx->pc = 0x1981b8u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 384), GPR_VEC(ctx, 12));
    // 0x1981bc: 0x78ec0070  lq          $t4, 0x70($a3)
    ctx->pc = 0x1981bcu;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 7), 112)));
    // 0x1981c0: 0x7dec0190  sq          $t4, 0x190($t7)
    ctx->pc = 0x1981c0u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 400), GPR_VEC(ctx, 12));
    // 0x1981c4: 0x1560ffe9  bnez        $t3, . + 4 + (-0x17 << 2)
    ctx->pc = 0x1981C4u;
    {
        const bool branch_taken_0x1981c4 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x1981C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1981C4u;
        // 0x1981c8: 0x24e70080  addiu       $a3, $a3, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1981c4) {
            ctx->pc = 0x19816Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19816c;
        }
    }
    ctx->pc = 0x1981CCu;
label_1981cc:
    // 0x1981cc: 0x0  nop
    ctx->pc = 0x1981ccu;
    // NOP
    // 0x1981d0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1981D0u;
    {
        const bool branch_taken_0x1981d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1981D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1981D0u;
        // 0x1981d4: 0x86900  sll         $t5, $t0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1981d0) {
            ctx->pc = 0x1981F0u;
            goto label_1981f0;
        }
    }
    ctx->pc = 0x1981D8u;
label_1981d8:
    // 0x1981d8: 0x78ec0000  lq          $t4, 0x0($a3)
    ctx->pc = 0x1981d8u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1981dc: 0x8d5821  addu        $t3, $a0, $t5
    ctx->pc = 0x1981dcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
    // 0x1981e0: 0x25ad0010  addiu       $t5, $t5, 0x10
    ctx->pc = 0x1981e0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 16));
    // 0x1981e4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1981e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1981e8: 0x7d6c0120  sq          $t4, 0x120($t3)
    ctx->pc = 0x1981e8u;
    WRITE128(ADD32(GPR_U32(ctx, 11), 288), GPR_VEC(ctx, 12));
    // 0x1981ec: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x1981ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_1981f0:
    // 0x1981f0: 0x8583c  dsll32      $t3, $t0, 0
    ctx->pc = 0x1981f0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 8) << (32 + 0));
    // 0x1981f4: 0xb583f  dsra32      $t3, $t3, 0
    ctx->pc = 0x1981f4u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 0));
    // 0x1981f8: 0x166582b  sltu        $t3, $t3, $a2
    ctx->pc = 0x1981f8u;
    SET_GPR_U64(ctx, 11, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1981fc: 0x1560fff6  bnez        $t3, . + 4 + (-0xA << 2)
    ctx->pc = 0x1981FCu;
    {
        const bool branch_taken_0x1981fc = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        if (branch_taken_0x1981fc) {
            ctx->pc = 0x1981D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1981d8;
        }
    }
    ctx->pc = 0x198204u;
label_198204:
    // 0x198204: 0x0  nop
    ctx->pc = 0x198204u;
    // NOP
    // 0x198208: 0x5303c  dsll32      $a2, $a1, 0
    ctx->pc = 0x198208u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 0));
    // 0x19820c: 0x8c850018  lw          $a1, 0x18($a0)
    ctx->pc = 0x19820cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x198210: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x198210u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x198214: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x198214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x198218: 0x10600032  beqz        $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x198218u;
    {
        const bool branch_taken_0x198218 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19821Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198218u;
        // 0x19821c: 0xac850014  sw          $a1, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198218) {
            ctx->pc = 0x1982E4u;
            goto label_1982e4;
        }
    }
    ctx->pc = 0x198220u;
    // 0x198220: 0x9183c  dsll32      $v1, $t1, 0
    ctx->pc = 0x198220u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) << (32 + 0));
    // 0x198224: 0x9082b  sltu        $at, $zero, $t1
    ctx->pc = 0x198224u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x198228: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x198228u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x19822c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x19822cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198230: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x198230u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x198234: 0x1020002b  beqz        $at, . + 4 + (0x2B << 2)
    ctx->pc = 0x198234u;
    {
        const bool branch_taken_0x198234 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x198238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198234u;
        // 0x198238: 0x1435023  subu        $t2, $t2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198234) {
            ctx->pc = 0x1982E4u;
            goto label_1982e4;
        }
    }
    ctx->pc = 0x19823Cu;
    // 0x19823c: 0x2d210009  sltiu       $at, $t1, 0x9
    ctx->pc = 0x19823cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x198240: 0x1420001a  bnez        $at, . + 4 + (0x1A << 2)
    ctx->pc = 0x198240u;
    {
        const bool branch_taken_0x198240 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x198244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198240u;
        // 0x198244: 0x6526fff8  daddiu      $a2, $t1, -0x8 (Delay Slot)
        SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)4294967288);
        ctx->in_delay_slot = false;
        if (branch_taken_0x198240) {
            ctx->pc = 0x1982ACu;
            goto label_1982ac;
        }
    }
    ctx->pc = 0x198248u;
    // 0x198248: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x198248u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19824c:
    // 0x19824c: 0x8d450000  lw          $a1, 0x0($t2)
    ctx->pc = 0x19824cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x198250: 0x874021  addu        $t0, $a0, $a3
    ctx->pc = 0x198250u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x198254: 0x256b0008  addiu       $t3, $t3, 0x8
    ctx->pc = 0x198254u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 8));
    // 0x198258: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x198258u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x19825c: 0xb183c  dsll32      $v1, $t3, 0
    ctx->pc = 0x19825cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) << (32 + 0));
    // 0x198260: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x198260u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x198264: 0x66182b  sltu        $v1, $v1, $a2
    ctx->pc = 0x198264u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x198268: 0xad050288  sw          $a1, 0x288($t0)
    ctx->pc = 0x198268u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 648), GPR_U32(ctx, 5));
    // 0x19826c: 0x8d450004  lw          $a1, 0x4($t2)
    ctx->pc = 0x19826cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x198270: 0xad05028c  sw          $a1, 0x28C($t0)
    ctx->pc = 0x198270u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 652), GPR_U32(ctx, 5));
    // 0x198274: 0x8d450008  lw          $a1, 0x8($t2)
    ctx->pc = 0x198274u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x198278: 0xad050290  sw          $a1, 0x290($t0)
    ctx->pc = 0x198278u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 656), GPR_U32(ctx, 5));
    // 0x19827c: 0x8d45000c  lw          $a1, 0xC($t2)
    ctx->pc = 0x19827cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x198280: 0xad050294  sw          $a1, 0x294($t0)
    ctx->pc = 0x198280u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 660), GPR_U32(ctx, 5));
    // 0x198284: 0x8d450010  lw          $a1, 0x10($t2)
    ctx->pc = 0x198284u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x198288: 0xad050298  sw          $a1, 0x298($t0)
    ctx->pc = 0x198288u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 664), GPR_U32(ctx, 5));
    // 0x19828c: 0x8d450014  lw          $a1, 0x14($t2)
    ctx->pc = 0x19828cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 20)));
    // 0x198290: 0xad05029c  sw          $a1, 0x29C($t0)
    ctx->pc = 0x198290u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 668), GPR_U32(ctx, 5));
    // 0x198294: 0x8d450018  lw          $a1, 0x18($t2)
    ctx->pc = 0x198294u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 24)));
    // 0x198298: 0xad0502a0  sw          $a1, 0x2A0($t0)
    ctx->pc = 0x198298u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 672), GPR_U32(ctx, 5));
    // 0x19829c: 0x8d45001c  lw          $a1, 0x1C($t2)
    ctx->pc = 0x19829cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 28)));
    // 0x1982a0: 0xad0502a4  sw          $a1, 0x2A4($t0)
    ctx->pc = 0x1982a0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 676), GPR_U32(ctx, 5));
    // 0x1982a4: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x1982A4u;
    {
        const bool branch_taken_0x1982a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1982A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1982A4u;
        // 0x1982a8: 0x254a0020  addiu       $t2, $t2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1982a4) {
            ctx->pc = 0x19824Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19824c;
        }
    }
    ctx->pc = 0x1982ACu;
label_1982ac:
    // 0x1982ac: 0x0  nop
    ctx->pc = 0x1982acu;
    // NOP
    // 0x1982b0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1982B0u;
    {
        const bool branch_taken_0x1982b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1982B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1982B0u;
        // 0x1982b4: 0xb3080  sll         $a2, $t3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1982b0) {
            ctx->pc = 0x1982D0u;
            goto label_1982d0;
        }
    }
    ctx->pc = 0x1982B8u;
label_1982b8:
    // 0x1982b8: 0x8d450000  lw          $a1, 0x0($t2)
    ctx->pc = 0x1982b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1982bc: 0x861821  addu        $v1, $a0, $a2
    ctx->pc = 0x1982bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1982c0: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x1982c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x1982c4: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x1982c4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x1982c8: 0xac650288  sw          $a1, 0x288($v1)
    ctx->pc = 0x1982c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 648), GPR_U32(ctx, 5));
    // 0x1982cc: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x1982ccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
label_1982d0:
    // 0x1982d0: 0xb183c  dsll32      $v1, $t3, 0
    ctx->pc = 0x1982d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) << (32 + 0));
    // 0x1982d4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1982d4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1982d8: 0x69182b  sltu        $v1, $v1, $t1
    ctx->pc = 0x1982d8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x1982dc: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x1982DCu;
    {
        const bool branch_taken_0x1982dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1982dc) {
            ctx->pc = 0x1982B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1982b8;
        }
    }
    ctx->pc = 0x1982E4u;
label_1982e4:
    // 0x1982e4: 0x0  nop
    ctx->pc = 0x1982e4u;
    // NOP
    ctx->pc = 0x1982e8u;
}
