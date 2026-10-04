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

// Function: FUN_00115ec0
// Address: 0x115ec0 - 0x116120
void FUN_00115ec0_0x115ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00115ec0_0x115ec0");
#endif

    switch (ctx->pc) {
        case 0x115edcu: goto label_115edc;
        case 0x115f7cu: goto label_115f7c;
        case 0x115fbcu: goto label_115fbc;
        case 0x11605cu: goto label_11605c;
        case 0x116078u: goto label_116078;
        case 0x11611cu: goto label_11611c;
        default: break;
    }

    ctx->pc = 0x115ec0u;

    // 0x115ec0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x115ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x115ec4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x115ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x115ec8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x115ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x115ecc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x115eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x115ed0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x115ed0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115ed4: 0xc04584c  jal         func_116130
    ctx->pc = 0x115ED4u;
    SET_GPR_U32(ctx, 31, 0x115EDCu);
    ctx->pc = 0x115ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115ED4u;
    // 0x115ed8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116130u, 0x115ED4u, 0x115EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115EDCu;
label_115edc:
    // 0x115edc: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x115edcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x115ee0: 0x3c040029  lui         $a0, 0x29
    ctx->pc = 0x115ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)41 << 16));
    // 0x115ee4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x115ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x115ee8: 0x2484aec0  addiu       $a0, $a0, -0x5140
    ctx->pc = 0x115ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946496));
    // 0x115eec: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x115eecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x115ef0: 0xa230018e  sb          $s0, 0x18E($s1)
    ctx->pc = 0x115ef0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 398), (uint8_t)GPR_U32(ctx, 16));
    // 0x115ef4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x115ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x115ef8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x115ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x115efc: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x115efcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x115f00: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x115F00u;
    {
        const bool branch_taken_0x115f00 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x115F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115F00u;
        // 0x115f04: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115f00) {
            ctx->pc = 0x115F18u;
            goto label_115f18;
        }
    }
    ctx->pc = 0x115F08u;
    // 0x115f08: 0x3c100032  lui         $s0, 0x32
    ctx->pc = 0x115f08u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)50 << 16));
    // 0x115f0c: 0xa22001a1  sb          $zero, 0x1A1($s1)
    ctx->pc = 0x115f0cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 417), (uint8_t)GPR_U32(ctx, 0));
    // 0x115f10: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x115F10u;
    {
        const bool branch_taken_0x115f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115F10u;
        // 0x115f14: 0x261067a0  addiu       $s0, $s0, 0x67A0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 26528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115f10) {
            ctx->pc = 0x11600Cu;
            goto label_11600c;
        }
    }
    ctx->pc = 0x115F18u;
label_115f18:
    // 0x115f18: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x115F18u;
    {
        const bool branch_taken_0x115f18 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x115f18) {
            ctx->pc = 0x115F30u;
            goto label_115f30;
        }
    }
    ctx->pc = 0x115F20u;
    // 0x115f20: 0x3c100032  lui         $s0, 0x32
    ctx->pc = 0x115f20u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)50 << 16));
    // 0x115f24: 0xa22001a1  sb          $zero, 0x1A1($s1)
    ctx->pc = 0x115f24u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 417), (uint8_t)GPR_U32(ctx, 0));
    // 0x115f28: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x115F28u;
    {
        const bool branch_taken_0x115f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115F28u;
        // 0x115f2c: 0x261067b0  addiu       $s0, $s0, 0x67B0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 26544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115f28) {
            ctx->pc = 0x11600Cu;
            goto label_11600c;
        }
    }
    ctx->pc = 0x115F30u;
label_115f30:
    // 0x115f30: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x115f30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x115f34: 0x1483000b  bne         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x115F34u;
    {
        const bool branch_taken_0x115f34 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x115F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115F34u;
        // 0x115f38: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115f34) {
            ctx->pc = 0x115F64u;
            goto label_115f64;
        }
    }
    ctx->pc = 0x115F3Cu;
    // 0x115f3c: 0xa22001a1  sb          $zero, 0x1A1($s1)
    ctx->pc = 0x115f3cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 417), (uint8_t)GPR_U32(ctx, 0));
    // 0x115f40: 0x3c034140  lui         $v1, 0x4140
    ctx->pc = 0x115f40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16704 << 16));
    // 0x115f44: 0xae2301e4  sw          $v1, 0x1E4($s1)
    ctx->pc = 0x115f44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 484), GPR_U32(ctx, 3));
    // 0x115f48: 0x3c044100  lui         $a0, 0x4100
    ctx->pc = 0x115f48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16640 << 16));
    // 0x115f4c: 0x3c100031  lui         $s0, 0x31
    ctx->pc = 0x115f4cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)49 << 16));
    // 0x115f50: 0x3c034160  lui         $v1, 0x4160
    ctx->pc = 0x115f50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16736 << 16));
    // 0x115f54: 0xae2401e8  sw          $a0, 0x1E8($s1)
    ctx->pc = 0x115f54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 488), GPR_U32(ctx, 4));
    // 0x115f58: 0x2610a4a0  addiu       $s0, $s0, -0x5B60
    ctx->pc = 0x115f58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294943904));
    // 0x115f5c: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x115F5Cu;
    {
        const bool branch_taken_0x115f5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115F5Cu;
        // 0x115f60: 0xae2301ec  sw          $v1, 0x1EC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 492), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115f5c) {
            ctx->pc = 0x11600Cu;
            goto label_11600c;
        }
    }
    ctx->pc = 0x115F64u;
label_115f64:
    // 0x115f64: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x115f64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115f68: 0x3c05002f  lui         $a1, 0x2F
    ctx->pc = 0x115f68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)47 << 16));
    // 0x115f6c: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x115f6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x115f70: 0x24a52470  addiu       $a1, $a1, 0x2470
    ctx->pc = 0x115f70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9328));
    // 0x115f74: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x115f74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x115f78: 0xa71021  addu        $v0, $a1, $a3
    ctx->pc = 0x115f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_115f7c:
    // 0x115f7c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x115f7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x115f80: 0x10440009  beq         $v0, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x115F80u;
    {
        const bool branch_taken_0x115f80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x115f80) {
            ctx->pc = 0x115FA8u;
            goto label_115fa8;
        }
    }
    ctx->pc = 0x115F88u;
    // 0x115f88: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x115F88u;
    {
        const bool branch_taken_0x115f88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x115f88) {
            ctx->pc = 0x115F98u;
            goto label_115f98;
        }
    }
    ctx->pc = 0x115F90u;
    // 0x115f90: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x115F90u;
    {
        const bool branch_taken_0x115f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115F90u;
        // 0x115f94: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115f90) {
            ctx->pc = 0x115FA8u;
            goto label_115fa8;
        }
    }
    ctx->pc = 0x115F98u;
label_115f98:
    // 0x115f98: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x115f98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x115f9c: 0x28e20014  slti        $v0, $a3, 0x14
    ctx->pc = 0x115f9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x115fa0: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x115FA0u;
    {
        const bool branch_taken_0x115fa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x115FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115FA0u;
        // 0x115fa4: 0xa71021  addu        $v0, $a1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115fa0) {
            ctx->pc = 0x115F7Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_115f7c;
        }
    }
    ctx->pc = 0x115FA8u;
label_115fa8:
    // 0x115fa8: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x115fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x115fac: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x115facu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x115fb0: 0x24423ac0  addiu       $v0, $v0, 0x3AC0
    ctx->pc = 0x115fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15040));
    // 0x115fb4: 0xc08f0cc  jal         func_23C330
    ctx->pc = 0x115FB4u;
    SET_GPR_U32(ctx, 31, 0x115FBCu);
    ctx->pc = 0x115FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115FB4u;
    // 0x115fb8: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C330u, 0x115FB4u, 0x115FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115FBCu;
label_115fbc:
    // 0x115fbc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x115fbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x115fc0: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x115fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x115fc4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x115fc4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x115fc8: 0x0  nop
    ctx->pc = 0x115fc8u;
    // NOP
    // 0x115fcc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x115fccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x115fd0: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x115fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x115fd4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x115fd4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x115fd8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x115fd8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x115fdc: 0x0  nop
    ctx->pc = 0x115fdcu;
    // NOP
    // 0x115fe0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x115fe0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x115fe4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x115fe4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x115fe8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x115fe8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x115fec: 0x0  nop
    ctx->pc = 0x115fecu;
    // NOP
    // 0x115ff0: 0xa22301a1  sb          $v1, 0x1A1($s1)
    ctx->pc = 0x115ff0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 417), (uint8_t)GPR_U32(ctx, 3));
    // 0x115ff4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x115ff4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x115ff8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x115FF8u;
    {
        const bool branch_taken_0x115ff8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x115ff8) {
            ctx->pc = 0x11600Cu;
            goto label_11600c;
        }
    }
    ctx->pc = 0x116000u;
    // 0x116000: 0x922301a1  lbu         $v1, 0x1A1($s1)
    ctx->pc = 0x116000u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 417)));
    // 0x116004: 0x24630085  addiu       $v1, $v1, 0x85
    ctx->pc = 0x116004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 133));
    // 0x116008: 0xa22301a1  sb          $v1, 0x1A1($s1)
    ctx->pc = 0x116008u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 417), (uint8_t)GPR_U32(ctx, 3));
label_11600c:
    // 0x11600c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x11600cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x116010: 0xae230020  sw          $v1, 0x20($s1)
    ctx->pc = 0x116010u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 3));
    // 0x116014: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x116014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x116018: 0xae230028  sw          $v1, 0x28($s1)
    ctx->pc = 0x116018u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 3));
    // 0x11601c: 0x8f848590  lw          $a0, -0x7A70($gp)
    ctx->pc = 0x11601cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x116020: 0x30830008  andi        $v1, $a0, 0x8
    ctx->pc = 0x116020u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
    // 0x116024: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x116024u;
    {
        const bool branch_taken_0x116024 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x116024) {
            ctx->pc = 0x116034u;
            goto label_116034;
        }
    }
    ctx->pc = 0x11602Cu;
    // 0x11602c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x11602Cu;
    {
        const bool branch_taken_0x11602c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11602Cu;
        // 0x116030: 0xae200054  sw          $zero, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11602c) {
            ctx->pc = 0x11607Cu;
            goto label_11607c;
        }
    }
    ctx->pc = 0x116034u;
label_116034:
    // 0x116034: 0x30820004  andi        $v0, $a0, 0x4
    ctx->pc = 0x116034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x116038: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x116038u;
    {
        const bool branch_taken_0x116038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11603Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116038u;
        // 0x11603c: 0x30820020  andi        $v0, $a0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x116038) {
            ctx->pc = 0x116064u;
            goto label_116064;
        }
    }
    ctx->pc = 0x116040u;
    // 0x116040: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x116040u;
    {
        const bool branch_taken_0x116040 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x116044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116040u;
        // 0x116044: 0x26240050  addiu       $a0, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116040) {
            ctx->pc = 0x116068u;
            goto label_116068;
        }
    }
    ctx->pc = 0x116048u;
    // 0x116048: 0x26240050  addiu       $a0, $s1, 0x50
    ctx->pc = 0x116048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x11604c: 0x26250170  addiu       $a1, $s1, 0x170
    ctx->pc = 0x11604cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 368));
    // 0x116050: 0x26260190  addiu       $a2, $s1, 0x190
    ctx->pc = 0x116050u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 400));
    // 0x116054: 0xc05f3d0  jal         func_17CF40
    ctx->pc = 0x116054u;
    SET_GPR_U32(ctx, 31, 0x11605Cu);
    ctx->pc = 0x116058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116054u;
    // 0x116058: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CF40u, 0x116054u, 0x11605Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11605Cu;
label_11605c:
    // 0x11605c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x11605Cu;
    {
        const bool branch_taken_0x11605c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11605Cu;
        // 0x116060: 0xe6200054  swc1        $f0, 0x54($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 84), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11605c) {
            ctx->pc = 0x11607Cu;
            goto label_11607c;
        }
    }
    ctx->pc = 0x116064u;
label_116064:
    // 0x116064: 0x26240050  addiu       $a0, $s1, 0x50
    ctx->pc = 0x116064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_116068:
    // 0x116068: 0x26250170  addiu       $a1, $s1, 0x170
    ctx->pc = 0x116068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 368));
    // 0x11606c: 0x26260190  addiu       $a2, $s1, 0x190
    ctx->pc = 0x11606cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 400));
    // 0x116070: 0xc05f3d0  jal         func_17CF40
    ctx->pc = 0x116070u;
    SET_GPR_U32(ctx, 31, 0x116078u);
    ctx->pc = 0x116074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116070u;
    // 0x116074: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CF40u, 0x116070u, 0x116078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116078u;
label_116078:
    // 0x116078: 0xe6200054  swc1        $f0, 0x54($s1)
    ctx->pc = 0x116078u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 84), bits); }
label_11607c:
    // 0x11607c: 0xc6200050  lwc1        $f0, 0x50($s1)
    ctx->pc = 0x11607cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x116080: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x116080u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x116084: 0xe6200150  swc1        $f0, 0x150($s1)
    ctx->pc = 0x116084u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 336), bits); }
    // 0x116088: 0xc6200054  lwc1        $f0, 0x54($s1)
    ctx->pc = 0x116088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11608c: 0xe6200154  swc1        $f0, 0x154($s1)
    ctx->pc = 0x11608cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 340), bits); }
    // 0x116090: 0xc6200058  lwc1        $f0, 0x58($s1)
    ctx->pc = 0x116090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x116094: 0xe6200158  swc1        $f0, 0x158($s1)
    ctx->pc = 0x116094u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 344), bits); }
    // 0x116098: 0xc620005c  lwc1        $f0, 0x5C($s1)
    ctx->pc = 0x116098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11609c: 0xe620015c  swc1        $f0, 0x15C($s1)
    ctx->pc = 0x11609cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 348), bits); }
    // 0x1160a0: 0xc6200050  lwc1        $f0, 0x50($s1)
    ctx->pc = 0x1160a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1160a4: 0xe6200160  swc1        $f0, 0x160($s1)
    ctx->pc = 0x1160a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 352), bits); }
    // 0x1160a8: 0xc6200054  lwc1        $f0, 0x54($s1)
    ctx->pc = 0x1160a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1160ac: 0xe6200164  swc1        $f0, 0x164($s1)
    ctx->pc = 0x1160acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 356), bits); }
    // 0x1160b0: 0xc6200058  lwc1        $f0, 0x58($s1)
    ctx->pc = 0x1160b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1160b4: 0xe6200168  swc1        $f0, 0x168($s1)
    ctx->pc = 0x1160b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 360), bits); }
    // 0x1160b8: 0xc620005c  lwc1        $f0, 0x5C($s1)
    ctx->pc = 0x1160b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1160bc: 0xe620016c  swc1        $f0, 0x16C($s1)
    ctx->pc = 0x1160bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 364), bits); }
    // 0x1160c0: 0xc6200054  lwc1        $f0, 0x54($s1)
    ctx->pc = 0x1160c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1160c4: 0xe6200180  swc1        $f0, 0x180($s1)
    ctx->pc = 0x1160c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 384), bits); }
    // 0x1160c8: 0xc6200054  lwc1        $f0, 0x54($s1)
    ctx->pc = 0x1160c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1160cc: 0xe6200184  swc1        $f0, 0x184($s1)
    ctx->pc = 0x1160ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 388), bits); }
    // 0x1160d0: 0xc6200180  lwc1        $f0, 0x180($s1)
    ctx->pc = 0x1160d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1160d4: 0xe6200188  swc1        $f0, 0x188($s1)
    ctx->pc = 0x1160d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 392), bits); }
    // 0x1160d8: 0xa620003c  sh          $zero, 0x3C($s1)
    ctx->pc = 0x1160d8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 60), (uint16_t)GPR_U32(ctx, 0));
    // 0x1160dc: 0x8625003c  lh          $a1, 0x3C($s1)
    ctx->pc = 0x1160dcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x1160e0: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x1160e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1160e4: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x1160e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1160e8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1160e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1160ec: 0xae240024  sw          $a0, 0x24($s1)
    ctx->pc = 0x1160ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 4));
    // 0x1160f0: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x1160f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x1160f4: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x1160f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1160f8: 0xa623018c  sh          $v1, 0x18C($s1)
    ctx->pc = 0x1160f8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 396), (uint16_t)GPR_U32(ctx, 3));
    // 0x1160fc: 0x8624003c  lh          $a0, 0x3C($s1)
    ctx->pc = 0x1160fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x116100: 0x8623018c  lh          $v1, 0x18C($s1)
    ctx->pc = 0x116100u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 396)));
    // 0x116104: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x116104u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x116108: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x116108u;
    {
        const bool branch_taken_0x116108 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x116108) {
            ctx->pc = 0x11611Cu;
            goto label_11611c;
        }
    }
    ctx->pc = 0x116110u;
    // 0x116110: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x116110u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x116114: 0xc050f08  jal         func_143C20
    ctx->pc = 0x116114u;
    SET_GPR_U32(ctx, 31, 0x11611Cu);
    ctx->pc = 0x116118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116114u;
    // 0x116118: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143C20u, 0x116114u, 0x11611Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11611Cu;
label_11611c:
    // 0x11611c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11611cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x116120u;
}
