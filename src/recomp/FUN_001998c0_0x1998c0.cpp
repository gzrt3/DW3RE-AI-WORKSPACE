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

// Function: FUN_001998c0
// Address: 0x1998c0 - 0x199f44
void FUN_001998c0_0x1998c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001998c0_0x1998c0");
#endif

    switch (ctx->pc) {
        case 0x199ae8u: goto label_199ae8;
        case 0x199b0cu: goto label_199b0c;
        case 0x199b18u: goto label_199b18;
        case 0x199ba8u: goto label_199ba8;
        case 0x199bf0u: goto label_199bf0;
        case 0x199c74u: goto label_199c74;
        case 0x199c88u: goto label_199c88;
        case 0x199cacu: goto label_199cac;
        case 0x199cb8u: goto label_199cb8;
        case 0x199cc8u: goto label_199cc8;
        case 0x199d50u: goto label_199d50;
        case 0x199d90u: goto label_199d90;
        case 0x199db0u: goto label_199db0;
        case 0x199e10u: goto label_199e10;
        case 0x199e48u: goto label_199e48;
        case 0x199e88u: goto label_199e88;
        case 0x199ea8u: goto label_199ea8;
        case 0x199ef8u: goto label_199ef8;
        default: break;
    }

    ctx->pc = 0x1998c0u;

    // 0x1998c0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1998c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1998c4: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x1998c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x1998c8: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x1998c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x1998cc: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1998ccu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1998d0: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1998d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x1998d4: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1998d4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1998d8: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1998d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x1998dc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1998dcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1998e0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1998e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1998e4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1998e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1998e8: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1998e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x1998ec: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1998ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1998f0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1998f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1998f4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1998f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1998f8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1998f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1998fc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1998fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199900: 0xde890040  ld          $t1, 0x40($s4)
    ctx->pc = 0x199900u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 20), 64)));
    // 0x199904: 0xde820020  ld          $v0, 0x20($s4)
    ctx->pc = 0x199904u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x199908: 0x31240fff  andi        $a0, $t1, 0xFFF
    ctx->pc = 0x199908u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)4095);
    // 0x19990c: 0x9183e  dsrl32      $v1, $t1, 0
    ctx->pc = 0x19990cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) >> (32 + 0));
    // 0x199910: 0x2163a  dsrl        $v0, $v0, 24
    ctx->pc = 0x199910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 24);
    // 0x199914: 0x4403c  dsll32      $t0, $a0, 0
    ctx->pc = 0x199914u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) << (32 + 0));
    // 0x199918: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x199918u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x19991c: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x19991cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x199920: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x199920u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x199924: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x199924u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x199928: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x199928u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x19992c: 0x3383c  dsll32      $a3, $v1, 0
    ctx->pc = 0x19992cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << (32 + 0));
    // 0x199930: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x199930u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x199934: 0x2c82003b  sltiu       $v0, $a0, 0x3B
    ctx->pc = 0x199934u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)59) ? 1 : 0);
    // 0x199938: 0x10400058  beqz        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x199938u;
    {
        const bool branch_taken_0x199938 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19993Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199938u;
        // 0x19993c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199938) {
            ctx->pc = 0x199A9Cu;
            goto label_199a9c;
        }
    }
    ctx->pc = 0x199940u;
    // 0x199940: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x199940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
    // 0x199944: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x199944u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x199948: 0x24429ea0  addiu       $v0, $v0, -0x6160
    ctx->pc = 0x199948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942368));
    // 0x19994c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x19994cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x199950: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x199950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x199954: 0x800008  jr          $a0
    ctx->pc = 0x199954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19995Cu: goto label_19995c;
            case 0x199994u: goto label_199994;
            case 0x1999E4u: goto label_1999e4;
            case 0x199A1Cu: goto label_199a1c;
            case 0x199A50u: goto label_199a50;
            case 0x199A9Cu: goto label_199a9c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199954u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x19995Cu;
label_19995c:
    // 0x19995c: 0x1072018  mult        $a0, $t0, $a3
    ctx->pc = 0x19995cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x199960: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x199960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x199964: 0x3442fff8  ori         $v0, $v0, 0xFFF8
    ctx->pc = 0x199964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65528);
    // 0x199968: 0x43080  sll         $a2, $a0, 2
    ctx->pc = 0x199968u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x19996c: 0x61903  sra         $v1, $a2, 4
    ctx->pc = 0x19996cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 4));
    // 0x199970: 0x30d3000f  andi        $s3, $a2, 0xF
    ctx->pc = 0x199970u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
    // 0x199974: 0x629024  and         $s2, $v1, $v0
    ctx->pc = 0x199974u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x199978: 0x1260003e  beqz        $s3, . + 4 + (0x3E << 2)
    ctx->pc = 0x199978u;
    {
        const bool branch_taken_0x199978 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x19997Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199978u;
        // 0x19997c: 0x30710007  andi        $s1, $v1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x199978) {
            ctx->pc = 0x199A74u;
            goto label_199a74;
        }
    }
    ctx->pc = 0x199980u;
    // 0x199980: 0x24e20003  addiu       $v0, $a3, 0x3
    ctx->pc = 0x199980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
    // 0x199984: 0x30451ffc  andi        $a1, $v0, 0x1FFC
    ctx->pc = 0x199984u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8188);
    // 0x199988: 0x1051818  mult        $v1, $t0, $a1
    ctx->pc = 0x199988u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x19998c: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x19998Cu;
    {
        const bool branch_taken_0x19998c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19998Cu;
        // 0x199990: 0x31083  sra         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19998c) {
            ctx->pc = 0x199A90u;
            goto label_199a90;
        }
    }
    ctx->pc = 0x199994u;
label_199994:
    // 0x199994: 0x1072818  mult        $a1, $t0, $a3
    ctx->pc = 0x199994u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x199998: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x199998u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x19999c: 0x3463fff8  ori         $v1, $v1, 0xFFF8
    ctx->pc = 0x19999cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65528);
    // 0x1999a0: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x1999a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1999a4: 0x453021  addu        $a2, $v0, $a1
    ctx->pc = 0x1999a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1999a8: 0x62103  sra         $a0, $a2, 4
    ctx->pc = 0x1999a8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 6), 4));
    // 0x1999ac: 0x30d3000f  andi        $s3, $a2, 0xF
    ctx->pc = 0x1999acu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
    // 0x1999b0: 0x839024  and         $s2, $a0, $v1
    ctx->pc = 0x1999b0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1999b4: 0x1260002f  beqz        $s3, . + 4 + (0x2F << 2)
    ctx->pc = 0x1999B4u;
    {
        const bool branch_taken_0x1999b4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1999B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1999B4u;
        // 0x1999b8: 0x30910007  andi        $s1, $a0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1999b4) {
            ctx->pc = 0x199A74u;
            goto label_199a74;
        }
    }
    ctx->pc = 0x1999BCu;
    // 0x1999bc: 0x24e2000f  addiu       $v0, $a3, 0xF
    ctx->pc = 0x1999bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 15));
    // 0x1999c0: 0x30451ff0  andi        $a1, $v0, 0x1FF0
    ctx->pc = 0x1999c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8176);
    // 0x1999c4: 0x1051818  mult        $v1, $t0, $a1
    ctx->pc = 0x1999c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1999c8: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1999c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1999cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1999ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1999d0: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1999d0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x1999d4: 0x521823  subu        $v1, $v0, $s2
    ctx->pc = 0x1999d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1999d8: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x1999d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1999dc: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x1999DCu;
    {
        const bool branch_taken_0x1999dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1999E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1999DCu;
        // 0x1999e0: 0x2476ffff  addiu       $s6, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1999dc) {
            ctx->pc = 0x199A9Cu;
            goto label_199a9c;
        }
    }
    ctx->pc = 0x1999E4u;
label_1999e4:
    // 0x1999e4: 0x1071818  mult        $v1, $t0, $a3
    ctx->pc = 0x1999e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1999e8: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x1999e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x1999ec: 0x34a5fff8  ori         $a1, $a1, 0xFFF8
    ctx->pc = 0x1999ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65528);
    // 0x1999f0: 0x33040  sll         $a2, $v1, 1
    ctx->pc = 0x1999f0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1999f4: 0x61103  sra         $v0, $a2, 4
    ctx->pc = 0x1999f4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 4));
    // 0x1999f8: 0x30d3000f  andi        $s3, $a2, 0xF
    ctx->pc = 0x1999f8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
    // 0x1999fc: 0x459024  and         $s2, $v0, $a1
    ctx->pc = 0x1999fcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x199a00: 0x1260001c  beqz        $s3, . + 4 + (0x1C << 2)
    ctx->pc = 0x199A00u;
    {
        const bool branch_taken_0x199a00 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x199A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199A00u;
        // 0x199a04: 0x30510007  andi        $s1, $v0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x199a00) {
            ctx->pc = 0x199A74u;
            goto label_199a74;
        }
    }
    ctx->pc = 0x199A08u;
    // 0x199a08: 0x24e20007  addiu       $v0, $a3, 0x7
    ctx->pc = 0x199a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 7));
    // 0x199a0c: 0x452824  and         $a1, $v0, $a1
    ctx->pc = 0x199a0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x199a10: 0x1051818  mult        $v1, $t0, $a1
    ctx->pc = 0x199a10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x199a14: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x199A14u;
    {
        const bool branch_taken_0x199a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199A14u;
        // 0x199a18: 0x310c3  sra         $v0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199a14) {
            ctx->pc = 0x199A90u;
            goto label_199a90;
        }
    }
    ctx->pc = 0x199A1Cu;
label_199a1c:
    // 0x199a1c: 0x1073018  mult        $a2, $t0, $a3
    ctx->pc = 0x199a1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x199a20: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x199a20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x199a24: 0x3463fff8  ori         $v1, $v1, 0xFFF8
    ctx->pc = 0x199a24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65528);
    // 0x199a28: 0x61103  sra         $v0, $a2, 4
    ctx->pc = 0x199a28u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 4));
    // 0x199a2c: 0x30d3000f  andi        $s3, $a2, 0xF
    ctx->pc = 0x199a2cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
    // 0x199a30: 0x439024  and         $s2, $v0, $v1
    ctx->pc = 0x199a30u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x199a34: 0x1260000f  beqz        $s3, . + 4 + (0xF << 2)
    ctx->pc = 0x199A34u;
    {
        const bool branch_taken_0x199a34 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x199A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199A34u;
        // 0x199a38: 0x30510007  andi        $s1, $v0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x199a34) {
            ctx->pc = 0x199A74u;
            goto label_199a74;
        }
    }
    ctx->pc = 0x199A3Cu;
    // 0x199a3c: 0x24e20007  addiu       $v0, $a3, 0x7
    ctx->pc = 0x199a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 7));
    // 0x199a40: 0x432824  and         $a1, $v0, $v1
    ctx->pc = 0x199a40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x199a44: 0x1051818  mult        $v1, $t0, $a1
    ctx->pc = 0x199a44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x199a48: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x199A48u;
    {
        const bool branch_taken_0x199a48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199A48u;
        // 0x199a4c: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199a48) {
            ctx->pc = 0x199A90u;
            goto label_199a90;
        }
    }
    ctx->pc = 0x199A50u;
label_199a50:
    // 0x199a50: 0x1071018  mult        $v0, $t0, $a3
    ctx->pc = 0x199a50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x199a54: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x199a54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x199a58: 0x34a5fff8  ori         $a1, $a1, 0xFFF8
    ctx->pc = 0x199a58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65528);
    // 0x199a5c: 0x21943  sra         $v1, $v0, 5
    ctx->pc = 0x199a5cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 5));
    // 0x199a60: 0x23043  sra         $a2, $v0, 1
    ctx->pc = 0x199a60u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 1));
    // 0x199a64: 0x30d3000f  andi        $s3, $a2, 0xF
    ctx->pc = 0x199a64u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
    // 0x199a68: 0x659024  and         $s2, $v1, $a1
    ctx->pc = 0x199a68u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x199a6c: 0x16600004  bnez        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x199A6Cu;
    {
        const bool branch_taken_0x199a6c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x199A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199A6Cu;
        // 0x199a70: 0x30710007  andi        $s1, $v1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x199a6c) {
            ctx->pc = 0x199A80u;
            goto label_199a80;
        }
    }
    ctx->pc = 0x199A74u;
label_199a74:
    // 0x199a74: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x199a74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199a78: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x199A78u;
    {
        const bool branch_taken_0x199a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199A78u;
        // 0x199a7c: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199a78) {
            ctx->pc = 0x199A9Cu;
            goto label_199a9c;
        }
    }
    ctx->pc = 0x199A80u;
label_199a80:
    // 0x199a80: 0x24e20007  addiu       $v0, $a3, 0x7
    ctx->pc = 0x199a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 7));
    // 0x199a84: 0x452824  and         $a1, $v0, $a1
    ctx->pc = 0x199a84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x199a88: 0x1051818  mult        $v1, $t0, $a1
    ctx->pc = 0x199a88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x199a8c: 0x31143  sra         $v0, $v1, 5
    ctx->pc = 0x199a8cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 5));
label_199a90:
    // 0x199a90: 0x521023  subu        $v0, $v0, $s2
    ctx->pc = 0x199a90u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x199a94: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x199a94u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x199a98: 0x2456ffff  addiu       $s6, $v0, -0x1
    ctx->pc = 0x199a98u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_199a9c:
    // 0x199a9c: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x199A9Cu;
    {
        const bool branch_taken_0x199a9c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x199AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199A9Cu;
        // 0x199aa0: 0x31230fff  andi        $v1, $t1, 0xFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)4095);
        ctx->in_delay_slot = false;
        if (branch_taken_0x199a9c) {
            ctx->pc = 0x199AC4u;
            goto label_199ac4;
        }
    }
    ctx->pc = 0x199AA4u;
    // 0x199aa4: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x199aa4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x199aa8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x199aa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x199aac: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x199aacu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x199ab0: 0x26820040  addiu       $v0, $s4, 0x40
    ctx->pc = 0x199ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
    // 0x199ab4: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x199ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x199ab8: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x199ab8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x199abc: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x199abcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x199ac0: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x199ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
label_199ac4:
    // 0x199ac4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x199ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x199ac8: 0x34429000  ori         $v0, $v0, 0x9000
    ctx->pc = 0x199ac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x199acc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x199accu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10009000u));
    // 0x199ad0: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x199ad0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x199ad4: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x199AD4u;
    {
        const bool branch_taken_0x199ad4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x199AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199AD4u;
        // 0x199ad8: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199ad4) {
            ctx->pc = 0x199B04u;
            goto label_199b04;
        }
    }
    ctx->pc = 0x199ADCu;
    // 0x199adc: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x199adcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x199ae0: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x199ae0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x199ae4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x199ae4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_199ae8:
    // 0x199ae8: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x199ae8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x199aec: 0x1440005e  bnez        $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x199AECu;
    {
        const bool branch_taken_0x199aec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x199AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199AECu;
        // 0x199af0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199aec) {
            ctx->pc = 0x199C68u;
            goto label_199c68;
        }
    }
    ctx->pc = 0x199AF4u;
    // 0x199af4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x199af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x199af8: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x199af8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x199afc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x199AFCu;
    {
        const bool branch_taken_0x199afc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x199B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199AFCu;
        // 0x199b00: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199afc) {
            ctx->pc = 0x199AE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_199ae8;
        }
    }
    ctx->pc = 0x199B04u;
label_199b04:
    // 0x199b04: 0xc0692d0  jal         func_1A4B40
    ctx->pc = 0x199B04u;
    SET_GPR_U32(ctx, 31, 0x199B0Cu);
    ctx->pc = 0x1A4B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4B40u, 0x199B04u, 0x199B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199B0Cu;
label_199b0c:
    // 0x199b0c: 0x24040200  addiu       $a0, $zero, 0x200
    ctx->pc = 0x199b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x199b10: 0xc0692d8  jal         func_1A4B60
    ctx->pc = 0x199B10u;
    SET_GPR_U32(ctx, 31, 0x199B18u);
    ctx->pc = 0x199B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199B10u;
    // 0x199b14: 0x442025  or          $a0, $v0, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4B60u, 0x199B10u, 0x199B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199B18u;
label_199b18:
    // 0x199b18: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x199b18u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199b1c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x199b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x199b20: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x199b20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
    // 0x199b24: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x199b24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x199b28: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x199b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x199b2c: 0x34639020  ori         $v1, $v1, 0x9020
    ctx->pc = 0x199b2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36896);
    // 0x199b30: 0xfc440000  sd          $a0, 0x0($v0)
    ctx->pc = 0x199b30u;
    runtime->Store64(rdram, ctx, 0x12001000u, GPR_U64(ctx, 4));
    // 0x199b34: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x199b34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x199b38: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x199b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x199b3c: 0x2851024  and         $v0, $s4, $a1
    ctx->pc = 0x199b3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & GPR_U64(ctx, 5));
    // 0x199b40: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x199b40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x199b44: 0x14450008  bne         $v0, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x199B44u;
    {
        const bool branch_taken_0x199b44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x199B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199B44u;
        // 0x199b48: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199b44) {
            ctx->pc = 0x199B68u;
            goto label_199b68;
        }
    }
    ctx->pc = 0x199B4Cu;
    // 0x199b4c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x199b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x199b50: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x199b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x199b54: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x199b54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x199b58: 0x2821024  and         $v0, $s4, $v0
    ctx->pc = 0x199b58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & GPR_U64(ctx, 2));
    // 0x199b5c: 0x34639010  ori         $v1, $v1, 0x9010
    ctx->pc = 0x199b5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36880);
    // 0x199b60: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x199B60u;
    {
        const bool branch_taken_0x199b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199B60u;
        // 0x199b64: 0x441025  or          $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199b60) {
            ctx->pc = 0x199B78u;
            goto label_199b78;
        }
    }
    ctx->pc = 0x199B68u;
label_199b68:
    // 0x199b68: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x199b68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x199b6c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x199b6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x199b70: 0x34639010  ori         $v1, $v1, 0x9010
    ctx->pc = 0x199b70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36880);
    // 0x199b74: 0x2821024  and         $v0, $s4, $v0
    ctx->pc = 0x199b74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & GPR_U64(ctx, 2));
label_199b78:
    // 0x199b78: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x199b78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x199b7c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x199b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x199b80: 0x24040101  addiu       $a0, $zero, 0x101
    ctx->pc = 0x199b80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x199b84: 0x34429000  ori         $v0, $v0, 0x9000
    ctx->pc = 0x199b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x199b88: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x199b88u;
    runtime->Store32(rdram, ctx, 0x10009000u, GPR_U32(ctx, 4));
    // 0x199b8c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x199b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10009000u));
    // 0x199b90: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x199b90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x199b94: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x199B94u;
    {
        const bool branch_taken_0x199b94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x199B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199B94u;
        // 0x199b98: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199b94) {
            ctx->pc = 0x199BC4u;
            goto label_199bc4;
        }
    }
    ctx->pc = 0x199B9Cu;
    // 0x199b9c: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x199b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x199ba0: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x199ba0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x199ba4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x199ba4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_199ba8:
    // 0x199ba8: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x199ba8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x199bac: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x199BACu;
    {
        const bool branch_taken_0x199bac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x199BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199BACu;
        // 0x199bb0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199bac) {
            ctx->pc = 0x199C68u;
            goto label_199c68;
        }
    }
    ctx->pc = 0x199BB4u;
    // 0x199bb4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x199bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x199bb8: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x199bb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x199bbc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x199BBCu;
    {
        const bool branch_taken_0x199bbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x199BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199BBCu;
        // 0x199bc0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199bbc) {
            ctx->pc = 0x199BA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_199ba8;
        }
    }
    ctx->pc = 0x199BC4u;
label_199bc4:
    // 0x199bc4: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x199bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
    // 0x199bc8: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x199bc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x199bcc: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x199bccu;
    SET_GPR_U64(ctx, 3, runtime->Load64(rdram, ctx, 0x12001000u));
    // 0x199bd0: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x199bd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x199bd4: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x199BD4u;
    {
        const bool branch_taken_0x199bd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x199BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199BD4u;
        // 0x199bd8: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199bd4) {
            ctx->pc = 0x199C10u;
            goto label_199c10;
        }
    }
    ctx->pc = 0x199BDCu;
    // 0x199bdc: 0x3c031200  lui         $v1, 0x1200
    ctx->pc = 0x199bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4608 << 16));
    // 0x199be0: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x199be0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x199be4: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x199be4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x199be8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x199be8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199bec: 0x0  nop
    ctx->pc = 0x199becu;
    // NOP
label_199bf0:
    // 0x199bf0: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x199bf0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x199bf4: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x199BF4u;
    {
        const bool branch_taken_0x199bf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x199BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199BF4u;
        // 0x199bf8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199bf4) {
            ctx->pc = 0x199C7Cu;
            goto label_199c7c;
        }
    }
    ctx->pc = 0x199BFCu;
    // 0x199bfc: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x199bfcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x199c00: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x199c00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x199c04: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x199C04u;
    {
        const bool branch_taken_0x199c04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x199C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199C04u;
        // 0x199c08: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199c04) {
            ctx->pc = 0x199BF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_199bf0;
        }
    }
    ctx->pc = 0x199C0Cu;
    // 0x199c0c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x199c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_199c10:
    // 0x199c10: 0x3c040080  lui         $a0, 0x80
    ctx->pc = 0x199c10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)128 << 16));
    // 0x199c14: 0x34423c00  ori         $v0, $v0, 0x3C00
    ctx->pc = 0x199c14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15360);
    // 0x199c18: 0x3c031200  lui         $v1, 0x1200
    ctx->pc = 0x199c18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4608 << 16));
    // 0x199c1c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x199c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x199c20: 0x34631040  ori         $v1, $v1, 0x1040
    ctx->pc = 0x199c20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4160);
    // 0x199c24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x199c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x199c28: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x199c28u;
    runtime->Store64(rdram, ctx, 0x12001040u, GPR_U64(ctx, 2));
    // 0x199c2c: 0x1240004f  beqz        $s2, . + 4 + (0x4F << 2)
    ctx->pc = 0x199C2Cu;
    {
        const bool branch_taken_0x199c2c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x199C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199C2Cu;
        // 0x199c30: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199c2c) {
            ctx->pc = 0x199D6Cu;
            goto label_199d6c;
        }
    }
    ctx->pc = 0x199C34u;
    // 0x199c34: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x199c34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x199c38: 0x34429020  ori         $v0, $v0, 0x9020
    ctx->pc = 0x199c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36896);
    // 0x199c3c: 0x2a41824  and         $v1, $s5, $a0
    ctx->pc = 0x199c3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & GPR_U64(ctx, 4));
    // 0x199c40: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x199c40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x199c44: 0x14640031  bne         $v1, $a0, . + 4 + (0x31 << 2)
    ctx->pc = 0x199C44u;
    {
        const bool branch_taken_0x199c44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x199C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199C44u;
        // 0x199c48: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199c44) {
            ctx->pc = 0x199D0Cu;
            goto label_199d0c;
        }
    }
    ctx->pc = 0x199C4Cu;
    // 0x199c4c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x199c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x199c50: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x199c50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x199c54: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x199c54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x199c58: 0x2a21024  and         $v0, $s5, $v0
    ctx->pc = 0x199c58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & GPR_U64(ctx, 2));
    // 0x199c5c: 0x34639010  ori         $v1, $v1, 0x9010
    ctx->pc = 0x199c5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36880);
    // 0x199c60: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x199C60u;
    {
        const bool branch_taken_0x199c60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199C60u;
        // 0x199c64: 0x441025  or          $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199c60) {
            ctx->pc = 0x199D1Cu;
            goto label_199d1c;
        }
    }
    ctx->pc = 0x199C68u;
label_199c68:
    // 0x199c68: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x199c68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x199c6c: 0xc08ee2e  jal         func_23B8B8
    ctx->pc = 0x199C6Cu;
    SET_GPR_U32(ctx, 31, 0x199C74u);
    ctx->pc = 0x199C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199C6Cu;
    // 0x199c70: 0x24849dc0  addiu       $a0, $a0, -0x6240 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B8B8u, 0x199C6Cu, 0x199C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199C74u;
label_199c74:
    // 0x199c74: 0x100000ab  b           . + 4 + (0xAB << 2)
    ctx->pc = 0x199C74u;
    {
        const bool branch_taken_0x199c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199C74u;
        // 0x199c78: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199c74) {
            ctx->pc = 0x199F24u;
            goto label_199f24;
        }
    }
    ctx->pc = 0x199C7Cu;
label_199c7c:
    // 0x199c7c: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x199c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x199c80: 0xc08ee2e  jal         func_23B8B8
    ctx->pc = 0x199C80u;
    SET_GPR_U32(ctx, 31, 0x199C88u);
    ctx->pc = 0x199C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199C80u;
    // 0x199c84: 0x24849df8  addiu       $a0, $a0, -0x6208 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B8B8u, 0x199C80u, 0x199C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199C88u;
label_199c88:
    // 0x199c88: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x199c88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
    // 0x199c8c: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x199c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x199c90: 0x246357e0  addiu       $v1, $v1, 0x57E0
    ctx->pc = 0x199c90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22496));
    // 0x199c94: 0x34a55000  ori         $a1, $a1, 0x5000
    ctx->pc = 0x199c94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)20480);
    // 0x199c98: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x199c98u;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x2857E0u));
    // 0x199c9c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x199c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x199ca0: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x199ca0u;
    runtime->Store128(rdram, ctx, 0x10005000u, GPR_VEC(ctx, 4));
    // 0x199ca4: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x199CA4u;
    {
        const bool branch_taken_0x199ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199CA4u;
        // 0x199ca8: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199ca4) {
            ctx->pc = 0x199F28u;
            goto label_199f28;
        }
    }
    ctx->pc = 0x199CACu;
label_199cac:
    // 0x199cac: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x199cacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x199cb0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x199CB0u;
    {
        const bool branch_taken_0x199cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199CB0u;
        // 0x199cb4: 0x24849e28  addiu       $a0, $a0, -0x61D8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199cb0) {
            ctx->pc = 0x199CC0u;
            goto label_199cc0;
        }
    }
    ctx->pc = 0x199CB8u;
label_199cb8:
    // 0x199cb8: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x199cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x199cbc: 0x24849e68  addiu       $a0, $a0, -0x6198
    ctx->pc = 0x199cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942312));
label_199cc0:
    // 0x199cc0: 0xc08ee2e  jal         func_23B8B8
    ctx->pc = 0x199CC0u;
    SET_GPR_U32(ctx, 31, 0x199CC8u);
    ctx->pc = 0x23B8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B8B8u, 0x199CC0u, 0x199CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199CC8u;
label_199cc8:
    // 0x199cc8: 0x3c031200  lui         $v1, 0x1200
    ctx->pc = 0x199cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4608 << 16));
    // 0x199ccc: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x199cccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x199cd0: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x199cd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x199cd4: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x199cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
    // 0x199cd8: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x199cd8u;
    runtime->Store64(rdram, ctx, 0x12001000u, GPR_U64(ctx, 4));
    // 0x199cdc: 0x34421040  ori         $v0, $v0, 0x1040
    ctx->pc = 0x199cdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4160);
    // 0x199ce0: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x199ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x199ce4: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x199ce4u;
    runtime->Store64(rdram, ctx, 0x12001040u, GPR_U64(ctx, 0));
    // 0x199ce8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x199ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x199cec: 0x34843000  ori         $a0, $a0, 0x3000
    ctx->pc = 0x199cecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)12288);
    // 0x199cf0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x199cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x199cf4: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x199cf4u;
    runtime->Store32(rdram, ctx, 0x10003000u, GPR_U32(ctx, 5));
    // 0x199cf8: 0x34633c10  ori         $v1, $v1, 0x3C10
    ctx->pc = 0x199cf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)15376);
    // 0x199cfc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x199cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x199d00: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x199d00u;
    runtime->Store32(rdram, ctx, 0x10003C10u, GPR_U32(ctx, 5));
    // 0x199d04: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x199D04u;
    {
        const bool branch_taken_0x199d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199D04u;
        // 0x199d08: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199d04) {
            ctx->pc = 0x199F28u;
            goto label_199f28;
        }
    }
    ctx->pc = 0x199D0Cu;
label_199d0c:
    // 0x199d0c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x199d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x199d10: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x199d10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x199d14: 0x34639010  ori         $v1, $v1, 0x9010
    ctx->pc = 0x199d14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36880);
    // 0x199d18: 0x2a21024  and         $v0, $s5, $v0
    ctx->pc = 0x199d18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & GPR_U64(ctx, 2));
label_199d1c:
    // 0x199d1c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x199d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x199d20: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x199d20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x199d24: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x199d24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x199d28: 0x34429000  ori         $v0, $v0, 0x9000
    ctx->pc = 0x199d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36864);
    // 0x199d2c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x199d2cu;
    runtime->Store32(rdram, ctx, 0x10009000u, GPR_U32(ctx, 4));
    // 0x199d30: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x199d30u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10009000u));
    // 0x199d34: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x199d34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x199d38: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x199D38u;
    {
        const bool branch_taken_0x199d38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x199D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199D38u;
        // 0x199d3c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199d38) {
            ctx->pc = 0x199D6Cu;
            goto label_199d6c;
        }
    }
    ctx->pc = 0x199D40u;
    // 0x199d40: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x199d40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x199d44: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x199d44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x199d48: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x199d48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    // 0x199d4c: 0x0  nop
    ctx->pc = 0x199d4cu;
    // NOP
label_199d50:
    // 0x199d50: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x199d50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x199d54: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x199D54u;
    {
        const bool branch_taken_0x199d54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x199D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199D54u;
        // 0x199d58: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199d54) {
            ctx->pc = 0x199CACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_199cac;
        }
    }
    ctx->pc = 0x199D5Cu;
    // 0x199d5c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x199d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x199d60: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x199d60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x199d64: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x199D64u;
    {
        const bool branch_taken_0x199d64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x199D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199D64u;
        // 0x199d68: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199d64) {
            ctx->pc = 0x199D50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_199d50;
        }
    }
    ctx->pc = 0x199D6Cu;
label_199d6c:
    // 0x199d6c: 0x1220001d  beqz        $s1, . + 4 + (0x1D << 2)
    ctx->pc = 0x199D6Cu;
    {
        const bool branch_taken_0x199d6c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x199D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199D6Cu;
        // 0x199d70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199d6c) {
            ctx->pc = 0x199DE4u;
            goto label_199de4;
        }
    }
    ctx->pc = 0x199D74u;
    // 0x199d74: 0x3c091000  lui         $t1, 0x1000
    ctx->pc = 0x199d74u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4096 << 16));
    // 0x199d78: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x199d78u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
    // 0x199d7c: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x199d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x199d80: 0x35293c00  ori         $t1, $t1, 0x3C00
    ctx->pc = 0x199d80u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)15360);
    // 0x199d84: 0x553021  addu        $a2, $v0, $s5
    ctx->pc = 0x199d84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x199d88: 0x3c0a1f00  lui         $t2, 0x1F00
    ctx->pc = 0x199d88u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)7936 << 16));
    // 0x199d8c: 0x35085000  ori         $t0, $t0, 0x5000
    ctx->pc = 0x199d8cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)20480);
label_199d90:
    // 0x199d90: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x199d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x199d94: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x199d94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x199d98: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x199D98u;
    {
        const bool branch_taken_0x199d98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x199D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199D98u;
        // 0x199d9c: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199d98) {
            ctx->pc = 0x199DCCu;
            goto label_199dcc;
        }
    }
    ctx->pc = 0x199DA0u;
    // 0x199da0: 0x3c070100  lui         $a3, 0x100
    ctx->pc = 0x199da0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)256 << 16));
    // 0x199da4: 0x34633c00  ori         $v1, $v1, 0x3C00
    ctx->pc = 0x199da4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)15360);
    // 0x199da8: 0x3c041f00  lui         $a0, 0x1F00
    ctx->pc = 0x199da8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)7936 << 16));
    // 0x199dac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x199dacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_199db0:
    // 0x199db0: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x199db0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x199db4: 0x1440ffc0  bnez        $v0, . + 4 + (-0x40 << 2)
    ctx->pc = 0x199DB4u;
    {
        const bool branch_taken_0x199db4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x199DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199DB4u;
        // 0x199db8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199db4) {
            ctx->pc = 0x199CB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_199cb8;
        }
    }
    ctx->pc = 0x199DBCu;
    // 0x199dbc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x199dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x199dc0: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x199dc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x199dc4: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x199DC4u;
    {
        const bool branch_taken_0x199dc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x199DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199DC4u;
        // 0x199dc8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199dc4) {
            ctx->pc = 0x199DB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_199db0;
        }
    }
    ctx->pc = 0x199DCCu;
label_199dcc:
    // 0x199dcc: 0x79020000  lq          $v0, 0x0($t0)
    ctx->pc = 0x199dccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x199dd0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x199dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x199dd4: 0xb1182a  slt         $v1, $a1, $s1
    ctx->pc = 0x199dd4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x199dd8: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x199dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x199ddc: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x199DDCu;
    {
        const bool branch_taken_0x199ddc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x199DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199DDCu;
        // 0x199de0: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199ddc) {
            ctx->pc = 0x199D90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_199d90;
        }
    }
    ctx->pc = 0x199DE4u;
label_199de4:
    // 0x199de4: 0x1260003c  beqz        $s3, . + 4 + (0x3C << 2)
    ctx->pc = 0x199DE4u;
    {
        const bool branch_taken_0x199de4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x199DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199DE4u;
        // 0x199de8: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199de4) {
            ctx->pc = 0x199ED8u;
            goto label_199ed8;
        }
    }
    ctx->pc = 0x199DECu;
    // 0x199dec: 0x3c041f00  lui         $a0, 0x1F00
    ctx->pc = 0x199decu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)7936 << 16));
    // 0x199df0: 0x34423c00  ori         $v0, $v0, 0x3C00
    ctx->pc = 0x199df0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15360);
    // 0x199df4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x199df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x199df8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x199df8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x199dfc: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x199DFCu;
    {
        const bool branch_taken_0x199dfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x199E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199DFCu;
        // 0x199e00: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199dfc) {
            ctx->pc = 0x199E30u;
            goto label_199e30;
        }
    }
    ctx->pc = 0x199E04u;
    // 0x199e04: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x199e04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x199e08: 0x34633c00  ori         $v1, $v1, 0x3C00
    ctx->pc = 0x199e08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)15360);
    // 0x199e0c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x199e0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_199e10:
    // 0x199e10: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x199e10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x199e14: 0x1440ffa8  bnez        $v0, . + 4 + (-0x58 << 2)
    ctx->pc = 0x199E14u;
    {
        const bool branch_taken_0x199e14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x199E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199E14u;
        // 0x199e18: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199e14) {
            ctx->pc = 0x199CB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_199cb8;
        }
    }
    ctx->pc = 0x199E1Cu;
    // 0x199e1c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x199e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x199e20: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x199e20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x199e24: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x199E24u;
    {
        const bool branch_taken_0x199e24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x199E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199E24u;
        // 0x199e28: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199e24) {
            ctx->pc = 0x199E10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_199e10;
        }
    }
    ctx->pc = 0x199E2Cu;
    // 0x199e2c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x199e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_199e30:
    // 0x199e30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x199e30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199e34: 0x34635000  ori         $v1, $v1, 0x5000
    ctx->pc = 0x199e34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20480);
    // 0x199e38: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x199e38u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x199e3c: 0x1260000b  beqz        $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x199E3Cu;
    {
        const bool branch_taken_0x199e3c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x199E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199E3Cu;
        // 0x199e40: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199e3c) {
            ctx->pc = 0x199E6Cu;
            goto label_199e6c;
        }
    }
    ctx->pc = 0x199E44u;
    // 0x199e44: 0x2513021  addu        $a2, $s2, $s1
    ctx->pc = 0x199e44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
label_199e48:
    // 0x199e48: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x199e48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x199e4c: 0x3a51021  addu        $v0, $sp, $a1
    ctx->pc = 0x199e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 5)));
    // 0x199e50: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x199e50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x199e54: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x199e54u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x199e58: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x199e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x199e5c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x199e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x199e60: 0xb3102a  slt         $v0, $a1, $s3
    ctx->pc = 0x199e60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x199e64: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x199E64u;
    {
        const bool branch_taken_0x199e64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x199E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199E64u;
        // 0x199e68: 0xa0640000  sb          $a0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199e64) {
            ctx->pc = 0x199E48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_199e48;
        }
    }
    ctx->pc = 0x199E6Cu;
label_199e6c:
    // 0x199e6c: 0x1ac0001a  blez        $s6, . + 4 + (0x1A << 2)
    ctx->pc = 0x199E6Cu;
    {
        const bool branch_taken_0x199e6c = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x199E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199E6Cu;
        // 0x199e70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199e6c) {
            ctx->pc = 0x199ED8u;
            goto label_199ed8;
        }
    }
    ctx->pc = 0x199E74u;
    // 0x199e74: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x199e74u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
    // 0x199e78: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x199e78u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x199e7c: 0x35083c00  ori         $t0, $t0, 0x3C00
    ctx->pc = 0x199e7cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)15360);
    // 0x199e80: 0x3c091f00  lui         $t1, 0x1F00
    ctx->pc = 0x199e80u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)7936 << 16));
    // 0x199e84: 0x34e75000  ori         $a3, $a3, 0x5000
    ctx->pc = 0x199e84u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)20480);
label_199e88:
    // 0x199e88: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x199e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x199e8c: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x199e8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x199e90: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x199E90u;
    {
        const bool branch_taken_0x199e90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x199E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199E90u;
        // 0x199e94: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199e90) {
            ctx->pc = 0x199EC4u;
            goto label_199ec4;
        }
    }
    ctx->pc = 0x199E98u;
    // 0x199e98: 0x3c060100  lui         $a2, 0x100
    ctx->pc = 0x199e98u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)256 << 16));
    // 0x199e9c: 0x34633c00  ori         $v1, $v1, 0x3C00
    ctx->pc = 0x199e9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)15360);
    // 0x199ea0: 0x3c041f00  lui         $a0, 0x1F00
    ctx->pc = 0x199ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)7936 << 16));
    // 0x199ea4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x199ea4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_199ea8:
    // 0x199ea8: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x199ea8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x199eac: 0x1440ff82  bnez        $v0, . + 4 + (-0x7E << 2)
    ctx->pc = 0x199EACu;
    {
        const bool branch_taken_0x199eac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x199EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199EACu;
        // 0x199eb0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199eac) {
            ctx->pc = 0x199CB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_199cb8;
        }
    }
    ctx->pc = 0x199EB4u;
    // 0x199eb4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x199eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x199eb8: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x199eb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x199ebc: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x199EBCu;
    {
        const bool branch_taken_0x199ebc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x199EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199EBCu;
        // 0x199ec0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199ebc) {
            ctx->pc = 0x199EA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_199ea8;
        }
    }
    ctx->pc = 0x199EC4u;
label_199ec4:
    // 0x199ec4: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x199ec4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x199ec8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x199ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x199ecc: 0xb6182a  slt         $v1, $a1, $s6
    ctx->pc = 0x199eccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x199ed0: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x199ED0u;
    {
        const bool branch_taken_0x199ed0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x199ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199ED0u;
        // 0x199ed4: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199ed0) {
            ctx->pc = 0x199E88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_199e88;
        }
    }
    ctx->pc = 0x199ED8u;
label_199ed8:
    // 0x199ed8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x199ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x199edc: 0x3c031200  lui         $v1, 0x1200
    ctx->pc = 0x199edcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4608 << 16));
    // 0x199ee0: 0x34423c00  ori         $v0, $v0, 0x3C00
    ctx->pc = 0x199ee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15360);
    // 0x199ee4: 0x34631040  ori         $v1, $v1, 0x1040
    ctx->pc = 0x199ee4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4160);
    // 0x199ee8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x199ee8u;
    runtime->Store32(rdram, ctx, 0x10003C00u, GPR_U32(ctx, 0));
    // 0x199eec: 0x160202d  daddu       $a0, $t3, $zero
    ctx->pc = 0x199eecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199ef0: 0xc0692d8  jal         func_1A4B60
    ctx->pc = 0x199EF0u;
    SET_GPR_U32(ctx, 31, 0x199EF8u);
    ctx->pc = 0x199EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199EF0u;
    // 0x199ef4: 0xfc600000  sd          $zero, 0x0($v1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4B60u, 0x199EF0u, 0x199EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199EF8u;
label_199ef8:
    // 0x199ef8: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x199ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
    // 0x199efc: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x199efcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
    // 0x199f00: 0x246357e0  addiu       $v1, $v1, 0x57E0
    ctx->pc = 0x199f00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22496));
    // 0x199f04: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x199f04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x199f08: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x199f08u;
    SET_GPR_VEC(ctx, 5, FAST_READ128(0x2857E0u));
    // 0x199f0c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x199f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x199f10: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x199f10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x199f14: 0xfc440000  sd          $a0, 0x0($v0)
    ctx->pc = 0x199f14u;
    runtime->Store64(rdram, ctx, 0x12001000u, GPR_U64(ctx, 4));
    // 0x199f18: 0x34635000  ori         $v1, $v1, 0x5000
    ctx->pc = 0x199f18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)20480);
    // 0x199f1c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x199f1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199f20: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x199f20u;
    runtime->Store128(rdram, ctx, 0x10005000u, GPR_VEC(ctx, 5));
label_199f24:
    // 0x199f24: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x199f24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_199f28:
    // 0x199f28: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x199f28u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x199f2c: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x199f2cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x199f30: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x199f30u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x199f34: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x199f34u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x199f38: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x199f38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x199f3c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x199f3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x199f40: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x199f40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x199f44u;
}
