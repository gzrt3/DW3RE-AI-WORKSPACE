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

// Function: FUN_001e0a80
// Address: 0x1e0a80 - 0x1e0e14
void FUN_001e0a80_0x1e0a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001e0a80_0x1e0a80");
#endif

    switch (ctx->pc) {
        case 0x1e0ad0u: goto label_1e0ad0;
        case 0x1e0c74u: goto label_1e0c74;
        default: break;
    }

    ctx->pc = 0x1e0a80u;

    // 0x1e0a80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e0a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e0a84: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1e0a84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x1e0a88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e0a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e0a8c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1e0a8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1e0a90: 0x8c253ffc  lw          $a1, 0x3FFC($at)
    ctx->pc = 0x1e0a90u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x70003FFCu));
    // 0x1e0a94: 0x27838d28  addiu       $v1, $gp, -0x72D8
    ctx->pc = 0x1e0a94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937896));
    // 0x1e0a98: 0x24841e00  addiu       $a0, $a0, 0x1E00
    ctx->pc = 0x1e0a98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7680));
    // 0x1e0a9c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e0a9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0aa0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e0aa0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0aa4: 0x53940  sll         $a3, $a1, 5
    ctx->pc = 0x1e0aa4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x1e0aa8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1e0aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1e0aac: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x1e0aacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1e0ab0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1e0ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1e0ab4: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1e0ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e0ab8: 0x0  nop
    ctx->pc = 0x1e0ab8u;
    // NOP
    // 0x1e0abc: 0x240b000f  addiu       $t3, $zero, 0xF
    ctx->pc = 0x1e0abcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1e0ac0: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x1e0ac0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1e0ac4: 0x240d0040  addiu       $t5, $zero, 0x40
    ctx->pc = 0x1e0ac4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1e0ac8: 0x240c0010  addiu       $t4, $zero, 0x10
    ctx->pc = 0x1e0ac8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1e0acc: 0x3c083f80  lui         $t0, 0x3F80
    ctx->pc = 0x1e0accu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16256 << 16));
label_1e0ad0:
    // 0x1e0ad0: 0x8f898d20  lw          $t1, -0x72E0($gp)
    ctx->pc = 0x1e0ad0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937888)));
    // 0x1e0ad4: 0x15200006  bnez        $t1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E0AD4u;
    {
        const bool branch_taken_0x1e0ad4 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e0ad4) {
            ctx->pc = 0x1E0AF0u;
            goto label_1e0af0;
        }
    }
    ctx->pc = 0x1E0ADCu;
    // 0x1e0adc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1e0adcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0ae0: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x1e0ae0u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0ae4: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x1e0ae4u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0ae8: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x1E0AE8u;
    {
        const bool branch_taken_0x1e0ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0AE8u;
        // 0x1e0aec: 0x24180080  addiu       $t8, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0ae8) {
            ctx->pc = 0x1E0BCCu;
            goto label_1e0bcc;
        }
    }
    ctx->pc = 0x1E0AF0u;
label_1e0af0:
    // 0x1e0af0: 0x29210010  slti        $at, $t1, 0x10
    ctx->pc = 0x1e0af0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1e0af4: 0x10200020  beqz        $at, . + 4 + (0x20 << 2)
    ctx->pc = 0x1E0AF4u;
    {
        const bool branch_taken_0x1e0af4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0af4) {
            ctx->pc = 0x1E0B78u;
            goto label_1e0b78;
        }
    }
    ctx->pc = 0x1E0AFCu;
    // 0x1e0afc: 0x919c0  sll         $v1, $t1, 7
    ctx->pc = 0x1e0afcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 7));
    // 0x1e0b00: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E0B00u;
    {
        const bool branch_taken_0x1e0b00 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1E0B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0B00u;
        // 0x1e0b04: 0x33903  sra         $a3, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0b00) {
            ctx->pc = 0x1E0B10u;
            goto label_1e0b10;
        }
    }
    ctx->pc = 0x1E0B08u;
    // 0x1e0b08: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x1e0b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1e0b0c: 0x33903  sra         $a3, $v1, 4
    ctx->pc = 0x1e0b0cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 3), 4));
label_1e0b10:
    // 0x1e0b10: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x1e0b10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e0b14: 0x671818  mult        $v1, $v1, $a3
    ctx->pc = 0x1e0b14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1e0b18: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E0B18u;
    {
        const bool branch_taken_0x1e0b18 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1E0B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0B18u;
        // 0x1e0b1c: 0x33903  sra         $a3, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0b18) {
            ctx->pc = 0x1E0B28u;
            goto label_1e0b28;
        }
    }
    ctx->pc = 0x1E0B20u;
    // 0x1e0b20: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x1e0b20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x1e0b24: 0x33903  sra         $a3, $v1, 4
    ctx->pc = 0x1e0b24u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 3), 4));
label_1e0b28:
    // 0x1e0b28: 0x4e10003  bgez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E0B28u;
    {
        const bool branch_taken_0x1e0b28 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x1E0B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0B28u;
        // 0x1e0b2c: 0x71883  sra         $v1, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0b28) {
            ctx->pc = 0x1E0B38u;
            goto label_1e0b38;
        }
    }
    ctx->pc = 0x1E0B30u;
    // 0x1e0b30: 0x24e30003  addiu       $v1, $a3, 0x3
    ctx->pc = 0x1e0b30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
    // 0x1e0b34: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x1e0b34u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_1e0b38:
    // 0x1e0b38: 0x94980  sll         $t1, $t1, 6
    ctx->pc = 0x1e0b38u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
    // 0x1e0b3c: 0x5210003  bgez        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E0B3Cu;
    {
        const bool branch_taken_0x1e0b3c = (GPR_S32(ctx, 9) >= 0);
        ctx->pc = 0x1E0B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0B3Cu;
        // 0x1e0b40: 0x93903  sra         $a3, $t1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0b3c) {
            ctx->pc = 0x1E0B4Cu;
            goto label_1e0b4c;
        }
    }
    ctx->pc = 0x1E0B44u;
    // 0x1e0b44: 0x2527000f  addiu       $a3, $t1, 0xF
    ctx->pc = 0x1e0b44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 15));
    // 0x1e0b48: 0x73903  sra         $a3, $a3, 4
    ctx->pc = 0x1e0b48u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 4));
label_1e0b4c:
    // 0x1e0b4c: 0x1a74823  subu        $t1, $t5, $a3
    ctx->pc = 0x1e0b4cu;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 7)));
    // 0x1e0b50: 0x24180080  addiu       $t8, $zero, 0x80
    ctx->pc = 0x1e0b50u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1e0b54: 0x1823823  subu        $a3, $t4, $v0
    ctx->pc = 0x1e0b54u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x1e0b58: 0x1273818  mult        $a3, $t1, $a3
    ctx->pc = 0x1e0b58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x1e0b5c: 0x74823  negu        $t1, $a3
    ctx->pc = 0x1e0b5cu;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 7)));
    // 0x1e0b60: 0x24e70200  addiu       $a3, $a3, 0x200
    ctx->pc = 0x1e0b60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 512));
    // 0x1e0b64: 0x94900  sll         $t1, $t1, 4
    ctx->pc = 0x1e0b64u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x1e0b68: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x1e0b68u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x1e0b6c: 0x252e6c00  addiu       $t6, $t1, 0x6C00
    ctx->pc = 0x1e0b6cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 9), 27648));
    // 0x1e0b70: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1E0B70u;
    {
        const bool branch_taken_0x1e0b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0B70u;
        // 0x1e0b74: 0x24ef6c00  addiu       $t7, $a3, 0x6C00 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 7), 27648));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0b70) {
            ctx->pc = 0x1E0BCCu;
            goto label_1e0bcc;
        }
    }
    ctx->pc = 0x1E0B78u;
label_1e0b78:
    // 0x1e0b78: 0x144b0005  bne         $v0, $t3, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E0B78u;
    {
        const bool branch_taken_0x1e0b78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 11));
        if (branch_taken_0x1e0b78) {
            ctx->pc = 0x1E0B90u;
            goto label_1e0b90;
        }
    }
    ctx->pc = 0x1E0B80u;
    // 0x1e0b80: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1e0b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1e0b84: 0x240e6c00  addiu       $t6, $zero, 0x6C00
    ctx->pc = 0x1e0b84u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 27648));
    // 0x1e0b88: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1E0B88u;
    {
        const bool branch_taken_0x1e0b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0B88u;
        // 0x1e0b8c: 0x340f8c00  ori         $t7, $zero, 0x8C00 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)35840);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0b88) {
            ctx->pc = 0x1E0B9Cu;
            goto label_1e0b9c;
        }
    }
    ctx->pc = 0x1E0B90u;
label_1e0b90:
    // 0x1e0b90: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1e0b90u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0b94: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x1e0b94u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0b98: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x1e0b98u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e0b9c:
    // 0x1e0b9c: 0x0  nop
    ctx->pc = 0x1e0b9cu;
    // NOP
    // 0x1e0ba0: 0x2527fff0  addiu       $a3, $t1, -0x10
    ctx->pc = 0x1e0ba0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967280));
    // 0x1e0ba4: 0x749c0  sll         $t1, $a3, 7
    ctx->pc = 0x1e0ba4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 7));
    // 0x1e0ba8: 0x5210003  bgez        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E0BA8u;
    {
        const bool branch_taken_0x1e0ba8 = (GPR_S32(ctx, 9) >= 0);
        ctx->pc = 0x1E0BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0BA8u;
        // 0x1e0bac: 0x938c3  sra         $a3, $t1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 9), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0ba8) {
            ctx->pc = 0x1E0BB8u;
            goto label_1e0bb8;
        }
    }
    ctx->pc = 0x1E0BB0u;
    // 0x1e0bb0: 0x25270007  addiu       $a3, $t1, 0x7
    ctx->pc = 0x1e0bb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 7));
    // 0x1e0bb4: 0x738c3  sra         $a3, $a3, 3
    ctx->pc = 0x1e0bb4u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 3));
label_1e0bb8:
    // 0x1e0bb8: 0x147c023  subu        $t8, $t2, $a3
    ctx->pc = 0x1e0bb8u;
    SET_GPR_S32(ctx, 24, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x1e0bbc: 0x7010003  bgez        $t8, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E0BBCu;
    {
        const bool branch_taken_0x1e0bbc = (GPR_S32(ctx, 24) >= 0);
        if (branch_taken_0x1e0bbc) {
            ctx->pc = 0x1E0BCCu;
            goto label_1e0bcc;
        }
    }
    ctx->pc = 0x1E0BC4u;
    // 0x1e0bc4: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x1E0BC4u;
    {
        const bool branch_taken_0x1e0bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0BC4u;
        // 0x1e0bc8: 0xc02d  daddu       $t8, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0bc4) {
            ctx->pc = 0x1E0BCCu;
            goto label_1e0bcc;
        }
    }
    ctx->pc = 0x1E0BCCu;
label_1e0bcc:
    // 0x1e0bcc: 0x0  nop
    ctx->pc = 0x1e0bccu;
    // NOP
    // 0x1e0bd0: 0xa64821  addu        $t1, $a1, $a2
    ctx->pc = 0x1e0bd0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1e0bd4: 0xa52e0160  sh          $t6, 0x160($t1)
    ctx->pc = 0x1e0bd4u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 352), (uint16_t)GPR_U32(ctx, 14));
    // 0x1e0bd8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e0bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e0bdc: 0xa52f0170  sh          $t7, 0x170($t1)
    ctx->pc = 0x1e0bdcu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 368), (uint16_t)GPR_U32(ctx, 15));
    // 0x1e0be0: 0x28470010  slti        $a3, $v0, 0x10
    ctx->pc = 0x1e0be0u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1e0be4: 0xa1380150  sb          $t8, 0x150($t1)
    ctx->pc = 0x1e0be4u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 336), (uint8_t)GPR_U32(ctx, 24));
    // 0x1e0be8: 0x24c600a0  addiu       $a2, $a2, 0xA0
    ctx->pc = 0x1e0be8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 160));
    // 0x1e0bec: 0xa1380151  sb          $t8, 0x151($t1)
    ctx->pc = 0x1e0becu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 337), (uint8_t)GPR_U32(ctx, 24));
    // 0x1e0bf0: 0xa1380152  sb          $t8, 0x152($t1)
    ctx->pc = 0x1e0bf0u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 338), (uint8_t)GPR_U32(ctx, 24));
    // 0x1e0bf4: 0xa1230153  sb          $v1, 0x153($t1)
    ctx->pc = 0x1e0bf4u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 339), (uint8_t)GPR_U32(ctx, 3));
    // 0x1e0bf8: 0x14e0ffb5  bnez        $a3, . + 4 + (-0x4B << 2)
    ctx->pc = 0x1E0BF8u;
    {
        const bool branch_taken_0x1e0bf8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E0BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0BF8u;
        // 0x1e0bfc: 0xad280154  sw          $t0, 0x154($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 340), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0bf8) {
            ctx->pc = 0x1E0AD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e0ad0;
        }
    }
    ctx->pc = 0x1E0C00u;
    // 0x1e0c00: 0x8f828d20  lw          $v0, -0x72E0($gp)
    ctx->pc = 0x1e0c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937888)));
    // 0x1e0c04: 0x28410010  slti        $at, $v0, 0x10
    ctx->pc = 0x1e0c04u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1e0c08: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E0C08u;
    {
        const bool branch_taken_0x1e0c08 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0C08u;
        // 0x1e0c0c: 0x24a30ae0  addiu       $v1, $a1, 0xAE0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 2784));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0c08) {
            ctx->pc = 0x1E0C18u;
            goto label_1e0c18;
        }
    }
    ctx->pc = 0x1E0C10u;
    // 0x1e0c10: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E0C10u;
    {
        const bool branch_taken_0x1e0c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0C10u;
        // 0x1e0c14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0c10) {
            ctx->pc = 0x1E0C1Cu;
            goto label_1e0c1c;
        }
    }
    ctx->pc = 0x1E0C18u;
label_1e0c18:
    // 0x1e0c18: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1e0c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1e0c1c:
    // 0x1e0c1c: 0xa0620073  sb          $v0, 0x73($v1)
    ctx->pc = 0x1e0c1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 115), (uint8_t)GPR_U32(ctx, 2));
    // 0x1e0c20: 0x8f828d20  lw          $v0, -0x72E0($gp)
    ctx->pc = 0x1e0c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937888)));
    // 0x1e0c24: 0x28410010  slti        $at, $v0, 0x10
    ctx->pc = 0x1e0c24u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1e0c28: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E0C28u;
    {
        const bool branch_taken_0x1e0c28 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0C28u;
        // 0x1e0c2c: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0c28) {
            ctx->pc = 0x1E0C50u;
            goto label_1e0c50;
        }
    }
    ctx->pc = 0x1E0C30u;
    // 0x1e0c30: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x1e0c30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x1e0c34: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E0C34u;
    {
        const bool branch_taken_0x1e0c34 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1E0C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0C34u;
        // 0x1e0c38: 0x23103  sra         $a2, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0c34) {
            ctx->pc = 0x1E0C50u;
            goto label_1e0c50;
        }
    }
    ctx->pc = 0x1E0C3Cu;
    // 0x1e0c3c: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x1e0c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x1e0c40: 0x23103  sra         $a2, $v0, 4
    ctx->pc = 0x1e0c40u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 4));
    // 0x1e0c44: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E0C44u;
    {
        const bool branch_taken_0x1e0c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0C44u;
        // 0x1e0c48: 0xa0a600b3  sb          $a2, 0xB3($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 179), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0c44) {
            ctx->pc = 0x1E0C54u;
            goto label_1e0c54;
        }
    }
    ctx->pc = 0x1E0C4Cu;
    // 0x1e0c4c: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1e0c4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1e0c50:
    // 0x1e0c50: 0xa0a600b3  sb          $a2, 0xB3($a1)
    ctx->pc = 0x1e0c50u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 179), (uint8_t)GPR_U32(ctx, 6));
label_1e0c54:
    // 0x1e0c54: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1e0c54u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0c58: 0xa0a60083  sb          $a2, 0x83($a1)
    ctx->pc = 0x1e0c58u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 131), (uint8_t)GPR_U32(ctx, 6));
    // 0x1e0c5c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e0c5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0c60: 0x240a000f  addiu       $t2, $zero, 0xF
    ctx->pc = 0x1e0c60u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1e0c64: 0x240b0080  addiu       $t3, $zero, 0x80
    ctx->pc = 0x1e0c64u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1e0c68: 0x240d0040  addiu       $t5, $zero, 0x40
    ctx->pc = 0x1e0c68u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1e0c6c: 0x240c0010  addiu       $t4, $zero, 0x10
    ctx->pc = 0x1e0c6cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1e0c70: 0x3c083f80  lui         $t0, 0x3F80
    ctx->pc = 0x1e0c70u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16256 << 16));
label_1e0c74:
    // 0x1e0c74: 0x8f898d24  lw          $t1, -0x72DC($gp)
    ctx->pc = 0x1e0c74u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937892)));
    // 0x1e0c78: 0x15200006  bnez        $t1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E0C78u;
    {
        const bool branch_taken_0x1e0c78 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e0c78) {
            ctx->pc = 0x1E0C94u;
            goto label_1e0c94;
        }
    }
    ctx->pc = 0x1E0C80u;
    // 0x1e0c80: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e0c80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0c84: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x1e0c84u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0c88: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x1e0c88u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0c8c: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x1E0C8Cu;
    {
        const bool branch_taken_0x1e0c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0C8Cu;
        // 0x1e0c90: 0x24180080  addiu       $t8, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0c8c) {
            ctx->pc = 0x1E0D74u;
            goto label_1e0d74;
        }
    }
    ctx->pc = 0x1E0C94u;
label_1e0c94:
    // 0x1e0c94: 0x0  nop
    ctx->pc = 0x1e0c94u;
    // NOP
    // 0x1e0c98: 0x29210010  slti        $at, $t1, 0x10
    ctx->pc = 0x1e0c98u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1e0c9c: 0x10200020  beqz        $at, . + 4 + (0x20 << 2)
    ctx->pc = 0x1E0C9Cu;
    {
        const bool branch_taken_0x1e0c9c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0c9c) {
            ctx->pc = 0x1E0D20u;
            goto label_1e0d20;
        }
    }
    ctx->pc = 0x1E0CA4u;
    // 0x1e0ca4: 0x931c0  sll         $a2, $t1, 7
    ctx->pc = 0x1e0ca4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 9), 7));
    // 0x1e0ca8: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E0CA8u;
    {
        const bool branch_taken_0x1e0ca8 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1E0CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0CA8u;
        // 0x1e0cac: 0x63903  sra         $a3, $a2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0ca8) {
            ctx->pc = 0x1E0CB8u;
            goto label_1e0cb8;
        }
    }
    ctx->pc = 0x1E0CB0u;
    // 0x1e0cb0: 0x24c6000f  addiu       $a2, $a2, 0xF
    ctx->pc = 0x1e0cb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
    // 0x1e0cb4: 0x63903  sra         $a3, $a2, 4
    ctx->pc = 0x1e0cb4u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 6), 4));
label_1e0cb8:
    // 0x1e0cb8: 0x24660001  addiu       $a2, $v1, 0x1
    ctx->pc = 0x1e0cb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1e0cbc: 0xc73018  mult        $a2, $a2, $a3
    ctx->pc = 0x1e0cbcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1e0cc0: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E0CC0u;
    {
        const bool branch_taken_0x1e0cc0 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1E0CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0CC0u;
        // 0x1e0cc4: 0x63903  sra         $a3, $a2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0cc0) {
            ctx->pc = 0x1E0CD0u;
            goto label_1e0cd0;
        }
    }
    ctx->pc = 0x1E0CC8u;
    // 0x1e0cc8: 0x24c6000f  addiu       $a2, $a2, 0xF
    ctx->pc = 0x1e0cc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
    // 0x1e0ccc: 0x63903  sra         $a3, $a2, 4
    ctx->pc = 0x1e0cccu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 6), 4));
label_1e0cd0:
    // 0x1e0cd0: 0x4e10003  bgez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E0CD0u;
    {
        const bool branch_taken_0x1e0cd0 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x1E0CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0CD0u;
        // 0x1e0cd4: 0x73083  sra         $a2, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0cd0) {
            ctx->pc = 0x1E0CE0u;
            goto label_1e0ce0;
        }
    }
    ctx->pc = 0x1E0CD8u;
    // 0x1e0cd8: 0x24e60003  addiu       $a2, $a3, 0x3
    ctx->pc = 0x1e0cd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
    // 0x1e0cdc: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x1e0cdcu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
label_1e0ce0:
    // 0x1e0ce0: 0x94980  sll         $t1, $t1, 6
    ctx->pc = 0x1e0ce0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
    // 0x1e0ce4: 0x5210003  bgez        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E0CE4u;
    {
        const bool branch_taken_0x1e0ce4 = (GPR_S32(ctx, 9) >= 0);
        ctx->pc = 0x1E0CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0CE4u;
        // 0x1e0ce8: 0x93903  sra         $a3, $t1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0ce4) {
            ctx->pc = 0x1E0CF4u;
            goto label_1e0cf4;
        }
    }
    ctx->pc = 0x1E0CECu;
    // 0x1e0cec: 0x2527000f  addiu       $a3, $t1, 0xF
    ctx->pc = 0x1e0cecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 15));
    // 0x1e0cf0: 0x73903  sra         $a3, $a3, 4
    ctx->pc = 0x1e0cf0u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 4));
label_1e0cf4:
    // 0x1e0cf4: 0x1a74823  subu        $t1, $t5, $a3
    ctx->pc = 0x1e0cf4u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 7)));
    // 0x1e0cf8: 0x160c02d  daddu       $t8, $t3, $zero
    ctx->pc = 0x1e0cf8u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0cfc: 0x1833823  subu        $a3, $t4, $v1
    ctx->pc = 0x1e0cfcu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x1e0d00: 0x1273818  mult        $a3, $t1, $a3
    ctx->pc = 0x1e0d00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x1e0d04: 0x1674823  subu        $t1, $t3, $a3
    ctx->pc = 0x1e0d04u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
    // 0x1e0d08: 0x24e70280  addiu       $a3, $a3, 0x280
    ctx->pc = 0x1e0d08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 640));
    // 0x1e0d0c: 0x94900  sll         $t1, $t1, 4
    ctx->pc = 0x1e0d0cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x1e0d10: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x1e0d10u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x1e0d14: 0x252f6c00  addiu       $t7, $t1, 0x6C00
    ctx->pc = 0x1e0d14u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 9), 27648));
    // 0x1e0d18: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1E0D18u;
    {
        const bool branch_taken_0x1e0d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0D18u;
        // 0x1e0d1c: 0x24ee6c00  addiu       $t6, $a3, 0x6C00 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 7), 27648));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0d18) {
            ctx->pc = 0x1E0D74u;
            goto label_1e0d74;
        }
    }
    ctx->pc = 0x1E0D20u;
label_1e0d20:
    // 0x1e0d20: 0x146a0005  bne         $v1, $t2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E0D20u;
    {
        const bool branch_taken_0x1e0d20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 10));
        if (branch_taken_0x1e0d20) {
            ctx->pc = 0x1E0D38u;
            goto label_1e0d38;
        }
    }
    ctx->pc = 0x1E0D28u;
    // 0x1e0d28: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1e0d28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1e0d2c: 0x240f7400  addiu       $t7, $zero, 0x7400
    ctx->pc = 0x1e0d2cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 29696));
    // 0x1e0d30: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1E0D30u;
    {
        const bool branch_taken_0x1e0d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0D30u;
        // 0x1e0d34: 0x340e9400  ori         $t6, $zero, 0x9400 (Delay Slot)
        SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37888);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0d30) {
            ctx->pc = 0x1E0D44u;
            goto label_1e0d44;
        }
    }
    ctx->pc = 0x1E0D38u;
label_1e0d38:
    // 0x1e0d38: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e0d38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0d3c: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x1e0d3cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0d40: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x1e0d40u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e0d44:
    // 0x1e0d44: 0x0  nop
    ctx->pc = 0x1e0d44u;
    // NOP
    // 0x1e0d48: 0x2527fff0  addiu       $a3, $t1, -0x10
    ctx->pc = 0x1e0d48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967280));
    // 0x1e0d4c: 0x749c0  sll         $t1, $a3, 7
    ctx->pc = 0x1e0d4cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), 7));
    // 0x1e0d50: 0x5210003  bgez        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E0D50u;
    {
        const bool branch_taken_0x1e0d50 = (GPR_S32(ctx, 9) >= 0);
        ctx->pc = 0x1E0D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0D50u;
        // 0x1e0d54: 0x938c3  sra         $a3, $t1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 9), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0d50) {
            ctx->pc = 0x1E0D60u;
            goto label_1e0d60;
        }
    }
    ctx->pc = 0x1E0D58u;
    // 0x1e0d58: 0x25270007  addiu       $a3, $t1, 0x7
    ctx->pc = 0x1e0d58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 7));
    // 0x1e0d5c: 0x738c3  sra         $a3, $a3, 3
    ctx->pc = 0x1e0d5cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 3));
label_1e0d60:
    // 0x1e0d60: 0x167c023  subu        $t8, $t3, $a3
    ctx->pc = 0x1e0d60u;
    SET_GPR_S32(ctx, 24, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
    // 0x1e0d64: 0x7010003  bgez        $t8, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E0D64u;
    {
        const bool branch_taken_0x1e0d64 = (GPR_S32(ctx, 24) >= 0);
        if (branch_taken_0x1e0d64) {
            ctx->pc = 0x1E0D74u;
            goto label_1e0d74;
        }
    }
    ctx->pc = 0x1E0D6Cu;
    // 0x1e0d6c: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x1E0D6Cu;
    {
        const bool branch_taken_0x1e0d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0D6Cu;
        // 0x1e0d70: 0xc02d  daddu       $t8, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0d6c) {
            ctx->pc = 0x1E0D74u;
            goto label_1e0d74;
        }
    }
    ctx->pc = 0x1E0D74u;
label_1e0d74:
    // 0x1e0d74: 0x0  nop
    ctx->pc = 0x1e0d74u;
    // NOP
    // 0x1e0d78: 0xa24821  addu        $t1, $a1, $v0
    ctx->pc = 0x1e0d78u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1e0d7c: 0xa52f0cd0  sh          $t7, 0xCD0($t1)
    ctx->pc = 0x1e0d7cu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 3280), (uint16_t)GPR_U32(ctx, 15));
    // 0x1e0d80: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1e0d80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1e0d84: 0xa52e0ce0  sh          $t6, 0xCE0($t1)
    ctx->pc = 0x1e0d84u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 3296), (uint16_t)GPR_U32(ctx, 14));
    // 0x1e0d88: 0x28670010  slti        $a3, $v1, 0x10
    ctx->pc = 0x1e0d88u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1e0d8c: 0xa1380cc0  sb          $t8, 0xCC0($t1)
    ctx->pc = 0x1e0d8cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 3264), (uint8_t)GPR_U32(ctx, 24));
    // 0x1e0d90: 0x244200a0  addiu       $v0, $v0, 0xA0
    ctx->pc = 0x1e0d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    // 0x1e0d94: 0xa1380cc1  sb          $t8, 0xCC1($t1)
    ctx->pc = 0x1e0d94u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 3265), (uint8_t)GPR_U32(ctx, 24));
    // 0x1e0d98: 0xa1380cc2  sb          $t8, 0xCC2($t1)
    ctx->pc = 0x1e0d98u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 3266), (uint8_t)GPR_U32(ctx, 24));
    // 0x1e0d9c: 0xa1260cc3  sb          $a2, 0xCC3($t1)
    ctx->pc = 0x1e0d9cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 3267), (uint8_t)GPR_U32(ctx, 6));
    // 0x1e0da0: 0x14e0ffb4  bnez        $a3, . + 4 + (-0x4C << 2)
    ctx->pc = 0x1E0DA0u;
    {
        const bool branch_taken_0x1e0da0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E0DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0DA0u;
        // 0x1e0da4: 0xad280cc4  sw          $t0, 0xCC4($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 3268), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0da0) {
            ctx->pc = 0x1E0C74u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e0c74;
        }
    }
    ctx->pc = 0x1E0DA8u;
    // 0x1e0da8: 0x8f828d24  lw          $v0, -0x72DC($gp)
    ctx->pc = 0x1e0da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937892)));
    // 0x1e0dac: 0x28410010  slti        $at, $v0, 0x10
    ctx->pc = 0x1e0dacu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1e0db0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E0DB0u;
    {
        const bool branch_taken_0x1e0db0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0DB0u;
        // 0x1e0db4: 0x24a31650  addiu       $v1, $a1, 0x1650 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 5712));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0db0) {
            ctx->pc = 0x1E0DC0u;
            goto label_1e0dc0;
        }
    }
    ctx->pc = 0x1E0DB8u;
    // 0x1e0db8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1E0DB8u;
    {
        const bool branch_taken_0x1e0db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0DB8u;
        // 0x1e0dbc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0db8) {
            ctx->pc = 0x1E0DC4u;
            goto label_1e0dc4;
        }
    }
    ctx->pc = 0x1E0DC0u;
label_1e0dc0:
    // 0x1e0dc0: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1e0dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1e0dc4:
    // 0x1e0dc4: 0xa0620073  sb          $v0, 0x73($v1)
    ctx->pc = 0x1e0dc4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 115), (uint8_t)GPR_U32(ctx, 2));
    // 0x1e0dc8: 0x8f828d24  lw          $v0, -0x72DC($gp)
    ctx->pc = 0x1e0dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937892)));
    // 0x1e0dcc: 0x28410010  slti        $at, $v0, 0x10
    ctx->pc = 0x1e0dccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1e0dd0: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E0DD0u;
    {
        const bool branch_taken_0x1e0dd0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e0dd0) {
            ctx->pc = 0x1E0DF4u;
            goto label_1e0df4;
        }
    }
    ctx->pc = 0x1E0DD8u;
    // 0x1e0dd8: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x1e0dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x1e0ddc: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E0DDCu;
    {
        const bool branch_taken_0x1e0ddc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1E0DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0DDCu;
        // 0x1e0de0: 0x21903  sra         $v1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0ddc) {
            ctx->pc = 0x1E0DF8u;
            goto label_1e0df8;
        }
    }
    ctx->pc = 0x1E0DE4u;
    // 0x1e0de4: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x1e0de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x1e0de8: 0x21903  sra         $v1, $v0, 4
    ctx->pc = 0x1e0de8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 4));
    // 0x1e0dec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1E0DECu;
    {
        const bool branch_taken_0x1e0dec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0DECu;
        // 0x1e0df0: 0xa0a30c3b  sb          $v1, 0xC3B($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 3131), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0dec) {
            ctx->pc = 0x1E0DFCu;
            goto label_1e0dfc;
        }
    }
    ctx->pc = 0x1E0DF4u;
label_1e0df4:
    // 0x1e0df4: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1e0df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1e0df8:
    // 0x1e0df8: 0xa0a30c3b  sb          $v1, 0xC3B($a1)
    ctx->pc = 0x1e0df8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3131), (uint8_t)GPR_U32(ctx, 3));
label_1e0dfc:
    // 0x1e0dfc: 0x2406016f  addiu       $a2, $zero, 0x16F
    ctx->pc = 0x1e0dfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 367));
    // 0x1e0e00: 0xa0a30c0b  sb          $v1, 0xC0B($a1)
    ctx->pc = 0x1e0e00u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3083), (uint8_t)GPR_U32(ctx, 3));
    // 0x1e0e04: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e0e04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0e08: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1e0e08u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0e0c: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x1E0E0Cu;
    SET_GPR_U32(ctx, 31, 0x1E0E14u);
    ctx->pc = 0x1E0E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0E0Cu;
    // 0x1e0e10: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1E0E0Cu, 0x1E0E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E0E14u;
}
