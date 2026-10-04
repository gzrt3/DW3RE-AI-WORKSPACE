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

// Function: FUN_001e3670
// Address: 0x1e3670 - 0x1e3838
void FUN_001e3670_0x1e3670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e3670_0x1e3670");
#endif

    switch (ctx->pc) {
        case 0x1e36e4u: goto label_1e36e4;
        case 0x1e3834u: goto label_1e3834;
        default: break;
    }

    ctx->pc = 0x1e3670u;

    // 0x1e3670: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e3670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1e3674: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e3674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1e3678: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e3678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1e367c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e367cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e3680: 0x8f838d50  lw          $v1, -0x72B0($gp)
    ctx->pc = 0x1e3680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937936)));
    // 0x1e3684: 0x1060006b  beqz        $v1, . + 4 + (0x6B << 2)
    ctx->pc = 0x1E3684u;
    {
        const bool branch_taken_0x1e3684 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3684u;
        // 0x1e3688: 0x3c017000  lui         $at, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3684) {
            ctx->pc = 0x1E3834u;
            goto label_1e3834;
        }
    }
    ctx->pc = 0x1E368Cu;
    // 0x1e368c: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1e368cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x1e3690: 0x8c233ffc  lw          $v1, 0x3FFC($at)
    ctx->pc = 0x1e3690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 16380)));
    // 0x1e3694: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x1e3694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
    // 0x1e3698: 0x27828d58  addiu       $v0, $gp, -0x72A8
    ctx->pc = 0x1e3698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937944));
    // 0x1e369c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1e369cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e36a0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1e36a0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e36a4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1e36a4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e36a8: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x1e36a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x1e36ac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1e36acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e36b0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1e36b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1e36b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e36b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e36b8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1e36b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e36bc: 0x0  nop
    ctx->pc = 0x1e36bcu;
    // NOP
    // 0x1e36c0: 0x3c06004b  lui         $a2, 0x4B
    ctx->pc = 0x1e36c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)75 << 16));
    // 0x1e36c4: 0x3c025397  lui         $v0, 0x5397
    ctx->pc = 0x1e36c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21399 << 16));
    // 0x1e36c8: 0x3c08004b  lui         $t0, 0x4B
    ctx->pc = 0x1e36c8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)75 << 16));
    // 0x1e36cc: 0x24070011  addiu       $a3, $zero, 0x11
    ctx->pc = 0x1e36ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1e36d0: 0x24c62900  addiu       $a2, $a2, 0x2900
    ctx->pc = 0x1e36d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10496));
    // 0x1e36d4: 0x240300e0  addiu       $v1, $zero, 0xE0
    ctx->pc = 0x1e36d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x1e36d8: 0x3442829d  ori         $v0, $v0, 0x829D
    ctx->pc = 0x1e36d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)33437);
    // 0x1e36dc: 0x24100038  addiu       $s0, $zero, 0x38
    ctx->pc = 0x1e36dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x1e36e0: 0x250828a0  addiu       $t0, $t0, 0x28A0
    ctx->pc = 0x1e36e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 10400));
label_1e36e4:
    // 0x1e36e4: 0x8f8d8db8  lw          $t5, -0x7248($gp)
    ctx->pc = 0x1e36e4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
    // 0x1e36e8: 0x8f8c8d4c  lw          $t4, -0x72B4($gp)
    ctx->pc = 0x1e36e8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937932)));
    // 0x1e36ec: 0x8f8e8218  lw          $t6, -0x7DE8($gp)
    ctx->pc = 0x1e36ecu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935064)));
    // 0x1e36f0: 0x18d6021  addu        $t4, $t4, $t5
    ctx->pc = 0x1e36f0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 13)));
    // 0x1e36f4: 0x258c0005  addiu       $t4, $t4, 0x5
    ctx->pc = 0x1e36f4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 5));
    // 0x1e36f8: 0x1896023  subu        $t4, $t4, $t1
    ctx->pc = 0x1e36f8u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 9)));
    // 0x1e36fc: 0x18d001a  div         $zero, $t4, $t5
    ctx->pc = 0x1e36fcu;
    { int32_t divisor = GPR_S32(ctx, 13);    int32_t dividend = GPR_S32(ctx, 12);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1e3700: 0x0  nop
    ctx->pc = 0x1e3700u;
    // NOP
    // 0x1e3704: 0x0  nop
    ctx->pc = 0x1e3704u;
    // NOP
    // 0x1e3708: 0x6010  mfhi        $t4
    ctx->pc = 0x1e3708u;
    SET_GPR_U64(ctx, 12, ctx->hi);
    // 0x1e370c: 0xc6080  sll         $t4, $t4, 2
    ctx->pc = 0x1e370cu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x1e3710: 0x10c6021  addu        $t4, $t0, $t4
    ctx->pc = 0x1e3710u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 12)));
    // 0x1e3714: 0x15c70003  bne         $t6, $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E3714u;
    {
        const bool branch_taken_0x1e3714 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 7));
        ctx->pc = 0x1E3718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3714u;
        // 0x1e3718: 0x8d8c0000  lw          $t4, 0x0($t4) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3714) {
            ctx->pc = 0x1E3724u;
            goto label_1e3724;
        }
    }
    ctx->pc = 0x1E371Cu;
    // 0x1e371c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E371Cu;
    {
        const bool branch_taken_0x1e371c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E371Cu;
        // 0x1e3720: 0x240d0017  addiu       $t5, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e371c) {
            ctx->pc = 0x1E3728u;
            goto label_1e3728;
        }
    }
    ctx->pc = 0x1E3724u;
label_1e3724:
    // 0x1e3724: 0x240d0014  addiu       $t5, $zero, 0x14
    ctx->pc = 0x1e3724u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1e3728:
    // 0x1e3728: 0x158d0005  bne         $t4, $t5, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E3728u;
    {
        const bool branch_taken_0x1e3728 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 13));
        ctx->pc = 0x1E372Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3728u;
        // 0x1e372c: 0x3c01004b  lui         $at, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3728) {
            ctx->pc = 0x1E3740u;
            goto label_1e3740;
        }
    }
    ctx->pc = 0x1E3730u;
    // 0x1e3730: 0xaa6021  addu        $t4, $a1, $t2
    ctx->pc = 0x1e3730u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x1e3734: 0xdc2d2a20  ld          $t5, 0x2A20($at)
    ctx->pc = 0x1e3734u;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 1), 10784)));
    // 0x1e3738: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1E3738u;
    {
        const bool branch_taken_0x1e3738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E373Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3738u;
        // 0x1e373c: 0xfd8d0070  sd          $t5, 0x70($t4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 12), 112), GPR_U64(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3738) {
            ctx->pc = 0x1E378Cu;
            goto label_1e378c;
        }
    }
    ctx->pc = 0x1E3740u;
label_1e3740:
    // 0x1e3740: 0x15c7000c  bne         $t6, $a3, . + 4 + (0xC << 2)
    ctx->pc = 0x1E3740u;
    {
        const bool branch_taken_0x1e3740 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 7));
        if (branch_taken_0x1e3740) {
            ctx->pc = 0x1E3774u;
            goto label_1e3774;
        }
    }
    ctx->pc = 0x1E3748u;
    // 0x1e3748: 0x15800003  bnez        $t4, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E3748u;
    {
        const bool branch_taken_0x1e3748 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e3748) {
            ctx->pc = 0x1E3758u;
            goto label_1e3758;
        }
    }
    ctx->pc = 0x1E3750u;
    // 0x1e3750: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E3750u;
    {
        const bool branch_taken_0x1e3750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3750u;
        // 0x1e3754: 0x240c0023  addiu       $t4, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3750) {
            ctx->pc = 0x1E375Cu;
            goto label_1e375c;
        }
    }
    ctx->pc = 0x1E3758u;
label_1e3758:
    // 0x1e3758: 0x258c000c  addiu       $t4, $t4, 0xC
    ctx->pc = 0x1e3758u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 12));
label_1e375c:
    // 0x1e375c: 0xc68c0  sll         $t5, $t4, 3
    ctx->pc = 0x1e375cu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x1e3760: 0xcd6821  addu        $t5, $a2, $t5
    ctx->pc = 0x1e3760u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 13)));
    // 0x1e3764: 0xaa6021  addu        $t4, $a1, $t2
    ctx->pc = 0x1e3764u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x1e3768: 0xddad0000  ld          $t5, 0x0($t5)
    ctx->pc = 0x1e3768u;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x1e376c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1E376Cu;
    {
        const bool branch_taken_0x1e376c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E376Cu;
        // 0x1e3770: 0xfd8d0070  sd          $t5, 0x70($t4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 12), 112), GPR_U64(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e376c) {
            ctx->pc = 0x1E378Cu;
            goto label_1e378c;
        }
    }
    ctx->pc = 0x1E3774u;
label_1e3774:
    // 0x1e3774: 0x0  nop
    ctx->pc = 0x1e3774u;
    // NOP
    // 0x1e3778: 0xc60c0  sll         $t4, $t4, 3
    ctx->pc = 0x1e3778u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x1e377c: 0xcc6821  addu        $t5, $a2, $t4
    ctx->pc = 0x1e377cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x1e3780: 0xddad0060  ld          $t5, 0x60($t5)
    ctx->pc = 0x1e3780u;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 13), 96)));
    // 0x1e3784: 0xaa6021  addu        $t4, $a1, $t2
    ctx->pc = 0x1e3784u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x1e3788: 0xfd8d0070  sd          $t5, 0x70($t4)
    ctx->pc = 0x1e3788u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 112), GPR_U64(ctx, 13));
label_1e378c:
    // 0x1e378c: 0x0  nop
    ctx->pc = 0x1e378cu;
    // NOP
    // 0x1e3790: 0x8f8e8d48  lw          $t6, -0x72B8($gp)
    ctx->pc = 0x1e3790u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937928)));
    // 0x1e3794: 0x256fff98  addiu       $t7, $t3, -0x68
    ctx->pc = 0x1e3794u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967192));
    // 0x1e3798: 0xaa6021  addu        $t4, $a1, $t2
    ctx->pc = 0x1e3798u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
    // 0x1e379c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1e379cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1e37a0: 0x254a00a0  addiu       $t2, $t2, 0xA0
    ctx->pc = 0x1e37a0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 160));
    // 0x1e37a4: 0x292d0008  slti        $t5, $t1, 0x8
    ctx->pc = 0x1e37a4u;
    SET_GPR_U64(ctx, 13, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1e37a8: 0x256b0050  addiu       $t3, $t3, 0x50
    ctx->pc = 0x1e37a8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 80));
    // 0x1e37ac: 0x1cfc821  addu        $t9, $t6, $t7
    ctx->pc = 0x1e37acu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 15)));
    // 0x1e37b0: 0x272f0028  addiu       $t7, $t9, 0x28
    ctx->pc = 0x1e37b0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 25), 40));
    // 0x1e37b4: 0x1970c0  sll         $t6, $t9, 3
    ctx->pc = 0x1e37b4u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 25), 3));
    // 0x1e37b8: 0x6f8823  subu        $s1, $v1, $t7
    ctx->pc = 0x1e37b8u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 15)));
    // 0x1e37bc: 0x25d87900  addiu       $t8, $t6, 0x7900
    ctx->pc = 0x1e37bcu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 14), 30976));
    // 0x1e37c0: 0x117940  sll         $t7, $s1, 5
    ctx->pc = 0x1e37c0u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
    // 0x1e37c4: 0x272e0050  addiu       $t6, $t9, 0x50
    ctx->pc = 0x1e37c4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 25), 80));
    // 0x1e37c8: 0x22f7818  mult        $t7, $s1, $t7
    ctx->pc = 0x1e37c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
    // 0x1e37cc: 0xe70c0  sll         $t6, $t6, 3
    ctx->pc = 0x1e37ccu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 3));
    // 0x1e37d0: 0x25ce7900  addiu       $t6, $t6, 0x7900
    ctx->pc = 0x1e37d0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 30976));
    // 0x1e37d4: 0x4f0018  mult        $zero, $v0, $t7
    ctx->pc = 0x1e37d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1e37d8: 0xfcfc2  srl         $t9, $t7, 31
    ctx->pc = 0x1e37d8u;
    SET_GPR_S32(ctx, 25, (int32_t)SRL32(GPR_U32(ctx, 15), 31));
    // 0x1e37dc: 0x0  nop
    ctx->pc = 0x1e37dcu;
    // NOP
    // 0x1e37e0: 0x7810  mfhi        $t7
    ctx->pc = 0x1e37e0u;
    SET_GPR_U64(ctx, 15, ctx->hi);
    // 0x1e37e4: 0xf7b83  sra         $t7, $t7, 14
    ctx->pc = 0x1e37e4u;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 15), 14));
    // 0x1e37e8: 0x1f97821  addu        $t7, $t7, $t9
    ctx->pc = 0x1e37e8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 25)));
    // 0x1e37ec: 0x20f7823  subu        $t7, $s0, $t7
    ctx->pc = 0x1e37ecu;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 15)));
    // 0x1e37f0: 0xfc900  sll         $t9, $t7, 4
    ctx->pc = 0x1e37f0u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 15), 4));
    // 0x1e37f4: 0x27396c00  addiu       $t9, $t9, 0x6C00
    ctx->pc = 0x1e37f4u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 27648));
    // 0x1e37f8: 0x25ef00a0  addiu       $t7, $t7, 0xA0
    ctx->pc = 0x1e37f8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 160));
    // 0x1e37fc: 0xa5990090  sh          $t9, 0x90($t4)
    ctx->pc = 0x1e37fcu;
    WRITE16(ADD32(GPR_U32(ctx, 12), 144), (uint16_t)GPR_U32(ctx, 25));
    // 0x1e3800: 0xf7900  sll         $t7, $t7, 4
    ctx->pc = 0x1e3800u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 4));
    // 0x1e3804: 0xa5980092  sh          $t8, 0x92($t4)
    ctx->pc = 0x1e3804u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 146), (uint16_t)GPR_U32(ctx, 24));
    // 0x1e3808: 0x25ef6c00  addiu       $t7, $t7, 0x6C00
    ctx->pc = 0x1e3808u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 27648));
    // 0x1e380c: 0xad800094  sw          $zero, 0x94($t4)
    ctx->pc = 0x1e380cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 148), GPR_U32(ctx, 0));
    // 0x1e3810: 0xa58f00a0  sh          $t7, 0xA0($t4)
    ctx->pc = 0x1e3810u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 160), (uint16_t)GPR_U32(ctx, 15));
    // 0x1e3814: 0xa58e00a2  sh          $t6, 0xA2($t4)
    ctx->pc = 0x1e3814u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 162), (uint16_t)GPR_U32(ctx, 14));
    // 0x1e3818: 0x15a0ffb2  bnez        $t5, . + 4 + (-0x4E << 2)
    ctx->pc = 0x1E3818u;
    {
        const bool branch_taken_0x1e3818 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E381Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3818u;
        // 0x1e381c: 0xad8000a4  sw          $zero, 0xA4($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 164), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3818) {
            ctx->pc = 0x1E36E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e36e4;
        }
    }
    ctx->pc = 0x1E3820u;
    // 0x1e3820: 0x24060051  addiu       $a2, $zero, 0x51
    ctx->pc = 0x1e3820u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x1e3824: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e3824u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e3828: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1e3828u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e382c: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x1E382Cu;
    SET_GPR_U32(ctx, 31, 0x1E3834u);
    ctx->pc = 0x1E3830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E382Cu;
    // 0x1e3830: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1E382Cu, 0x1E3834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E3834u;
label_1e3834:
    // 0x1e3834: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e3834u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x1e3838u;
}
