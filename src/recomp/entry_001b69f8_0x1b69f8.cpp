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

// Function: entry_001b69f8
// Address: 0x1b69f8 - 0x1b6ad8
void entry_001b69f8_0x1b69f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b69f8_0x1b69f8");
#endif

    ctx->pc = 0x1b69f8u;

    // 0x1b69f8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1b69f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b69fc: 0x1c0482d  daddu       $t1, $t6, $zero
    ctx->pc = 0x1b69fcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6a00: 0x146001b  divu        $zero, $t2, $a2
    ctx->pc = 0x1b6a00u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,10); } }
    // 0x1b6a04: 0xd2402  srl         $a0, $t5, 16
    ctx->pc = 0x1b6a04u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 13), 16));
    // 0x1b6a08: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B6A08u;
    {
        const bool branch_taken_0x1b6a08 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6a08) {
            ctx->pc = 0x1B6A0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B6A08u;
            // 0x1b6a0c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B6A10u;
            goto label_1b6a10;
        }
    }
    ctx->pc = 0x1B6A10u;
label_1b6a10:
    // 0x1b6a10: 0x1012  mflo        $v0
    ctx->pc = 0x1b6a10u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1b6a14: 0x1810  mfhi        $v1
    ctx->pc = 0x1b6a14u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1b6a18: 0x494018  mult        $t0, $v0, $t1
    ctx->pc = 0x1b6a18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x1b6a1c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1b6a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1b6a20: 0x642825  or          $a1, $v1, $a0
    ctx->pc = 0x1b6a20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1b6a24: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x1b6a24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1b6a28: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1B6A28u;
    {
        const bool branch_taken_0x1b6a28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6a28) {
            ctx->pc = 0x1B6A2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B6A28u;
            // 0x1b6a2c: 0xa82823  subu        $a1, $a1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B6A54u;
            goto label_1b6a54;
        }
    }
    ctx->pc = 0x1B6A30u;
    // 0x1b6a30: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x1b6a30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x1b6a34: 0xa7102b  sltu        $v0, $a1, $a3
    ctx->pc = 0x1b6a34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1b6a38: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B6A38u;
    {
        const bool branch_taken_0x1b6a38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b6a38) {
            ctx->pc = 0x1B6A3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B6A38u;
            // 0x1b6a3c: 0xa82823  subu        $a1, $a1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B6A54u;
            goto label_1b6a54;
        }
    }
    ctx->pc = 0x1B6A40u;
    // 0x1b6a40: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x1b6a40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1b6a44: 0xa71821  addu        $v1, $a1, $a3
    ctx->pc = 0x1b6a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x1b6a48: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x1b6a48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x1b6a4c: 0x62280b  movn        $a1, $v1, $v0
    ctx->pc = 0x1b6a4cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x1b6a50: 0xa82823  subu        $a1, $a1, $t0
    ctx->pc = 0x1b6a50u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_1b6a54:
    // 0x1b6a54: 0x31a4ffff  andi        $a0, $t5, 0xFFFF
    ctx->pc = 0x1b6a54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)65535);
    // 0x1b6a58: 0xa6001b  divu        $zero, $a1, $a2
    ctx->pc = 0x1b6a58u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x1b6a5c: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B6A5Cu;
    {
        const bool branch_taken_0x1b6a5c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6a5c) {
            ctx->pc = 0x1B6A60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B6A5Cu;
            // 0x1b6a60: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B6A64u;
            goto label_1b6a64;
        }
    }
    ctx->pc = 0x1B6A64u;
label_1b6a64:
    // 0x1b6a64: 0x1012  mflo        $v0
    ctx->pc = 0x1b6a64u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1b6a68: 0x1810  mfhi        $v1
    ctx->pc = 0x1b6a68u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1b6a6c: 0x494018  mult        $t0, $v0, $t1
    ctx->pc = 0x1b6a6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x1b6a70: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1b6a70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1b6a74: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1b6a74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1b6a78: 0x88102b  sltu        $v0, $a0, $t0
    ctx->pc = 0x1b6a78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1b6a7c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B6A7Cu;
    {
        const bool branch_taken_0x1b6a7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6a7c) {
            ctx->pc = 0x1B6AA0u;
            goto label_1b6aa0;
        }
    }
    ctx->pc = 0x1B6A84u;
    // 0x1b6a84: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x1b6a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1b6a88: 0x87102b  sltu        $v0, $a0, $a3
    ctx->pc = 0x1b6a88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1b6a8c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B6A8Cu;
    {
        const bool branch_taken_0x1b6a8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B6A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6A8Cu;
        // 0x1b6a90: 0x88102b  sltu        $v0, $a0, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6a8c) {
            ctx->pc = 0x1B6AA0u;
            goto label_1b6aa0;
        }
    }
    ctx->pc = 0x1B6A94u;
    // 0x1b6a94: 0x871821  addu        $v1, $a0, $a3
    ctx->pc = 0x1b6a94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1b6a98: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x1b6a98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x1b6a9c: 0x62200b  movn        $a0, $v1, $v0
    ctx->pc = 0x1b6a9cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
label_1b6aa0:
    // 0x1b6aa0: 0x130000ac  beqz        $t8, . + 4 + (0xAC << 2)
    ctx->pc = 0x1B6AA0u;
    {
        const bool branch_taken_0x1b6aa0 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6AA0u;
        // 0x1b6aa4: 0x886823  subu        $t5, $a0, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6aa0) {
            ctx->pc = 0x1B6D54u;
            return;
        }
    }
    ctx->pc = 0x1B6AA8u;
    // 0x1b6aa8: 0x18d1006  srlv        $v0, $t5, $t4
    ctx->pc = 0x1b6aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 13), GPR_U32(ctx, 12) & 0x1F));
    // 0x1b6aac: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1b6aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b6ab0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b6ab0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b6ab4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b6ab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b6ab8: 0x1635824  and         $t3, $t3, $v1
    ctx->pc = 0x1b6ab8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
    // 0x1b6abc: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b6abcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b6ac0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1b6ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1b6ac4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1b6ac4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1b6ac8: 0x1625825  or          $t3, $t3, $v0
    ctx->pc = 0x1b6ac8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 2));
    // 0x1b6acc: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x1B6ACCu;
    {
        const bool branch_taken_0x1b6acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6ACCu;
        // 0x1b6ad0: 0x1635824  and         $t3, $t3, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6acc) {
            ctx->pc = 0x1B6D50u;
            return;
        }
    }
    ctx->pc = 0x1B6AD4u;
    // 0x1b6ad4: 0x0  nop
    ctx->pc = 0x1b6ad4u;
    // NOP
    ctx->pc = 0x1b6ad8u;
}
