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

// Function: FUN_0023cf58
// Address: 0x23cf58 - 0x23d080
void FUN_0023cf58_0x23cf58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0023cf58_0x23cf58");
#endif

    switch (ctx->pc) {
        case 0x23cfd0u: goto label_23cfd0;
        case 0x23d04cu: goto label_23d04c;
        default: break;
    }

    ctx->pc = 0x23cf58u;

    // 0x23cf58: 0x30820007  andi        $v0, $a0, 0x7
    ctx->pc = 0x23cf58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
    // 0x23cf5c: 0x14400043  bnez        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x23CF5Cu;
    {
        const bool branch_taken_0x23cf5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23CF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CF5Cu;
        // 0x23cf60: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cf5c) {
            ctx->pc = 0x23D06Cu;
            goto label_23d06c;
        }
    }
    ctx->pc = 0x23CF64u;
    // 0x23cf64: 0x3083000f  andi        $v1, $a0, 0xF
    ctx->pc = 0x23cf64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x23cf68: 0x3c020101  lui         $v0, 0x101
    ctx->pc = 0x23cf68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)257 << 16));
    // 0x23cf6c: 0x34420101  ori         $v0, $v0, 0x101
    ctx->pc = 0x23cf6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)257);
    // 0x23cf70: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x23cf70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x23cf74: 0x34420101  ori         $v0, $v0, 0x101
    ctx->pc = 0x23cf74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)257);
    // 0x23cf78: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x23cf78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x23cf7c: 0x34420101  ori         $v0, $v0, 0x101
    ctx->pc = 0x23cf7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)257);
    // 0x23cf80: 0x1460001e  bnez        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x23CF80u;
    {
        const bool branch_taken_0x23cf80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23CF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CF80u;
        // 0x23cf84: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cf80) {
            ctx->pc = 0x23CFFCu;
            goto label_23cffc;
        }
    }
    ctx->pc = 0x23CF88u;
    // 0x23cf88: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x23cf88u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23cf8c: 0x70424389  pcpyld      $t0, $v0, $v0
    ctx->pc = 0x23cf8cu;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
    // 0x23cf90: 0x3c048080  lui         $a0, 0x8080
    ctx->pc = 0x23cf90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32896 << 16));
    // 0x23cf94: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x23cf94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x23cf98: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x23cf98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x23cf9c: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x23cf9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x23cfa0: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x23cfa0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x23cfa4: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x23cfa4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x23cfa8: 0x70681248  psubb       $v0, $v1, $t0
    ctx->pc = 0x23cfa8u;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 3), GPR_VEC(ctx, 8)));
    // 0x23cfac: 0x70031ce9  pnor        $v1, $zero, $v1
    ctx->pc = 0x23cfacu;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x23cfb0: 0x70844b89  pcpyld      $t1, $a0, $a0
    ctx->pc = 0x23cfb0u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 4)));
    // 0x23cfb4: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x23cfb4u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x23cfb8: 0x70491489  pand        $v0, $v0, $t1
    ctx->pc = 0x23cfb8u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 9)));
    // 0x23cfbc: 0x70481ba9  pcpyud      $v1, $v0, $t0
    ctx->pc = 0x23cfbcu;
    SET_GPR_VEC(ctx, 3, _mm_unpackhi_epi64(GPR_VEC(ctx, 2), GPR_VEC(ctx, 8)));
    // 0x23cfc0: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x23cfc0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x23cfc4: 0x54c00029  bnel        $a2, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x23CFC4u;
    {
        const bool branch_taken_0x23cfc4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x23cfc4) {
            ctx->pc = 0x23CFC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23CFC4u;
            // 0x23cfc8: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D06Cu;
            goto label_23d06c;
        }
    }
    ctx->pc = 0x23CFCCu;
    // 0x23cfcc: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x23cfccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_23cfd0:
    // 0x23cfd0: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x23cfd0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23cfd4: 0x70021ce9  pnor        $v1, $zero, $v0
    ctx->pc = 0x23cfd4u;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x23cfd8: 0x70481248  psubb       $v0, $v0, $t0
    ctx->pc = 0x23cfd8u;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 2), GPR_VEC(ctx, 8)));
    // 0x23cfdc: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x23cfdcu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x23cfe0: 0x70492489  pand        $a0, $v0, $t1
    ctx->pc = 0x23cfe0u;
    SET_GPR_VEC(ctx, 4, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 9)));
    // 0x23cfe4: 0x70861ba9  pcpyud      $v1, $a0, $a2
    ctx->pc = 0x23cfe4u;
    SET_GPR_VEC(ctx, 3, _mm_unpackhi_epi64(GPR_VEC(ctx, 4), GPR_VEC(ctx, 6)));
    // 0x23cfe8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x23cfe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x23cfec: 0x5060fff8  beql        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x23CFECu;
    {
        const bool branch_taken_0x23cfec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23cfec) {
            ctx->pc = 0x23CFF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23CFECu;
            // 0x23cff0: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23CFD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23cfd0;
        }
    }
    ctx->pc = 0x23CFF4u;
    // 0x23cff4: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x23CFF4u;
    {
        const bool branch_taken_0x23cff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CFF4u;
        // 0x23cff8: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cff4) {
            ctx->pc = 0x23D06Cu;
            goto label_23d06c;
        }
    }
    ctx->pc = 0x23CFFCu;
label_23cffc:
    // 0x23cffc: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x23cffcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23d000: 0x3c048080  lui         $a0, 0x8080
    ctx->pc = 0x23d000u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32896 << 16));
    // 0x23d004: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x23d004u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x23d008: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x23d008u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x23d00c: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x23d00cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x23d010: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x23d010u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x23d014: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x23d014u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x23d018: 0x62102f  dsubu       $v0, $v1, $v0
    ctx->pc = 0x23d018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) - GPR_U64(ctx, 2));
    // 0x23d01c: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x23d01cu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x23d020: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x23d020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x23d024: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x23d024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x23d028: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x23D028u;
    {
        const bool branch_taken_0x23d028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23d028) {
            ctx->pc = 0x23D02Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D028u;
            // 0x23d02c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D06Cu;
            goto label_23d06c;
        }
    }
    ctx->pc = 0x23D030u;
    // 0x23d030: 0x3c060101  lui         $a2, 0x101
    ctx->pc = 0x23d030u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)257 << 16));
    // 0x23d034: 0x34c60101  ori         $a2, $a2, 0x101
    ctx->pc = 0x23d034u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)257);
    // 0x23d038: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x23d038u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x23d03c: 0x34c60101  ori         $a2, $a2, 0x101
    ctx->pc = 0x23d03cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)257);
    // 0x23d040: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x23d040u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x23d044: 0x34c60101  ori         $a2, $a2, 0x101
    ctx->pc = 0x23d044u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)257);
    // 0x23d048: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x23d048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_23d04c:
    // 0x23d04c: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x23d04cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23d050: 0x21827  nor         $v1, $zero, $v0
    ctx->pc = 0x23d050u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x23d054: 0x46102f  dsubu       $v0, $v0, $a2
    ctx->pc = 0x23d054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 6));
    // 0x23d058: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x23d058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x23d05c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x23d05cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x23d060: 0x5040fffa  beql        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x23D060u;
    {
        const bool branch_taken_0x23d060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d060) {
            ctx->pc = 0x23D064u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D060u;
            // 0x23d064: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D04Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23d04c;
        }
    }
    ctx->pc = 0x23D068u;
    // 0x23d068: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x23d068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_23d06c:
    // 0x23d06c: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x23d06cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x23d070: 0x0  nop
    ctx->pc = 0x23d070u;
    // NOP
    // 0x23d074: 0x0  nop
    ctx->pc = 0x23d074u;
    // NOP
    // 0x23d078: 0x0  nop
    ctx->pc = 0x23d078u;
    // NOP
    // 0x23d07c: 0x0  nop
    ctx->pc = 0x23d07cu;
    // NOP
    ctx->pc = 0x23d080u;
}
