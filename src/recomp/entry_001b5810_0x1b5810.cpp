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

// Function: entry_001b5810
// Address: 0x1b5810 - 0x1b58f8
void entry_001b5810_0x1b5810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b5810_0x1b5810");
#endif

    ctx->pc = 0x1b5810u;

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
    ctx->pc = 0x1b58f8u;
}
