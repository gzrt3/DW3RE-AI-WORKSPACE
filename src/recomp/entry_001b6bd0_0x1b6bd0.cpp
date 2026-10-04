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

// Function: entry_001b6bd0
// Address: 0x1b6bd0 - 0x1b6d50
void entry_001b6bd0_0x1b6bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6bd0_0x1b6bd0");
#endif

    ctx->pc = 0x1b6bd0u;

    // 0x1b6bd0: 0x18a2804  sllv        $a1, $t2, $t4
    ctx->pc = 0x1b6bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 12) & 0x1F));
    // 0x1b6bd4: 0x1892004  sllv        $a0, $t1, $t4
    ctx->pc = 0x1b6bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 12) & 0x1F));
    // 0x1b6bd8: 0x1e71006  srlv        $v0, $a3, $t7
    ctx->pc = 0x1b6bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 15) & 0x1F));
    // 0x1b6bdc: 0x1ed1806  srlv        $v1, $t5, $t7
    ctx->pc = 0x1b6bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 13), GPR_U32(ctx, 15) & 0x1F));
    // 0x1b6be0: 0x18d6804  sllv        $t5, $t5, $t4
    ctx->pc = 0x1b6be0u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), GPR_U32(ctx, 12) & 0x1F));
    // 0x1b6be4: 0x824825  or          $t1, $a0, $v0
    ctx->pc = 0x1b6be4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1b6be8: 0x1ea2006  srlv        $a0, $t2, $t7
    ctx->pc = 0x1b6be8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 15) & 0x1F));
    // 0x1b6bec: 0x1873804  sllv        $a3, $a3, $t4
    ctx->pc = 0x1b6becu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 12) & 0x1F));
    // 0x1b6bf0: 0xa35025  or          $t2, $a1, $v1
    ctx->pc = 0x1b6bf0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1b6bf4: 0x93402  srl         $a2, $t1, 16
    ctx->pc = 0x1b6bf4u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x1b6bf8: 0x86001b  divu        $zero, $a0, $a2
    ctx->pc = 0x1b6bf8u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x1b6bfc: 0xa2402  srl         $a0, $t2, 16
    ctx->pc = 0x1b6bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x1b6c00: 0x3125ffff  andi        $a1, $t1, 0xFFFF
    ctx->pc = 0x1b6c00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x1b6c04: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B6C04u;
    {
        const bool branch_taken_0x1b6c04 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6c04) {
            ctx->pc = 0x1B6C08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B6C04u;
            // 0x1b6c08: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B6C0Cu;
            goto label_1b6c0c;
        }
    }
    ctx->pc = 0x1B6C0Cu;
label_1b6c0c:
    // 0x1b6c0c: 0x1012  mflo        $v0
    ctx->pc = 0x1b6c0cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1b6c10: 0x1810  mfhi        $v1
    ctx->pc = 0x1b6c10u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1b6c14: 0x40702d  daddu       $t6, $v0, $zero
    ctx->pc = 0x1b6c14u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6c18: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1b6c18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1b6c1c: 0x1c54018  mult        $t0, $t6, $a1
    ctx->pc = 0x1b6c1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x1b6c20: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1b6c20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1b6c24: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x1b6c24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1b6c28: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1B6C28u;
    {
        const bool branch_taken_0x1b6c28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6c28) {
            ctx->pc = 0x1B6C2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B6C28u;
            // 0x1b6c2c: 0x681823  subu        $v1, $v1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B6C5Cu;
            goto label_1b6c5c;
        }
    }
    ctx->pc = 0x1B6C30u;
    // 0x1b6c30: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1b6c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1b6c34: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x1b6c34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x1b6c38: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B6C38u;
    {
        const bool branch_taken_0x1b6c38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B6C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6C38u;
        // 0x1b6c3c: 0x25ceffff  addiu       $t6, $t6, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6c38) {
            ctx->pc = 0x1B6C58u;
            goto label_1b6c58;
        }
    }
    ctx->pc = 0x1B6C40u;
    // 0x1b6c40: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x1b6c40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1b6c44: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B6C44u;
    {
        const bool branch_taken_0x1b6c44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6c44) {
            ctx->pc = 0x1B6C48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B6C44u;
            // 0x1b6c48: 0x681823  subu        $v1, $v1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B6C5Cu;
            goto label_1b6c5c;
        }
    }
    ctx->pc = 0x1B6C4Cu;
    // 0x1b6c4c: 0x25ceffff  addiu       $t6, $t6, -0x1
    ctx->pc = 0x1b6c4cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
    // 0x1b6c50: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1b6c50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1b6c54: 0x0  nop
    ctx->pc = 0x1b6c54u;
    // NOP
label_1b6c58:
    // 0x1b6c58: 0x681823  subu        $v1, $v1, $t0
    ctx->pc = 0x1b6c58u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_1b6c5c:
    // 0x1b6c5c: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B6C5Cu;
    {
        const bool branch_taken_0x1b6c5c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6c5c) {
            ctx->pc = 0x1B6C60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B6C5Cu;
            // 0x1b6c60: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B6C64u;
            goto label_1b6c64;
        }
    }
    ctx->pc = 0x1B6C64u;
label_1b6c64:
    // 0x1b6c64: 0x66001b  divu        $zero, $v1, $a2
    ctx->pc = 0x1b6c64u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x1b6c68: 0x3144ffff  andi        $a0, $t2, 0xFFFF
    ctx->pc = 0x1b6c68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x1b6c6c: 0x1012  mflo        $v0
    ctx->pc = 0x1b6c6cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1b6c70: 0x1810  mfhi        $v1
    ctx->pc = 0x1b6c70u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1b6c74: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1b6c74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6c78: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1b6c78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1b6c7c: 0xc54018  mult        $t0, $a2, $a1
    ctx->pc = 0x1b6c7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x1b6c80: 0x642825  or          $a1, $v1, $a0
    ctx->pc = 0x1b6c80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1b6c84: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x1b6c84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1b6c88: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1B6C88u;
    {
        const bool branch_taken_0x1b6c88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6c88) {
            ctx->pc = 0x1B6C8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B6C88u;
            // 0x1b6c8c: 0xa82823  subu        $a1, $a1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B6CB8u;
            goto label_1b6cb8;
        }
    }
    ctx->pc = 0x1B6C90u;
    // 0x1b6c90: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x1b6c90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x1b6c94: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x1b6c94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x1b6c98: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B6C98u;
    {
        const bool branch_taken_0x1b6c98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B6C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6C98u;
        // 0x1b6c9c: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6c98) {
            ctx->pc = 0x1B6CB4u;
            goto label_1b6cb4;
        }
    }
    ctx->pc = 0x1B6CA0u;
    // 0x1b6ca0: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x1b6ca0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1b6ca4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B6CA4u;
    {
        const bool branch_taken_0x1b6ca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6ca4) {
            ctx->pc = 0x1B6CA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B6CA4u;
            // 0x1b6ca8: 0xa82823  subu        $a1, $a1, $t0 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B6CB8u;
            goto label_1b6cb8;
        }
    }
    ctx->pc = 0x1B6CACu;
    // 0x1b6cac: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1b6cacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1b6cb0: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x1b6cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
label_1b6cb4:
    // 0x1b6cb4: 0xa82823  subu        $a1, $a1, $t0
    ctx->pc = 0x1b6cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_1b6cb8:
    // 0x1b6cb8: 0xe1400  sll         $v0, $t6, 16
    ctx->pc = 0x1b6cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 14), 16));
    // 0x1b6cbc: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x1b6cbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x1b6cc0: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x1b6cc0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6cc4: 0x470019  multu       $v0, $a3
    ctx->pc = 0x1b6cc4u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1b6cc8: 0x3010  mfhi        $a2
    ctx->pc = 0x1b6cc8u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x1b6ccc: 0x4012  mflo        $t0
    ctx->pc = 0x1b6cccu;
    SET_GPR_U64(ctx, 8, ctx->lo);
    // 0x1b6cd0: 0x146182b  sltu        $v1, $t2, $a2
    ctx->pc = 0x1b6cd0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1b6cd4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B6CD4u;
    {
        const bool branch_taken_0x1b6cd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B6CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6CD4u;
        // 0x1b6cd8: 0x1071023  subu        $v0, $t0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6cd4) {
            ctx->pc = 0x1B6CF0u;
            goto label_1b6cf0;
        }
    }
    ctx->pc = 0x1B6CDCu;
    // 0x1b6cdc: 0x14ca0008  bne         $a2, $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B6CDCu;
    {
        const bool branch_taken_0x1b6cdc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 10));
        ctx->pc = 0x1B6CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6CDCu;
        // 0x1b6ce0: 0x1a8102b  sltu        $v0, $t5, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6cdc) {
            ctx->pc = 0x1B6D00u;
            goto label_1b6d00;
        }
    }
    ctx->pc = 0x1B6CE4u;
    // 0x1b6ce4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B6CE4u;
    {
        const bool branch_taken_0x1b6ce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6CE4u;
        // 0x1b6ce8: 0x1071023  subu        $v0, $t0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6ce4) {
            ctx->pc = 0x1B6D00u;
            goto label_1b6d00;
        }
    }
    ctx->pc = 0x1B6CECu;
    // 0x1b6cec: 0x0  nop
    ctx->pc = 0x1b6cecu;
    // NOP
label_1b6cf0:
    // 0x1b6cf0: 0xc92023  subu        $a0, $a2, $t1
    ctx->pc = 0x1b6cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x1b6cf4: 0x102182b  sltu        $v1, $t0, $v0
    ctx->pc = 0x1b6cf4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1b6cf8: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1b6cf8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6cfc: 0x833023  subu        $a2, $a0, $v1
    ctx->pc = 0x1b6cfcu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1b6d00:
    // 0x1b6d00: 0x13000014  beqz        $t8, . + 4 + (0x14 << 2)
    ctx->pc = 0x1B6D00u;
    {
        const bool branch_taken_0x1b6d00 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6D00u;
        // 0x1b6d04: 0x1a82023  subu        $a0, $t5, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6d00) {
            ctx->pc = 0x1B6D54u;
            return;
        }
    }
    ctx->pc = 0x1B6D08u;
    // 0x1b6d08: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x1b6d08u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1b6d0c: 0x1a4182b  sltu        $v1, $t5, $a0
    ctx->pc = 0x1b6d0cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1b6d10: 0xa35023  subu        $t2, $a1, $v1
    ctx->pc = 0x1b6d10u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1b6d14: 0x1ea1004  sllv        $v0, $t2, $t7
    ctx->pc = 0x1b6d14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 15) & 0x1F));
    // 0x1b6d18: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1b6d18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b6d1c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b6d1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b6d20: 0x1842006  srlv        $a0, $a0, $t4
    ctx->pc = 0x1b6d20u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 12) & 0x1F));
    // 0x1b6d24: 0x1635824  and         $t3, $t3, $v1
    ctx->pc = 0x1b6d24u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
    // 0x1b6d28: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1b6d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1b6d2c: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x1b6d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x1b6d30: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x1b6d30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x1b6d34: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b6d34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b6d38: 0x18a1806  srlv        $v1, $t2, $t4
    ctx->pc = 0x1b6d38u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 12) & 0x1F));
    // 0x1b6d3c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b6d3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b6d40: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1b6d40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1b6d44: 0x1625825  or          $t3, $t3, $v0
    ctx->pc = 0x1b6d44u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 2));
    // 0x1b6d48: 0x1645824  and         $t3, $t3, $a0
    ctx->pc = 0x1b6d48u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 4));
    // 0x1b6d4c: 0x1635825  or          $t3, $t3, $v1
    ctx->pc = 0x1b6d4cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 3));
    ctx->pc = 0x1b6d50u;
}
