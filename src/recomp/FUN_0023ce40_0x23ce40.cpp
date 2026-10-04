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

// Function: FUN_0023ce40
// Address: 0x23ce40 - 0x23cf4c
void FUN_0023ce40_0x23ce40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0023ce40_0x23ce40");
#endif

    switch (ctx->pc) {
        case 0x23cebcu: goto label_23cebc;
        case 0x23cf08u: goto label_23cf08;
        case 0x23cf30u: goto label_23cf30;
        default: break;
    }

    ctx->pc = 0x23ce40u;

    // 0x23ce40: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x23ce40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ce44: 0xa74025  or          $t0, $a1, $a3
    ctx->pc = 0x23ce44u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x23ce48: 0x31020007  andi        $v0, $t0, 0x7
    ctx->pc = 0x23ce48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)7);
    // 0x23ce4c: 0x14400038  bnez        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x23CE4Cu;
    {
        const bool branch_taken_0x23ce4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23CE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CE4Cu;
        // 0x23ce50: 0xe0182d  daddu       $v1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ce4c) {
            ctx->pc = 0x23CF30u;
            goto label_23cf30;
        }
    }
    ctx->pc = 0x23CE54u;
    // 0x23ce54: 0x3102000f  andi        $v0, $t0, 0xF
    ctx->pc = 0x23ce54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)15);
    // 0x23ce58: 0x3c090101  lui         $t1, 0x101
    ctx->pc = 0x23ce58u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)257 << 16));
    // 0x23ce5c: 0x35290101  ori         $t1, $t1, 0x101
    ctx->pc = 0x23ce5cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)257);
    // 0x23ce60: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x23ce60u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x23ce64: 0x35290101  ori         $t1, $t1, 0x101
    ctx->pc = 0x23ce64u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)257);
    // 0x23ce68: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x23ce68u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x23ce6c: 0x35290101  ori         $t1, $t1, 0x101
    ctx->pc = 0x23ce6cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)257);
    // 0x23ce70: 0x3c048080  lui         $a0, 0x8080
    ctx->pc = 0x23ce70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32896 << 16));
    // 0x23ce74: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x23ce74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x23ce78: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x23ce78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x23ce7c: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x23ce7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x23ce80: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x23ce80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x23ce84: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x23ce84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x23ce88: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x23CE88u;
    {
        const bool branch_taken_0x23ce88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23ce88) {
            ctx->pc = 0x23CE8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23CE88u;
            // 0x23ce8c: 0xdcaa0000  ld          $t2, 0x0($a1) (Delay Slot)
            SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23CEF0u;
            goto label_23cef0;
        }
    }
    ctx->pc = 0x23CE90u;
    // 0x23ce90: 0x71295389  pcpyld      $t2, $t1, $t1
    ctx->pc = 0x23ce90u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x23ce94: 0x78a90000  lq          $t1, 0x0($a1)
    ctx->pc = 0x23ce94u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23ce98: 0x70844389  pcpyld      $t0, $a0, $a0
    ctx->pc = 0x23ce98u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 4)));
    // 0x23ce9c: 0x712a1248  psubb       $v0, $t1, $t2
    ctx->pc = 0x23ce9cu;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x23cea0: 0x70091ce9  pnor        $v1, $zero, $t1
    ctx->pc = 0x23cea0u;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 9)));
    // 0x23cea4: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x23cea4u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x23cea8: 0x70481489  pand        $v0, $v0, $t0
    ctx->pc = 0x23cea8u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 8)));
    // 0x23ceac: 0x704923a9  pcpyud      $a0, $v0, $t1
    ctx->pc = 0x23ceacu;
    SET_GPR_VEC(ctx, 4, _mm_unpackhi_epi64(GPR_VEC(ctx, 2), GPR_VEC(ctx, 9)));
    // 0x23ceb0: 0x441825  or          $v1, $v0, $a0
    ctx->pc = 0x23ceb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x23ceb4: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x23CEB4u;
    {
        const bool branch_taken_0x23ceb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23CEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CEB4u;
        // 0x23ceb8: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ceb4) {
            ctx->pc = 0x23CF2Cu;
            goto label_23cf2c;
        }
    }
    ctx->pc = 0x23CEBCu;
label_23cebc:
    // 0x23cebc: 0x7cc90000  sq          $t1, 0x0($a2)
    ctx->pc = 0x23cebcu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 9));
    // 0x23cec0: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x23cec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x23cec4: 0x78a90000  lq          $t1, 0x0($a1)
    ctx->pc = 0x23cec4u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23cec8: 0x712a1248  psubb       $v0, $t1, $t2
    ctx->pc = 0x23cec8u;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x23cecc: 0x70091ce9  pnor        $v1, $zero, $t1
    ctx->pc = 0x23ceccu;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 9)));
    // 0x23ced0: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x23ced0u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x23ced4: 0x70481489  pand        $v0, $v0, $t0
    ctx->pc = 0x23ced4u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 8)));
    // 0x23ced8: 0x704923a9  pcpyud      $a0, $v0, $t1
    ctx->pc = 0x23ced8u;
    SET_GPR_VEC(ctx, 4, _mm_unpackhi_epi64(GPR_VEC(ctx, 2), GPR_VEC(ctx, 9)));
    // 0x23cedc: 0x441825  or          $v1, $v0, $a0
    ctx->pc = 0x23cedcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x23cee0: 0x1060fff6  beqz        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x23CEE0u;
    {
        const bool branch_taken_0x23cee0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CEE0u;
        // 0x23cee4: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cee0) {
            ctx->pc = 0x23CEBCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23cebc;
        }
    }
    ctx->pc = 0x23CEE8u;
    // 0x23cee8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x23CEE8u;
    {
        const bool branch_taken_0x23cee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CEE8u;
        // 0x23ceec: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cee8) {
            ctx->pc = 0x23CF30u;
            goto label_23cf30;
        }
    }
    ctx->pc = 0x23CEF0u;
label_23cef0:
    // 0x23cef0: 0x149102f  dsubu       $v0, $t2, $t1
    ctx->pc = 0x23cef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) - GPR_U64(ctx, 9));
    // 0x23cef4: 0xa1827  nor         $v1, $zero, $t2
    ctx->pc = 0x23cef4u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 10)));
    // 0x23cef8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x23cef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x23cefc: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x23cefcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x23cf00: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x23CF00u;
    {
        const bool branch_taken_0x23cf00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23CF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CF00u;
        // 0x23cf04: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cf00) {
            ctx->pc = 0x23CF2Cu;
            goto label_23cf2c;
        }
    }
    ctx->pc = 0x23CF08u;
label_23cf08:
    // 0x23cf08: 0xfcca0000  sd          $t2, 0x0($a2)
    ctx->pc = 0x23cf08u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 10));
    // 0x23cf0c: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x23cf0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x23cf10: 0xdcaa0000  ld          $t2, 0x0($a1)
    ctx->pc = 0x23cf10u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23cf14: 0xa1027  nor         $v0, $zero, $t2
    ctx->pc = 0x23cf14u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 10)));
    // 0x23cf18: 0x149182f  dsubu       $v1, $t2, $t1
    ctx->pc = 0x23cf18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) - GPR_U64(ctx, 9));
    // 0x23cf1c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x23cf1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x23cf20: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x23cf20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x23cf24: 0x1060fff8  beqz        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x23CF24u;
    {
        const bool branch_taken_0x23cf24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CF24u;
        // 0x23cf28: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cf24) {
            ctx->pc = 0x23CF08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23cf08;
        }
    }
    ctx->pc = 0x23CF2Cu;
label_23cf2c:
    // 0x23cf2c: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x23cf2cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_23cf30:
    // 0x23cf30: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x23cf30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23cf34: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x23cf34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x23cf38: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x23cf38u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x23cf3c: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x23cf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x23cf40: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x23cf40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x23cf44: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x23CF44u;
    {
        const bool branch_taken_0x23cf44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23cf44) {
            ctx->pc = 0x23CF30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23cf30;
        }
    }
    ctx->pc = 0x23CF4Cu;
}
