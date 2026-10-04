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

// Function: entry_001986f4
// Address: 0x1986f4 - 0x198784
void entry_001986f4_0x1986f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001986f4_0x1986f4");
#endif

    ctx->pc = 0x1986f4u;

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
            return;
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
            return;
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
            return;
        }
    }
    ctx->pc = 0x198784u;
}
