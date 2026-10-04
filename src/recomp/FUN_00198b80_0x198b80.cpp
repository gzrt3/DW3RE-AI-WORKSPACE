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

// Function: FUN_00198b80
// Address: 0x198b80 - 0x198c7c
void FUN_00198b80_0x198b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00198b80_0x198b80");
#endif

    ctx->pc = 0x198b80u;

    // 0x198b80: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x198b80u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x198b84: 0x94c00  sll         $t1, $t1, 16
    ctx->pc = 0x198b84u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
    // 0x198b88: 0x73c03  sra         $a3, $a3, 16
    ctx->pc = 0x198b88u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 16));
    // 0x198b8c: 0x94c03  sra         $t1, $t1, 16
    ctx->pc = 0x198b8cu;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 16));
    // 0x198b90: 0xe94821  addu        $t1, $a3, $t1
    ctx->pc = 0x198b90u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x198b94: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x198b94u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x198b98: 0x84400  sll         $t0, $t0, 16
    ctx->pc = 0x198b98u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x198b9c: 0x93ac0000  lbu         $t4, 0x0($sp)
    ctx->pc = 0x198b9cu;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x198ba0: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x198ba0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x198ba4: 0x84403  sra         $t0, $t0, 16
    ctx->pc = 0x198ba4u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 16));
    // 0x198ba8: 0x94900  sll         $t1, $t1, 4
    ctx->pc = 0x198ba8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x198bac: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x198bacu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x198bb0: 0x9fa30010  lwu         $v1, 0x10($sp)
    ctx->pc = 0x198bb0u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x198bb4: 0xc84021  addu        $t0, $a2, $t0
    ctx->pc = 0x198bb4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x198bb8: 0x316b00ff  andi        $t3, $t3, 0xFF
    ctx->pc = 0x198bb8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)255);
    // 0x198bbc: 0x93ad0008  lbu         $t5, 0x8($sp)
    ctx->pc = 0x198bbcu;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x198bc0: 0xb5a38  dsll        $t3, $t3, 8
    ctx->pc = 0x198bc0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << 8);
    // 0x198bc4: 0x3402fe00  ori         $v0, $zero, 0xFE00
    ctx->pc = 0x198bc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    // 0x198bc8: 0x213bc  dsll32      $v0, $v0, 14
    ctx->pc = 0x198bc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 14));
    // 0x198bcc: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x198bccu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x198bd0: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x198bd0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x198bd4: 0x314a00ff  andi        $t2, $t2, 0xFF
    ctx->pc = 0x198bd4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)255);
    // 0x198bd8: 0xc6438  dsll        $t4, $t4, 16
    ctx->pc = 0x198bd8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 16);
    // 0x198bdc: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x198bdcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x198be0: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x198be0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x198be4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x198be4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x198be8: 0x1425025  or          $t2, $t2, $v0
    ctx->pc = 0x198be8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x198bec: 0x18b6025  or          $t4, $t4, $t3
    ctx->pc = 0x198becu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 11));
    // 0x198bf0: 0xc73825  or          $a3, $a2, $a3
    ctx->pc = 0x198bf0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x198bf4: 0x1094825  or          $t1, $t0, $t1
    ctx->pc = 0x198bf4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) | GPR_U64(ctx, 9));
    // 0x198bf8: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x198bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x198bfc: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x198bfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198c00: 0x1234825  or          $t1, $t1, $v1
    ctx->pc = 0x198c00u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
    // 0x198c04: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x198c04u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x198c08: 0x14c5025  or          $t2, $t2, $t4
    ctx->pc = 0x198c08u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 12));
    // 0x198c0c: 0xd6e38  dsll        $t5, $t5, 24
    ctx->pc = 0x198c0cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << 24);
    // 0x198c10: 0x54403  sra         $t0, $a1, 16
    ctx->pc = 0x198c10u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 5), 16));
    // 0x198c14: 0x24040047  addiu       $a0, $zero, 0x47
    ctx->pc = 0x198c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x198c18: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x198c18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x198c1c: 0x14d5025  or          $t2, $t2, $t5
    ctx->pc = 0x198c1cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 13));
    // 0x198c20: 0x3c0b0003  lui         $t3, 0x3
    ctx->pc = 0x198c20u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)3 << 16));
    // 0x198c24: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x198c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x198c28: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x198c28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x198c2c: 0xfcc20010  sd          $v0, 0x10($a2)
    ctx->pc = 0x198c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 2));
    // 0x198c30: 0xfcc30028  sd          $v1, 0x28($a2)
    ctx->pc = 0x198c30u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 40), GPR_U64(ctx, 3));
    // 0x198c34: 0xfcca0020  sd          $t2, 0x20($a2)
    ctx->pc = 0x198c34u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 32), GPR_U64(ctx, 10));
    // 0x198c38: 0xfcc70030  sd          $a3, 0x30($a2)
    ctx->pc = 0x198c38u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 48), GPR_U64(ctx, 7));
    // 0x198c3c: 0xfcc50048  sd          $a1, 0x48($a2)
    ctx->pc = 0x198c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 72), GPR_U64(ctx, 5));
    // 0x198c40: 0xfcc90040  sd          $t1, 0x40($a2)
    ctx->pc = 0x198c40u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 64), GPR_U64(ctx, 9));
    // 0x198c44: 0xfcc40058  sd          $a0, 0x58($a2)
    ctx->pc = 0x198c44u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 88), GPR_U64(ctx, 4));
    // 0x198c48: 0xfcc40008  sd          $a0, 0x8($a2)
    ctx->pc = 0x198c48u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 4));
    // 0x198c4c: 0xfccb0000  sd          $t3, 0x0($a2)
    ctx->pc = 0x198c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 11));
    // 0x198c50: 0xfcc00018  sd          $zero, 0x18($a2)
    ctx->pc = 0x198c50u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 0));
    // 0x198c54: 0x11000007  beqz        $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x198C54u;
    {
        const bool branch_taken_0x198c54 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x198C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198C54u;
        // 0x198c58: 0xfcc50038  sd          $a1, 0x38($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 56), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198c54) {
            ctx->pc = 0x198C74u;
            goto label_198c74;
        }
    }
    ctx->pc = 0x198C5Cu;
    // 0x198c5c: 0x31020003  andi        $v0, $t0, 0x3
    ctx->pc = 0x198c5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
    // 0x198c60: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x198c60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x198c64: 0x21478  dsll        $v0, $v0, 17
    ctx->pc = 0x198c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 17);
    // 0x198c68: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x198c68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x198c6c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x198C6Cu;
    {
        const bool branch_taken_0x198c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198C6Cu;
        // 0x198c70: 0xfcc20050  sd          $v0, 0x50($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 80), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198c6c) {
            ctx->pc = 0x198C78u;
            goto label_198c78;
        }
    }
    ctx->pc = 0x198C74u;
label_198c74:
    // 0x198c74: 0xfccb0050  sd          $t3, 0x50($a2)
    ctx->pc = 0x198c74u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 80), GPR_U64(ctx, 11));
label_198c78:
    // 0x198c78: 0xf  sync
    ctx->pc = 0x198c78u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    ctx->pc = 0x198c7cu;
}
