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

// Function: entry_00198620
// Address: 0x198620 - 0x1986bc
void entry_00198620_0x198620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00198620_0x198620");
#endif

    ctx->pc = 0x198620u;

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
            return;
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
            return;
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
            return;
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
            return;
        }
    }
    ctx->pc = 0x1986BCu;
}
