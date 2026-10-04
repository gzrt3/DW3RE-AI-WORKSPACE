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

// Function: entry_001d4a00
// Address: 0x1d4a00 - 0x1d4b64
void entry_001d4a00_0x1d4a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4a00_0x1d4a00");
#endif

    switch (ctx->pc) {
        case 0x1d4b44u: goto label_1d4b44;
        default: break;
    }

    ctx->pc = 0x1d4a00u;

    // 0x1d4a00: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x1d4a00u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1d4a04: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x1D4A04u;
    {
        const bool branch_taken_0x1d4a04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d4a04) {
            ctx->pc = 0x1D49E0u;
            return;
        }
    }
    ctx->pc = 0x1D4A0Cu;
    // 0x1d4a0c: 0x8f888590  lw          $t0, -0x7A70($gp)
    ctx->pc = 0x1d4a0cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x1d4a10: 0x31030400  andi        $v1, $t0, 0x400
    ctx->pc = 0x1d4a10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1024);
    // 0x1d4a14: 0x10600094  beqz        $v1, . + 4 + (0x94 << 2)
    ctx->pc = 0x1D4A14u;
    {
        const bool branch_taken_0x1d4a14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4A14u;
        // 0x1d4a18: 0x3c01004b  lui         $at, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4a14) {
            ctx->pc = 0x1D4C68u;
            return;
        }
    }
    ctx->pc = 0x1D4A1Cu;
    // 0x1d4a1c: 0x240700ad  addiu       $a3, $zero, 0xAD
    ctx->pc = 0x1d4a1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 173));
    // 0x1d4a20: 0x8c2403c4  lw          $a0, 0x3C4($at)
    ctx->pc = 0x1d4a20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 964)));
    // 0x1d4a24: 0x8483003c  lh          $v1, 0x3C($a0)
    ctx->pc = 0x1d4a24u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x1d4a28: 0x1067008f  beq         $v1, $a3, . + 4 + (0x8F << 2)
    ctx->pc = 0x1D4A28u;
    {
        const bool branch_taken_0x1d4a28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        ctx->pc = 0x1D4A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4A28u;
        // 0x1d4a2c: 0x240600a9  addiu       $a2, $zero, 0xA9 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 169));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4a28) {
            ctx->pc = 0x1D4C68u;
            return;
        }
    }
    ctx->pc = 0x1D4A30u;
    // 0x1d4a30: 0x1066008d  beq         $v1, $a2, . + 4 + (0x8D << 2)
    ctx->pc = 0x1D4A30u;
    {
        const bool branch_taken_0x1d4a30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x1D4A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4A30u;
        // 0x1d4a34: 0x3c01004b  lui         $at, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4a30) {
            ctx->pc = 0x1D4C68u;
            return;
        }
    }
    ctx->pc = 0x1D4A38u;
    // 0x1d4a38: 0x8c230434  lw          $v1, 0x434($at)
    ctx->pc = 0x1d4a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 1076)));
    // 0x1d4a3c: 0x8465003c  lh          $a1, 0x3C($v1)
    ctx->pc = 0x1d4a3cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x1d4a40: 0x10a70089  beq         $a1, $a3, . + 4 + (0x89 << 2)
    ctx->pc = 0x1D4A40u;
    {
        const bool branch_taken_0x1d4a40 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 7));
        if (branch_taken_0x1d4a40) {
            ctx->pc = 0x1D4C68u;
            return;
        }
    }
    ctx->pc = 0x1D4A48u;
    // 0x1d4a48: 0x10a60087  beq         $a1, $a2, . + 4 + (0x87 << 2)
    ctx->pc = 0x1D4A48u;
    {
        const bool branch_taken_0x1d4a48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        if (branch_taken_0x1d4a48) {
            ctx->pc = 0x1D4C68u;
            return;
        }
    }
    ctx->pc = 0x1D4A50u;
    // 0x1d4a50: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x1d4a50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x1d4a54: 0x34a51800  ori         $a1, $a1, 0x1800
    ctx->pc = 0x1d4a54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)6144);
    // 0x1d4a58: 0x1052824  and         $a1, $t0, $a1
    ctx->pc = 0x1d4a58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) & GPR_U64(ctx, 5));
    // 0x1d4a5c: 0x14a00082  bnez        $a1, . + 4 + (0x82 << 2)
    ctx->pc = 0x1D4A5Cu;
    {
        const bool branch_taken_0x1d4a5c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4A5Cu;
        // 0x1d4a60: 0x3c01004b  lui         $at, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4a5c) {
            ctx->pc = 0x1D4C68u;
            return;
        }
    }
    ctx->pc = 0x1D4A64u;
    // 0x1d4a64: 0x8c2803c0  lw          $t0, 0x3C0($at)
    ctx->pc = 0x1d4a64u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 960)));
    // 0x1d4a68: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1d4a68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
    // 0x1d4a6c: 0x91060234  lbu         $a2, 0x234($t0)
    ctx->pc = 0x1d4a6cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 564)));
    // 0x1d4a70: 0x8c270430  lw          $a3, 0x430($at)
    ctx->pc = 0x1d4a70u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x4B0430u));
    // 0x1d4a74: 0x90e50234  lbu         $a1, 0x234($a3)
    ctx->pc = 0x1d4a74u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 564)));
    // 0x1d4a78: 0x14c5007b  bne         $a2, $a1, . + 4 + (0x7B << 2)
    ctx->pc = 0x1D4A78u;
    {
        const bool branch_taken_0x1d4a78 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        if (branch_taken_0x1d4a78) {
            ctx->pc = 0x1D4C68u;
            return;
        }
    }
    ctx->pc = 0x1D4A80u;
    // 0x1d4a80: 0x8d050024  lw          $a1, 0x24($t0)
    ctx->pc = 0x1d4a80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 36)));
    // 0x1d4a84: 0x3c060800  lui         $a2, 0x800
    ctx->pc = 0x1d4a84u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2048 << 16));
    // 0x1d4a88: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1d4a88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d4a8c: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x1d4a8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x1d4a90: 0x14a00034  bnez        $a1, . + 4 + (0x34 << 2)
    ctx->pc = 0x1D4A90u;
    {
        const bool branch_taken_0x1d4a90 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4A90u;
        // 0x1d4a94: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4a90) {
            ctx->pc = 0x1D4B64u;
            return;
        }
    }
    ctx->pc = 0x1D4A98u;
    // 0x1d4a98: 0x8ce50024  lw          $a1, 0x24($a3)
    ctx->pc = 0x1d4a98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x1d4a9c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1d4a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d4aa0: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x1d4aa0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x1d4aa4: 0x14a0002f  bnez        $a1, . + 4 + (0x2F << 2)
    ctx->pc = 0x1D4AA4u;
    {
        const bool branch_taken_0x1d4aa4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d4aa4) {
            ctx->pc = 0x1D4B64u;
            return;
        }
    }
    ctx->pc = 0x1D4AACu;
    // 0x1d4aac: 0x85060222  lh          $a2, 0x222($t0)
    ctx->pc = 0x1d4aacu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 546)));
    // 0x1d4ab0: 0x85050252  lh          $a1, 0x252($t0)
    ctx->pc = 0x1d4ab0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 594)));
    // 0x1d4ab4: 0x14c5002b  bne         $a2, $a1, . + 4 + (0x2B << 2)
    ctx->pc = 0x1D4AB4u;
    {
        const bool branch_taken_0x1d4ab4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        if (branch_taken_0x1d4ab4) {
            ctx->pc = 0x1D4B64u;
            return;
        }
    }
    ctx->pc = 0x1D4ABCu;
    // 0x1d4abc: 0x84e60222  lh          $a2, 0x222($a3)
    ctx->pc = 0x1d4abcu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 546)));
    // 0x1d4ac0: 0x84e50252  lh          $a1, 0x252($a3)
    ctx->pc = 0x1d4ac0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 594)));
    // 0x1d4ac4: 0x14c50027  bne         $a2, $a1, . + 4 + (0x27 << 2)
    ctx->pc = 0x1D4AC4u;
    {
        const bool branch_taken_0x1d4ac4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        ctx->pc = 0x1D4AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4AC4u;
        // 0x1d4ac8: 0x24660150  addiu       $a2, $v1, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4ac4) {
            ctx->pc = 0x1D4B64u;
            return;
        }
    }
    ctx->pc = 0x1D4ACCu;
    // 0x1d4acc: 0x24850150  addiu       $a1, $a0, 0x150
    ctx->pc = 0x1d4accu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 336));
    // 0x1d4ad0: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x1d4ad0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d4ad4: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x1d4ad4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1d4ad8: 0x4be110ec  vsub.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x1d4ad8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1d4adc: 0x4a0002ff  vnop
    ctx->pc = 0x1d4adcu;
    // NOP operation, no action needed for VU0
    // 0x1d4ae0: 0x4a0002ff  vnop
    ctx->pc = 0x1d4ae0u;
    // NOP operation, no action needed for VU0
    // 0x1d4ae4: 0x4a0002ff  vnop
    ctx->pc = 0x1d4ae4u;
    // NOP operation, no action needed for VU0
    // 0x1d4ae8: 0x4b03f99a  vmulz.x     $vf6, $vf31, $vf3z
    ctx->pc = 0x1d4ae8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1d4aec: 0x4a0002ff  vnop
    ctx->pc = 0x1d4aecu;
    // NOP operation, no action needed for VU0
    // 0x1d4af0: 0x4a0002ff  vnop
    ctx->pc = 0x1d4af0u;
    // NOP operation, no action needed for VU0
    // 0x1d4af4: 0x4b0319bc  vmulax.x    $ACC, $vf3, $vf3x
    ctx->pc = 0x1d4af4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x1d4af8: 0x4b03310a  vmaddz.x    $vf4, $vf6, $vf3z
    ctx->pc = 0x1d4af8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1d4afc: 0x4a0002ff  vnop
    ctx->pc = 0x1d4afcu;
    // NOP operation, no action needed for VU0
    // 0x1d4b00: 0x4a0002ff  vnop
    ctx->pc = 0x1d4b00u;
    // NOP operation, no action needed for VU0
    // 0x1d4b04: 0x4a0002ff  vnop
    ctx->pc = 0x1d4b04u;
    // NOP operation, no action needed for VU0
    // 0x1d4b08: 0x4a0403bd  .word       0x4A0403BD                   # vsqrt       $Q, $vf4x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x1d4b08u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x1d4b0c: 0x4a0003bf  vwaitq
    ctx->pc = 0x1d4b0cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1d4b10: 0x4849b000  cfc2.ni     $t1, $vi22
    ctx->pc = 0x1d4b10u;
    { uint32_t bits; std::memcpy(&bits, &ctx->vu0_q, sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x1d4b14: 0x44890800  mtc1        $t1, $f1
    ctx->pc = 0x1d4b14u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d4b18: 0x3c054396  lui         $a1, 0x4396
    ctx->pc = 0x1d4b18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17302 << 16));
    // 0x1d4b1c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1d4b1cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d4b20: 0x0  nop
    ctx->pc = 0x1d4b20u;
    // NOP
    // 0x1d4b24: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d4b24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d4b28: 0x0  nop
    ctx->pc = 0x1d4b28u;
    // NOP
    // 0x1d4b2c: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x1D4B2Cu;
    {
        const bool branch_taken_0x1d4b2c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d4b2c) {
            ctx->pc = 0x1D4B64u;
            return;
        }
    }
    ctx->pc = 0x1D4B34u;
    // 0x1d4b34: 0xc4810180  lwc1        $f1, 0x180($a0)
    ctx->pc = 0x1d4b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d4b38: 0xc4600180  lwc1        $f0, 0x180($v1)
    ctx->pc = 0x1d4b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d4b3c: 0xc06d448  jal         func_1B5120
    ctx->pc = 0x1D4B3Cu;
    SET_GPR_U32(ctx, 31, 0x1D4B44u);
    ctx->pc = 0x1D4B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4B3Cu;
    // 0x1d4b40: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5120u, 0x1D4B3Cu, 0x1D4B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4B44u;
label_1d4b44:
    // 0x1d4b44: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x1d4b44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x1d4b48: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1d4b48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d4b4c: 0x0  nop
    ctx->pc = 0x1d4b4cu;
    // NOP
    // 0x1d4b50: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1d4b50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d4b54: 0x0  nop
    ctx->pc = 0x1d4b54u;
    // NOP
    // 0x1d4b58: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1D4B58u;
    {
        const bool branch_taken_0x1d4b58 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d4b58) {
            ctx->pc = 0x1D4B64u;
            return;
        }
    }
    ctx->pc = 0x1D4B60u;
    // 0x1d4b60: 0x34108000  ori         $s0, $zero, 0x8000
    ctx->pc = 0x1d4b60u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->pc = 0x1d4b64u;
}
