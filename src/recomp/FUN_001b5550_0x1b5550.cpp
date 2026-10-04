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

// Function: FUN_001b5550
// Address: 0x1b5550 - 0x1b5bdc
void FUN_001b5550_0x1b5550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b5550_0x1b5550");
#endif

    ctx->pc = 0x1b5550u;

    // 0x1b5550: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x1b5550u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5554: 0x9503f  dsra32      $t2, $t1, 0
    ctx->pc = 0x1b5554u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 9) >> (32 + 0));
    // 0x1b5558: 0xa203c  dsll32      $a0, $t2, 0
    ctx->pc = 0x1b5558u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) << (32 + 0));
    // 0x1b555c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1b555cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1b5560: 0x4810016  bgez        $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1B5560u;
    {
        const bool branch_taken_0x1b5560 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1B5564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5560u;
        // 0x1b5564: 0xc02d  daddu       $t8, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5560) {
            ctx->pc = 0x1B55BCu;
            goto label_1b55bc;
        }
    }
    ctx->pc = 0x1B5568u;
    // 0x1b5568: 0x9103c  dsll32      $v0, $t1, 0
    ctx->pc = 0x1b5568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) << (32 + 0));
    // 0x1b556c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1b556cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1b5570: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1b5570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b5574: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b5574u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b5578: 0x21023  negu        $v0, $v0
    ctx->pc = 0x1b5578u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x1b557c: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x1b557cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x1b5580: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b5580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b5584: 0x41823  negu        $v1, $a0
    ctx->pc = 0x1b5584u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x1b5588: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b5588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b558c: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x1b558cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x1b5590: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1b5590u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1b5594: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x1b5594u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x1b5598: 0x2418ffff  addiu       $t8, $zero, -0x1
    ctx->pc = 0x1b5598u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b559c: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x1b559cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1b55a0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1b55a0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1b55a4: 0xc43024  and         $a2, $a2, $a0
    ctx->pc = 0x1b55a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x1b55a8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1b55a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1b55ac: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1b55acu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b55b0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b55b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b55b4: 0xc34825  or          $t1, $a2, $v1
    ctx->pc = 0x1b55b4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1b55b8: 0x9503f  dsra32      $t2, $t1, 0
    ctx->pc = 0x1b55b8u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 9) >> (32 + 0));
label_1b55bc:
    // 0x1b55bc: 0x5203f  dsra32      $a0, $a1, 0
    ctx->pc = 0x1b55bcu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x1b55c0: 0x4810015  bgez        $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1B55C0u;
    {
        const bool branch_taken_0x1b55c0 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x1b55c0) {
            ctx->pc = 0x1B5618u;
            goto label_1b5618;
        }
    }
    ctx->pc = 0x1B55C8u;
    // 0x1b55c8: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x1b55c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1b55cc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1b55ccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1b55d0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1b55d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b55d4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b55d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b55d8: 0x21023  negu        $v0, $v0
    ctx->pc = 0x1b55d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x1b55dc: 0xe33824  and         $a3, $a3, $v1
    ctx->pc = 0x1b55dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x1b55e0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b55e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b55e4: 0x41823  negu        $v1, $a0
    ctx->pc = 0x1b55e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x1b55e8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b55e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b55ec: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x1b55ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x1b55f0: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1b55f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1b55f4: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1b55f4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1b55f8: 0x18c027  nor         $t8, $zero, $t8
    ctx->pc = 0x1b55f8u;
    SET_GPR_U64(ctx, 24, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 24)));
    // 0x1b55fc: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x1b55fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    // 0x1b5600: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1b5600u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1b5604: 0xe43824  and         $a3, $a3, $a0
    ctx->pc = 0x1b5604u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x1b5608: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1b5608u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1b560c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1b560cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b5610: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b5610u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b5614: 0xe32825  or          $a1, $a3, $v1
    ctx->pc = 0x1b5614u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
label_1b5618:
    // 0x1b5618: 0x5403f  dsra32      $t0, $a1, 0
    ctx->pc = 0x1b5618u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x1b561c: 0x9583c  dsll32      $t3, $t1, 0
    ctx->pc = 0x1b561cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 9) << (32 + 0));
    // 0x1b5620: 0xb583f  dsra32      $t3, $t3, 0
    ctx->pc = 0x1b5620u;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 11) >> (32 + 0));
    // 0x1b5624: 0xa503c  dsll32      $t2, $t2, 0
    ctx->pc = 0x1b5624u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 0));
    // 0x1b5628: 0xa503f  dsra32      $t2, $t2, 0
    ctx->pc = 0x1b5628u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 10) >> (32 + 0));
    // 0x1b562c: 0x5483c  dsll32      $t1, $a1, 0
    ctx->pc = 0x1b562cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1b5630: 0x9483f  dsra32      $t1, $t1, 0
    ctx->pc = 0x1b5630u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 0));
    // 0x1b5634: 0x150000e2  bnez        $t0, . + 4 + (0xE2 << 2)
    ctx->pc = 0x1B5634u;
    {
        const bool branch_taken_0x1b5634 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B5638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5634u;
        // 0x1b5638: 0x148102b  sltu        $v0, $t2, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5634) {
            ctx->pc = 0x1B59C0u;
            goto label_1b59c0;
        }
    }
    ctx->pc = 0x1B563Cu;
    // 0x1b563c: 0x149102b  sltu        $v0, $t2, $t1
    ctx->pc = 0x1b563cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x1b5640: 0x1040004f  beqz        $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x1B5640u;
    {
        const bool branch_taken_0x1b5640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5640u;
        // 0x1b5644: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5640) {
            ctx->pc = 0x1B5780u;
            goto label_1b5780;
        }
    }
    ctx->pc = 0x1B5648u;
    // 0x1b5648: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x1b5648u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x1b564c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B564Cu;
    {
        const bool branch_taken_0x1b564c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B5650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B564Cu;
        // 0x1b5650: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b564c) {
            ctx->pc = 0x1B5668u;
            goto label_1b5668;
        }
    }
    ctx->pc = 0x1B5654u;
    // 0x1b5654: 0x2d220100  sltiu       $v0, $t1, 0x100
    ctx->pc = 0x1b5654u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x1b5658: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1b5658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1b565c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1B565Cu;
    {
        const bool branch_taken_0x1b565c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B565Cu;
        // 0x1b5660: 0x2200b  movn        $a0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b565c) {
            ctx->pc = 0x1B567Cu;
            goto label_1b567c;
        }
    }
    ctx->pc = 0x1B5664u;
    // 0x1b5664: 0x0  nop
    ctx->pc = 0x1b5664u;
    // NOP
label_1b5668:
    // 0x1b5668: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x1b5668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1b566c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b566cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1b5670: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1b5670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1b5674: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x1b5674u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x1b5678: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x1b5678u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_1b567c:
    // 0x1b567c: 0x891806  srlv        $v1, $t1, $a0
    ctx->pc = 0x1b567cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 4) & 0x1F));
    // 0x1b5680: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1b5680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1b5684: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x1b5684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
    // 0x1b5688: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b5688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b568c: 0x9042b2b0  lbu         $v0, -0x4D50($v0)
    ctx->pc = 0x1b568cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947504)));
    // 0x1b5690: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1b5690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1b5694: 0xa23023  subu        $a2, $a1, $v0
    ctx->pc = 0x1b5694u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1b5698: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B5698u;
    {
        const bool branch_taken_0x1b5698 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B569Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5698u;
        // 0x1b569c: 0xa61023  subu        $v0, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5698) {
            ctx->pc = 0x1B56B4u;
            goto label_1b56b4;
        }
    }
    ctx->pc = 0x1B56A0u;
    // 0x1b56a0: 0xca1804  sllv        $v1, $t2, $a2
    ctx->pc = 0x1b56a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 6) & 0x1F));
    // 0x1b56a4: 0x4b1006  srlv        $v0, $t3, $v0
    ctx->pc = 0x1b56a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 11), GPR_U32(ctx, 2) & 0x1F));
    // 0x1b56a8: 0xcb5804  sllv        $t3, $t3, $a2
    ctx->pc = 0x1b56a8u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 6) & 0x1F));
    // 0x1b56ac: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x1b56acu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1b56b0: 0xc94804  sllv        $t1, $t1, $a2
    ctx->pc = 0x1b56b0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 6) & 0x1F));
label_1b56b4:
    // 0x1b56b4: 0x93402  srl         $a2, $t1, 16
    ctx->pc = 0x1b56b4u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x1b56b8: 0x3128ffff  andi        $t0, $t1, 0xFFFF
    ctx->pc = 0x1b56b8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x1b56bc: 0x146001b  divu        $zero, $t2, $a2
    ctx->pc = 0x1b56bcu;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,10); } }
    // 0x1b56c0: 0xb2402  srl         $a0, $t3, 16
    ctx->pc = 0x1b56c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 11), 16));
    // 0x1b56c4: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B56C4u;
    {
        const bool branch_taken_0x1b56c4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b56c4) {
            ctx->pc = 0x1B56C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B56C4u;
            // 0x1b56c8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B56CCu;
            goto label_1b56cc;
        }
    }
    ctx->pc = 0x1B56CCu;
label_1b56cc:
    // 0x1b56cc: 0x1012  mflo        $v0
    ctx->pc = 0x1b56ccu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1b56d0: 0x1810  mfhi        $v1
    ctx->pc = 0x1b56d0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1b56d4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1b56d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b56d8: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1b56d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1b56dc: 0xe82818  mult        $a1, $a3, $t0
    ctx->pc = 0x1b56dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1b56e0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1b56e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1b56e4: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x1b56e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1b56e8: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1B56E8u;
    {
        const bool branch_taken_0x1b56e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b56e8) {
            ctx->pc = 0x1B56ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B56E8u;
            // 0x1b56ec: 0x651823  subu        $v1, $v1, $a1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B571Cu;
            goto label_1b571c;
        }
    }
    ctx->pc = 0x1B56F0u;
    // 0x1b56f0: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1b56f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1b56f4: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x1b56f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x1b56f8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B56F8u;
    {
        const bool branch_taken_0x1b56f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B56FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B56F8u;
        // 0x1b56fc: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b56f8) {
            ctx->pc = 0x1B5718u;
            goto label_1b5718;
        }
    }
    ctx->pc = 0x1B5700u;
    // 0x1b5700: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x1b5700u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1b5704: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B5704u;
    {
        const bool branch_taken_0x1b5704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5704) {
            ctx->pc = 0x1B5708u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B5704u;
            // 0x1b5708: 0x651823  subu        $v1, $v1, $a1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B571Cu;
            goto label_1b571c;
        }
    }
    ctx->pc = 0x1B570Cu;
    // 0x1b570c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x1b570cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1b5710: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1b5710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1b5714: 0x0  nop
    ctx->pc = 0x1b5714u;
    // NOP
label_1b5718:
    // 0x1b5718: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1b5718u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1b571c:
    // 0x1b571c: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B571Cu;
    {
        const bool branch_taken_0x1b571c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b571c) {
            ctx->pc = 0x1B5720u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B571Cu;
            // 0x1b5720: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B5724u;
            goto label_1b5724;
        }
    }
    ctx->pc = 0x1B5724u;
label_1b5724:
    // 0x1b5724: 0x66001b  divu        $zero, $v1, $a2
    ctx->pc = 0x1b5724u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x1b5728: 0x3164ffff  andi        $a0, $t3, 0xFFFF
    ctx->pc = 0x1b5728u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
    // 0x1b572c: 0x1012  mflo        $v0
    ctx->pc = 0x1b572cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1b5730: 0x1810  mfhi        $v1
    ctx->pc = 0x1b5730u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1b5734: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1b5734u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5738: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1b5738u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1b573c: 0xc82818  mult        $a1, $a2, $t0
    ctx->pc = 0x1b573cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1b5740: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1b5740u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1b5744: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x1b5744u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1b5748: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1B5748u;
    {
        const bool branch_taken_0x1b5748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B574Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5748u;
        // 0x1b574c: 0x71400  sll         $v0, $a3, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5748) {
            ctx->pc = 0x1B5774u;
            goto label_1b5774;
        }
    }
    ctx->pc = 0x1B5750u;
    // 0x1b5750: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1b5750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1b5754: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x1b5754u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x1b5758: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B5758u;
    {
        const bool branch_taken_0x1b5758 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B575Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5758u;
        // 0x1b575c: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5758) {
            ctx->pc = 0x1B5770u;
            goto label_1b5770;
        }
    }
    ctx->pc = 0x1B5760u;
    // 0x1b5760: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x1b5760u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1b5764: 0x24c3ffff  addiu       $v1, $a2, -0x1
    ctx->pc = 0x1b5764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1b5768: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x1b5768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x1b576c: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x1b576cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
label_1b5770:
    // 0x1b5770: 0x71400  sll         $v0, $a3, 16
    ctx->pc = 0x1b5770u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
label_1b5774:
    // 0x1b5774: 0x100000fc  b           . + 4 + (0xFC << 2)
    ctx->pc = 0x1B5774u;
    {
        const bool branch_taken_0x1b5774 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5774u;
        // 0x1b5778: 0x463025  or          $a2, $v0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5774) {
            ctx->pc = 0x1B5B68u;
            goto label_1b5b68;
        }
    }
    ctx->pc = 0x1B577Cu;
    // 0x1b577c: 0x0  nop
    ctx->pc = 0x1b577cu;
    // NOP
label_1b5780:
    // 0x1b5780: 0x15200009  bnez        $t1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B5780u;
    {
        const bool branch_taken_0x1b5780 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B5784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5780u;
        // 0x1b5784: 0x49102b  sltu        $v0, $v0, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5780) {
            ctx->pc = 0x1B57A8u;
            goto label_1b57a8;
        }
    }
    ctx->pc = 0x1B5788u;
    // 0x1b5788: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b5788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b578c: 0x51200001  beql        $t1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B578Cu;
    {
        const bool branch_taken_0x1b578c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b578c) {
            ctx->pc = 0x1B5790u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B578Cu;
            // 0x1b5790: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B5794u;
            goto label_1b5794;
        }
    }
    ctx->pc = 0x1B5794u;
label_1b5794:
    // 0x1b5794: 0x48001b  divu        $zero, $v0, $t0
    ctx->pc = 0x1b5794u;
    { uint32_t divisor = GPR_U32(ctx, 8); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1b5798: 0x1012  mflo        $v0
    ctx->pc = 0x1b5798u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1b579c: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x1b579cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b57a0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1b57a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1b57a4: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x1b57a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
label_1b57a8:
    // 0x1b57a8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B57A8u;
    {
        const bool branch_taken_0x1b57a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B57ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B57A8u;
        // 0x1b57ac: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b57a8) {
            ctx->pc = 0x1B57C0u;
            goto label_1b57c0;
        }
    }
    ctx->pc = 0x1B57B0u;
    // 0x1b57b0: 0x2d220100  sltiu       $v0, $t1, 0x100
    ctx->pc = 0x1b57b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x1b57b4: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1b57b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1b57b8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B57B8u;
    {
        const bool branch_taken_0x1b57b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B57BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B57B8u;
        // 0x1b57bc: 0x2200b  movn        $a0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b57b8) {
            ctx->pc = 0x1B57D4u;
            goto label_1b57d4;
        }
    }
    ctx->pc = 0x1B57C0u;
label_1b57c0:
    // 0x1b57c0: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x1b57c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1b57c4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b57c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1b57c8: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1b57c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1b57cc: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x1b57ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x1b57d0: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x1b57d0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_1b57d4:
    // 0x1b57d4: 0x891806  srlv        $v1, $t1, $a0
    ctx->pc = 0x1b57d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 4) & 0x1F));
    // 0x1b57d8: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1b57d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1b57dc: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x1b57dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
    // 0x1b57e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b57e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b57e4: 0x9042b2b0  lbu         $v0, -0x4D50($v0)
    ctx->pc = 0x1b57e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947504)));
    // 0x1b57e8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1b57e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1b57ec: 0xa23023  subu        $a2, $a1, $v0
    ctx->pc = 0x1b57ecu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1b57f0: 0x14c00007  bnez        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B57F0u;
    {
        const bool branch_taken_0x1b57f0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B57F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B57F0u;
        // 0x1b57f4: 0xa63823  subu        $a3, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b57f0) {
            ctx->pc = 0x1B5810u;
            goto label_1b5810;
        }
    }
    ctx->pc = 0x1B57F8u;
    // 0x1b57f8: 0x1495023  subu        $t2, $t2, $t1
    ctx->pc = 0x1b57f8u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x1b57fc: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x1b57fcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b5800: 0x94402  srl         $t0, $t1, 16
    ctx->pc = 0x1b5800u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x1b5804: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x1B5804u;
    {
        const bool branch_taken_0x1b5804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5804u;
        // 0x1b5808: 0x312cffff  andi        $t4, $t1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 12, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5804) {
            ctx->pc = 0x1B58F8u;
            goto label_1b58f8;
        }
    }
    ctx->pc = 0x1B580Cu;
    // 0x1b580c: 0x0  nop
    ctx->pc = 0x1b580cu;
    // NOP
label_1b5810:
    // 0x1b5810: 0xca1804  sllv        $v1, $t2, $a2
    ctx->pc = 0x1b5810u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 6) & 0x1F));
    // 0x1b5814: 0xeb1006  srlv        $v0, $t3, $a3
    ctx->pc = 0x1b5814u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 11), GPR_U32(ctx, 7) & 0x1F));
    // 0x1b5818: 0xcb5804  sllv        $t3, $t3, $a2
    ctx->pc = 0x1b5818u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 6) & 0x1F));
    // 0x1b581c: 0xea2006  srlv        $a0, $t2, $a3
    ctx->pc = 0x1b581cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 7) & 0x1F));
    // 0x1b5820: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x1b5820u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1b5824: 0xc94804  sllv        $t1, $t1, $a2
    ctx->pc = 0x1b5824u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 6) & 0x1F));
    // 0x1b5828: 0x94402  srl         $t0, $t1, 16
    ctx->pc = 0x1b5828u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x1b582c: 0x88001b  divu        $zero, $a0, $t0
    ctx->pc = 0x1b582cu;
    { uint32_t divisor = GPR_U32(ctx, 8); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x1b5830: 0xa2402  srl         $a0, $t2, 16
    ctx->pc = 0x1b5830u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x1b5834: 0x312cffff  andi        $t4, $t1, 0xFFFF
    ctx->pc = 0x1b5834u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x1b5838: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x1b5838u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b583c: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B583Cu;
    {
        const bool branch_taken_0x1b583c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b583c) {
            ctx->pc = 0x1B5840u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B583Cu;
            // 0x1b5840: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B5844u;
            goto label_1b5844;
        }
    }
    ctx->pc = 0x1B5844u;
label_1b5844:
    // 0x1b5844: 0x1012  mflo        $v0
    ctx->pc = 0x1b5844u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1b5848: 0x1810  mfhi        $v1
    ctx->pc = 0x1b5848u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1b584c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1b584cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5850: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1b5850u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1b5854: 0xec2818  mult        $a1, $a3, $t4
    ctx->pc = 0x1b5854u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1b5858: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1b5858u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1b585c: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x1b585cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1b5860: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1B5860u;
    {
        const bool branch_taken_0x1b5860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5860u;
        // 0x1b5864: 0x180682d  daddu       $t5, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5860) {
            ctx->pc = 0x1B5890u;
            goto label_1b5890;
        }
    }
    ctx->pc = 0x1B5868u;
    // 0x1b5868: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1b5868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1b586c: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x1b586cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x1b5870: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B5870u;
    {
        const bool branch_taken_0x1b5870 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B5874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5870u;
        // 0x1b5874: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5870) {
            ctx->pc = 0x1B5890u;
            goto label_1b5890;
        }
    }
    ctx->pc = 0x1B5878u;
    // 0x1b5878: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x1b5878u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1b587c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B587Cu;
    {
        const bool branch_taken_0x1b587c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b587c) {
            ctx->pc = 0x1B5880u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B587Cu;
            // 0x1b5880: 0x651823  subu        $v1, $v1, $a1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B5894u;
            goto label_1b5894;
        }
    }
    ctx->pc = 0x1B5884u;
    // 0x1b5884: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x1b5884u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1b5888: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1b5888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1b588c: 0x0  nop
    ctx->pc = 0x1b588cu;
    // NOP
label_1b5890:
    // 0x1b5890: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1b5890u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1b5894:
    // 0x1b5894: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B5894u;
    {
        const bool branch_taken_0x1b5894 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5894) {
            ctx->pc = 0x1B5898u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B5894u;
            // 0x1b5898: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B589Cu;
            goto label_1b589c;
        }
    }
    ctx->pc = 0x1B589Cu;
label_1b589c:
    // 0x1b589c: 0x66001b  divu        $zero, $v1, $a2
    ctx->pc = 0x1b589cu;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x1b58a0: 0x3144ffff  andi        $a0, $t2, 0xFFFF
    ctx->pc = 0x1b58a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x1b58a4: 0x1012  mflo        $v0
    ctx->pc = 0x1b58a4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1b58a8: 0x1810  mfhi        $v1
    ctx->pc = 0x1b58a8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1b58ac: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1b58acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b58b0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1b58b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1b58b4: 0xcd2818  mult        $a1, $a2, $t5
    ctx->pc = 0x1b58b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1b58b8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1b58b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1b58bc: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x1b58bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1b58c0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1B58C0u;
    {
        const bool branch_taken_0x1b58c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B58C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B58C0u;
        // 0x1b58c4: 0x71400  sll         $v0, $a3, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b58c0) {
            ctx->pc = 0x1B58F0u;
            goto label_1b58f0;
        }
    }
    ctx->pc = 0x1B58C8u;
    // 0x1b58c8: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1b58c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1b58cc: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x1b58ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x1b58d0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B58D0u;
    {
        const bool branch_taken_0x1b58d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B58D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B58D0u;
        // 0x1b58d4: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b58d0) {
            ctx->pc = 0x1B58ECu;
            goto label_1b58ec;
        }
    }
    ctx->pc = 0x1B58D8u;
    // 0x1b58d8: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x1b58d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1b58dc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B58DCu;
    {
        const bool branch_taken_0x1b58dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B58E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B58DCu;
        // 0x1b58e0: 0x71400  sll         $v0, $a3, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b58dc) {
            ctx->pc = 0x1B58F0u;
            goto label_1b58f0;
        }
    }
    ctx->pc = 0x1B58E4u;
    // 0x1b58e4: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1b58e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1b58e8: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1b58e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_1b58ec:
    // 0x1b58ec: 0x71400  sll         $v0, $a3, 16
    ctx->pc = 0x1b58ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
label_1b58f0:
    // 0x1b58f0: 0x655023  subu        $t2, $v1, $a1
    ctx->pc = 0x1b58f0u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1b58f4: 0x466825  or          $t5, $v0, $a2
    ctx->pc = 0x1b58f4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_1b58f8:
    // 0x1b58f8: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x1b58f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b58fc: 0x180402d  daddu       $t0, $t4, $zero
    ctx->pc = 0x1b58fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5900: 0x146001b  divu        $zero, $t2, $a2
    ctx->pc = 0x1b5900u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,10); } }
    // 0x1b5904: 0xb2402  srl         $a0, $t3, 16
    ctx->pc = 0x1b5904u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 11), 16));
    // 0x1b5908: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B5908u;
    {
        const bool branch_taken_0x1b5908 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5908) {
            ctx->pc = 0x1B590Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B5908u;
            // 0x1b590c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B5910u;
            goto label_1b5910;
        }
    }
    ctx->pc = 0x1B5910u;
label_1b5910:
    // 0x1b5910: 0x1012  mflo        $v0
    ctx->pc = 0x1b5910u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1b5914: 0x1810  mfhi        $v1
    ctx->pc = 0x1b5914u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1b5918: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1b5918u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b591c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1b591cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1b5920: 0xe82818  mult        $a1, $a3, $t0
    ctx->pc = 0x1b5920u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1b5924: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1b5924u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1b5928: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x1b5928u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1b592c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1B592Cu;
    {
        const bool branch_taken_0x1b592c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b592c) {
            ctx->pc = 0x1B5930u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B592Cu;
            // 0x1b5930: 0x651823  subu        $v1, $v1, $a1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B595Cu;
            goto label_1b595c;
        }
    }
    ctx->pc = 0x1B5934u;
    // 0x1b5934: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1b5934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1b5938: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x1b5938u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x1b593c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B593Cu;
    {
        const bool branch_taken_0x1b593c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B5940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B593Cu;
        // 0x1b5940: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b593c) {
            ctx->pc = 0x1B5958u;
            goto label_1b5958;
        }
    }
    ctx->pc = 0x1B5944u;
    // 0x1b5944: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x1b5944u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1b5948: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B5948u;
    {
        const bool branch_taken_0x1b5948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5948) {
            ctx->pc = 0x1B594Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B5948u;
            // 0x1b594c: 0x651823  subu        $v1, $v1, $a1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B595Cu;
            goto label_1b595c;
        }
    }
    ctx->pc = 0x1B5950u;
    // 0x1b5950: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x1b5950u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1b5954: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1b5954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_1b5958:
    // 0x1b5958: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x1b5958u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1b595c:
    // 0x1b595c: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B595Cu;
    {
        const bool branch_taken_0x1b595c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b595c) {
            ctx->pc = 0x1B5960u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B595Cu;
            // 0x1b5960: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B5964u;
            goto label_1b5964;
        }
    }
    ctx->pc = 0x1B5964u;
label_1b5964:
    // 0x1b5964: 0x66001b  divu        $zero, $v1, $a2
    ctx->pc = 0x1b5964u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x1b5968: 0x3164ffff  andi        $a0, $t3, 0xFFFF
    ctx->pc = 0x1b5968u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
    // 0x1b596c: 0x1012  mflo        $v0
    ctx->pc = 0x1b596cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1b5970: 0x1810  mfhi        $v1
    ctx->pc = 0x1b5970u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1b5974: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1b5974u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5978: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1b5978u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1b597c: 0xc82818  mult        $a1, $a2, $t0
    ctx->pc = 0x1b597cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1b5980: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1b5980u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1b5984: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x1b5984u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1b5988: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1B5988u;
    {
        const bool branch_taken_0x1b5988 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B598Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5988u;
        // 0x1b598c: 0x71400  sll         $v0, $a3, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5988) {
            ctx->pc = 0x1B59B4u;
            goto label_1b59b4;
        }
    }
    ctx->pc = 0x1B5990u;
    // 0x1b5990: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1b5990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1b5994: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x1b5994u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x1b5998: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B5998u;
    {
        const bool branch_taken_0x1b5998 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B599Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5998u;
        // 0x1b599c: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5998) {
            ctx->pc = 0x1B59B0u;
            goto label_1b59b0;
        }
    }
    ctx->pc = 0x1B59A0u;
    // 0x1b59a0: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x1b59a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1b59a4: 0x24c3ffff  addiu       $v1, $a2, -0x1
    ctx->pc = 0x1b59a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1b59a8: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x1b59a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x1b59ac: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x1b59acu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
label_1b59b0:
    // 0x1b59b0: 0x71400  sll         $v0, $a3, 16
    ctx->pc = 0x1b59b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
label_1b59b4:
    // 0x1b59b4: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x1B59B4u;
    {
        const bool branch_taken_0x1b59b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B59B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B59B4u;
        // 0x1b59b8: 0x463025  or          $a2, $v0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b59b4) {
            ctx->pc = 0x1B5B6Cu;
            goto label_1b5b6c;
        }
    }
    ctx->pc = 0x1B59BCu;
    // 0x1b59bc: 0x0  nop
    ctx->pc = 0x1b59bcu;
    // NOP
label_1b59c0:
    // 0x1b59c0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B59C0u;
    {
        const bool branch_taken_0x1b59c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B59C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B59C0u;
        // 0x1b59c4: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b59c0) {
            ctx->pc = 0x1B59D0u;
            goto label_1b59d0;
        }
    }
    ctx->pc = 0x1B59C8u;
    // 0x1b59c8: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x1B59C8u;
    {
        const bool branch_taken_0x1b59c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B59CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B59C8u;
        // 0x1b59cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b59c8) {
            ctx->pc = 0x1B5B68u;
            goto label_1b5b68;
        }
    }
    ctx->pc = 0x1B59D0u;
label_1b59d0:
    // 0x1b59d0: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x1b59d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1b59d4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B59D4u;
    {
        const bool branch_taken_0x1b59d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B59D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B59D4u;
        // 0x1b59d8: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b59d4) {
            ctx->pc = 0x1B59F0u;
            goto label_1b59f0;
        }
    }
    ctx->pc = 0x1B59DCu;
    // 0x1b59dc: 0x2d020100  sltiu       $v0, $t0, 0x100
    ctx->pc = 0x1b59dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x1b59e0: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1b59e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1b59e4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1B59E4u;
    {
        const bool branch_taken_0x1b59e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B59E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B59E4u;
        // 0x1b59e8: 0x2200b  movn        $a0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b59e4) {
            ctx->pc = 0x1B5A04u;
            goto label_1b5a04;
        }
    }
    ctx->pc = 0x1B59ECu;
    // 0x1b59ec: 0x0  nop
    ctx->pc = 0x1b59ecu;
    // NOP
label_1b59f0:
    // 0x1b59f0: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x1b59f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1b59f4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b59f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1b59f8: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1b59f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1b59fc: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x1b59fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1b5a00: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x1b5a00u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_1b5a04:
    // 0x1b5a04: 0x881806  srlv        $v1, $t0, $a0
    ctx->pc = 0x1b5a04u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 4) & 0x1F));
    // 0x1b5a08: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1b5a08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1b5a0c: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x1b5a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
    // 0x1b5a10: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b5a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b5a14: 0x9042b2b0  lbu         $v0, -0x4D50($v0)
    ctx->pc = 0x1b5a14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947504)));
    // 0x1b5a18: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1b5a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1b5a1c: 0xa23023  subu        $a2, $a1, $v0
    ctx->pc = 0x1b5a1cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1b5a20: 0x14c00009  bnez        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B5A20u;
    {
        const bool branch_taken_0x1b5a20 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B5A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5A20u;
        // 0x1b5a24: 0xa63823  subu        $a3, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5a20) {
            ctx->pc = 0x1B5A48u;
            goto label_1b5a48;
        }
    }
    ctx->pc = 0x1B5A28u;
    // 0x1b5a28: 0x10a102b  sltu        $v0, $t0, $t2
    ctx->pc = 0x1b5a28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x1b5a2c: 0x1440004e  bnez        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x1B5A2Cu;
    {
        const bool branch_taken_0x1b5a2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B5A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5A2Cu;
        // 0x1b5a30: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5a2c) {
            ctx->pc = 0x1B5B68u;
            goto label_1b5b68;
        }
    }
    ctx->pc = 0x1B5A34u;
    // 0x1b5a34: 0x169102b  sltu        $v0, $t3, $t1
    ctx->pc = 0x1b5a34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x1b5a38: 0x1440004b  bnez        $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x1B5A38u;
    {
        const bool branch_taken_0x1b5a38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B5A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5A38u;
        // 0x1b5a3c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5a38) {
            ctx->pc = 0x1B5B68u;
            goto label_1b5b68;
        }
    }
    ctx->pc = 0x1B5A40u;
    // 0x1b5a40: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x1B5A40u;
    {
        const bool branch_taken_0x1b5a40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5A40u;
        // 0x1b5a44: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5a40) {
            ctx->pc = 0x1B5B68u;
            goto label_1b5b68;
        }
    }
    ctx->pc = 0x1B5A48u;
label_1b5a48:
    // 0x1b5a48: 0xc82004  sllv        $a0, $t0, $a2
    ctx->pc = 0x1b5a48u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
    // 0x1b5a4c: 0xeb2806  srlv        $a1, $t3, $a3
    ctx->pc = 0x1b5a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 11), GPR_U32(ctx, 7) & 0x1F));
    // 0x1b5a50: 0xcb5804  sllv        $t3, $t3, $a2
    ctx->pc = 0x1b5a50u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 6) & 0x1F));
    // 0x1b5a54: 0xe91006  srlv        $v0, $t1, $a3
    ctx->pc = 0x1b5a54u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 7) & 0x1F));
    // 0x1b5a58: 0xc94804  sllv        $t1, $t1, $a2
    ctx->pc = 0x1b5a58u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 6) & 0x1F));
    // 0x1b5a5c: 0xca1804  sllv        $v1, $t2, $a2
    ctx->pc = 0x1b5a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 6) & 0x1F));
    // 0x1b5a60: 0x824025  or          $t0, $a0, $v0
    ctx->pc = 0x1b5a60u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1b5a64: 0xea2006  srlv        $a0, $t2, $a3
    ctx->pc = 0x1b5a64u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 7) & 0x1F));
    // 0x1b5a68: 0x655025  or          $t2, $v1, $a1
    ctx->pc = 0x1b5a68u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1b5a6c: 0x82c02  srl         $a1, $t0, 16
    ctx->pc = 0x1b5a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x1b5a70: 0x85001b  divu        $zero, $a0, $a1
    ctx->pc = 0x1b5a70u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x1b5a74: 0xa2402  srl         $a0, $t2, 16
    ctx->pc = 0x1b5a74u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x1b5a78: 0x310cffff  andi        $t4, $t0, 0xFFFF
    ctx->pc = 0x1b5a78u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x1b5a7c: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B5A7Cu;
    {
        const bool branch_taken_0x1b5a7c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5a7c) {
            ctx->pc = 0x1B5A80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B5A7Cu;
            // 0x1b5a80: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B5A84u;
            goto label_1b5a84;
        }
    }
    ctx->pc = 0x1B5A84u;
label_1b5a84:
    // 0x1b5a84: 0x1012  mflo        $v0
    ctx->pc = 0x1b5a84u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1b5a88: 0x1810  mfhi        $v1
    ctx->pc = 0x1b5a88u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1b5a8c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1b5a8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5a90: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1b5a90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1b5a94: 0xec3018  mult        $a2, $a3, $t4
    ctx->pc = 0x1b5a94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1b5a98: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1b5a98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1b5a9c: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x1b5a9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1b5aa0: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1B5AA0u;
    {
        const bool branch_taken_0x1b5aa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5aa0) {
            ctx->pc = 0x1B5AA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B5AA0u;
            // 0x1b5aa4: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B5AD4u;
            goto label_1b5ad4;
        }
    }
    ctx->pc = 0x1B5AA8u;
    // 0x1b5aa8: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x1b5aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x1b5aac: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x1b5aacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1b5ab0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B5AB0u;
    {
        const bool branch_taken_0x1b5ab0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B5AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5AB0u;
        // 0x1b5ab4: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5ab0) {
            ctx->pc = 0x1B5AD0u;
            goto label_1b5ad0;
        }
    }
    ctx->pc = 0x1B5AB8u;
    // 0x1b5ab8: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x1b5ab8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1b5abc: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B5ABCu;
    {
        const bool branch_taken_0x1b5abc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5abc) {
            ctx->pc = 0x1B5AC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B5ABCu;
            // 0x1b5ac0: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B5AD4u;
            goto label_1b5ad4;
        }
    }
    ctx->pc = 0x1B5AC4u;
    // 0x1b5ac4: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x1b5ac4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1b5ac8: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x1b5ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x1b5acc: 0x0  nop
    ctx->pc = 0x1b5accu;
    // NOP
label_1b5ad0:
    // 0x1b5ad0: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x1b5ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1b5ad4:
    // 0x1b5ad4: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B5AD4u;
    {
        const bool branch_taken_0x1b5ad4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5ad4) {
            ctx->pc = 0x1B5AD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B5AD4u;
            // 0x1b5ad8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B5ADCu;
            goto label_1b5adc;
        }
    }
    ctx->pc = 0x1B5ADCu;
label_1b5adc:
    // 0x1b5adc: 0x65001b  divu        $zero, $v1, $a1
    ctx->pc = 0x1b5adcu;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x1b5ae0: 0x3144ffff  andi        $a0, $t2, 0xFFFF
    ctx->pc = 0x1b5ae0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x1b5ae4: 0x1012  mflo        $v0
    ctx->pc = 0x1b5ae4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1b5ae8: 0x1810  mfhi        $v1
    ctx->pc = 0x1b5ae8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1b5aec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b5aecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5af0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1b5af0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1b5af4: 0xac3018  mult        $a2, $a1, $t4
    ctx->pc = 0x1b5af4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1b5af8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1b5af8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1b5afc: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x1b5afcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1b5b00: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1B5B00u;
    {
        const bool branch_taken_0x1b5b00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5B00u;
        // 0x1b5b04: 0x71400  sll         $v0, $a3, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5b00) {
            ctx->pc = 0x1B5B30u;
            goto label_1b5b30;
        }
    }
    ctx->pc = 0x1B5B08u;
    // 0x1b5b08: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x1b5b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x1b5b0c: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x1b5b0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1b5b10: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B5B10u;
    {
        const bool branch_taken_0x1b5b10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B5B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5B10u;
        // 0x1b5b14: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5b10) {
            ctx->pc = 0x1B5B2Cu;
            goto label_1b5b2c;
        }
    }
    ctx->pc = 0x1B5B18u;
    // 0x1b5b18: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x1b5b18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1b5b1c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B5B1Cu;
    {
        const bool branch_taken_0x1b5b1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5B1Cu;
        // 0x1b5b20: 0x71400  sll         $v0, $a3, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5b1c) {
            ctx->pc = 0x1B5B30u;
            goto label_1b5b30;
        }
    }
    ctx->pc = 0x1B5B24u;
    // 0x1b5b24: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x1b5b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x1b5b28: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1b5b28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_1b5b2c:
    // 0x1b5b2c: 0x71400  sll         $v0, $a3, 16
    ctx->pc = 0x1b5b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
label_1b5b30:
    // 0x1b5b30: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x1b5b30u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1b5b34: 0x453025  or          $a2, $v0, $a1
    ctx->pc = 0x1b5b34u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1b5b38: 0xc90019  multu       $a2, $t1
    ctx->pc = 0x1b5b38u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 6) * (uint64_t)GPR_U32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1b5b3c: 0x3810  mfhi        $a3
    ctx->pc = 0x1b5b3cu;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x1b5b40: 0x2012  mflo        $a0
    ctx->pc = 0x1b5b40u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x1b5b44: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x1b5b44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1b5b48: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B5B48u;
    {
        const bool branch_taken_0x1b5b48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b5b48) {
            ctx->pc = 0x1B5B4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B5B48u;
            // 0x1b5b4c: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B5B68u;
            goto label_1b5b68;
        }
    }
    ctx->pc = 0x1B5B50u;
    // 0x1b5b50: 0x14e30006  bne         $a3, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B5B50u;
    {
        const bool branch_taken_0x1b5b50 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        ctx->pc = 0x1B5B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5B50u;
        // 0x1b5b54: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5b50) {
            ctx->pc = 0x1B5B6Cu;
            goto label_1b5b6c;
        }
    }
    ctx->pc = 0x1B5B58u;
    // 0x1b5b58: 0x164102b  sltu        $v0, $t3, $a0
    ctx->pc = 0x1b5b58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1b5b5c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B5B5Cu;
    {
        const bool branch_taken_0x1b5b5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5B5Cu;
        // 0x1b5b60: 0x6103c  dsll32      $v0, $a2, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5b5c) {
            ctx->pc = 0x1B5B70u;
            goto label_1b5b70;
        }
    }
    ctx->pc = 0x1B5B64u;
    // 0x1b5b64: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1b5b64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_1b5b68:
    // 0x1b5b68: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x1b5b68u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b5b6c:
    // 0x1b5b6c: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x1b5b6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
label_1b5b70:
    // 0x1b5b70: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1b5b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b5b74: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1b5b74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1b5b78: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b5b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b5b7c: 0x1e47824  and         $t7, $t7, $a0
    ctx->pc = 0x1b5b7cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & GPR_U64(ctx, 4));
    // 0x1b5b80: 0x1e27825  or          $t7, $t7, $v0
    ctx->pc = 0x1b5b80u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 2));
    // 0x1b5b84: 0xd103c  dsll32      $v0, $t5, 0
    ctx->pc = 0x1b5b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) << (32 + 0));
    // 0x1b5b88: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x1b5b88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x1b5b8c: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x1b5b8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x1b5b90: 0x1e57824  and         $t7, $t7, $a1
    ctx->pc = 0x1b5b90u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & GPR_U64(ctx, 5));
    // 0x1b5b94: 0x13000011  beqz        $t8, . + 4 + (0x11 << 2)
    ctx->pc = 0x1B5B94u;
    {
        const bool branch_taken_0x1b5b94 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5B94u;
        // 0x1b5b98: 0x1e21825  or          $v1, $t7, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 15) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5b94) {
            ctx->pc = 0x1B5BDCu;
            return;
        }
    }
    ctx->pc = 0x1B5B9Cu;
    // 0x1b5b9c: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x1b5b9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b5ba0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1b5ba0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1b5ba4: 0x1c47024  and         $t6, $t6, $a0
    ctx->pc = 0x1b5ba4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & GPR_U64(ctx, 4));
    // 0x1b5ba8: 0x21023  negu        $v0, $v0
    ctx->pc = 0x1b5ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x1b5bac: 0x3203f  dsra32      $a0, $v1, 0
    ctx->pc = 0x1b5bacu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1b5bb0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b5bb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b5bb4: 0x42023  negu        $a0, $a0
    ctx->pc = 0x1b5bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x1b5bb8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b5bb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b5bbc: 0x1c27025  or          $t6, $t6, $v0
    ctx->pc = 0x1b5bbcu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 2));
    // 0x1b5bc0: 0xe183c  dsll32      $v1, $t6, 0
    ctx->pc = 0x1b5bc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 14) << (32 + 0));
    // 0x1b5bc4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1b5bc4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1b5bc8: 0x1c57024  and         $t6, $t6, $a1
    ctx->pc = 0x1b5bc8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & GPR_U64(ctx, 5));
    // 0x1b5bcc: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1b5bccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1b5bd0: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x1b5bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1b5bd4: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1b5bd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1b5bd8: 0x1c41825  or          $v1, $t6, $a0
    ctx->pc = 0x1b5bd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 14) | GPR_U64(ctx, 4));
    ctx->pc = 0x1b5bdcu;
}
