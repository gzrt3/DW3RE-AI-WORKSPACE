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

// Function: FUN_0023cb68
// Address: 0x23cb68 - 0x23ccf0
void FUN_0023cb68_0x23cb68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0023cb68_0x23cb68");
#endif

    switch (ctx->pc) {
        case 0x23cbc4u: goto label_23cbc4;
        case 0x23cc90u: goto label_23cc90;
        case 0x23ccccu: goto label_23cccc;
        default: break;
    }

    ctx->pc = 0x23cb68u;

    // 0x23cb68: 0x30820007  andi        $v0, $a0, 0x7
    ctx->pc = 0x23cb68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
    // 0x23cb6c: 0x1440005a  bnez        $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x23CB6Cu;
    {
        const bool branch_taken_0x23cb6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23CB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CB6Cu;
        // 0x23cb70: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cb6c) {
            ctx->pc = 0x23CCD8u;
            goto label_23ccd8;
        }
    }
    ctx->pc = 0x23CB74u;
    // 0x23cb74: 0x51a38  dsll        $v1, $a1, 8
    ctx->pc = 0x23cb74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << 8);
    // 0x23cb78: 0x3c060101  lui         $a2, 0x101
    ctx->pc = 0x23cb78u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)257 << 16));
    // 0x23cb7c: 0x34c60101  ori         $a2, $a2, 0x101
    ctx->pc = 0x23cb7cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)257);
    // 0x23cb80: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x23cb80u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x23cb84: 0x34c60101  ori         $a2, $a2, 0x101
    ctx->pc = 0x23cb84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)257);
    // 0x23cb88: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x23cb88u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x23cb8c: 0x34c60101  ori         $a2, $a2, 0x101
    ctx->pc = 0x23cb8cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)257);
    // 0x23cb90: 0x65502d  daddu       $t2, $v1, $a1
    ctx->pc = 0x23cb90u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 5));
    // 0x23cb94: 0x3083000f  andi        $v1, $a0, 0xF
    ctx->pc = 0x23cb94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x23cb98: 0xa1438  dsll        $v0, $t2, 16
    ctx->pc = 0x23cb98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) << 16);
    // 0x23cb9c: 0x3c088080  lui         $t0, 0x8080
    ctx->pc = 0x23cb9cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32896 << 16));
    // 0x23cba0: 0x35088080  ori         $t0, $t0, 0x8080
    ctx->pc = 0x23cba0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32896);
    // 0x23cba4: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x23cba4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x23cba8: 0x35088080  ori         $t0, $t0, 0x8080
    ctx->pc = 0x23cba8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32896);
    // 0x23cbac: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x23cbacu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x23cbb0: 0x35088080  ori         $t0, $t0, 0x8080
    ctx->pc = 0x23cbb0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32896);
    // 0x23cbb4: 0x4a102d  daddu       $v0, $v0, $t2
    ctx->pc = 0x23cbb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 10));
    // 0x23cbb8: 0x2503c  dsll32      $t2, $v0, 0
    ctx->pc = 0x23cbb8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) << (32 + 0));
    // 0x23cbbc: 0x14600024  bnez        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x23CBBCu;
    {
        const bool branch_taken_0x23cbbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23CBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CBBCu;
        // 0x23cbc0: 0x4a382d  daddu       $a3, $v0, $t2 (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cbbc) {
            ctx->pc = 0x23CC50u;
            goto label_23cc50;
        }
    }
    ctx->pc = 0x23CBC4u;
label_23cbc4:
    // 0x23cbc4: 0x78890000  lq          $t1, 0x0($a0)
    ctx->pc = 0x23cbc4u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x23cbc8: 0x70c65389  pcpyld      $t2, $a2, $a2
    ctx->pc = 0x23cbc8u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 6)));
    // 0x23cbcc: 0x70091ce9  pnor        $v1, $zero, $t1
    ctx->pc = 0x23cbccu;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 9)));
    // 0x23cbd0: 0x712a1248  psubb       $v0, $t1, $t2
    ctx->pc = 0x23cbd0u;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x23cbd4: 0x71083389  pcpyld      $a2, $t0, $t0
    ctx->pc = 0x23cbd4u;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8)));
    // 0x23cbd8: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x23cbd8u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x23cbdc: 0x70e74389  pcpyld      $t0, $a3, $a3
    ctx->pc = 0x23cbdcu;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 7)));
    // 0x23cbe0: 0x70461489  pand        $v0, $v0, $a2
    ctx->pc = 0x23cbe0u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x23cbe4: 0x70471ba9  pcpyud      $v1, $v0, $a3
    ctx->pc = 0x23cbe4u;
    SET_GPR_VEC(ctx, 3, _mm_unpackhi_epi64(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x23cbe8: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x23cbe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x23cbec: 0x5460003b  bnel        $v1, $zero, . + 4 + (0x3B << 2)
    ctx->pc = 0x23CBECu;
    {
        const bool branch_taken_0x23cbec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23cbec) {
            ctx->pc = 0x23CBF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23CBECu;
            // 0x23cbf0: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23CCDCu;
            goto label_23ccdc;
        }
    }
    ctx->pc = 0x23CBF4u;
    // 0x23cbf4: 0x712814c9  pxor        $v0, $t1, $t0
    ctx->pc = 0x23cbf4u;
    SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x23cbf8: 0x704a1a48  psubb       $v1, $v0, $t2
    ctx->pc = 0x23cbf8u;
    SET_GPR_VEC(ctx, 3, PS2_PSUBB(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x23cbfc: 0x700214e9  pnor        $v0, $zero, $v0
    ctx->pc = 0x23cbfcu;
    SET_GPR_VEC(ctx, 2, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x23cc00: 0x3c088080  lui         $t0, 0x8080
    ctx->pc = 0x23cc00u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32896 << 16));
    // 0x23cc04: 0x35088080  ori         $t0, $t0, 0x8080
    ctx->pc = 0x23cc04u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32896);
    // 0x23cc08: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x23cc08u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x23cc0c: 0x35088080  ori         $t0, $t0, 0x8080
    ctx->pc = 0x23cc0cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32896);
    // 0x23cc10: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x23cc10u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x23cc14: 0x35088080  ori         $t0, $t0, 0x8080
    ctx->pc = 0x23cc14u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32896);
    // 0x23cc18: 0x70621c89  pand        $v1, $v1, $v0
    ctx->pc = 0x23cc18u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x23cc1c: 0x70661c89  pand        $v1, $v1, $a2
    ctx->pc = 0x23cc1cu;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 6)));
    // 0x23cc20: 0x3c060101  lui         $a2, 0x101
    ctx->pc = 0x23cc20u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)257 << 16));
    // 0x23cc24: 0x34c60101  ori         $a2, $a2, 0x101
    ctx->pc = 0x23cc24u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)257);
    // 0x23cc28: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x23cc28u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x23cc2c: 0x34c60101  ori         $a2, $a2, 0x101
    ctx->pc = 0x23cc2cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)257);
    // 0x23cc30: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x23cc30u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x23cc34: 0x34c60101  ori         $a2, $a2, 0x101
    ctx->pc = 0x23cc34u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)257);
    // 0x23cc38: 0x706513a9  pcpyud      $v0, $v1, $a1
    ctx->pc = 0x23cc38u;
    SET_GPR_VEC(ctx, 2, _mm_unpackhi_epi64(GPR_VEC(ctx, 3), GPR_VEC(ctx, 5)));
    // 0x23cc3c: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x23cc3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x23cc40: 0x5060ffe0  beql        $v1, $zero, . + 4 + (-0x20 << 2)
    ctx->pc = 0x23CC40u;
    {
        const bool branch_taken_0x23cc40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23cc40) {
            ctx->pc = 0x23CC44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23CC40u;
            // 0x23cc44: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23CBC4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23cbc4;
        }
    }
    ctx->pc = 0x23CC48u;
    // 0x23cc48: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x23CC48u;
    {
        const bool branch_taken_0x23cc48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CC48u;
        // 0x23cc4c: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cc48) {
            ctx->pc = 0x23CCDCu;
            goto label_23ccdc;
        }
    }
    ctx->pc = 0x23CC50u;
label_23cc50:
    // 0x23cc50: 0xdc890000  ld          $t1, 0x0($a0)
    ctx->pc = 0x23cc50u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x23cc54: 0x91827  nor         $v1, $zero, $t1
    ctx->pc = 0x23cc54u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 9)));
    // 0x23cc58: 0x126102f  dsubu       $v0, $t1, $a2
    ctx->pc = 0x23cc58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) - GPR_U64(ctx, 6));
    // 0x23cc5c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x23cc5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x23cc60: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x23cc60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x23cc64: 0x5440001d  bnel        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x23CC64u;
    {
        const bool branch_taken_0x23cc64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23cc64) {
            ctx->pc = 0x23CC68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23CC64u;
            // 0x23cc68: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23CCDCu;
            goto label_23ccdc;
        }
    }
    ctx->pc = 0x23CC6Cu;
    // 0x23cc6c: 0x1271026  xor         $v0, $t1, $a3
    ctx->pc = 0x23cc6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 7));
    // 0x23cc70: 0x46182f  dsubu       $v1, $v0, $a2
    ctx->pc = 0x23cc70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) - GPR_U64(ctx, 6));
    // 0x23cc74: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x23cc74u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x23cc78: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x23cc78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x23cc7c: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x23cc7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x23cc80: 0x54600016  bnel        $v1, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x23CC80u;
    {
        const bool branch_taken_0x23cc80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23cc80) {
            ctx->pc = 0x23CC84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23CC80u;
            // 0x23cc84: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23CCDCu;
            goto label_23ccdc;
        }
    }
    ctx->pc = 0x23CC88u;
    // 0x23cc88: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x23cc88u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23cc8c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x23cc8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_23cc90:
    // 0x23cc90: 0xdc860000  ld          $a2, 0x0($a0)
    ctx->pc = 0x23cc90u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x23cc94: 0xc9102f  dsubu       $v0, $a2, $t1
    ctx->pc = 0x23cc94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) - GPR_U64(ctx, 9));
    // 0x23cc98: 0x61827  nor         $v1, $zero, $a2
    ctx->pc = 0x23cc98u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 6)));
    // 0x23cc9c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x23cc9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x23cca0: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x23cca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x23cca4: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x23CCA4u;
    {
        const bool branch_taken_0x23cca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23CCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CCA4u;
        // 0x23cca8: 0xc71026  xor         $v0, $a2, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cca4) {
            ctx->pc = 0x23CCD8u;
            goto label_23ccd8;
        }
    }
    ctx->pc = 0x23CCACu;
    // 0x23ccac: 0x21827  nor         $v1, $zero, $v0
    ctx->pc = 0x23ccacu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x23ccb0: 0x49102f  dsubu       $v0, $v0, $t1
    ctx->pc = 0x23ccb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 9));
    // 0x23ccb4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x23ccb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x23ccb8: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x23ccb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x23ccbc: 0x5040fff4  beql        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x23CCBCu;
    {
        const bool branch_taken_0x23ccbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ccbc) {
            ctx->pc = 0x23CCC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23CCBCu;
            // 0x23ccc0: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23CC90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23cc90;
        }
    }
    ctx->pc = 0x23CCC4u;
    // 0x23ccc4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x23CCC4u;
    {
        const bool branch_taken_0x23ccc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CCC4u;
        // 0x23ccc8: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ccc4) {
            ctx->pc = 0x23CCDCu;
            goto label_23ccdc;
        }
    }
    ctx->pc = 0x23CCCCu;
label_23cccc:
    // 0x23cccc: 0x50450006  beql        $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x23CCCCu;
    {
        const bool branch_taken_0x23cccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x23cccc) {
            ctx->pc = 0x23CCD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23CCCCu;
            // 0x23ccd0: 0x90830000  lbu         $v1, 0x0($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23CCE8u;
            goto label_23cce8;
        }
    }
    ctx->pc = 0x23CCD4u;
    // 0x23ccd4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x23ccd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_23ccd8:
    // 0x23ccd8: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x23ccd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_23ccdc:
    // 0x23ccdc: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x23CCDCu;
    {
        const bool branch_taken_0x23ccdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23ccdc) {
            ctx->pc = 0x23CCCCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23cccc;
        }
    }
    ctx->pc = 0x23CCE4u;
    // 0x23cce4: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x23cce4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_23cce8:
    // 0x23cce8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x23cce8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ccec: 0x651826  xor         $v1, $v1, $a1
    ctx->pc = 0x23ccecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 5));
    ctx->pc = 0x23ccf0u;
}
