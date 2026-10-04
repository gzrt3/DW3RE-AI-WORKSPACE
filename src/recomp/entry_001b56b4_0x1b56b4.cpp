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

// Function: entry_001b56b4
// Address: 0x1b56b4 - 0x1b5780
void entry_001b56b4_0x1b56b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b56b4_0x1b56b4");
#endif

    ctx->pc = 0x1b56b4u;

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
            return;
        }
    }
    ctx->pc = 0x1B577Cu;
    // 0x1b577c: 0x0  nop
    ctx->pc = 0x1b577cu;
    // NOP
    ctx->pc = 0x1b5780u;
}
