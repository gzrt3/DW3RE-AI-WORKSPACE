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

// Function: FUN_001985a0
// Address: 0x1985a0 - 0x198808
void FUN_001985a0_0x1985a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001985a0_0x1985a0");
#endif

    switch (ctx->pc) {
        case 0x1985f0u: goto label_1985f0;
        case 0x1987e8u: goto label_1987e8;
        default: break;
    }

    ctx->pc = 0x1985a0u;

    // 0x1985a0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1985a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1985a4: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x1985a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x1985a8: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x1985a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x1985ac: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x1985acu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x1985b0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1985b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1985b4: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x1985b4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x1985b8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1985b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1985bc: 0x84400  sll         $t0, $t0, 16
    ctx->pc = 0x1985bcu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x1985c0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1985c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1985c4: 0x94c00  sll         $t1, $t1, 16
    ctx->pc = 0x1985c4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
    // 0x1985c8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1985c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1985cc: 0x5ac03  sra         $s5, $a1, 16
    ctx->pc = 0x1985ccu;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 5), 16));
    // 0x1985d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1985d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1985d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1985d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1985d8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1985d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1985dc: 0x68403  sra         $s0, $a2, 16
    ctx->pc = 0x1985dcu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 6), 16));
    // 0x1985e0: 0x79c03  sra         $s3, $a3, 16
    ctx->pc = 0x1985e0u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 7), 16));
    // 0x1985e4: 0x8a403  sra         $s4, $t0, 16
    ctx->pc = 0x1985e4u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 8), 16));
    // 0x1985e8: 0xc06614a  jal         func_198528
    ctx->pc = 0x1985E8u;
    SET_GPR_U32(ctx, 31, 0x1985F0u);
    ctx->pc = 0x1985ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1985E8u;
    // 0x1985ec: 0x99403  sra         $s2, $t1, 16 (Delay Slot)
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 9), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198528u, 0x1985E8u, 0x1985F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1985F0u;
label_1985f0:
    // 0x1985f0: 0x24030066  addiu       $v1, $zero, 0x66
    ctx->pc = 0x1985f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x1985f4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1985f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1985f8: 0xfe230000  sd          $v1, 0x0($s1)
    ctx->pc = 0x1985f8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 3));
    // 0x1985fc: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x1985fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x198600: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x198600u;
    {
        const bool branch_taken_0x198600 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x198604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198600u;
        // 0x198604: 0x94c70000  lhu         $a3, 0x0($a2) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198600) {
            ctx->pc = 0x19861Cu;
            goto label_19861c;
        }
    }
    ctx->pc = 0x198608u;
    // 0x198608: 0x84c20004  lh          $v0, 0x4($a2)
    ctx->pc = 0x198608u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x19860c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19860Cu;
    {
        const bool branch_taken_0x19860c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x198610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19860Cu;
        // 0x198610: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19860c) {
            ctx->pc = 0x198620u;
            goto label_198620;
        }
    }
    ctx->pc = 0x198614u;
    // 0x198614: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x198614u;
    {
        const bool branch_taken_0x198614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198614u;
        // 0x198618: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198614) {
            ctx->pc = 0x198620u;
            goto label_198620;
        }
    }
    ctx->pc = 0x19861Cu;
label_19861c:
    // 0x19861c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x19861cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_198620:
    // 0x198620: 0xfe220008  sd          $v0, 0x8($s1)
    ctx->pc = 0x198620u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 2));
    // 0x198624: 0x2602003f  addiu       $v0, $s0, 0x3F
    ctx->pc = 0x198624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 63));
    // 0x198628: 0x32a3000f  andi        $v1, $s5, 0xF
    ctx->pc = 0x198628u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)15);
    // 0x19862c: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x19862cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x198630: 0x31bf8  dsll        $v1, $v1, 15
    ctx->pc = 0x198630u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 15);
    // 0x198634: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x198634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x198638: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x198638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19863c: 0x21278  dsll        $v0, $v0, 9
    ctx->pc = 0x19863cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 9);
    // 0x198640: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x198640u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x198644: 0xfe230010  sd          $v1, 0x10($s1)
    ctx->pc = 0x198644u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 3));
    // 0x198648: 0x84c50002  lh          $a1, 0x2($a2)
    ctx->pc = 0x198648u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x19864c: 0x14a40029  bne         $a1, $a0, . + 4 + (0x29 << 2)
    ctx->pc = 0x19864Cu;
    {
        const bool branch_taken_0x19864c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x198650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19864Cu;
        // 0x198650: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19864c) {
            ctx->pc = 0x1986F4u;
            goto label_1986f4;
        }
    }
    ctx->pc = 0x198654u;
    // 0x198654: 0x71400  sll         $v0, $a3, 16
    ctx->pc = 0x198654u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x198658: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x198658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19865c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x19865cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x198660: 0x14430016  bne         $v0, $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x198660u;
    {
        const bool branch_taken_0x198660 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x198664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198660u;
        // 0x198664: 0x260209ff  addiu       $v0, $s0, 0x9FF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2559));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198660) {
            ctx->pc = 0x1986BCu;
            goto label_1986bc;
        }
    }
    ctx->pc = 0x198668u;
    // 0x198668: 0x26430032  addiu       $v1, $s2, 0x32
    ctx->pc = 0x198668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 50));
    // 0x19866c: 0x50001a  div         $zero, $v0, $s0
    ctx->pc = 0x19866cu;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x198670: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x198670u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x198674: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x198674u;
    {
        const bool branch_taken_0x198674 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x198674) {
            ctx->pc = 0x198678u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x198674u;
            // 0x198678: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x19867Cu;
            goto label_19867c;
        }
    }
    ctx->pc = 0x19867Cu;
label_19867c:
    // 0x19867c: 0x33b38  dsll        $a3, $v1, 12
    ctx->pc = 0x19867cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << 12);
    // 0x198680: 0x84c60004  lh          $a2, 0x4($a2)
    ctx->pc = 0x198680u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x198684: 0x1012  mflo        $v0
    ctx->pc = 0x198684u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x198688: 0x72822818  mult1       $a1, $s4, $v0
    ctx->pc = 0x198688u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x19868c: 0x502018  mult        $a0, $v0, $s0
    ctx->pc = 0x19868cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x198690: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x198690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x198694: 0x64a3027c  daddiu      $v1, $a1, 0x27C
    ctx->pc = 0x198694u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)636);
    // 0x198698: 0x255f8  dsll        $t2, $v0, 23
    ctx->pc = 0x198698u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) << 23);
    // 0x19869c: 0x30650fff  andi        $a1, $v1, 0xFFF
    ctx->pc = 0x19869cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x1986a0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1986a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1986a4: 0x10c0002f  beqz        $a2, . + 4 + (0x2F << 2)
    ctx->pc = 0x1986A4u;
    {
        const bool branch_taken_0x1986a4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1986A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1986A4u;
        // 0x1986a8: 0x4183c  dsll32      $v1, $a0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1986a4) {
            ctx->pc = 0x198764u;
            goto label_198764;
        }
    }
    ctx->pc = 0x1986ACu;
    // 0x1986ac: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x1986acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x1986b0: 0x1431825  or          $v1, $t2, $v1
    ctx->pc = 0x1986b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) | GPR_U64(ctx, 3));
    // 0x1986b4: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x1986B4u;
    {
        const bool branch_taken_0x1986b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1986B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1986B4u;
        // 0x1986b8: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1986b4) {
            ctx->pc = 0x19876Cu;
            goto label_19876c;
        }
    }
    ctx->pc = 0x1986BCu;
label_1986bc:
    // 0x1986bc: 0x2666ffff  addiu       $a2, $s3, -0x1
    ctx->pc = 0x1986bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x1986c0: 0x50001a  div         $zero, $v0, $s0
    ctx->pc = 0x1986c0u;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1986c4: 0x6333c  dsll32      $a2, $a2, 12
    ctx->pc = 0x1986c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 12));
    // 0x1986c8: 0x26450019  addiu       $a1, $s2, 0x19
    ctx->pc = 0x1986c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 25));
    // 0x1986cc: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1986CCu;
    {
        const bool branch_taken_0x1986cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1986cc) {
            ctx->pc = 0x1986D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1986CCu;
            // 0x1986d0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1986D4u;
            goto label_1986d4;
        }
    }
    ctx->pc = 0x1986D4u;
label_1986d4:
    // 0x1986d4: 0x30a50fff  andi        $a1, $a1, 0xFFF
    ctx->pc = 0x1986d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4095);
    // 0x1986d8: 0x52b38  dsll        $a1, $a1, 12
    ctx->pc = 0x1986d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 12);
    // 0x1986dc: 0x1012  mflo        $v0
    ctx->pc = 0x1986dcu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1986e0: 0x2823818  mult        $a3, $s4, $v0
    ctx->pc = 0x1986e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x1986e4: 0x70502018  mult1       $a0, $v0, $s0
    ctx->pc = 0x1986e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1986e8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1986e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1986ec: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x1986ECu;
    {
        const bool branch_taken_0x1986ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1986F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1986ECu;
        // 0x1986f0: 0x64e3027c  daddiu      $v1, $a3, 0x27C (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)636);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1986ec) {
            ctx->pc = 0x1987B8u;
            goto label_1987b8;
        }
    }
    ctx->pc = 0x1986F4u;
label_1986f4:
    // 0x1986f4: 0x14a2003a  bne         $a1, $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x1986F4u;
    {
        const bool branch_taken_0x1986f4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1986F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1986F4u;
        // 0x1986f8: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1986f4) {
            ctx->pc = 0x1987E0u;
            goto label_1987e0;
        }
    }
    ctx->pc = 0x1986FCu;
    // 0x1986fc: 0x71400  sll         $v0, $a3, 16
    ctx->pc = 0x1986fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x198700: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x198700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x198704: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x198704u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x198708: 0x1443001e  bne         $v0, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x198708u;
    {
        const bool branch_taken_0x198708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x19870Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198708u;
        // 0x19870c: 0x260209ff  addiu       $v0, $s0, 0x9FF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2559));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198708) {
            ctx->pc = 0x198784u;
            goto label_198784;
        }
    }
    ctx->pc = 0x198710u;
    // 0x198710: 0x26430048  addiu       $v1, $s2, 0x48
    ctx->pc = 0x198710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 72));
    // 0x198714: 0x50001a  div         $zero, $v0, $s0
    ctx->pc = 0x198714u;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x198718: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x198718u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x19871c: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x19871Cu;
    {
        const bool branch_taken_0x19871c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x19871c) {
            ctx->pc = 0x198720u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19871Cu;
            // 0x198720: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x198724u;
            goto label_198724;
        }
    }
    ctx->pc = 0x198724u;
label_198724:
    // 0x198724: 0x33b38  dsll        $a3, $v1, 12
    ctx->pc = 0x198724u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) << 12);
    // 0x198728: 0x84c60004  lh          $a2, 0x4($a2)
    ctx->pc = 0x198728u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x19872c: 0x1012  mflo        $v0
    ctx->pc = 0x19872cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x198730: 0x72822818  mult1       $a1, $s4, $v0
    ctx->pc = 0x198730u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x198734: 0x502018  mult        $a0, $v0, $s0
    ctx->pc = 0x198734u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x198738: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x198738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x19873c: 0x64a30290  daddiu      $v1, $a1, 0x290
    ctx->pc = 0x19873cu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)656);
    // 0x198740: 0x255f8  dsll        $t2, $v0, 23
    ctx->pc = 0x198740u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) << 23);
    // 0x198744: 0x30650fff  andi        $a1, $v1, 0xFFF
    ctx->pc = 0x198744u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x198748: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x198748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x19874c: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x19874Cu;
    {
        const bool branch_taken_0x19874c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x198750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19874Cu;
        // 0x198750: 0x4183c  dsll32      $v1, $a0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19874c) {
            ctx->pc = 0x198764u;
            goto label_198764;
        }
    }
    ctx->pc = 0x198754u;
    // 0x198754: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x198754u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x198758: 0x1431825  or          $v1, $t2, $v1
    ctx->pc = 0x198758u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) | GPR_U64(ctx, 3));
    // 0x19875c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x19875Cu;
    {
        const bool branch_taken_0x19875c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19875Cu;
        // 0x198760: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19875c) {
            ctx->pc = 0x19876Cu;
            goto label_19876c;
        }
    }
    ctx->pc = 0x198764u;
label_198764:
    // 0x198764: 0x2662ffff  addiu       $v0, $s3, -0x1
    ctx->pc = 0x198764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x198768: 0x1431825  or          $v1, $t2, $v1
    ctx->pc = 0x198768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) | GPR_U64(ctx, 3));
label_19876c:
    // 0x19876c: 0x2133c  dsll32      $v0, $v0, 12
    ctx->pc = 0x19876cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 12));
    // 0x198770: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x198770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x198774: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x198774u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x198778: 0x671025  or          $v0, $v1, $a3
    ctx->pc = 0x198778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x19877c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x19877Cu;
    {
        const bool branch_taken_0x19877c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19877Cu;
        // 0x198780: 0xfe220018  sd          $v0, 0x18($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19877c) {
            ctx->pc = 0x1987E8u;
            goto label_1987e8;
        }
    }
    ctx->pc = 0x198784u;
label_198784:
    // 0x198784: 0x2666ffff  addiu       $a2, $s3, -0x1
    ctx->pc = 0x198784u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x198788: 0x50001a  div         $zero, $v0, $s0
    ctx->pc = 0x198788u;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x19878c: 0x6333c  dsll32      $a2, $a2, 12
    ctx->pc = 0x19878cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 12));
    // 0x198790: 0x26450024  addiu       $a1, $s2, 0x24
    ctx->pc = 0x198790u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 36));
    // 0x198794: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x198794u;
    {
        const bool branch_taken_0x198794 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x198794) {
            ctx->pc = 0x198798u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x198794u;
            // 0x198798: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x19879Cu;
            goto label_19879c;
        }
    }
    ctx->pc = 0x19879Cu;
label_19879c:
    // 0x19879c: 0x30a50fff  andi        $a1, $a1, 0xFFF
    ctx->pc = 0x19879cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4095);
    // 0x1987a0: 0x52b38  dsll        $a1, $a1, 12
    ctx->pc = 0x1987a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 12);
    // 0x1987a4: 0x1012  mflo        $v0
    ctx->pc = 0x1987a4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1987a8: 0x2823818  mult        $a3, $s4, $v0
    ctx->pc = 0x1987a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x1987ac: 0x70502018  mult1       $a0, $v0, $s0
    ctx->pc = 0x1987acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1987b0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1987b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1987b4: 0x64e30290  daddiu      $v1, $a3, 0x290
    ctx->pc = 0x1987b4u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)656);
label_1987b8:
    // 0x1987b8: 0x215f8  dsll        $v0, $v0, 23
    ctx->pc = 0x1987b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 23);
    // 0x1987bc: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x1987bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x1987c0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1987c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1987c4: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1987c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1987c8: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1987c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1987cc: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1987ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1987d0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1987d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1987d4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1987d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1987d8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1987D8u;
    {
        const bool branch_taken_0x1987d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1987DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1987D8u;
        // 0x1987dc: 0xfe220018  sd          $v0, 0x18($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1987d8) {
            ctx->pc = 0x1987E8u;
            goto label_1987e8;
        }
    }
    ctx->pc = 0x1987E0u;
label_1987e0:
    // 0x1987e0: 0xc08ee2e  jal         func_23B8B8
    ctx->pc = 0x1987E0u;
    SET_GPR_U32(ctx, 31, 0x1987E8u);
    ctx->pc = 0x1987E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1987E0u;
    // 0x1987e4: 0x24849a68  addiu       $a0, $a0, -0x6598 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B8B8u, 0x1987E0u, 0x1987E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1987E8u;
label_1987e8:
    // 0x1987e8: 0xfe200020  sd          $zero, 0x20($s1)
    ctx->pc = 0x1987e8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 0));
    // 0x1987ec: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1987ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1987f0: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x1987f0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1987f4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1987f4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1987f8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1987f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1987fc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1987fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x198800: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x198800u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x198804: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x198804u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x198808u;
}
