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

// Function: FUN_0023ca38
// Address: 0x23ca38 - 0x23cb40
void FUN_0023ca38_0x23ca38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0023ca38_0x23ca38");
#endif

    switch (ctx->pc) {
        case 0x23cabcu: goto label_23cabc;
        case 0x23cb0cu: goto label_23cb0c;
        default: break;
    }

    ctx->pc = 0x23ca38u;

    // 0x23ca38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x23ca38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x23ca3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23ca3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x23ca40: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23ca40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ca44: 0x32020007  andi        $v0, $s0, 0x7
    ctx->pc = 0x23ca44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)7);
    // 0x23ca48: 0x14400038  bnez        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x23CA48u;
    {
        const bool branch_taken_0x23ca48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23CA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CA48u;
        // 0x23ca4c: 0x7fbf0010  sq          $ra, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ca48) {
            ctx->pc = 0x23CB2Cu;
            goto label_23cb2c;
        }
    }
    ctx->pc = 0x23CA50u;
    // 0x23ca50: 0x3202000f  andi        $v0, $s0, 0xF
    ctx->pc = 0x23ca50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
    // 0x23ca54: 0x3c030101  lui         $v1, 0x101
    ctx->pc = 0x23ca54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)257 << 16));
    // 0x23ca58: 0x34630101  ori         $v1, $v1, 0x101
    ctx->pc = 0x23ca58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)257);
    // 0x23ca5c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x23ca5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x23ca60: 0x34630101  ori         $v1, $v1, 0x101
    ctx->pc = 0x23ca60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)257);
    // 0x23ca64: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x23ca64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x23ca68: 0x34630101  ori         $v1, $v1, 0x101
    ctx->pc = 0x23ca68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)257);
    // 0x23ca6c: 0x3c048080  lui         $a0, 0x8080
    ctx->pc = 0x23ca6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32896 << 16));
    // 0x23ca70: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x23ca70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x23ca74: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x23ca74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x23ca78: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x23ca78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x23ca7c: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x23ca7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x23ca80: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x23ca80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x23ca84: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x23CA84u;
    {
        const bool branch_taken_0x23ca84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23CA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CA84u;
        // 0x23ca88: 0xde060000  ld          $a2, 0x0($s0) (Delay Slot)
        SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ca84) {
            ctx->pc = 0x23CAE8u;
            goto label_23cae8;
        }
    }
    ctx->pc = 0x23CA8Cu;
    // 0x23ca8c: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x23ca8cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x23ca90: 0x70633b89  pcpyld      $a3, $v1, $v1
    ctx->pc = 0x23ca90u;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 3)));
    // 0x23ca94: 0x70844389  pcpyld      $t0, $a0, $a0
    ctx->pc = 0x23ca94u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 4)));
    // 0x23ca98: 0x70471a48  psubb       $v1, $v0, $a3
    ctx->pc = 0x23ca98u;
    SET_GPR_VEC(ctx, 3, PS2_PSUBB(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x23ca9c: 0x700214e9  pnor        $v0, $zero, $v0
    ctx->pc = 0x23ca9cu;
    SET_GPR_VEC(ctx, 2, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x23caa0: 0x70621c89  pand        $v1, $v1, $v0
    ctx->pc = 0x23caa0u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x23caa4: 0x70681c89  pand        $v1, $v1, $t0
    ctx->pc = 0x23caa4u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 8)));
    // 0x23caa8: 0x706313a9  pcpyud      $v0, $v1, $v1
    ctx->pc = 0x23caa8u;
    SET_GPR_VEC(ctx, 2, _mm_unpackhi_epi64(GPR_VEC(ctx, 3), GPR_VEC(ctx, 3)));
    // 0x23caac: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x23caacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x23cab0: 0x1460001e  bnez        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x23CAB0u;
    {
        const bool branch_taken_0x23cab0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23CAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CAB0u;
        // 0x23cab4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cab0) {
            ctx->pc = 0x23CB2Cu;
            goto label_23cb2c;
        }
    }
    ctx->pc = 0x23CAB8u;
    // 0x23cab8: 0x24860010  addiu       $a2, $a0, 0x10
    ctx->pc = 0x23cab8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_23cabc:
    // 0x23cabc: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x23cabcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x23cac0: 0x70021ce9  pnor        $v1, $zero, $v0
    ctx->pc = 0x23cac0u;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x23cac4: 0x70471248  psubb       $v0, $v0, $a3
    ctx->pc = 0x23cac4u;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x23cac8: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x23cac8u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x23cacc: 0x70481489  pand        $v0, $v0, $t0
    ctx->pc = 0x23caccu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 8)));
    // 0x23cad0: 0x70421ba9  pcpyud      $v1, $v0, $v0
    ctx->pc = 0x23cad0u;
    SET_GPR_VEC(ctx, 3, _mm_unpackhi_epi64(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
    // 0x23cad4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x23cad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x23cad8: 0x5040fff8  beql        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x23CAD8u;
    {
        const bool branch_taken_0x23cad8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23cad8) {
            ctx->pc = 0x23CADCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23CAD8u;
            // 0x23cadc: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23CABCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23cabc;
        }
    }
    ctx->pc = 0x23CAE0u;
    // 0x23cae0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x23CAE0u;
    {
        const bool branch_taken_0x23cae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CAE0u;
        // 0x23cae4: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cae0) {
            ctx->pc = 0x23CB2Cu;
            goto label_23cb2c;
        }
    }
    ctx->pc = 0x23CAE8u;
label_23cae8:
    // 0x23cae8: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x23cae8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23caec: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x23caecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23caf0: 0xc3182f  dsubu       $v1, $a2, $v1
    ctx->pc = 0x23caf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) - GPR_U64(ctx, 3));
    // 0x23caf4: 0x61027  nor         $v0, $zero, $a2
    ctx->pc = 0x23caf4u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 6)));
    // 0x23caf8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x23caf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x23cafc: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x23cafcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x23cb00: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x23CB00u;
    {
        const bool branch_taken_0x23cb00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23CB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CB00u;
        // 0x23cb04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cb00) {
            ctx->pc = 0x23CB2Cu;
            goto label_23cb2c;
        }
    }
    ctx->pc = 0x23CB08u;
    // 0x23cb08: 0x26060008  addiu       $a2, $s0, 0x8
    ctx->pc = 0x23cb08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_23cb0c:
    // 0x23cb0c: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x23cb0cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x23cb10: 0x21827  nor         $v1, $zero, $v0
    ctx->pc = 0x23cb10u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x23cb14: 0x47102f  dsubu       $v0, $v0, $a3
    ctx->pc = 0x23cb14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 7));
    // 0x23cb18: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x23cb18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x23cb1c: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x23cb1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x23cb20: 0x5040fffa  beql        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x23CB20u;
    {
        const bool branch_taken_0x23cb20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23cb20) {
            ctx->pc = 0x23CB24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23CB20u;
            // 0x23cb24: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23CB0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23cb0c;
        }
    }
    ctx->pc = 0x23CB28u;
    // 0x23cb28: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x23cb28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_23cb2c:
    // 0x23cb2c: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x23cb2cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x23cb30: 0x0  nop
    ctx->pc = 0x23cb30u;
    // NOP
    // 0x23cb34: 0x0  nop
    ctx->pc = 0x23cb34u;
    // NOP
    // 0x23cb38: 0x0  nop
    ctx->pc = 0x23cb38u;
    // NOP
    // 0x23cb3c: 0x0  nop
    ctx->pc = 0x23cb3cu;
    // NOP
    ctx->pc = 0x23cb40u;
}
