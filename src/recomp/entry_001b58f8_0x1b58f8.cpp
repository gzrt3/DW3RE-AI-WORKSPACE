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

// Function: entry_001b58f8
// Address: 0x1b58f8 - 0x1b59c0
void entry_001b58f8_0x1b58f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b58f8_0x1b58f8");
#endif

    ctx->pc = 0x1b58f8u;

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
            return;
        }
    }
    ctx->pc = 0x1B59BCu;
    // 0x1b59bc: 0x0  nop
    ctx->pc = 0x1b59bcu;
    // NOP
    ctx->pc = 0x1b59c0u;
}
