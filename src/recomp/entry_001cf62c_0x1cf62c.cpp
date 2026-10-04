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

// Function: entry_001cf62c
// Address: 0x1cf62c - 0x1cf910
void entry_001cf62c_0x1cf62c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf62c_0x1cf62c");
#endif

    switch (ctx->pc) {
        case 0x1cf774u: goto label_1cf774;
        default: break;
    }

    ctx->pc = 0x1cf62cu;

    // 0x1cf62c: 0x84a7021c  lh          $a3, 0x21C($a1)
    ctx->pc = 0x1cf62cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 540)));
    // 0x1cf630: 0x8c890004  lw          $t1, 0x4($a0)
    ctx->pc = 0x1cf630u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1cf634: 0x127082a  slt         $at, $t1, $a3
    ctx->pc = 0x1cf634u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1cf638: 0xe1480a  movz        $t1, $a3, $at
    ctx->pc = 0x1cf638u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 7));
    // 0x1cf63c: 0x9082a  slt         $at, $zero, $t1
    ctx->pc = 0x1cf63cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x1cf640: 0x1480a  movz        $t1, $zero, $at
    ctx->pc = 0x1cf640u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
    // 0x1cf644: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x1cf644u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1cf648: 0x10e9000a  beq         $a3, $t1, . + 4 + (0xA << 2)
    ctx->pc = 0x1CF648u;
    {
        const bool branch_taken_0x1cf648 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 9));
        if (branch_taken_0x1cf648) {
            ctx->pc = 0x1CF674u;
            goto label_1cf674;
        }
    }
    ctx->pc = 0x1CF650u;
    // 0x1cf650: 0xe94023  subu        $t0, $a3, $t1
    ctx->pc = 0x1cf650u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x1cf654: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x1cf654u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1cf658: 0x84040  sll         $t0, $t0, 1
    ctx->pc = 0x1cf658u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x1cf65c: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x1cf65cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x1cf660: 0xac87000c  sw          $a3, 0xC($a0)
    ctx->pc = 0x1cf660u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 7));
    // 0x1cf664: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x1cf664u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1cf668: 0x7082a  slt         $at, $zero, $a3
    ctx->pc = 0x1cf668u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1cf66c: 0x1380a  movz        $a3, $zero, $at
    ctx->pc = 0x1cf66cu;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
    // 0x1cf670: 0xac87000c  sw          $a3, 0xC($a0)
    ctx->pc = 0x1cf670u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 7));
label_1cf674:
    // 0x1cf674: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x1cf674u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1cf678: 0x18e00003  blez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CF678u;
    {
        const bool branch_taken_0x1cf678 = (GPR_S32(ctx, 7) <= 0);
        if (branch_taken_0x1cf678) {
            ctx->pc = 0x1CF688u;
            goto label_1cf688;
        }
    }
    ctx->pc = 0x1CF680u;
    // 0x1cf680: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x1cf680u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1cf684: 0xac87000c  sw          $a3, 0xC($a0)
    ctx->pc = 0x1cf684u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 7));
label_1cf688:
    // 0x1cf688: 0xac890008  sw          $t1, 0x8($a0)
    ctx->pc = 0x1cf688u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 9));
    // 0x1cf68c: 0x84a70252  lh          $a3, 0x252($a1)
    ctx->pc = 0x1cf68cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 594)));
    // 0x1cf690: 0x28e10002  slti        $at, $a3, 0x2
    ctx->pc = 0x1cf690u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1cf694: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CF694u;
    {
        const bool branch_taken_0x1cf694 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cf694) {
            ctx->pc = 0x1CF6A4u;
            goto label_1cf6a4;
        }
    }
    ctx->pc = 0x1CF69Cu;
    // 0x1cf69c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1CF69Cu;
    {
        const bool branch_taken_0x1cf69c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF69Cu;
        // 0x1cf6a0: 0xac870010  sw          $a3, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf69c) {
            ctx->pc = 0x1CF6ACu;
            goto label_1cf6ac;
        }
    }
    ctx->pc = 0x1CF6A4u;
label_1cf6a4:
    // 0x1cf6a4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cf6a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cf6a8: 0xac870010  sw          $a3, 0x10($a0)
    ctx->pc = 0x1cf6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 7));
label_1cf6ac:
    // 0x1cf6ac: 0x84a70222  lh          $a3, 0x222($a1)
    ctx->pc = 0x1cf6acu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 546)));
    // 0x1cf6b0: 0x8c880010  lw          $t0, 0x10($a0)
    ctx->pc = 0x1cf6b0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1cf6b4: 0x107082a  slt         $at, $t0, $a3
    ctx->pc = 0x1cf6b4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1cf6b8: 0xe1400a  movz        $t0, $a3, $at
    ctx->pc = 0x1cf6b8u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 7));
    // 0x1cf6bc: 0xac880014  sw          $t0, 0x14($a0)
    ctx->pc = 0x1cf6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 8));
    // 0x1cf6c0: 0x8c870014  lw          $a3, 0x14($a0)
    ctx->pc = 0x1cf6c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1cf6c4: 0x7082a  slt         $at, $zero, $a3
    ctx->pc = 0x1cf6c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1cf6c8: 0x1380a  movz        $a3, $zero, $at
    ctx->pc = 0x1cf6c8u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
    // 0x1cf6cc: 0xac870014  sw          $a3, 0x14($a0)
    ctx->pc = 0x1cf6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 7));
    // 0x1cf6d0: 0x8c880014  lw          $t0, 0x14($a0)
    ctx->pc = 0x1cf6d0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1cf6d4: 0x8c870010  lw          $a3, 0x10($a0)
    ctx->pc = 0x1cf6d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1cf6d8: 0x15070005  bne         $t0, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CF6D8u;
    {
        const bool branch_taken_0x1cf6d8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 7));
        if (branch_taken_0x1cf6d8) {
            ctx->pc = 0x1CF6F0u;
            goto label_1cf6f0;
        }
    }
    ctx->pc = 0x1CF6E0u;
    // 0x1cf6e0: 0x8c870018  lw          $a3, 0x18($a0)
    ctx->pc = 0x1cf6e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1cf6e4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1cf6e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1cf6e8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1CF6E8u;
    {
        const bool branch_taken_0x1cf6e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF6E8u;
        // 0x1cf6ec: 0xac870018  sw          $a3, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf6e8) {
            ctx->pc = 0x1CF6F4u;
            goto label_1cf6f4;
        }
    }
    ctx->pc = 0x1CF6F0u;
label_1cf6f0:
    // 0x1cf6f0: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x1cf6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
label_1cf6f4:
    // 0x1cf6f4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1cf6f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1cf6f8: 0x90274af6  lbu         $a3, 0x4AF6($at)
    ctx->pc = 0x1cf6f8u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)FAST_READ8(0x334AF6u));
    // 0x1cf6fc: 0x28e10029  slti        $at, $a3, 0x29
    ctx->pc = 0x1cf6fcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x1cf700: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x1CF700u;
    {
        const bool branch_taken_0x1cf700 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf700) {
            ctx->pc = 0x1CF748u;
            goto label_1cf748;
        }
    }
    ctx->pc = 0x1CF708u;
    // 0x1cf708: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1cf708u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1cf70c: 0x8c274948  lw          $a3, 0x4948($at)
    ctx->pc = 0x1cf70cu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x334948u));
    // 0x1cf710: 0x10e0000d  beqz        $a3, . + 4 + (0xD << 2)
    ctx->pc = 0x1CF710u;
    {
        const bool branch_taken_0x1cf710 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf710) {
            ctx->pc = 0x1CF748u;
            goto label_1cf748;
        }
    }
    ctx->pc = 0x1CF718u;
    // 0x1cf718: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1cf718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1cf71c: 0x90274998  lbu         $a3, 0x4998($at)
    ctx->pc = 0x1cf71cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)FAST_READ8(0x334998u));
    // 0x1cf720: 0x10e00009  beqz        $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CF720u;
    {
        const bool branch_taken_0x1cf720 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf720) {
            ctx->pc = 0x1CF748u;
            goto label_1cf748;
        }
    }
    ctx->pc = 0x1CF728u;
    // 0x1cf728: 0x8c880010  lw          $t0, 0x10($a0)
    ctx->pc = 0x1cf728u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1cf72c: 0x8c870014  lw          $a3, 0x14($a0)
    ctx->pc = 0x1cf72cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1cf730: 0x15070005  bne         $t0, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CF730u;
    {
        const bool branch_taken_0x1cf730 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 7));
        if (branch_taken_0x1cf730) {
            ctx->pc = 0x1CF748u;
            goto label_1cf748;
        }
    }
    ctx->pc = 0x1CF738u;
    // 0x1cf738: 0x8c870038  lw          $a3, 0x38($a0)
    ctx->pc = 0x1cf738u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x1cf73c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1cf73cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1cf740: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1CF740u;
    {
        const bool branch_taken_0x1cf740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF740u;
        // 0x1cf744: 0xac870038  sw          $a3, 0x38($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf740) {
            ctx->pc = 0x1CF74Cu;
            goto label_1cf74c;
        }
    }
    ctx->pc = 0x1CF748u;
label_1cf748:
    // 0x1cf748: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x1cf748u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
label_1cf74c:
    // 0x1cf74c: 0x84a70250  lh          $a3, 0x250($a1)
    ctx->pc = 0x1cf74cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 592)));
    // 0x1cf750: 0x28e10064  slti        $at, $a3, 0x64
    ctx->pc = 0x1cf750u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)100) ? 1 : 0);
    // 0x1cf754: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1CF754u;
    {
        const bool branch_taken_0x1cf754 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cf754) {
            ctx->pc = 0x1CF760u;
            goto label_1cf760;
        }
    }
    ctx->pc = 0x1CF75Cu;
    // 0x1cf75c: 0x24070063  addiu       $a3, $zero, 0x63
    ctx->pc = 0x1cf75cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
label_1cf760:
    // 0x1cf760: 0xac87001c  sw          $a3, 0x1C($a0)
    ctx->pc = 0x1cf760u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 7));
    // 0x1cf764: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1cf764u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf768: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x1cf768u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf76c: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x1cf76cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cf770: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1cf770u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1cf774:
    // 0x1cf774: 0x15600003  bnez        $t3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CF774u;
    {
        const bool branch_taken_0x1cf774 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cf774) {
            ctx->pc = 0x1CF784u;
            goto label_1cf784;
        }
    }
    ctx->pc = 0x1CF77Cu;
    // 0x1cf77c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1CF77Cu;
    {
        const bool branch_taken_0x1cf77c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF77Cu;
        // 0x1cf780: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf77c) {
            ctx->pc = 0x1CF7A4u;
            goto label_1cf7a4;
        }
    }
    ctx->pc = 0x1CF784u;
label_1cf784:
    // 0x1cf784: 0x0  nop
    ctx->pc = 0x1cf784u;
    // NOP
    // 0x1cf788: 0x156a0003  bne         $t3, $t2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CF788u;
    {
        const bool branch_taken_0x1cf788 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 10));
        if (branch_taken_0x1cf788) {
            ctx->pc = 0x1CF798u;
            goto label_1cf798;
        }
    }
    ctx->pc = 0x1CF790u;
    // 0x1cf790: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1CF790u;
    {
        const bool branch_taken_0x1cf790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF790u;
        // 0x1cf794: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf790) {
            ctx->pc = 0x1CF7A4u;
            goto label_1cf7a4;
        }
    }
    ctx->pc = 0x1CF798u;
label_1cf798:
    // 0x1cf798: 0x15690002  bne         $t3, $t1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1CF798u;
    {
        const bool branch_taken_0x1cf798 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 9));
        if (branch_taken_0x1cf798) {
            ctx->pc = 0x1CF7A4u;
            goto label_1cf7a4;
        }
    }
    ctx->pc = 0x1CF7A0u;
    // 0x1cf7a0: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1cf7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1cf7a4:
    // 0x1cf7a4: 0x0  nop
    ctx->pc = 0x1cf7a4u;
    // NOP
    // 0x1cf7a8: 0x8cc70198  lw          $a3, 0x198($a2)
    ctx->pc = 0x1cf7a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 408)));
    // 0x1cf7ac: 0xe33824  and         $a3, $a3, $v1
    ctx->pc = 0x1cf7acu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x1cf7b0: 0x10e00023  beqz        $a3, . + 4 + (0x23 << 2)
    ctx->pc = 0x1CF7B0u;
    {
        const bool branch_taken_0x1cf7b0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf7b0) {
            ctx->pc = 0x1CF840u;
            goto label_1cf840;
        }
    }
    ctx->pc = 0x1CF7B8u;
    // 0x1cf7b8: 0xac3821  addu        $a3, $a1, $t4
    ctx->pc = 0x1cf7b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x1cf7bc: 0x84ed0202  lh          $t5, 0x202($a3)
    ctx->pc = 0x1cf7bcu;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 514)));
    // 0x1cf7c0: 0x29a10002  slti        $at, $t5, 0x2
    ctx->pc = 0x1cf7c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1cf7c4: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CF7C4u;
    {
        const bool branch_taken_0x1cf7c4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CF7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF7C4u;
        // 0x1cf7c8: 0x24e80200  addiu       $t0, $a3, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf7c4) {
            ctx->pc = 0x1CF7D4u;
            goto label_1cf7d4;
        }
    }
    ctx->pc = 0x1CF7CCu;
    // 0x1cf7cc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1CF7CCu;
    {
        const bool branch_taken_0x1cf7cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF7CCu;
        // 0x1cf7d0: 0x850e0000  lh          $t6, 0x0($t0) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf7cc) {
            ctx->pc = 0x1CF7DCu;
            goto label_1cf7dc;
        }
    }
    ctx->pc = 0x1CF7D4u;
label_1cf7d4:
    // 0x1cf7d4: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x1cf7d4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cf7d8: 0x850e0000  lh          $t6, 0x0($t0)
    ctx->pc = 0x1cf7d8u;
    SET_GPR_S32(ctx, 14, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_1cf7dc:
    // 0x1cf7dc: 0x1ae082a  slt         $at, $t5, $t6
    ctx->pc = 0x1cf7dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 14)) ? 1 : 0);
    // 0x1cf7e0: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1CF7E0u;
    {
        const bool branch_taken_0x1cf7e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf7e0) {
            ctx->pc = 0x1CF7ECu;
            goto label_1cf7ec;
        }
    }
    ctx->pc = 0x1CF7E8u;
    // 0x1cf7e8: 0x1a0702d  daddu       $t6, $t5, $zero
    ctx->pc = 0x1cf7e8u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
label_1cf7ec:
    // 0x1cf7ec: 0xe082a  slt         $at, $zero, $t6
    ctx->pc = 0x1cf7ecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 14)) ? 1 : 0);
    // 0x1cf7f0: 0x1700a  movz        $t6, $zero, $at
    ctx->pc = 0x1cf7f0u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 14, GPR_VEC(ctx, 0));
    // 0x1cf7f4: 0xe3900  sll         $a3, $t6, 4
    ctx->pc = 0x1cf7f4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 14), 4));
    // 0x1cf7f8: 0x8c7821  addu        $t7, $a0, $t4
    ctx->pc = 0x1cf7f8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
    // 0x1cf7fc: 0xee4023  subu        $t0, $a3, $t6
    ctx->pc = 0x1cf7fcu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 14)));
    // 0x1cf800: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x1cf800u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1cf804: 0xe3840  sll         $a3, $t6, 1
    ctx->pc = 0x1cf804u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 14), 1));
    // 0x1cf808: 0x10d001a  div         $zero, $t0, $t5
    ctx->pc = 0x1cf808u;
    { int32_t divisor = GPR_S32(ctx, 13);    int32_t dividend = GPR_S32(ctx, 8);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1cf80c: 0xee3821  addu        $a3, $a3, $t6
    ctx->pc = 0x1cf80cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 14)));
    // 0x1cf810: 0xed082a  slt         $at, $a3, $t5
    ctx->pc = 0x1cf810u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x1cf814: 0x4012  mflo        $t0
    ctx->pc = 0x1cf814u;
    SET_GPR_U64(ctx, 8, ctx->lo);
    // 0x1cf818: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CF818u;
    {
        const bool branch_taken_0x1cf818 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF818u;
        // 0x1cf81c: 0xade80020  sw          $t0, 0x20($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 32), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf818) {
            ctx->pc = 0x1CF830u;
            goto label_1cf830;
        }
    }
    ctx->pc = 0x1CF820u;
    // 0x1cf820: 0x8de7002c  lw          $a3, 0x2C($t7)
    ctx->pc = 0x1cf820u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 44)));
    // 0x1cf824: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x1cf824u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x1cf828: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1CF828u;
    {
        const bool branch_taken_0x1cf828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF828u;
        // 0x1cf82c: 0xade7002c  sw          $a3, 0x2C($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 44), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf828) {
            ctx->pc = 0x1CF84Cu;
            goto label_1cf84c;
        }
    }
    ctx->pc = 0x1CF830u;
label_1cf830:
    // 0x1cf830: 0x8de7002c  lw          $a3, 0x2C($t7)
    ctx->pc = 0x1cf830u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 44)));
    // 0x1cf834: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1cf834u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1cf838: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1CF838u;
    {
        const bool branch_taken_0x1cf838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF838u;
        // 0x1cf83c: 0xade7002c  sw          $a3, 0x2C($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 44), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf838) {
            ctx->pc = 0x1CF84Cu;
            goto label_1cf84c;
        }
    }
    ctx->pc = 0x1CF840u;
label_1cf840:
    // 0x1cf840: 0x8c3821  addu        $a3, $a0, $t4
    ctx->pc = 0x1cf840u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
    // 0x1cf844: 0xace00020  sw          $zero, 0x20($a3)
    ctx->pc = 0x1cf844u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 32), GPR_U32(ctx, 0));
    // 0x1cf848: 0xace0002c  sw          $zero, 0x2C($a3)
    ctx->pc = 0x1cf848u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 44), GPR_U32(ctx, 0));
label_1cf84c:
    // 0x1cf84c: 0x0  nop
    ctx->pc = 0x1cf84cu;
    // NOP
    // 0x1cf850: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x1cf850u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x1cf854: 0x29670003  slti        $a3, $t3, 0x3
    ctx->pc = 0x1cf854u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1cf858: 0x14e0ffc6  bnez        $a3, . + 4 + (-0x3A << 2)
    ctx->pc = 0x1CF858u;
    {
        const bool branch_taken_0x1cf858 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CF85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF858u;
        // 0x1cf85c: 0x258c0004  addiu       $t4, $t4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf858) {
            ctx->pc = 0x1CF774u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cf774;
        }
    }
    ctx->pc = 0x1CF860u;
    // 0x1cf860: 0x8cc60198  lw          $a2, 0x198($a2)
    ctx->pc = 0x1cf860u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 408)));
    // 0x1cf864: 0x30c30004  andi        $v1, $a2, 0x4
    ctx->pc = 0x1cf864u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4);
    // 0x1cf868: 0x14600025  bnez        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x1CF868u;
    {
        const bool branch_taken_0x1cf868 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cf868) {
            ctx->pc = 0x1CF900u;
            goto label_1cf900;
        }
    }
    ctx->pc = 0x1CF870u;
    // 0x1cf870: 0x30c32000  andi        $v1, $a2, 0x2000
    ctx->pc = 0x1cf870u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)8192);
    // 0x1cf874: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x1CF874u;
    {
        const bool branch_taken_0x1cf874 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf874) {
            ctx->pc = 0x1CF900u;
            goto label_1cf900;
        }
    }
    ctx->pc = 0x1CF87Cu;
    // 0x1cf87c: 0x84a6027e  lh          $a2, 0x27E($a1)
    ctx->pc = 0x1cf87cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 638)));
    // 0x1cf880: 0x28c10002  slti        $at, $a2, 0x2
    ctx->pc = 0x1cf880u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1cf884: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CF884u;
    {
        const bool branch_taken_0x1cf884 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CF888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF884u;
        // 0x1cf888: 0x24a3027c  addiu       $v1, $a1, 0x27C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 636));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf884) {
            ctx->pc = 0x1CF894u;
            goto label_1cf894;
        }
    }
    ctx->pc = 0x1CF88Cu;
    // 0x1cf88c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1CF88Cu;
    {
        const bool branch_taken_0x1cf88c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF88Cu;
        // 0x1cf890: 0x84670000  lh          $a3, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf88c) {
            ctx->pc = 0x1CF89Cu;
            goto label_1cf89c;
        }
    }
    ctx->pc = 0x1CF894u;
label_1cf894:
    // 0x1cf894: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1cf894u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cf898: 0x84670000  lh          $a3, 0x0($v1)
    ctx->pc = 0x1cf898u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_1cf89c:
    // 0x1cf89c: 0xc7082a  slt         $at, $a2, $a3
    ctx->pc = 0x1cf89cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1cf8a0: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1CF8A0u;
    {
        const bool branch_taken_0x1cf8a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf8a0) {
            ctx->pc = 0x1CF8ACu;
            goto label_1cf8ac;
        }
    }
    ctx->pc = 0x1CF8A8u;
    // 0x1cf8a8: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1cf8a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1cf8ac:
    // 0x1cf8ac: 0x7082a  slt         $at, $zero, $a3
    ctx->pc = 0x1cf8acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1cf8b0: 0x1380a  movz        $a3, $zero, $at
    ctx->pc = 0x1cf8b0u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
    // 0x1cf8b4: 0x72900  sll         $a1, $a3, 4
    ctx->pc = 0x1cf8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x1cf8b8: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x1cf8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x1cf8bc: 0xa72823  subu        $a1, $a1, $a3
    ctx->pc = 0x1cf8bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x1cf8c0: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1cf8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1cf8c4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1cf8c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1cf8c8: 0x66082a  slt         $at, $v1, $a2
    ctx->pc = 0x1cf8c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1cf8cc: 0xa6001a  div         $zero, $a1, $a2
    ctx->pc = 0x1cf8ccu;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1cf8d0: 0x0  nop
    ctx->pc = 0x1cf8d0u;
    // NOP
    // 0x1cf8d4: 0x0  nop
    ctx->pc = 0x1cf8d4u;
    // NOP
    // 0x1cf8d8: 0x2812  mflo        $a1
    ctx->pc = 0x1cf8d8u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x1cf8dc: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CF8DCu;
    {
        const bool branch_taken_0x1cf8dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF8DCu;
        // 0x1cf8e0: 0xac850020  sw          $a1, 0x20($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf8dc) {
            ctx->pc = 0x1CF8F4u;
            goto label_1cf8f4;
        }
    }
    ctx->pc = 0x1CF8E4u;
    // 0x1cf8e4: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x1cf8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x1cf8e8: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1cf8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1cf8ec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1CF8ECu;
    {
        const bool branch_taken_0x1cf8ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF8ECu;
        // 0x1cf8f0: 0xac83002c  sw          $v1, 0x2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf8ec) {
            ctx->pc = 0x1CF900u;
            goto label_1cf900;
        }
    }
    ctx->pc = 0x1CF8F4u;
label_1cf8f4:
    // 0x1cf8f4: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x1cf8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x1cf8f8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1cf8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1cf8fc: 0xac83002c  sw          $v1, 0x2C($a0)
    ctx->pc = 0x1cf8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 3));
label_1cf900:
    // 0x1cf900: 0x3e00008  jr          $ra
    ctx->pc = 0x1CF900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF900u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CF908u;
    // 0x1cf908: 0x0  nop
    ctx->pc = 0x1cf908u;
    // NOP
    // 0x1cf90c: 0x0  nop
    ctx->pc = 0x1cf90cu;
    // NOP
    ctx->pc = 0x1cf910u;
}
