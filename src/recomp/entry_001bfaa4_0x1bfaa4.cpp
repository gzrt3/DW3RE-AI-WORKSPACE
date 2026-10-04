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

// Function: entry_001bfaa4
// Address: 0x1bfaa4 - 0x1bfc30
void entry_001bfaa4_0x1bfaa4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bfaa4_0x1bfaa4");
#endif

    switch (ctx->pc) {
        case 0x1bfac4u: goto label_1bfac4;
        case 0x1bfaf4u: goto label_1bfaf4;
        case 0x1bfb94u: goto label_1bfb94;
        default: break;
    }

    ctx->pc = 0x1bfaa4u;

    // 0x1bfaa4: 0x0  nop
    ctx->pc = 0x1bfaa4u;
    // NOP
    // 0x1bfaa8: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x1BFAA8u;
    {
        const bool branch_taken_0x1bfaa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFAA8u;
        // 0x1bfaac: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfaa8) {
            ctx->pc = 0x1BFC30u;
            return;
        }
    }
    ctx->pc = 0x1BFAB0u;
    // 0x1bfab0: 0x92620039  lbu         $v0, 0x39($s3)
    ctx->pc = 0x1bfab0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 57)));
    // 0x1bfab4: 0x2841004a  slti        $at, $v0, 0x4A
    ctx->pc = 0x1bfab4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)74) ? 1 : 0);
    // 0x1bfab8: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x1BFAB8u;
    {
        const bool branch_taken_0x1bfab8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFAB8u;
        // 0x1bfabc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfab8) {
            ctx->pc = 0x1BFB1Cu;
            goto label_1bfb1c;
        }
    }
    ctx->pc = 0x1BFAC0u;
    // 0x1bfac0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1bfac0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bfac4:
    // 0x1bfac4: 0x92640039  lbu         $a0, 0x39($s3)
    ctx->pc = 0x1bfac4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 57)));
    // 0x1bfac8: 0x8f8284e0  lw          $v0, -0x7B20($gp)
    ctx->pc = 0x1bfac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935776)));
    // 0x1bfacc: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1bfaccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1bfad0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1bfad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1bfad4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1bfad4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1bfad8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1bfad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1bfadc: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1bfadcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1bfae0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1bfae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bfae4: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BFAE4u;
    {
        const bool branch_taken_0x1bfae4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bfae4) {
            ctx->pc = 0x1BFB04u;
            goto label_1bfb04;
        }
    }
    ctx->pc = 0x1BFAECu;
    // 0x1bfaec: 0xc06ff14  jal         func_1BFC50
    ctx->pc = 0x1BFAECu;
    SET_GPR_U32(ctx, 31, 0x1BFAF4u);
    ctx->pc = 0x1BFC50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BFC50u, 0x1BFAECu, 0x1BFAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFAF4u;
label_1bfaf4:
    // 0x1bfaf4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BFAF4u;
    {
        const bool branch_taken_0x1bfaf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bfaf4) {
            ctx->pc = 0x1BFB04u;
            goto label_1bfb04;
        }
    }
    ctx->pc = 0x1BFAFCu;
    // 0x1bfafc: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x1BFAFCu;
    {
        const bool branch_taken_0x1bfafc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFAFCu;
        // 0x1bfb00: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfafc) {
            ctx->pc = 0x1BFC30u;
            return;
        }
    }
    ctx->pc = 0x1BFB04u;
label_1bfb04:
    // 0x1bfb04: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1bfb04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1bfb08: 0x2a220009  slti        $v0, $s1, 0x9
    ctx->pc = 0x1bfb08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x1bfb0c: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1BFB0Cu;
    {
        const bool branch_taken_0x1bfb0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BFB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFB0Cu;
        // 0x1bfb10: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfb0c) {
            ctx->pc = 0x1BFAC4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bfac4;
        }
    }
    ctx->pc = 0x1BFB14u;
    // 0x1bfb14: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x1BFB14u;
    {
        const bool branch_taken_0x1bfb14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bfb14) {
            ctx->pc = 0x1BFC30u;
            return;
        }
    }
    ctx->pc = 0x1BFB1Cu;
label_1bfb1c:
    // 0x1bfb1c: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x1bfb1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bfb20: 0x3c021062  lui         $v0, 0x1062
    ctx->pc = 0x1bfb20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4194 << 16));
    // 0x1bfb24: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x1bfb24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bfb28: 0x34474dd3  ori         $a3, $v0, 0x4DD3
    ctx->pc = 0x1bfb28u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19923);
    // 0x1bfb2c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1bfb2cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfb30: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1bfb30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfb34: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1bfb34u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1bfb38: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x1bfb38u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1bfb3c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1bfb3cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1bfb40: 0xe40018  mult        $zero, $a3, $a0
    ctx->pc = 0x1bfb40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1bfb44: 0x437c2  srl         $a2, $a0, 31
    ctx->pc = 0x1bfb44u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x1bfb48: 0x0  nop
    ctx->pc = 0x1bfb48u;
    // NOP
    // 0x1bfb4c: 0x2810  mfhi        $a1
    ctx->pc = 0x1bfb4cu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x1bfb50: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1bfb50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1bfb54: 0x0  nop
    ctx->pc = 0x1bfb54u;
    // NOP
    // 0x1bfb58: 0xe40018  mult        $zero, $a3, $a0
    ctx->pc = 0x1bfb58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1bfb5c: 0x52983  sra         $a1, $a1, 6
    ctx->pc = 0x1bfb5cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 6));
    // 0x1bfb60: 0xa63021  addu        $a2, $a1, $a2
    ctx->pc = 0x1bfb60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1bfb64: 0x42fc2  srl         $a1, $a0, 31
    ctx->pc = 0x1bfb64u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x1bfb68: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x1bfb68u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1bfb6c: 0x2010  mfhi        $a0
    ctx->pc = 0x1bfb6cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x1bfb70: 0x42183  sra         $a0, $a0, 6
    ctx->pc = 0x1bfb70u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 6));
    // 0x1bfb74: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1bfb74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1bfb78: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x1bfb78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1bfb7c: 0x308a00ff  andi        $t2, $a0, 0xFF
    ctx->pc = 0x1bfb7cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x1bfb80: 0x3c0b0033  lui         $t3, 0x33
    ctx->pc = 0x1bfb80u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)51 << 16));
    // 0x1bfb84: 0x8f848590  lw          $a0, -0x7A70($gp)
    ctx->pc = 0x1bfb84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x1bfb88: 0x30c700ff  andi        $a3, $a2, 0xFF
    ctx->pc = 0x1bfb88u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1bfb8c: 0x256b1300  addiu       $t3, $t3, 0x1300
    ctx->pc = 0x1bfb8cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4864));
    // 0x1bfb90: 0x30850400  andi        $a1, $a0, 0x400
    ctx->pc = 0x1bfb90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1024);
label_1bfb94:
    // 0x1bfb94: 0x0  nop
    ctx->pc = 0x1bfb94u;
    // NOP
    // 0x1bfb98: 0x1623021  addu        $a2, $t3, $v0
    ctx->pc = 0x1bfb98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x1bfb9c: 0x90c4367c  lbu         $a0, 0x367C($a2)
    ctx->pc = 0x1bfb9cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 13948)));
    // 0x1bfba0: 0x1080001f  beqz        $a0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1BFBA0u;
    {
        const bool branch_taken_0x1bfba0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bfba0) {
            ctx->pc = 0x1BFC20u;
            goto label_1bfc20;
        }
    }
    ctx->pc = 0x1BFBA8u;
    // 0x1bfba8: 0x8cc43668  lw          $a0, 0x3668($a2)
    ctx->pc = 0x1bfba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 13928)));
    // 0x1bfbac: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x1bfbacu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfbb0: 0x9086021b  lbu         $a2, 0x21B($a0)
    ctx->pc = 0x1bfbb0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 539)));
    // 0x1bfbb4: 0x9084021a  lbu         $a0, 0x21A($a0)
    ctx->pc = 0x1bfbb4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 538)));
    // 0x1bfbb8: 0xca4823  subu        $t1, $a2, $t2
    ctx->pc = 0x1bfbb8u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x1bfbbc: 0x120402a  slt         $t0, $t1, $zero
    ctx->pc = 0x1bfbbcu;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x1bfbc0: 0x96822  neg         $t5, $t1
    ctx->pc = 0x1bfbc0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 9), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 13, (int32_t)tmp); }
    // 0x1bfbc4: 0x128680a  movz        $t5, $t1, $t0
    ctx->pc = 0x1bfbc4u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 13, GPR_VEC(ctx, 9));
    // 0x1bfbc8: 0x873023  subu        $a2, $a0, $a3
    ctx->pc = 0x1bfbc8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1bfbcc: 0xc0202a  slt         $a0, $a2, $zero
    ctx->pc = 0x1bfbccu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x1bfbd0: 0x64022  neg         $t0, $a2
    ctx->pc = 0x1bfbd0u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 6), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 8, (int32_t)tmp); }
    // 0x1bfbd4: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BFBD4u;
    {
        const bool branch_taken_0x1bfbd4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFBD4u;
        // 0x1bfbd8: 0xc4400a  movz        $t0, $a2, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfbd4) {
            ctx->pc = 0x1BFBF8u;
            goto label_1bfbf8;
        }
    }
    ctx->pc = 0x1BFBDCu;
    // 0x1bfbdc: 0x29010004  slti        $at, $t0, 0x4
    ctx->pc = 0x1bfbdcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1bfbe0: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x1BFBE0u;
    {
        const bool branch_taken_0x1bfbe0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFBE0u;
        // 0x1bfbe4: 0x29a10004  slti        $at, $t5, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfbe0) {
            ctx->pc = 0x1BFC10u;
            goto label_1bfc10;
        }
    }
    ctx->pc = 0x1BFBE8u;
    // 0x1bfbe8: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BFBE8u;
    {
        const bool branch_taken_0x1bfbe8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bfbe8) {
            ctx->pc = 0x1BFC10u;
            goto label_1bfc10;
        }
    }
    ctx->pc = 0x1BFBF0u;
    // 0x1bfbf0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1BFBF0u;
    {
        const bool branch_taken_0x1bfbf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFBF0u;
        // 0x1bfbf4: 0x240c0001  addiu       $t4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfbf0) {
            ctx->pc = 0x1BFC10u;
            goto label_1bfc10;
        }
    }
    ctx->pc = 0x1BFBF8u;
label_1bfbf8:
    // 0x1bfbf8: 0x29010006  slti        $at, $t0, 0x6
    ctx->pc = 0x1bfbf8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x1bfbfc: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BFBFCu;
    {
        const bool branch_taken_0x1bfbfc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFBFCu;
        // 0x1bfc00: 0x29a10006  slti        $at, $t5, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfbfc) {
            ctx->pc = 0x1BFC10u;
            goto label_1bfc10;
        }
    }
    ctx->pc = 0x1BFC04u;
    // 0x1bfc04: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BFC04u;
    {
        const bool branch_taken_0x1bfc04 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bfc04) {
            ctx->pc = 0x1BFC10u;
            goto label_1bfc10;
        }
    }
    ctx->pc = 0x1BFC0Cu;
    // 0x1bfc0c: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x1bfc0cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bfc10:
    // 0x1bfc10: 0x11800003  beqz        $t4, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BFC10u;
    {
        const bool branch_taken_0x1bfc10 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bfc10) {
            ctx->pc = 0x1BFC20u;
            goto label_1bfc20;
        }
    }
    ctx->pc = 0x1BFC18u;
    // 0x1bfc18: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1BFC18u;
    {
        const bool branch_taken_0x1bfc18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFC18u;
        // 0x1bfc1c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfc18) {
            ctx->pc = 0x1BFC30u;
            return;
        }
    }
    ctx->pc = 0x1BFC20u;
label_1bfc20:
    // 0x1bfc20: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1bfc20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1bfc24: 0x28640002  slti        $a0, $v1, 0x2
    ctx->pc = 0x1bfc24u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1bfc28: 0x1480ffda  bnez        $a0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x1BFC28u;
    {
        const bool branch_taken_0x1bfc28 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BFC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFC28u;
        // 0x1bfc2c: 0x24420090  addiu       $v0, $v0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfc28) {
            ctx->pc = 0x1BFB94u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bfb94;
        }
    }
    ctx->pc = 0x1BFC30u;
}
