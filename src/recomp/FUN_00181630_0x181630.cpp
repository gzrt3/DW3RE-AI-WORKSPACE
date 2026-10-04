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

// Function: FUN_00181630
// Address: 0x181630 - 0x1818dc
void FUN_00181630_0x181630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00181630_0x181630");
#endif

    switch (ctx->pc) {
        case 0x181788u: goto label_181788;
        case 0x1817dcu: goto label_1817dc;
        default: break;
    }

    ctx->pc = 0x181630u;

    // 0x181630: 0x4143c  dsll32      $v0, $a0, 16
    ctx->pc = 0x181630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 16));
    // 0x181634: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x181634u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x181638: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x181638u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x18163c: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x18163cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x181640: 0x24422a30  addiu       $v0, $v0, 0x2A30
    ctx->pc = 0x181640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10800));
    // 0x181644: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x181644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x181648: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x181648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x18164c: 0x24422a32  addiu       $v0, $v0, 0x2A32
    ctx->pc = 0x18164cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10802));
    // 0x181650: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x181650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x181654: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x181654u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x181658: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x181658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x18165c: 0x14820010  bne         $a0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x18165Cu;
    {
        const bool branch_taken_0x18165c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x181660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18165Cu;
        // 0x181660: 0x84630000  lh          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18165c) {
            ctx->pc = 0x1816A0u;
            goto label_1816a0;
        }
    }
    ctx->pc = 0x181664u;
    // 0x181664: 0x6143c  dsll32      $v0, $a2, 16
    ctx->pc = 0x181664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 16));
    // 0x181668: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x181668u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x18166c: 0x2449007f  addiu       $t1, $v0, 0x7F
    ctx->pc = 0x18166cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 127));
    // 0x181670: 0x5210003  bgez        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x181670u;
    {
        const bool branch_taken_0x181670 = (GPR_S32(ctx, 9) >= 0);
        ctx->pc = 0x181674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181670u;
        // 0x181674: 0x911c3  sra         $v0, $t1, 7 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 9), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181670) {
            ctx->pc = 0x181680u;
            goto label_181680;
        }
    }
    ctx->pc = 0x181678u;
    // 0x181678: 0x2522007f  addiu       $v0, $t1, 0x7F
    ctx->pc = 0x181678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 127));
    // 0x18167c: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x18167cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
label_181680:
    // 0x181680: 0x249c0  sll         $t1, $v0, 7
    ctx->pc = 0x181680u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x181684: 0x5210003  bgez        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x181684u;
    {
        const bool branch_taken_0x181684 = (GPR_S32(ctx, 9) >= 0);
        ctx->pc = 0x181688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181684u;
        // 0x181688: 0x91183  sra         $v0, $t1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 9), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181684) {
            ctx->pc = 0x181694u;
            goto label_181694;
        }
    }
    ctx->pc = 0x18168Cu;
    // 0x18168c: 0x2522003f  addiu       $v0, $t1, 0x3F
    ctx->pc = 0x18168cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 63));
    // 0x181690: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x181690u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
label_181694:
    // 0x181694: 0x2543c  dsll32      $t2, $v0, 16
    ctx->pc = 0x181694u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) << (32 + 16));
    // 0x181698: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x181698u;
    {
        const bool branch_taken_0x181698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18169Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181698u;
        // 0x18169c: 0xa543f  dsra32      $t2, $t2, 16 (Delay Slot)
        SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181698) {
            ctx->pc = 0x181774u;
            goto label_181774;
        }
    }
    ctx->pc = 0x1816A0u;
label_1816a0:
    // 0x1816a0: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x1816a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1816a4: 0x14820010  bne         $a0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1816A4u;
    {
        const bool branch_taken_0x1816a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1816A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1816A4u;
        // 0x1816a8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1816a4) {
            ctx->pc = 0x1816E8u;
            goto label_1816e8;
        }
    }
    ctx->pc = 0x1816ACu;
    // 0x1816ac: 0x6143c  dsll32      $v0, $a2, 16
    ctx->pc = 0x1816acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 16));
    // 0x1816b0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1816b0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1816b4: 0x2449007f  addiu       $t1, $v0, 0x7F
    ctx->pc = 0x1816b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 127));
    // 0x1816b8: 0x5210003  bgez        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1816B8u;
    {
        const bool branch_taken_0x1816b8 = (GPR_S32(ctx, 9) >= 0);
        ctx->pc = 0x1816BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1816B8u;
        // 0x1816bc: 0x911c3  sra         $v0, $t1, 7 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 9), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1816b8) {
            ctx->pc = 0x1816C8u;
            goto label_1816c8;
        }
    }
    ctx->pc = 0x1816C0u;
    // 0x1816c0: 0x2522007f  addiu       $v0, $t1, 0x7F
    ctx->pc = 0x1816c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 127));
    // 0x1816c4: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x1816c4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
label_1816c8:
    // 0x1816c8: 0x249c0  sll         $t1, $v0, 7
    ctx->pc = 0x1816c8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x1816cc: 0x5210003  bgez        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1816CCu;
    {
        const bool branch_taken_0x1816cc = (GPR_S32(ctx, 9) >= 0);
        ctx->pc = 0x1816D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1816CCu;
        // 0x1816d0: 0x91183  sra         $v0, $t1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 9), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1816cc) {
            ctx->pc = 0x1816DCu;
            goto label_1816dc;
        }
    }
    ctx->pc = 0x1816D4u;
    // 0x1816d4: 0x2522003f  addiu       $v0, $t1, 0x3F
    ctx->pc = 0x1816d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 63));
    // 0x1816d8: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x1816d8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
label_1816dc:
    // 0x1816dc: 0x2543c  dsll32      $t2, $v0, 16
    ctx->pc = 0x1816dcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1816e0: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1816E0u;
    {
        const bool branch_taken_0x1816e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1816E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1816E0u;
        // 0x1816e4: 0xa543f  dsra32      $t2, $t2, 16 (Delay Slot)
        SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1816e0) {
            ctx->pc = 0x181774u;
            goto label_181774;
        }
    }
    ctx->pc = 0x1816E8u;
label_1816e8:
    // 0x1816e8: 0x14820011  bne         $a0, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1816E8u;
    {
        const bool branch_taken_0x1816e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1816e8) {
            ctx->pc = 0x181730u;
            goto label_181730;
        }
    }
    ctx->pc = 0x1816F0u;
    // 0x1816f0: 0x6143c  dsll32      $v0, $a2, 16
    ctx->pc = 0x1816f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 16));
    // 0x1816f4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1816f4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1816f8: 0x2449003f  addiu       $t1, $v0, 0x3F
    ctx->pc = 0x1816f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x1816fc: 0x5210003  bgez        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1816FCu;
    {
        const bool branch_taken_0x1816fc = (GPR_S32(ctx, 9) >= 0);
        ctx->pc = 0x181700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1816FCu;
        // 0x181700: 0x91183  sra         $v0, $t1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 9), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1816fc) {
            ctx->pc = 0x18170Cu;
            goto label_18170c;
        }
    }
    ctx->pc = 0x181704u;
    // 0x181704: 0x2522003f  addiu       $v0, $t1, 0x3F
    ctx->pc = 0x181704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 63));
    // 0x181708: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x181708u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
label_18170c:
    // 0x18170c: 0x24980  sll         $t1, $v0, 6
    ctx->pc = 0x18170cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x181710: 0x211bc  dsll32      $v0, $v0, 6
    ctx->pc = 0x181710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 6));
    // 0x181714: 0x5210003  bgez        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x181714u;
    {
        const bool branch_taken_0x181714 = (GPR_S32(ctx, 9) >= 0);
        ctx->pc = 0x181718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181714u;
        // 0x181718: 0x211bf  dsra32      $v0, $v0, 6 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181714) {
            ctx->pc = 0x181724u;
            goto label_181724;
        }
    }
    ctx->pc = 0x18171Cu;
    // 0x18171c: 0x2522003f  addiu       $v0, $t1, 0x3F
    ctx->pc = 0x18171cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 63));
    // 0x181720: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x181720u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
label_181724:
    // 0x181724: 0x2543c  dsll32      $t2, $v0, 16
    ctx->pc = 0x181724u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) << (32 + 16));
    // 0x181728: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x181728u;
    {
        const bool branch_taken_0x181728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18172Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181728u;
        // 0x18172c: 0xa543f  dsra32      $t2, $t2, 16 (Delay Slot)
        SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181728) {
            ctx->pc = 0x181774u;
            goto label_181774;
        }
    }
    ctx->pc = 0x181730u;
label_181730:
    // 0x181730: 0x14800010  bnez        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x181730u;
    {
        const bool branch_taken_0x181730 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x181734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181730u;
        // 0x181734: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181730) {
            ctx->pc = 0x181774u;
            goto label_181774;
        }
    }
    ctx->pc = 0x181738u;
    // 0x181738: 0x6143c  dsll32      $v0, $a2, 16
    ctx->pc = 0x181738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 16));
    // 0x18173c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x18173cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x181740: 0x2449003f  addiu       $t1, $v0, 0x3F
    ctx->pc = 0x181740u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x181744: 0x5210003  bgez        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x181744u;
    {
        const bool branch_taken_0x181744 = (GPR_S32(ctx, 9) >= 0);
        ctx->pc = 0x181748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181744u;
        // 0x181748: 0x91183  sra         $v0, $t1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 9), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181744) {
            ctx->pc = 0x181754u;
            goto label_181754;
        }
    }
    ctx->pc = 0x18174Cu;
    // 0x18174c: 0x2522003f  addiu       $v0, $t1, 0x3F
    ctx->pc = 0x18174cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 63));
    // 0x181750: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x181750u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
label_181754:
    // 0x181754: 0x24980  sll         $t1, $v0, 6
    ctx->pc = 0x181754u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x181758: 0x211bc  dsll32      $v0, $v0, 6
    ctx->pc = 0x181758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 6));
    // 0x18175c: 0x5210003  bgez        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18175Cu;
    {
        const bool branch_taken_0x18175c = (GPR_S32(ctx, 9) >= 0);
        ctx->pc = 0x181760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18175Cu;
        // 0x181760: 0x211bf  dsra32      $v0, $v0, 6 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18175c) {
            ctx->pc = 0x18176Cu;
            goto label_18176c;
        }
    }
    ctx->pc = 0x181764u;
    // 0x181764: 0x2522003f  addiu       $v0, $t1, 0x3F
    ctx->pc = 0x181764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 63));
    // 0x181768: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x181768u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
label_18176c:
    // 0x18176c: 0x2543c  dsll32      $t2, $v0, 16
    ctx->pc = 0x18176cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) << (32 + 16));
    // 0x181770: 0xa543f  dsra32      $t2, $t2, 16
    ctx->pc = 0x181770u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 16));
label_181774:
    // 0x181774: 0x64c3c  dsll32      $t1, $a2, 16
    ctx->pc = 0x181774u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) << (32 + 16));
    // 0x181778: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x181778u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18177c: 0x94c3f  dsra32      $t1, $t1, 16
    ctx->pc = 0x18177cu;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 16));
    // 0x181780: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x181780u;
    {
        const bool branch_taken_0x181780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181780u;
        // 0x181784: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181780) {
            ctx->pc = 0x1817B0u;
            goto label_1817b0;
        }
    }
    ctx->pc = 0x181788u;
label_181788:
    // 0x181788: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x181788u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x18178c: 0xc9082a  slt         $at, $a2, $t1
    ctx->pc = 0x18178cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x181790: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x181790u;
    {
        const bool branch_taken_0x181790 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x181790) {
            ctx->pc = 0x1817C4u;
            goto label_1817c4;
        }
    }
    ctx->pc = 0x181798u;
    // 0x181798: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x181798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18179c: 0xb3040  sll         $a2, $t3, 1
    ctx->pc = 0x18179cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x1817a0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1817a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1817a4: 0x65c3c  dsll32      $t3, $a2, 16
    ctx->pc = 0x1817a4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 6) << (32 + 16));
    // 0x1817a8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1817a8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1817ac: 0xb5c3f  dsra32      $t3, $t3, 16
    ctx->pc = 0x1817acu;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 16));
label_1817b0:
    // 0x1817b0: 0x2343c  dsll32      $a2, $v0, 16
    ctx->pc = 0x1817b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1817b4: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x1817b4u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x1817b8: 0x28c6000a  slti        $a2, $a2, 0xA
    ctx->pc = 0x1817b8u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1817bc: 0x14c0fff2  bnez        $a2, . + 4 + (-0xE << 2)
    ctx->pc = 0x1817BCu;
    {
        const bool branch_taken_0x1817bc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1817C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1817BCu;
        // 0x1817c0: 0xb343c  dsll32      $a2, $t3, 16 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 11) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1817bc) {
            ctx->pc = 0x181788u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_181788;
        }
    }
    ctx->pc = 0x1817C4u;
label_1817c4:
    // 0x1817c4: 0x0  nop
    ctx->pc = 0x1817c4u;
    // NOP
    // 0x1817c8: 0x74c3c  dsll32      $t1, $a3, 16
    ctx->pc = 0x1817c8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 7) << (32 + 16));
    // 0x1817cc: 0x94c3f  dsra32      $t1, $t1, 16
    ctx->pc = 0x1817ccu;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 16));
    // 0x1817d0: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x1817d0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1817d4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1817D4u;
    {
        const bool branch_taken_0x1817d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1817D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1817D4u;
        // 0x1817d8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1817d4) {
            ctx->pc = 0x181804u;
            goto label_181804;
        }
    }
    ctx->pc = 0x1817DCu;
label_1817dc:
    // 0x1817dc: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x1817dcu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x1817e0: 0xc9082a  slt         $at, $a2, $t1
    ctx->pc = 0x1817e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x1817e4: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x1817E4u;
    {
        const bool branch_taken_0x1817e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1817e4) {
            ctx->pc = 0x18181Cu;
            goto label_18181c;
        }
    }
    ctx->pc = 0x1817ECu;
    // 0x1817ec: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1817ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1817f0: 0xb3040  sll         $a2, $t3, 1
    ctx->pc = 0x1817f0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
    // 0x1817f4: 0x73c3c  dsll32      $a3, $a3, 16
    ctx->pc = 0x1817f4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 16));
    // 0x1817f8: 0x65c3c  dsll32      $t3, $a2, 16
    ctx->pc = 0x1817f8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 6) << (32 + 16));
    // 0x1817fc: 0x73c3f  dsra32      $a3, $a3, 16
    ctx->pc = 0x1817fcu;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 16));
    // 0x181800: 0xb5c3f  dsra32      $t3, $t3, 16
    ctx->pc = 0x181800u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 16));
label_181804:
    // 0x181804: 0x0  nop
    ctx->pc = 0x181804u;
    // NOP
    // 0x181808: 0x7343c  dsll32      $a2, $a3, 16
    ctx->pc = 0x181808u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 16));
    // 0x18180c: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x18180cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x181810: 0x28c6000a  slti        $a2, $a2, 0xA
    ctx->pc = 0x181810u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x181814: 0x14c0fff1  bnez        $a2, . + 4 + (-0xF << 2)
    ctx->pc = 0x181814u;
    {
        const bool branch_taken_0x181814 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x181818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181814u;
        // 0x181818: 0xb343c  dsll32      $a2, $t3, 16 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 11) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181814) {
            ctx->pc = 0x1817DCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1817dc;
        }
    }
    ctx->pc = 0x18181Cu;
label_18181c:
    // 0x18181c: 0x0  nop
    ctx->pc = 0x18181cu;
    // NOP
    // 0x181820: 0x5343c  dsll32      $a2, $a1, 16
    ctx->pc = 0x181820u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) << (32 + 16));
    // 0x181824: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x181824u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x181828: 0x4c00007  bltz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x181828u;
    {
        const bool branch_taken_0x181828 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x18182Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181828u;
        // 0x18182c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181828) {
            ctx->pc = 0x181848u;
            goto label_181848;
        }
    }
    ctx->pc = 0x181830u;
    // 0x181830: 0x28c100b8  slti        $at, $a2, 0xB8
    ctx->pc = 0x181830u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)184) ? 1 : 0);
    // 0x181834: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x181834u;
    {
        const bool branch_taken_0x181834 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x181838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181834u;
        // 0x181838: 0x28c500b8  slti        $a1, $a2, 0xB8 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)184) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x181834) {
            ctx->pc = 0x18184Cu;
            goto label_18184c;
        }
    }
    ctx->pc = 0x18183Cu;
    // 0x18183c: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x18183cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x181840: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x181840u;
    {
        const bool branch_taken_0x181840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181840u;
        // 0x181844: 0x24a93ba0  addiu       $t1, $a1, 0x3BA0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 15264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181840) {
            ctx->pc = 0x181860u;
            goto label_181860;
        }
    }
    ctx->pc = 0x181848u;
label_181848:
    // 0x181848: 0x28c500b8  slti        $a1, $a2, 0xB8
    ctx->pc = 0x181848u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)184) ? 1 : 0);
label_18184c:
    // 0x18184c: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x18184Cu;
    {
        const bool branch_taken_0x18184c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x181850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18184Cu;
        // 0x181850: 0x28c10238  slti        $at, $a2, 0x238 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)568) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18184c) {
            ctx->pc = 0x181860u;
            goto label_181860;
        }
    }
    ctx->pc = 0x181854u;
    // 0x181854: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x181854u;
    {
        const bool branch_taken_0x181854 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x181854) {
            ctx->pc = 0x181860u;
            goto label_181860;
        }
    }
    ctx->pc = 0x18185Cu;
    // 0x18185c: 0x24c93dc8  addiu       $t1, $a2, 0x3DC8
    ctx->pc = 0x18185cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 15816));
label_181860:
    // 0x181860: 0x3343c  dsll32      $a2, $v1, 16
    ctx->pc = 0x181860u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 16));
    // 0x181864: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x181864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x181868: 0xa1c3c  dsll32      $v1, $t2, 16
    ctx->pc = 0x181868u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) << (32 + 16));
    // 0x18186c: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x18186cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x181870: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x181870u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x181874: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x181874u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x181878: 0x32bb8  dsll        $a1, $v1, 14
    ctx->pc = 0x181878u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << 14);
    // 0x18187c: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x18187cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
    // 0x181880: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x181880u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x181884: 0xc52025  or          $a0, $a2, $a1
    ctx->pc = 0x181884u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x181888: 0x31d38  dsll        $v1, $v1, 20
    ctx->pc = 0x181888u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 20);
    // 0x18188c: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x18188cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x181890: 0x21eb8  dsll        $v1, $v0, 26
    ctx->pc = 0x181890u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 26);
    // 0x181894: 0x7143c  dsll32      $v0, $a3, 16
    ctx->pc = 0x181894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 16));
    // 0x181898: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x181898u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x18189c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x18189cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1818a0: 0x217b8  dsll        $v0, $v0, 30
    ctx->pc = 0x1818a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 30);
    // 0x1818a4: 0x433025  or          $a2, $v0, $v1
    ctx->pc = 0x1818a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1818a8: 0x9143c  dsll32      $v0, $t1, 16
    ctx->pc = 0x1818a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) << (32 + 16));
    // 0x1818ac: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1818acu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1818b0: 0x2217c  dsll32      $a0, $v0, 5
    ctx->pc = 0x1818b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 5));
    // 0x1818b4: 0x8143c  dsll32      $v0, $t0, 16
    ctx->pc = 0x1818b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (32 + 16));
    // 0x1818b8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1818b8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1818bc: 0x21cfc  dsll32      $v1, $v0, 19
    ctx->pc = 0x1818bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 19));
    // 0x1818c0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1818c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1818c4: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x1818c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1818c8: 0xc52825  or          $a1, $a2, $a1
    ctx->pc = 0x1818c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x1818cc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1818ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1818d0: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x1818d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x1818d4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1818d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1818d8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1818d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    ctx->pc = 0x1818dcu;
}
