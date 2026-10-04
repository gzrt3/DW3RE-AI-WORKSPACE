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

// Function: entry_0018ed28
// Address: 0x18ed28 - 0x18f1d4
void entry_0018ed28_0x18ed28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ed28_0x18ed28");
#endif

    switch (ctx->pc) {
        case 0x18ed30u: goto label_18ed30;
        case 0x18ed78u: goto label_18ed78;
        case 0x18ee5cu: goto label_18ee5c;
        case 0x18ee70u: goto label_18ee70;
        case 0x18ef54u: goto label_18ef54;
        case 0x18ef68u: goto label_18ef68;
        case 0x18ef9cu: goto label_18ef9c;
        case 0x18f08cu: goto label_18f08c;
        case 0x18f0c0u: goto label_18f0c0;
        case 0x18f1b0u: goto label_18f1b0;
        default: break;
    }

    ctx->pc = 0x18ed28u;

    // 0x18ed28: 0xc063d10  jal         func_18F440
    ctx->pc = 0x18ED28u;
    SET_GPR_U32(ctx, 31, 0x18ED30u);
    ctx->pc = 0x18F440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F440u, 0x18ED28u, 0x18ED30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18ED30u;
label_18ed30:
    // 0x18ed30: 0x10000128  b           . + 4 + (0x128 << 2)
    ctx->pc = 0x18ED30u;
    {
        const bool branch_taken_0x18ed30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ed30) {
            ctx->pc = 0x18F1D4u;
            return;
        }
    }
    ctx->pc = 0x18ED38u;
    // 0x18ed38: 0xc6800090  lwc1        $f0, 0x90($s4)
    ctx->pc = 0x18ed38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18ed3c: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x18ed3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x18ed40: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18ed40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18ed44: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x18ed44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x18ed48: 0x4616b8c0  add.s       $f3, $f23, $f22
    ctx->pc = 0x18ed48u;
    ctx->f[3] = FPU_ADD_S(ctx->f[23], ctx->f[22]);
    // 0x18ed4c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x18ed4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ed50: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x18ed50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ed54: 0x26860080  addiu       $a2, $s4, 0x80
    ctx->pc = 0x18ed54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 128));
    // 0x18ed58: 0x46010343  div.s       $f13, $f0, $f1
    ctx->pc = 0x18ed58u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[13] = ctx->f[0] / ctx->f[1];
    // 0x18ed5c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x18ed5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18ed60: 0x0  nop
    ctx->pc = 0x18ed60u;
    // NOP
    // 0x18ed64: 0x46031302  mul.s       $f12, $f2, $f3
    ctx->pc = 0x18ed64u;
    ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x18ed68: 0x0  nop
    ctx->pc = 0x18ed68u;
    // NOP
    // 0x18ed6c: 0x0  nop
    ctx->pc = 0x18ed6cu;
    // NOP
    // 0x18ed70: 0xc063d10  jal         func_18F440
    ctx->pc = 0x18ED70u;
    SET_GPR_U32(ctx, 31, 0x18ED78u);
    ctx->pc = 0x18F440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18F440u, 0x18ED70u, 0x18ED78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18ED78u;
label_18ed78:
    // 0x18ed78: 0x10000116  b           . + 4 + (0x116 << 2)
    ctx->pc = 0x18ED78u;
    {
        const bool branch_taken_0x18ed78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ed78) {
            ctx->pc = 0x18F1D4u;
            return;
        }
    }
    ctx->pc = 0x18ED80u;
    // 0x18ed80: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x18ed80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18ed84: 0x1623003c  bne         $s1, $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x18ED84u;
    {
        const bool branch_taken_0x18ed84 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x18ed84) {
            ctx->pc = 0x18EE78u;
            goto label_18ee78;
        }
    }
    ctx->pc = 0x18ED8Cu;
    // 0x18ed8c: 0x1443003a  bne         $v0, $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x18ED8Cu;
    {
        const bool branch_taken_0x18ed8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x18ed8c) {
            ctx->pc = 0x18EE78u;
            goto label_18ee78;
        }
    }
    ctx->pc = 0x18ED94u;
    // 0x18ed94: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x18ed94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
    // 0x18ed98: 0xae8000a4  sw          $zero, 0xA4($s4)
    ctx->pc = 0x18ed98u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 164), GPR_U32(ctx, 0));
    // 0x18ed9c: 0x24a562e0  addiu       $a1, $a1, 0x62E0
    ctx->pc = 0x18ed9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25312));
    // 0x18eda0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x18eda0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18eda4: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x18eda4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x18eda8: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x18eda8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(FAST_READ128(0x2D62E0u));
    // 0x18edac: 0x4be110ec  vsub.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x18edacu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x18edb0: 0x4a0002ff  vnop
    ctx->pc = 0x18edb0u;
    // NOP operation, no action needed for VU0
    // 0x18edb4: 0x4a0002ff  vnop
    ctx->pc = 0x18edb4u;
    // NOP operation, no action needed for VU0
    // 0x18edb8: 0x4a0002ff  vnop
    ctx->pc = 0x18edb8u;
    // NOP operation, no action needed for VU0
    // 0x18edbc: 0x4b03f959  vmuly.x     $vf5, $vf31, $vf3y
    ctx->pc = 0x18edbcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x18edc0: 0x4b03f99a  vmulz.x     $vf6, $vf31, $vf3z
    ctx->pc = 0x18edc0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x18edc4: 0x4a0002ff  vnop
    ctx->pc = 0x18edc4u;
    // NOP operation, no action needed for VU0
    // 0x18edc8: 0x4b0319bc  vmulax.x    $ACC, $vf3, $vf3x
    ctx->pc = 0x18edc8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x18edcc: 0x4b0328bd  vmadday.x   $ACC, $vf5, $vf3y
    ctx->pc = 0x18edccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x18edd0: 0x4b03310a  vmaddz.x    $vf4, $vf6, $vf3z
    ctx->pc = 0x18edd0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x18edd4: 0x4a0002ff  vnop
    ctx->pc = 0x18edd4u;
    // NOP operation, no action needed for VU0
    // 0x18edd8: 0x4a0002ff  vnop
    ctx->pc = 0x18edd8u;
    // NOP operation, no action needed for VU0
    // 0x18eddc: 0x4a0002ff  vnop
    ctx->pc = 0x18eddcu;
    // NOP operation, no action needed for VU0
    // 0x18ede0: 0x4a0403bd  .word       0x4A0403BD                   # vsqrt       $Q, $vf4x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x18ede0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x18ede4: 0x4a0003bf  vwaitq
    ctx->pc = 0x18ede4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x18ede8: 0x4849b000  cfc2.ni     $t1, $vi22
    ctx->pc = 0x18ede8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->vu0_q, sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x18edec: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x18edecu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18edf0: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x18edf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
    // 0x18edf4: 0x244262f0  addiu       $v0, $v0, 0x62F0
    ctx->pc = 0x18edf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25328));
    // 0x18edf8: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x18edf8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(FAST_READ128(0x2D62F0u));
    // 0x18edfc: 0x4be110ec  vsub.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x18edfcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x18ee00: 0x4a0002ff  vnop
    ctx->pc = 0x18ee00u;
    // NOP operation, no action needed for VU0
    // 0x18ee04: 0x4a0002ff  vnop
    ctx->pc = 0x18ee04u;
    // NOP operation, no action needed for VU0
    // 0x18ee08: 0x4a0002ff  vnop
    ctx->pc = 0x18ee08u;
    // NOP operation, no action needed for VU0
    // 0x18ee0c: 0x4b03f959  vmuly.x     $vf5, $vf31, $vf3y
    ctx->pc = 0x18ee0cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x18ee10: 0x4b03f99a  vmulz.x     $vf6, $vf31, $vf3z
    ctx->pc = 0x18ee10u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x18ee14: 0x4a0002ff  vnop
    ctx->pc = 0x18ee14u;
    // NOP operation, no action needed for VU0
    // 0x18ee18: 0x4b0319bc  vmulax.x    $ACC, $vf3, $vf3x
    ctx->pc = 0x18ee18u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x18ee1c: 0x4b0328bd  vmadday.x   $ACC, $vf5, $vf3y
    ctx->pc = 0x18ee1cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x18ee20: 0x4b03310a  vmaddz.x    $vf4, $vf6, $vf3z
    ctx->pc = 0x18ee20u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x18ee24: 0x4a0002ff  vnop
    ctx->pc = 0x18ee24u;
    // NOP operation, no action needed for VU0
    // 0x18ee28: 0x4a0002ff  vnop
    ctx->pc = 0x18ee28u;
    // NOP operation, no action needed for VU0
    // 0x18ee2c: 0x4a0002ff  vnop
    ctx->pc = 0x18ee2cu;
    // NOP operation, no action needed for VU0
    // 0x18ee30: 0x4a0403bd  .word       0x4A0403BD                   # vsqrt       $Q, $vf4x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x18ee30u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x18ee34: 0x4a0003bf  vwaitq
    ctx->pc = 0x18ee34u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x18ee38: 0x4849b000  cfc2.ni     $t1, $vi22
    ctx->pc = 0x18ee38u;
    { uint32_t bits; std::memcpy(&bits, &ctx->vu0_q, sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x18ee3c: 0x44890800  mtc1        $t1, $f1
    ctx->pc = 0x18ee3cu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18ee40: 0x0  nop
    ctx->pc = 0x18ee40u;
    // NOP
    // 0x18ee44: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x18ee44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18ee48: 0x0  nop
    ctx->pc = 0x18ee48u;
    // NOP
    // 0x18ee4c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x18EE4Cu;
    {
        const bool branch_taken_0x18ee4c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18ee4c) {
            ctx->pc = 0x18EE64u;
            goto label_18ee64;
        }
    }
    ctx->pc = 0x18EE54u;
    // 0x18ee54: 0xc066e26  jal         func_19B898
    ctx->pc = 0x18EE54u;
    SET_GPR_U32(ctx, 31, 0x18EE5Cu);
    ctx->pc = 0x18EE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EE54u;
    // 0x18ee58: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x18EE54u, 0x18EE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EE5Cu;
label_18ee5c:
    // 0x18ee5c: 0x100000dd  b           . + 4 + (0xDD << 2)
    ctx->pc = 0x18EE5Cu;
    {
        const bool branch_taken_0x18ee5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ee5c) {
            ctx->pc = 0x18F1D4u;
            return;
        }
    }
    ctx->pc = 0x18EE64u;
label_18ee64:
    // 0x18ee64: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x18ee64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ee68: 0xc066e26  jal         func_19B898
    ctx->pc = 0x18EE68u;
    SET_GPR_U32(ctx, 31, 0x18EE70u);
    ctx->pc = 0x18EE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EE68u;
    // 0x18ee6c: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x18EE68u, 0x18EE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EE70u;
label_18ee70:
    // 0x18ee70: 0x100000d8  b           . + 4 + (0xD8 << 2)
    ctx->pc = 0x18EE70u;
    {
        const bool branch_taken_0x18ee70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ee70) {
            ctx->pc = 0x18F1D4u;
            return;
        }
    }
    ctx->pc = 0x18EE78u;
label_18ee78:
    // 0x18ee78: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x18ee78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18ee7c: 0x1623003d  bne         $s1, $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x18EE7Cu;
    {
        const bool branch_taken_0x18ee7c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x18EE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EE7Cu;
        // 0x18ee80: 0x2a210003  slti        $at, $s1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ee7c) {
            ctx->pc = 0x18EF74u;
            goto label_18ef74;
        }
    }
    ctx->pc = 0x18EE84u;
    // 0x18ee84: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x18EE84u;
    {
        const bool branch_taken_0x18ee84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18ee84) {
            ctx->pc = 0x18EF70u;
            goto label_18ef70;
        }
    }
    ctx->pc = 0x18EE8Cu;
    // 0x18ee8c: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x18ee8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
    // 0x18ee90: 0xae8000a4  sw          $zero, 0xA4($s4)
    ctx->pc = 0x18ee90u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 164), GPR_U32(ctx, 0));
    // 0x18ee94: 0x24a562e0  addiu       $a1, $a1, 0x62E0
    ctx->pc = 0x18ee94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25312));
    // 0x18ee98: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x18ee98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18ee9c: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x18ee9cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x18eea0: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x18eea0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(FAST_READ128(0x2D62E0u));
    // 0x18eea4: 0x4be110ec  vsub.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x18eea4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x18eea8: 0x4a0002ff  vnop
    ctx->pc = 0x18eea8u;
    // NOP operation, no action needed for VU0
    // 0x18eeac: 0x4a0002ff  vnop
    ctx->pc = 0x18eeacu;
    // NOP operation, no action needed for VU0
    // 0x18eeb0: 0x4a0002ff  vnop
    ctx->pc = 0x18eeb0u;
    // NOP operation, no action needed for VU0
    // 0x18eeb4: 0x4b03f959  vmuly.x     $vf5, $vf31, $vf3y
    ctx->pc = 0x18eeb4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x18eeb8: 0x4b03f99a  vmulz.x     $vf6, $vf31, $vf3z
    ctx->pc = 0x18eeb8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x18eebc: 0x4a0002ff  vnop
    ctx->pc = 0x18eebcu;
    // NOP operation, no action needed for VU0
    // 0x18eec0: 0x4b0319bc  vmulax.x    $ACC, $vf3, $vf3x
    ctx->pc = 0x18eec0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x18eec4: 0x4b0328bd  vmadday.x   $ACC, $vf5, $vf3y
    ctx->pc = 0x18eec4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x18eec8: 0x4b03310a  vmaddz.x    $vf4, $vf6, $vf3z
    ctx->pc = 0x18eec8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x18eecc: 0x4a0002ff  vnop
    ctx->pc = 0x18eeccu;
    // NOP operation, no action needed for VU0
    // 0x18eed0: 0x4a0002ff  vnop
    ctx->pc = 0x18eed0u;
    // NOP operation, no action needed for VU0
    // 0x18eed4: 0x4a0002ff  vnop
    ctx->pc = 0x18eed4u;
    // NOP operation, no action needed for VU0
    // 0x18eed8: 0x4a0403bd  .word       0x4A0403BD                   # vsqrt       $Q, $vf4x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x18eed8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x18eedc: 0x4a0003bf  vwaitq
    ctx->pc = 0x18eedcu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x18eee0: 0x4849b000  cfc2.ni     $t1, $vi22
    ctx->pc = 0x18eee0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->vu0_q, sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x18eee4: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x18eee4u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18eee8: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x18eee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
    // 0x18eeec: 0x244262f0  addiu       $v0, $v0, 0x62F0
    ctx->pc = 0x18eeecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25328));
    // 0x18eef0: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x18eef0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(FAST_READ128(0x2D62F0u));
    // 0x18eef4: 0x4be110ec  vsub.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x18eef4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x18eef8: 0x4a0002ff  vnop
    ctx->pc = 0x18eef8u;
    // NOP operation, no action needed for VU0
    // 0x18eefc: 0x4a0002ff  vnop
    ctx->pc = 0x18eefcu;
    // NOP operation, no action needed for VU0
    // 0x18ef00: 0x4a0002ff  vnop
    ctx->pc = 0x18ef00u;
    // NOP operation, no action needed for VU0
    // 0x18ef04: 0x4b03f959  vmuly.x     $vf5, $vf31, $vf3y
    ctx->pc = 0x18ef04u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x18ef08: 0x4b03f99a  vmulz.x     $vf6, $vf31, $vf3z
    ctx->pc = 0x18ef08u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x18ef0c: 0x4a0002ff  vnop
    ctx->pc = 0x18ef0cu;
    // NOP operation, no action needed for VU0
    // 0x18ef10: 0x4b0319bc  vmulax.x    $ACC, $vf3, $vf3x
    ctx->pc = 0x18ef10u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x18ef14: 0x4b0328bd  vmadday.x   $ACC, $vf5, $vf3y
    ctx->pc = 0x18ef14u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x18ef18: 0x4b03310a  vmaddz.x    $vf4, $vf6, $vf3z
    ctx->pc = 0x18ef18u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x18ef1c: 0x4a0002ff  vnop
    ctx->pc = 0x18ef1cu;
    // NOP operation, no action needed for VU0
    // 0x18ef20: 0x4a0002ff  vnop
    ctx->pc = 0x18ef20u;
    // NOP operation, no action needed for VU0
    // 0x18ef24: 0x4a0002ff  vnop
    ctx->pc = 0x18ef24u;
    // NOP operation, no action needed for VU0
    // 0x18ef28: 0x4a0403bd  .word       0x4A0403BD                   # vsqrt       $Q, $vf4x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x18ef28u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x18ef2c: 0x4a0003bf  vwaitq
    ctx->pc = 0x18ef2cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x18ef30: 0x4849b000  cfc2.ni     $t1, $vi22
    ctx->pc = 0x18ef30u;
    { uint32_t bits; std::memcpy(&bits, &ctx->vu0_q, sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x18ef34: 0x44890800  mtc1        $t1, $f1
    ctx->pc = 0x18ef34u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18ef38: 0x0  nop
    ctx->pc = 0x18ef38u;
    // NOP
    // 0x18ef3c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x18ef3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18ef40: 0x0  nop
    ctx->pc = 0x18ef40u;
    // NOP
    // 0x18ef44: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x18EF44u;
    {
        const bool branch_taken_0x18ef44 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18ef44) {
            ctx->pc = 0x18EF5Cu;
            goto label_18ef5c;
        }
    }
    ctx->pc = 0x18EF4Cu;
    // 0x18ef4c: 0xc066e26  jal         func_19B898
    ctx->pc = 0x18EF4Cu;
    SET_GPR_U32(ctx, 31, 0x18EF54u);
    ctx->pc = 0x18EF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EF4Cu;
    // 0x18ef50: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x18EF4Cu, 0x18EF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EF54u;
label_18ef54:
    // 0x18ef54: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x18EF54u;
    {
        const bool branch_taken_0x18ef54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ef54) {
            ctx->pc = 0x18F1D4u;
            return;
        }
    }
    ctx->pc = 0x18EF5Cu;
label_18ef5c:
    // 0x18ef5c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x18ef5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ef60: 0xc066e26  jal         func_19B898
    ctx->pc = 0x18EF60u;
    SET_GPR_U32(ctx, 31, 0x18EF68u);
    ctx->pc = 0x18EF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EF60u;
    // 0x18ef64: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x18EF60u, 0x18EF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EF68u;
label_18ef68:
    // 0x18ef68: 0x1000009a  b           . + 4 + (0x9A << 2)
    ctx->pc = 0x18EF68u;
    {
        const bool branch_taken_0x18ef68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ef68) {
            ctx->pc = 0x18F1D4u;
            return;
        }
    }
    ctx->pc = 0x18EF70u;
label_18ef70:
    // 0x18ef70: 0x2a210003  slti        $at, $s1, 0x3
    ctx->pc = 0x18ef70u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
label_18ef74:
    // 0x18ef74: 0x14200048  bnez        $at, . + 4 + (0x48 << 2)
    ctx->pc = 0x18EF74u;
    {
        const bool branch_taken_0x18ef74 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x18EF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EF74u;
        // 0x18ef78: 0x28410003  slti        $at, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ef74) {
            ctx->pc = 0x18F098u;
            goto label_18f098;
        }
    }
    ctx->pc = 0x18EF7Cu;
    // 0x18ef7c: 0x3c03002d  lui         $v1, 0x2D
    ctx->pc = 0x18ef7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)45 << 16));
    // 0x18ef80: 0xae8000a4  sw          $zero, 0xA4($s4)
    ctx->pc = 0x18ef80u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 164), GPR_U32(ctx, 0));
    // 0x18ef84: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x18ef84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18ef88: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18ef88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ef8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18ef8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ef90: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x18EF90u;
    {
        const bool branch_taken_0x18ef90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18EF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EF90u;
        // 0x18ef94: 0x246362e0  addiu       $v1, $v1, 0x62E0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25312));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ef90) {
            ctx->pc = 0x18F05Cu;
            goto label_18f05c;
        }
    }
    ctx->pc = 0x18EF98u;
    // 0x18ef98: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x18ef98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_18ef9c:
    // 0x18ef9c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x18ef9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18efa0: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x18efa0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x18efa4: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x18efa4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18efa8: 0x4be110ec  vsub.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x18efa8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x18efac: 0x4a0002ff  vnop
    ctx->pc = 0x18efacu;
    // NOP operation, no action needed for VU0
    // 0x18efb0: 0x4a0002ff  vnop
    ctx->pc = 0x18efb0u;
    // NOP operation, no action needed for VU0
    // 0x18efb4: 0x4a0002ff  vnop
    ctx->pc = 0x18efb4u;
    // NOP operation, no action needed for VU0
    // 0x18efb8: 0x4b03f959  vmuly.x     $vf5, $vf31, $vf3y
    ctx->pc = 0x18efb8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x18efbc: 0x4b03f99a  vmulz.x     $vf6, $vf31, $vf3z
    ctx->pc = 0x18efbcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x18efc0: 0x4a0002ff  vnop
    ctx->pc = 0x18efc0u;
    // NOP operation, no action needed for VU0
    // 0x18efc4: 0x4b0319bc  vmulax.x    $ACC, $vf3, $vf3x
    ctx->pc = 0x18efc4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x18efc8: 0x4b0328bd  vmadday.x   $ACC, $vf5, $vf3y
    ctx->pc = 0x18efc8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x18efcc: 0x4b03310a  vmaddz.x    $vf4, $vf6, $vf3z
    ctx->pc = 0x18efccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x18efd0: 0x4a0002ff  vnop
    ctx->pc = 0x18efd0u;
    // NOP operation, no action needed for VU0
    // 0x18efd4: 0x4a0002ff  vnop
    ctx->pc = 0x18efd4u;
    // NOP operation, no action needed for VU0
    // 0x18efd8: 0x4a0002ff  vnop
    ctx->pc = 0x18efd8u;
    // NOP operation, no action needed for VU0
    // 0x18efdc: 0x4a0403bd  .word       0x4A0403BD                   # vsqrt       $Q, $vf4x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x18efdcu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x18efe0: 0x4a0003bf  vwaitq
    ctx->pc = 0x18efe0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x18efe4: 0x4849b000  cfc2.ni     $t1, $vi22
    ctx->pc = 0x18efe4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->vu0_q, sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x18efe8: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x18efe8u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18efec: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x18efecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x18eff0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x18eff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18eff4: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x18eff4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18eff8: 0x4be110ec  vsub.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x18eff8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x18effc: 0x4a0002ff  vnop
    ctx->pc = 0x18effcu;
    // NOP operation, no action needed for VU0
    // 0x18f000: 0x4a0002ff  vnop
    ctx->pc = 0x18f000u;
    // NOP operation, no action needed for VU0
    // 0x18f004: 0x4a0002ff  vnop
    ctx->pc = 0x18f004u;
    // NOP operation, no action needed for VU0
    // 0x18f008: 0x4b03f959  vmuly.x     $vf5, $vf31, $vf3y
    ctx->pc = 0x18f008u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x18f00c: 0x4b03f99a  vmulz.x     $vf6, $vf31, $vf3z
    ctx->pc = 0x18f00cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x18f010: 0x4a0002ff  vnop
    ctx->pc = 0x18f010u;
    // NOP operation, no action needed for VU0
    // 0x18f014: 0x4b0319bc  vmulax.x    $ACC, $vf3, $vf3x
    ctx->pc = 0x18f014u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x18f018: 0x4b0328bd  vmadday.x   $ACC, $vf5, $vf3y
    ctx->pc = 0x18f018u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x18f01c: 0x4b03310a  vmaddz.x    $vf4, $vf6, $vf3z
    ctx->pc = 0x18f01cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x18f020: 0x4a0002ff  vnop
    ctx->pc = 0x18f020u;
    // NOP operation, no action needed for VU0
    // 0x18f024: 0x4a0002ff  vnop
    ctx->pc = 0x18f024u;
    // NOP operation, no action needed for VU0
    // 0x18f028: 0x4a0002ff  vnop
    ctx->pc = 0x18f028u;
    // NOP operation, no action needed for VU0
    // 0x18f02c: 0x4a0403bd  .word       0x4A0403BD                   # vsqrt       $Q, $vf4x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x18f02cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x18f030: 0x4a0003bf  vwaitq
    ctx->pc = 0x18f030u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x18f034: 0x4849b000  cfc2.ni     $t1, $vi22
    ctx->pc = 0x18f034u;
    { uint32_t bits; std::memcpy(&bits, &ctx->vu0_q, sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x18f038: 0x44890800  mtc1        $t1, $f1
    ctx->pc = 0x18f038u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18f03c: 0x0  nop
    ctx->pc = 0x18f03cu;
    // NOP
    // 0x18f040: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x18f040u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18f044: 0x0  nop
    ctx->pc = 0x18f044u;
    // NOP
    // 0x18f048: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x18F048u;
    {
        const bool branch_taken_0x18f048 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18f048) {
            ctx->pc = 0x18F054u;
            goto label_18f054;
        }
    }
    ctx->pc = 0x18F050u;
    // 0x18f050: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x18f050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_18f054:
    // 0x18f054: 0x0  nop
    ctx->pc = 0x18f054u;
    // NOP
    // 0x18f058: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x18f058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_18f05c:
    // 0x18f05c: 0x0  nop
    ctx->pc = 0x18f05cu;
    // NOP
    // 0x18f060: 0xb1102a  slt         $v0, $a1, $s1
    ctx->pc = 0x18f060u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x18f064: 0x1440ffcd  bnez        $v0, . + 4 + (-0x33 << 2)
    ctx->pc = 0x18F064u;
    {
        const bool branch_taken_0x18f064 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18F068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F064u;
        // 0x18f068: 0x41100  sll         $v0, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f064) {
            ctx->pc = 0x18EF9Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18ef9c;
        }
    }
    ctx->pc = 0x18F06Cu;
    // 0x18f06c: 0xaf848828  sw          $a0, -0x77D8($gp)
    ctx->pc = 0x18f06cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936616), GPR_U32(ctx, 4));
    // 0x18f070: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x18f070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
    // 0x18f074: 0x8f838828  lw          $v1, -0x77D8($gp)
    ctx->pc = 0x18f074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936616)));
    // 0x18f078: 0x244262e0  addiu       $v0, $v0, 0x62E0
    ctx->pc = 0x18f078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25312));
    // 0x18f07c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x18f07cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x18f080: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x18f080u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x18f084: 0xc066e26  jal         func_19B898
    ctx->pc = 0x18F084u;
    SET_GPR_U32(ctx, 31, 0x18F08Cu);
    ctx->pc = 0x18F088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F084u;
    // 0x18f088: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x18F084u, 0x18F08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F08Cu;
label_18f08c:
    // 0x18f08c: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x18F08Cu;
    {
        const bool branch_taken_0x18f08c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f08c) {
            ctx->pc = 0x18F1D4u;
            return;
        }
    }
    ctx->pc = 0x18F094u;
    // 0x18f094: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x18f094u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_18f098:
    // 0x18f098: 0x14200047  bnez        $at, . + 4 + (0x47 << 2)
    ctx->pc = 0x18F098u;
    {
        const bool branch_taken_0x18f098 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x18f098) {
            ctx->pc = 0x18F1B8u;
            goto label_18f1b8;
        }
    }
    ctx->pc = 0x18F0A0u;
    // 0x18f0a0: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x18f0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x18f0a4: 0xae8000a4  sw          $zero, 0xA4($s4)
    ctx->pc = 0x18f0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 164), GPR_U32(ctx, 0));
    // 0x18f0a8: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x18f0a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18f0ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18f0acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f0b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18f0b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f0b4: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x18F0B4u;
    {
        const bool branch_taken_0x18f0b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F0B4u;
        // 0x18f0b8: 0x24846380  addiu       $a0, $a0, 0x6380 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25472));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f0b4) {
            ctx->pc = 0x18F17Cu;
            goto label_18f17c;
        }
    }
    ctx->pc = 0x18F0BCu;
    // 0x18f0bc: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x18f0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_18f0c0:
    // 0x18f0c0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x18f0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x18f0c4: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x18f0c4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x18f0c8: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x18f0c8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18f0cc: 0x4be110ec  vsub.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x18f0ccu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x18f0d0: 0x4a0002ff  vnop
    ctx->pc = 0x18f0d0u;
    // NOP operation, no action needed for VU0
    // 0x18f0d4: 0x4a0002ff  vnop
    ctx->pc = 0x18f0d4u;
    // NOP operation, no action needed for VU0
    // 0x18f0d8: 0x4a0002ff  vnop
    ctx->pc = 0x18f0d8u;
    // NOP operation, no action needed for VU0
    // 0x18f0dc: 0x4b03f959  vmuly.x     $vf5, $vf31, $vf3y
    ctx->pc = 0x18f0dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x18f0e0: 0x4b03f99a  vmulz.x     $vf6, $vf31, $vf3z
    ctx->pc = 0x18f0e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x18f0e4: 0x4a0002ff  vnop
    ctx->pc = 0x18f0e4u;
    // NOP operation, no action needed for VU0
    // 0x18f0e8: 0x4b0319bc  vmulax.x    $ACC, $vf3, $vf3x
    ctx->pc = 0x18f0e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x18f0ec: 0x4b0328bd  vmadday.x   $ACC, $vf5, $vf3y
    ctx->pc = 0x18f0ecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x18f0f0: 0x4b03310a  vmaddz.x    $vf4, $vf6, $vf3z
    ctx->pc = 0x18f0f0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x18f0f4: 0x4a0002ff  vnop
    ctx->pc = 0x18f0f4u;
    // NOP operation, no action needed for VU0
    // 0x18f0f8: 0x4a0002ff  vnop
    ctx->pc = 0x18f0f8u;
    // NOP operation, no action needed for VU0
    // 0x18f0fc: 0x4a0002ff  vnop
    ctx->pc = 0x18f0fcu;
    // NOP operation, no action needed for VU0
    // 0x18f100: 0x4a0403bd  .word       0x4A0403BD                   # vsqrt       $Q, $vf4x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x18f100u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x18f104: 0x4a0003bf  vwaitq
    ctx->pc = 0x18f104u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x18f108: 0x4849b000  cfc2.ni     $t1, $vi22
    ctx->pc = 0x18f108u;
    { uint32_t bits; std::memcpy(&bits, &ctx->vu0_q, sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x18f10c: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x18f10cu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18f110: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x18f110u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x18f114: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x18f114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x18f118: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x18f118u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18f11c: 0x4be110ec  vsub.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x18f11cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x18f120: 0x4a0002ff  vnop
    ctx->pc = 0x18f120u;
    // NOP operation, no action needed for VU0
    // 0x18f124: 0x4a0002ff  vnop
    ctx->pc = 0x18f124u;
    // NOP operation, no action needed for VU0
    // 0x18f128: 0x4a0002ff  vnop
    ctx->pc = 0x18f128u;
    // NOP operation, no action needed for VU0
    // 0x18f12c: 0x4b03f959  vmuly.x     $vf5, $vf31, $vf3y
    ctx->pc = 0x18f12cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x18f130: 0x4b03f99a  vmulz.x     $vf6, $vf31, $vf3z
    ctx->pc = 0x18f130u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x18f134: 0x4a0002ff  vnop
    ctx->pc = 0x18f134u;
    // NOP operation, no action needed for VU0
    // 0x18f138: 0x4b0319bc  vmulax.x    $ACC, $vf3, $vf3x
    ctx->pc = 0x18f138u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x18f13c: 0x4b0328bd  vmadday.x   $ACC, $vf5, $vf3y
    ctx->pc = 0x18f13cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x18f140: 0x4b03310a  vmaddz.x    $vf4, $vf6, $vf3z
    ctx->pc = 0x18f140u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x18f144: 0x4a0002ff  vnop
    ctx->pc = 0x18f144u;
    // NOP operation, no action needed for VU0
    // 0x18f148: 0x4a0002ff  vnop
    ctx->pc = 0x18f148u;
    // NOP operation, no action needed for VU0
    // 0x18f14c: 0x4a0002ff  vnop
    ctx->pc = 0x18f14cu;
    // NOP operation, no action needed for VU0
    // 0x18f150: 0x4a0403bd  .word       0x4A0403BD                   # vsqrt       $Q, $vf4x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x18f150u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x18f154: 0x4a0003bf  vwaitq
    ctx->pc = 0x18f154u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x18f158: 0x4849b000  cfc2.ni     $t1, $vi22
    ctx->pc = 0x18f158u;
    { uint32_t bits; std::memcpy(&bits, &ctx->vu0_q, sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x18f15c: 0x44890800  mtc1        $t1, $f1
    ctx->pc = 0x18f15cu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18f160: 0x0  nop
    ctx->pc = 0x18f160u;
    // NOP
    // 0x18f164: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x18f164u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18f168: 0x0  nop
    ctx->pc = 0x18f168u;
    // NOP
    // 0x18f16c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x18F16Cu;
    {
        const bool branch_taken_0x18f16c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x18f16c) {
            ctx->pc = 0x18F178u;
            goto label_18f178;
        }
    }
    ctx->pc = 0x18F174u;
    // 0x18f174: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x18f174u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_18f178:
    // 0x18f178: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x18f178u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_18f17c:
    // 0x18f17c: 0x0  nop
    ctx->pc = 0x18f17cu;
    // NOP
    // 0x18f180: 0xc2182a  slt         $v1, $a2, $v0
    ctx->pc = 0x18f180u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x18f184: 0x1460ffce  bnez        $v1, . + 4 + (-0x32 << 2)
    ctx->pc = 0x18F184u;
    {
        const bool branch_taken_0x18f184 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18F188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F184u;
        // 0x18f188: 0x51900  sll         $v1, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f184) {
            ctx->pc = 0x18F0C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18f0c0;
        }
    }
    ctx->pc = 0x18F18Cu;
    // 0x18f18c: 0xaf858824  sw          $a1, -0x77DC($gp)
    ctx->pc = 0x18f18cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936612), GPR_U32(ctx, 5));
    // 0x18f190: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x18f190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
    // 0x18f194: 0x8f838824  lw          $v1, -0x77DC($gp)
    ctx->pc = 0x18f194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936612)));
    // 0x18f198: 0x244262e0  addiu       $v0, $v0, 0x62E0
    ctx->pc = 0x18f198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25312));
    // 0x18f19c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x18f19cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x18f1a0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x18f1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x18f1a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18f1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18f1a8: 0xc066e26  jal         func_19B898
    ctx->pc = 0x18F1A8u;
    SET_GPR_U32(ctx, 31, 0x18F1B0u);
    ctx->pc = 0x18F1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F1A8u;
    // 0x18f1ac: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x18F1A8u, 0x18F1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F1B0u;
label_18f1b0:
    // 0x18f1b0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x18F1B0u;
    {
        const bool branch_taken_0x18f1b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18f1b0) {
            ctx->pc = 0x18F1D4u;
            return;
        }
    }
    ctx->pc = 0x18F1B8u;
label_18f1b8:
    // 0x18f1b8: 0x16200006  bnez        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x18F1B8u;
    {
        const bool branch_taken_0x18f1b8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x18F1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F1B8u;
        // 0x18f1bc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f1b8) {
            ctx->pc = 0x18F1D4u;
            return;
        }
    }
    ctx->pc = 0x18F1C0u;
    // 0x18f1c0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18F1C0u;
    {
        const bool branch_taken_0x18f1c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18f1c0) {
            ctx->pc = 0x18F1D0u;
            goto label_18f1d0;
        }
    }
    ctx->pc = 0x18F1C8u;
    // 0x18f1c8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18F1C8u;
    {
        const bool branch_taken_0x18f1c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F1C8u;
        // 0x18f1cc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f1c8) {
            ctx->pc = 0x18F1D4u;
            return;
        }
    }
    ctx->pc = 0x18F1D0u;
label_18f1d0:
    // 0x18f1d0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x18f1d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x18f1d4u;
}
