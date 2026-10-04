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

// Function: FUN_001cad70
// Address: 0x1cad70 - 0x1cae94
void FUN_001cad70_0x1cad70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001cad70_0x1cad70");
#endif

    switch (ctx->pc) {
        case 0x1cae70u: goto label_1cae70;
        case 0x1cae90u: goto label_1cae90;
        default: break;
    }

    ctx->pc = 0x1cad70u;

    // 0x1cad70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cad70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1cad74: 0x3c07002f  lui         $a3, 0x2F
    ctx->pc = 0x1cad74u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)47 << 16));
    // 0x1cad78: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1cad78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1cad7c: 0x24e72570  addiu       $a3, $a3, 0x2570
    ctx->pc = 0x1cad7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 9584));
    // 0x1cad80: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1cad80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1cad84: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1cad84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1cad88: 0x9083021f  lbu         $v1, 0x21F($a0)
    ctx->pc = 0x1cad88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 543)));
    // 0x1cad8c: 0x90860220  lbu         $a2, 0x220($a0)
    ctx->pc = 0x1cad8cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 544)));
    // 0x1cad90: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x1cad90u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1cad94: 0xa34023  subu        $t0, $a1, $v1
    ctx->pc = 0x1cad94u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1cad98: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x1cad98u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1cad9c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1cad9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1cada0: 0x830c0  sll         $a2, $t0, 3
    ctx->pc = 0x1cada0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x1cada4: 0x1064021  addu        $t0, $t0, $a2
    ctx->pc = 0x1cada4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x1cada8: 0x530c0  sll         $a2, $a1, 3
    ctx->pc = 0x1cada8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1cadac: 0x828c0  sll         $a1, $t0, 3
    ctx->pc = 0x1cadacu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x1cadb0: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x1cadb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x1cadb4: 0x24a50000  addiu       $a1, $a1, 0x0
    ctx->pc = 0x1cadb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 0));
    // 0x1cadb8: 0xa68021  addu        $s0, $a1, $a2
    ctx->pc = 0x1cadb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1cadbc: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1cadbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cadc0: 0x90a50012  lbu         $a1, 0x12($a1)
    ctx->pc = 0x1cadc0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 18)));
    // 0x1cadc4: 0x10a00032  beqz        $a1, . + 4 + (0x32 << 2)
    ctx->pc = 0x1CADC4u;
    {
        const bool branch_taken_0x1cadc4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cadc4) {
            ctx->pc = 0x1CAE90u;
            goto label_1cae90;
        }
    }
    ctx->pc = 0x1CADCCu;
    // 0x1cadcc: 0x84890232  lh          $t1, 0x232($a0)
    ctx->pc = 0x1cadccu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 562)));
    // 0x1cadd0: 0x3c0551eb  lui         $a1, 0x51EB
    ctx->pc = 0x1cadd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20971 << 16));
    // 0x1cadd4: 0x34a8851f  ori         $t0, $a1, 0x851F
    ctx->pc = 0x1cadd4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)34079);
    // 0x1cadd8: 0x84860230  lh          $a2, 0x230($a0)
    ctx->pc = 0x1cadd8u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 560)));
    // 0x1caddc: 0x1090018  mult        $zero, $t0, $t1
    ctx->pc = 0x1caddcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1cade0: 0x93fc2  srl         $a3, $t1, 31
    ctx->pc = 0x1cade0u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
    // 0x1cade4: 0x62fc2  srl         $a1, $a2, 31
    ctx->pc = 0x1cade4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x1cade8: 0x2010  mfhi        $a0
    ctx->pc = 0x1cade8u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x1cadec: 0x1060018  mult        $zero, $t0, $a2
    ctx->pc = 0x1cadecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1cadf0: 0x42143  sra         $a0, $a0, 5
    ctx->pc = 0x1cadf0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 5));
    // 0x1cadf4: 0x873821  addu        $a3, $a0, $a3
    ctx->pc = 0x1cadf4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1cadf8: 0x2010  mfhi        $a0
    ctx->pc = 0x1cadf8u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x1cadfc: 0x42143  sra         $a0, $a0, 5
    ctx->pc = 0x1cadfcu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 5));
    // 0x1cae00: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1cae00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1cae04: 0x10e40022  beq         $a3, $a0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1CAE04u;
    {
        const bool branch_taken_0x1cae04 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 4));
        if (branch_taken_0x1cae04) {
            ctx->pc = 0x1CAE90u;
            goto label_1cae90;
        }
    }
    ctx->pc = 0x1CAE0Cu;
    // 0x1cae0c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1cae0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1cae10: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CAE10u;
    {
        const bool branch_taken_0x1cae10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CAE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAE10u;
        // 0x1cae14: 0xc9082a  slt         $at, $a2, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cae10) {
            ctx->pc = 0x1CAE34u;
            goto label_1cae34;
        }
    }
    ctx->pc = 0x1CAE18u;
    // 0x1cae18: 0xc9082a  slt         $at, $a2, $t1
    ctx->pc = 0x1cae18u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x1cae1c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CAE1Cu;
    {
        const bool branch_taken_0x1cae1c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAE1Cu;
        // 0x1cae20: 0x24110009  addiu       $s1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cae1c) {
            ctx->pc = 0x1CAE2Cu;
            goto label_1cae2c;
        }
    }
    ctx->pc = 0x1CAE24u;
    // 0x1cae24: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1CAE24u;
    {
        const bool branch_taken_0x1cae24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAE24u;
        // 0x1cae28: 0x2411000f  addiu       $s1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cae24) {
            ctx->pc = 0x1CAE40u;
            goto label_1cae40;
        }
    }
    ctx->pc = 0x1CAE2Cu;
label_1cae2c:
    // 0x1cae2c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1CAE2Cu;
    {
        const bool branch_taken_0x1cae2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cae2c) {
            ctx->pc = 0x1CAE40u;
            goto label_1cae40;
        }
    }
    ctx->pc = 0x1CAE34u;
label_1cae34:
    // 0x1cae34: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1CAE34u;
    {
        const bool branch_taken_0x1cae34 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAE34u;
        // 0x1cae38: 0x24110011  addiu       $s1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cae34) {
            ctx->pc = 0x1CAE40u;
            goto label_1cae40;
        }
    }
    ctx->pc = 0x1CAE3Cu;
    // 0x1cae3c: 0x24110005  addiu       $s1, $zero, 0x5
    ctx->pc = 0x1cae3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1cae40:
    // 0x1cae40: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x1cae40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
    // 0x1cae44: 0x842351ee  lh          $v1, 0x51EE($at)
    ctx->pc = 0x1cae44u;
    SET_GPR_S32(ctx, 3, (int16_t)FAST_READ16(0x3651EEu));
    // 0x1cae48: 0x28610020  slti        $at, $v1, 0x20
    ctx->pc = 0x1cae48u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1cae4c: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x1CAE4Cu;
    {
        const bool branch_taken_0x1cae4c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cae4c) {
            ctx->pc = 0x1CAE90u;
            goto label_1cae90;
        }
    }
    ctx->pc = 0x1CAE54u;
    // 0x1cae54: 0x92050034  lbu         $a1, 0x34($s0)
    ctx->pc = 0x1cae54u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1cae58: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x1cae58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1cae5c: 0x92060035  lbu         $a2, 0x35($s0)
    ctx->pc = 0x1cae5cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 53)));
    // 0x1cae60: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cae60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cae64: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cae64u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cae68: 0xc05d3e4  jal         func_174F90
    ctx->pc = 0x1CAE68u;
    SET_GPR_U32(ctx, 31, 0x1CAE70u);
    ctx->pc = 0x1CAE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAE68u;
    // 0x1cae6c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174F90u, 0x1CAE68u, 0x1CAE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAE70u;
label_1cae70:
    // 0x1cae70: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1cae70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cae74: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1cae74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cae78: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1cae78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cae7c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cae7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cae80: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cae80u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cae84: 0x9446000a  lhu         $a2, 0xA($v0)
    ctx->pc = 0x1cae84u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x1cae88: 0xc05d3e4  jal         func_174F90
    ctx->pc = 0x1CAE88u;
    SET_GPR_U32(ctx, 31, 0x1CAE90u);
    ctx->pc = 0x1CAE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAE88u;
    // 0x1cae8c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174F90u, 0x1CAE88u, 0x1CAE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAE90u;
label_1cae90:
    // 0x1cae90: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1cae90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x1cae94u;
}
