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

// Function: entry_001d4c68
// Address: 0x1d4c68 - 0x1d4dc4
void entry_001d4c68_0x1d4c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d4c68_0x1d4c68");
#endif

    switch (ctx->pc) {
        case 0x1d4da4u: goto label_1d4da4;
        default: break;
    }

    ctx->pc = 0x1d4c68u;

    // 0x1d4c68: 0x8f878590  lw          $a3, -0x7A70($gp)
    ctx->pc = 0x1d4c68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x1d4c6c: 0x30e30400  andi        $v1, $a3, 0x400
    ctx->pc = 0x1d4c6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1024);
    // 0x1d4c70: 0x1460009a  bnez        $v1, . + 4 + (0x9A << 2)
    ctx->pc = 0x1D4C70u;
    {
        const bool branch_taken_0x1d4c70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4C70u;
        // 0x1d4c74: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4c70) {
            ctx->pc = 0x1D4EDCu;
            return;
        }
    }
    ctx->pc = 0x1D4C78u;
    // 0x1d4c78: 0x90234af6  lbu         $v1, 0x4AF6($at)
    ctx->pc = 0x1d4c78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19190)));
    // 0x1d4c7c: 0x28610029  slti        $at, $v1, 0x29
    ctx->pc = 0x1d4c7cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x1d4c80: 0x10200096  beqz        $at, . + 4 + (0x96 << 2)
    ctx->pc = 0x1D4C80u;
    {
        const bool branch_taken_0x1d4c80 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4c80) {
            ctx->pc = 0x1D4EDCu;
            return;
        }
    }
    ctx->pc = 0x1D4C88u;
    // 0x1d4c88: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1d4c88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1d4c8c: 0x90234998  lbu         $v1, 0x4998($at)
    ctx->pc = 0x1d4c8cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x334998u));
    // 0x1d4c90: 0x10600073  beqz        $v1, . + 4 + (0x73 << 2)
    ctx->pc = 0x1D4C90u;
    {
        const bool branch_taken_0x1d4c90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4C90u;
        // 0x1d4c94: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4c90) {
            ctx->pc = 0x1D4E60u;
            return;
        }
    }
    ctx->pc = 0x1D4C98u;
    // 0x1d4c98: 0x8c28498c  lw          $t0, 0x498C($at)
    ctx->pc = 0x1d4c98u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18828)));
    // 0x1d4c9c: 0x11000070  beqz        $t0, . + 4 + (0x70 << 2)
    ctx->pc = 0x1D4C9Cu;
    {
        const bool branch_taken_0x1d4c9c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4c9c) {
            ctx->pc = 0x1D4E60u;
            return;
        }
    }
    ctx->pc = 0x1D4CA4u;
    // 0x1d4ca4: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1d4ca4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
    // 0x1d4ca8: 0x240500ad  addiu       $a1, $zero, 0xAD
    ctx->pc = 0x1d4ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 173));
    // 0x1d4cac: 0x8c2603c4  lw          $a2, 0x3C4($at)
    ctx->pc = 0x1d4cacu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x4B03C4u));
    // 0x1d4cb0: 0x84c3003c  lh          $v1, 0x3C($a2)
    ctx->pc = 0x1d4cb0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 60)));
    // 0x1d4cb4: 0x10650089  beq         $v1, $a1, . + 4 + (0x89 << 2)
    ctx->pc = 0x1D4CB4u;
    {
        const bool branch_taken_0x1d4cb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1D4CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4CB4u;
        // 0x1d4cb8: 0x240400a9  addiu       $a0, $zero, 0xA9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 169));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4cb4) {
            ctx->pc = 0x1D4EDCu;
            return;
        }
    }
    ctx->pc = 0x1D4CBCu;
    // 0x1d4cbc: 0x10640087  beq         $v1, $a0, . + 4 + (0x87 << 2)
    ctx->pc = 0x1D4CBCu;
    {
        const bool branch_taken_0x1d4cbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x1d4cbc) {
            ctx->pc = 0x1D4EDCu;
            return;
        }
    }
    ctx->pc = 0x1D4CC4u;
    // 0x1d4cc4: 0x8503003c  lh          $v1, 0x3C($t0)
    ctx->pc = 0x1d4cc4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 60)));
    // 0x1d4cc8: 0x10650084  beq         $v1, $a1, . + 4 + (0x84 << 2)
    ctx->pc = 0x1D4CC8u;
    {
        const bool branch_taken_0x1d4cc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x1d4cc8) {
            ctx->pc = 0x1D4EDCu;
            return;
        }
    }
    ctx->pc = 0x1D4CD0u;
    // 0x1d4cd0: 0x10640082  beq         $v1, $a0, . + 4 + (0x82 << 2)
    ctx->pc = 0x1D4CD0u;
    {
        const bool branch_taken_0x1d4cd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x1d4cd0) {
            ctx->pc = 0x1D4EDCu;
            return;
        }
    }
    ctx->pc = 0x1D4CD8u;
    // 0x1d4cd8: 0x9103023a  lbu         $v1, 0x23A($t0)
    ctx->pc = 0x1d4cd8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 570)));
    // 0x1d4cdc: 0x1460007f  bnez        $v1, . + 4 + (0x7F << 2)
    ctx->pc = 0x1D4CDCu;
    {
        const bool branch_taken_0x1d4cdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4CDCu;
        // 0x1d4ce0: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4cdc) {
            ctx->pc = 0x1D4EDCu;
            return;
        }
    }
    ctx->pc = 0x1D4CE4u;
    // 0x1d4ce4: 0x8c234948  lw          $v1, 0x4948($at)
    ctx->pc = 0x1d4ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18760)));
    // 0x1d4ce8: 0x1060007c  beqz        $v1, . + 4 + (0x7C << 2)
    ctx->pc = 0x1D4CE8u;
    {
        const bool branch_taken_0x1d4ce8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4CE8u;
        // 0x1d4cec: 0x3c030003  lui         $v1, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4ce8) {
            ctx->pc = 0x1D4EDCu;
            return;
        }
    }
    ctx->pc = 0x1D4CF0u;
    // 0x1d4cf0: 0x34631800  ori         $v1, $v1, 0x1800
    ctx->pc = 0x1d4cf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6144);
    // 0x1d4cf4: 0xe31824  and         $v1, $a3, $v1
    ctx->pc = 0x1d4cf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x1d4cf8: 0x14600078  bnez        $v1, . + 4 + (0x78 << 2)
    ctx->pc = 0x1D4CF8u;
    {
        const bool branch_taken_0x1d4cf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4CF8u;
        // 0x1d4cfc: 0x3c01004b  lui         $at, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4cf8) {
            ctx->pc = 0x1D4EDCu;
            return;
        }
    }
    ctx->pc = 0x1D4D00u;
    // 0x1d4d00: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x1d4d00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x1d4d04: 0x8c2503c0  lw          $a1, 0x3C0($at)
    ctx->pc = 0x1d4d04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 960)));
    // 0x1d4d08: 0x8ca40024  lw          $a0, 0x24($a1)
    ctx->pc = 0x1d4d08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x1d4d0c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1d4d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d4d10: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1d4d10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1d4d14: 0x1460002b  bnez        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x1D4D14u;
    {
        const bool branch_taken_0x1d4d14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4D14u;
        // 0x1d4d18: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4d14) {
            ctx->pc = 0x1D4DC4u;
            return;
        }
    }
    ctx->pc = 0x1D4D1Cu;
    // 0x1d4d1c: 0x84a40222  lh          $a0, 0x222($a1)
    ctx->pc = 0x1d4d1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 546)));
    // 0x1d4d20: 0x84a30252  lh          $v1, 0x252($a1)
    ctx->pc = 0x1d4d20u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 594)));
    // 0x1d4d24: 0x14830027  bne         $a0, $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x1D4D24u;
    {
        const bool branch_taken_0x1d4d24 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1D4D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4D24u;
        // 0x1d4d28: 0x24c40150  addiu       $a0, $a2, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4d24) {
            ctx->pc = 0x1D4DC4u;
            return;
        }
    }
    ctx->pc = 0x1D4D2Cu;
    // 0x1d4d2c: 0x25030150  addiu       $v1, $t0, 0x150
    ctx->pc = 0x1d4d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 336));
    // 0x1d4d30: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1d4d30u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d4d34: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1d4d34u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d4d38: 0x4be110ec  vsub.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x1d4d38u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1d4d3c: 0x4a0002ff  vnop
    ctx->pc = 0x1d4d3cu;
    // NOP operation, no action needed for VU0
    // 0x1d4d40: 0x4a0002ff  vnop
    ctx->pc = 0x1d4d40u;
    // NOP operation, no action needed for VU0
    // 0x1d4d44: 0x4a0002ff  vnop
    ctx->pc = 0x1d4d44u;
    // NOP operation, no action needed for VU0
    // 0x1d4d48: 0x4b03f99a  vmulz.x     $vf6, $vf31, $vf3z
    ctx->pc = 0x1d4d48u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x1d4d4c: 0x4a0002ff  vnop
    ctx->pc = 0x1d4d4cu;
    // NOP operation, no action needed for VU0
    // 0x1d4d50: 0x4a0002ff  vnop
    ctx->pc = 0x1d4d50u;
    // NOP operation, no action needed for VU0
    // 0x1d4d54: 0x4b0319bc  vmulax.x    $ACC, $vf3, $vf3x
    ctx->pc = 0x1d4d54u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x1d4d58: 0x4b03310a  vmaddz.x    $vf4, $vf6, $vf3z
    ctx->pc = 0x1d4d58u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1d4d5c: 0x4a0002ff  vnop
    ctx->pc = 0x1d4d5cu;
    // NOP operation, no action needed for VU0
    // 0x1d4d60: 0x4a0002ff  vnop
    ctx->pc = 0x1d4d60u;
    // NOP operation, no action needed for VU0
    // 0x1d4d64: 0x4a0002ff  vnop
    ctx->pc = 0x1d4d64u;
    // NOP operation, no action needed for VU0
    // 0x1d4d68: 0x4a0403bd  .word       0x4A0403BD                   # vsqrt       $Q, $vf4x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x1d4d68u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x1d4d6c: 0x4a0003bf  vwaitq
    ctx->pc = 0x1d4d6cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1d4d70: 0x4849b000  cfc2.ni     $t1, $vi22
    ctx->pc = 0x1d4d70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->vu0_q, sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x1d4d74: 0x44890800  mtc1        $t1, $f1
    ctx->pc = 0x1d4d74u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d4d78: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x1d4d78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x1d4d7c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d4d7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d4d80: 0x0  nop
    ctx->pc = 0x1d4d80u;
    // NOP
    // 0x1d4d84: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d4d84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d4d88: 0x0  nop
    ctx->pc = 0x1d4d88u;
    // NOP
    // 0x1d4d8c: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x1D4D8Cu;
    {
        const bool branch_taken_0x1d4d8c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d4d8c) {
            ctx->pc = 0x1D4DC4u;
            return;
        }
    }
    ctx->pc = 0x1D4D94u;
    // 0x1d4d94: 0xc4c10180  lwc1        $f1, 0x180($a2)
    ctx->pc = 0x1d4d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d4d98: 0xc5000180  lwc1        $f0, 0x180($t0)
    ctx->pc = 0x1d4d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d4d9c: 0xc06d448  jal         func_1B5120
    ctx->pc = 0x1D4D9Cu;
    SET_GPR_U32(ctx, 31, 0x1D4DA4u);
    ctx->pc = 0x1D4DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4D9Cu;
    // 0x1d4da0: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5120u, 0x1D4D9Cu, 0x1D4DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4DA4u;
label_1d4da4:
    // 0x1d4da4: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x1d4da4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x1d4da8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1d4da8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d4dac: 0x0  nop
    ctx->pc = 0x1d4dacu;
    // NOP
    // 0x1d4db0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1d4db0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d4db4: 0x0  nop
    ctx->pc = 0x1d4db4u;
    // NOP
    // 0x1d4db8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1D4DB8u;
    {
        const bool branch_taken_0x1d4db8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d4db8) {
            ctx->pc = 0x1D4DC4u;
            return;
        }
    }
    ctx->pc = 0x1D4DC0u;
    // 0x1d4dc0: 0x34108000  ori         $s0, $zero, 0x8000
    ctx->pc = 0x1d4dc0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->pc = 0x1d4dc4u;
}
