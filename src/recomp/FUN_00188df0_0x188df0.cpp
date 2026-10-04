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

// Function: FUN_00188df0
// Address: 0x188df0 - 0x188f18
void FUN_00188df0_0x188df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00188df0_0x188df0");
#endif

    switch (ctx->pc) {
        case 0x188ef4u: goto label_188ef4;
        default: break;
    }

    ctx->pc = 0x188df0u;

    // 0x188df0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x188df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x188df4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x188df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x188df8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x188df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x188dfc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x188dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x188e00: 0x8482019c  lh          $v0, 0x19C($a0)
    ctx->pc = 0x188e00u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 412)));
    // 0x188e04: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x188E04u;
    {
        const bool branch_taken_0x188e04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x188E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188E04u;
        // 0x188e08: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188e04) {
            ctx->pc = 0x188E6Cu;
            goto label_188e6c;
        }
    }
    ctx->pc = 0x188E0Cu;
    // 0x188e0c: 0x8602019e  lh          $v0, 0x19E($s0)
    ctx->pc = 0x188e0cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 414)));
    // 0x188e10: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x188E10u;
    {
        const bool branch_taken_0x188e10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x188e10) {
            ctx->pc = 0x188E6Cu;
            goto label_188e6c;
        }
    }
    ctx->pc = 0x188E18u;
    // 0x188e18: 0xc6000044  lwc1        $f0, 0x44($s0)
    ctx->pc = 0x188e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188e1c: 0x0  nop
    ctx->pc = 0x188e1cu;
    // NOP
    // 0x188e20: 0x44090000  mfc1        $t1, $f0
    ctx->pc = 0x188e20u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x188e24: 0x48a90800  qmtc2.ni    $t1, $vf1
    ctx->pc = 0x188e24u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
    // 0x188e28: 0x4a000138  vcallms     0x20
    ctx->pc = 0x188e28u;
    {     ctx->vu0_tpc = 0x20;     runtime->executeVU0Microprogram(rdram, ctx, 0x20); }
    // 0x188e2c: 0x48290801  qmfc2.i     $t1, $vf1
    ctx->pc = 0x188e2cu;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x188e30: 0x44890800  mtc1        $t1, $f1
    ctx->pc = 0x188e30u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x188e34: 0x48291000  qmfc2.ni    $t1, $vf2
    ctx->pc = 0x188e34u;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x188e38: 0x44891000  mtc1        $t1, $f2
    ctx->pc = 0x188e38u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x188e3c: 0x3c0242fe  lui         $v0, 0x42FE
    ctx->pc = 0x188e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17150 << 16));
    // 0x188e40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x188e40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x188e44: 0x0  nop
    ctx->pc = 0x188e44u;
    // NOP
    // 0x188e48: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x188e48u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x188e4c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x188e4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x188e50: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x188e50u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x188e54: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x188e54u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x188e58: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x188e58u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x188e5c: 0xa602019c  sh          $v0, 0x19C($s0)
    ctx->pc = 0x188e5cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 412), (uint16_t)GPR_U32(ctx, 2));
    // 0x188e60: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x188e60u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x188e64: 0x0  nop
    ctx->pc = 0x188e64u;
    // NOP
    // 0x188e68: 0xa602019e  sh          $v0, 0x19E($s0)
    ctx->pc = 0x188e68u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 414), (uint16_t)GPR_U32(ctx, 2));
label_188e6c:
    // 0x188e6c: 0x8603019c  lh          $v1, 0x19C($s0)
    ctx->pc = 0x188e6cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 412)));
    // 0x188e70: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x188e70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x188e74: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x188e74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x188e78: 0xc6000150  lwc1        $f0, 0x150($s0)
    ctx->pc = 0x188e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188e7c: 0x3c0242fe  lui         $v0, 0x42FE
    ctx->pc = 0x188e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17150 << 16));
    // 0x188e80: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x188e80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x188e84: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x188e84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x188e88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x188e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x188e8c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x188e8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x188e90: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x188e90u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x188e94: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x188e94u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
    // 0x188e98: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x188e98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x188e9c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x188e9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x188ea0: 0xc6000154  lwc1        $f0, 0x154($s0)
    ctx->pc = 0x188ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188ea4: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x188ea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x188ea8: 0x8603019e  lh          $v1, 0x19E($s0)
    ctx->pc = 0x188ea8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 414)));
    // 0x188eac: 0xc6000158  lwc1        $f0, 0x158($s0)
    ctx->pc = 0x188eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188eb0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x188eb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x188eb4: 0x0  nop
    ctx->pc = 0x188eb4u;
    // NOP
    // 0x188eb8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x188eb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x188ebc: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x188ebcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x188ec0: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x188ec0u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
    // 0x188ec4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x188ec4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x188ec8: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x188ec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x188ecc: 0xc600015c  lwc1        $f0, 0x15C($s0)
    ctx->pc = 0x188eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188ed0: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x188ed0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x188ed4: 0x9203023f  lbu         $v1, 0x23F($s0)
    ctx->pc = 0x188ed4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 575)));
    // 0x188ed8: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x188ED8u;
    {
        const bool branch_taken_0x188ed8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x188EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188ED8u;
        // 0x188edc: 0x2411001e  addiu       $s1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188ed8) {
            ctx->pc = 0x188EE4u;
            goto label_188ee4;
        }
    }
    ctx->pc = 0x188EE0u;
    // 0x188ee0: 0x2411002e  addiu       $s1, $zero, 0x2E
    ctx->pc = 0x188ee0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
label_188ee4:
    // 0x188ee4: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x188ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x188ee8: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x188ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x188eec: 0xc042484  jal         func_109210
    ctx->pc = 0x188EECu;
    SET_GPR_U32(ctx, 31, 0x188EF4u);
    ctx->pc = 0x188EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188EECu;
    // 0x188ef0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109210u, 0x188EECu, 0x188EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188EF4u;
label_188ef4:
    // 0x188ef4: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x188ef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x188ef8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x188EF8u;
    {
        const bool branch_taken_0x188ef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x188ef8) {
            ctx->pc = 0x188F10u;
            goto label_188f10;
        }
    }
    ctx->pc = 0x188F00u;
    // 0x188f00: 0xa600019c  sh          $zero, 0x19C($s0)
    ctx->pc = 0x188f00u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 412), (uint16_t)GPR_U32(ctx, 0));
    // 0x188f04: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x188f04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188f08: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x188F08u;
    {
        const bool branch_taken_0x188f08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188F08u;
        // 0x188f0c: 0xa600019e  sh          $zero, 0x19E($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 414), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188f08) {
            ctx->pc = 0x188F14u;
            goto label_188f14;
        }
    }
    ctx->pc = 0x188F10u;
label_188f10:
    // 0x188f10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x188f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_188f14:
    // 0x188f14: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x188f14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x188f18u;
}
