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

// Function: entry_001b5a48
// Address: 0x1b5a48 - 0x1b5b68
void entry_001b5a48_0x1b5a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b5a48_0x1b5a48");
#endif

    ctx->pc = 0x1b5a48u;

    // 0x1b5a48: 0xc82004  sllv        $a0, $t0, $a2
    ctx->pc = 0x1b5a48u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
    // 0x1b5a4c: 0xeb2806  srlv        $a1, $t3, $a3
    ctx->pc = 0x1b5a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 11), GPR_U32(ctx, 7) & 0x1F));
    // 0x1b5a50: 0xcb5804  sllv        $t3, $t3, $a2
    ctx->pc = 0x1b5a50u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 6) & 0x1F));
    // 0x1b5a54: 0xe91006  srlv        $v0, $t1, $a3
    ctx->pc = 0x1b5a54u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 7) & 0x1F));
    // 0x1b5a58: 0xc94804  sllv        $t1, $t1, $a2
    ctx->pc = 0x1b5a58u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 6) & 0x1F));
    // 0x1b5a5c: 0xca1804  sllv        $v1, $t2, $a2
    ctx->pc = 0x1b5a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 6) & 0x1F));
    // 0x1b5a60: 0x824025  or          $t0, $a0, $v0
    ctx->pc = 0x1b5a60u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1b5a64: 0xea2006  srlv        $a0, $t2, $a3
    ctx->pc = 0x1b5a64u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 7) & 0x1F));
    // 0x1b5a68: 0x655025  or          $t2, $v1, $a1
    ctx->pc = 0x1b5a68u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1b5a6c: 0x82c02  srl         $a1, $t0, 16
    ctx->pc = 0x1b5a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x1b5a70: 0x85001b  divu        $zero, $a0, $a1
    ctx->pc = 0x1b5a70u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x1b5a74: 0xa2402  srl         $a0, $t2, 16
    ctx->pc = 0x1b5a74u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x1b5a78: 0x310cffff  andi        $t4, $t0, 0xFFFF
    ctx->pc = 0x1b5a78u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x1b5a7c: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B5A7Cu;
    {
        const bool branch_taken_0x1b5a7c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5a7c) {
            ctx->pc = 0x1B5A80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B5A7Cu;
            // 0x1b5a80: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B5A84u;
            goto label_1b5a84;
        }
    }
    ctx->pc = 0x1B5A84u;
label_1b5a84:
    // 0x1b5a84: 0x1012  mflo        $v0
    ctx->pc = 0x1b5a84u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1b5a88: 0x1810  mfhi        $v1
    ctx->pc = 0x1b5a88u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1b5a8c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1b5a8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5a90: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1b5a90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1b5a94: 0xec3018  mult        $a2, $a3, $t4
    ctx->pc = 0x1b5a94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1b5a98: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1b5a98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1b5a9c: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x1b5a9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1b5aa0: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1B5AA0u;
    {
        const bool branch_taken_0x1b5aa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5aa0) {
            ctx->pc = 0x1B5AA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B5AA0u;
            // 0x1b5aa4: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B5AD4u;
            goto label_1b5ad4;
        }
    }
    ctx->pc = 0x1B5AA8u;
    // 0x1b5aa8: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x1b5aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x1b5aac: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x1b5aacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1b5ab0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B5AB0u;
    {
        const bool branch_taken_0x1b5ab0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B5AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5AB0u;
        // 0x1b5ab4: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5ab0) {
            ctx->pc = 0x1B5AD0u;
            goto label_1b5ad0;
        }
    }
    ctx->pc = 0x1B5AB8u;
    // 0x1b5ab8: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x1b5ab8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1b5abc: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B5ABCu;
    {
        const bool branch_taken_0x1b5abc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5abc) {
            ctx->pc = 0x1B5AC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B5ABCu;
            // 0x1b5ac0: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B5AD4u;
            goto label_1b5ad4;
        }
    }
    ctx->pc = 0x1B5AC4u;
    // 0x1b5ac4: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x1b5ac4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1b5ac8: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x1b5ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x1b5acc: 0x0  nop
    ctx->pc = 0x1b5accu;
    // NOP
label_1b5ad0:
    // 0x1b5ad0: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x1b5ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1b5ad4:
    // 0x1b5ad4: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B5AD4u;
    {
        const bool branch_taken_0x1b5ad4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b5ad4) {
            ctx->pc = 0x1B5AD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B5AD4u;
            // 0x1b5ad8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B5ADCu;
            goto label_1b5adc;
        }
    }
    ctx->pc = 0x1B5ADCu;
label_1b5adc:
    // 0x1b5adc: 0x65001b  divu        $zero, $v1, $a1
    ctx->pc = 0x1b5adcu;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x1b5ae0: 0x3144ffff  andi        $a0, $t2, 0xFFFF
    ctx->pc = 0x1b5ae0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x1b5ae4: 0x1012  mflo        $v0
    ctx->pc = 0x1b5ae4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1b5ae8: 0x1810  mfhi        $v1
    ctx->pc = 0x1b5ae8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1b5aec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b5aecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5af0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1b5af0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1b5af4: 0xac3018  mult        $a2, $a1, $t4
    ctx->pc = 0x1b5af4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1b5af8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1b5af8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1b5afc: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x1b5afcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1b5b00: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1B5B00u;
    {
        const bool branch_taken_0x1b5b00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5B00u;
        // 0x1b5b04: 0x71400  sll         $v0, $a3, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5b00) {
            ctx->pc = 0x1B5B30u;
            goto label_1b5b30;
        }
    }
    ctx->pc = 0x1B5B08u;
    // 0x1b5b08: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x1b5b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x1b5b0c: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x1b5b0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x1b5b10: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B5B10u;
    {
        const bool branch_taken_0x1b5b10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B5B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5B10u;
        // 0x1b5b14: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5b10) {
            ctx->pc = 0x1B5B2Cu;
            goto label_1b5b2c;
        }
    }
    ctx->pc = 0x1B5B18u;
    // 0x1b5b18: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x1b5b18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1b5b1c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B5B1Cu;
    {
        const bool branch_taken_0x1b5b1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5B1Cu;
        // 0x1b5b20: 0x71400  sll         $v0, $a3, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5b1c) {
            ctx->pc = 0x1B5B30u;
            goto label_1b5b30;
        }
    }
    ctx->pc = 0x1B5B24u;
    // 0x1b5b24: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x1b5b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x1b5b28: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1b5b28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_1b5b2c:
    // 0x1b5b2c: 0x71400  sll         $v0, $a3, 16
    ctx->pc = 0x1b5b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
label_1b5b30:
    // 0x1b5b30: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x1b5b30u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1b5b34: 0x453025  or          $a2, $v0, $a1
    ctx->pc = 0x1b5b34u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1b5b38: 0xc90019  multu       $a2, $t1
    ctx->pc = 0x1b5b38u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 6) * (uint64_t)GPR_U32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1b5b3c: 0x3810  mfhi        $a3
    ctx->pc = 0x1b5b3cu;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x1b5b40: 0x2012  mflo        $a0
    ctx->pc = 0x1b5b40u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x1b5b44: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x1b5b44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1b5b48: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B5B48u;
    {
        const bool branch_taken_0x1b5b48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b5b48) {
            ctx->pc = 0x1B5B4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B5B48u;
            // 0x1b5b4c: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B5B68u;
            return;
        }
    }
    ctx->pc = 0x1B5B50u;
    // 0x1b5b50: 0x14e30006  bne         $a3, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B5B50u;
    {
        const bool branch_taken_0x1b5b50 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        ctx->pc = 0x1B5B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5B50u;
        // 0x1b5b54: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5b50) {
            ctx->pc = 0x1B5B6Cu;
            return;
        }
    }
    ctx->pc = 0x1B5B58u;
    // 0x1b5b58: 0x164102b  sltu        $v0, $t3, $a0
    ctx->pc = 0x1b5b58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1b5b5c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B5B5Cu;
    {
        const bool branch_taken_0x1b5b5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5B5Cu;
        // 0x1b5b60: 0x6103c  dsll32      $v0, $a2, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5b5c) {
            ctx->pc = 0x1B5B70u;
            return;
        }
    }
    ctx->pc = 0x1B5B64u;
    // 0x1b5b64: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1b5b64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    ctx->pc = 0x1b5b68u;
}
