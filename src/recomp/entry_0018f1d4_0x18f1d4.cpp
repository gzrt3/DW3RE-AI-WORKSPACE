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

// Function: entry_0018f1d4
// Address: 0x18f1d4 - 0x18f258
void entry_0018f1d4_0x18f1d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018f1d4_0x18f1d4");
#endif

    switch (ctx->pc) {
        case 0x18f254u: goto label_18f254;
        default: break;
    }

    ctx->pc = 0x18f1d4u;

    // 0x18f1d4: 0x4600bd06  mov.s       $f20, $f23
    ctx->pc = 0x18f1d4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[23]);
    // 0x18f1d8: 0x1200001f  beqz        $s0, . + 4 + (0x1F << 2)
    ctx->pc = 0x18F1D8u;
    {
        const bool branch_taken_0x18f1d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F1D8u;
        // 0x18f1dc: 0x3c0242a0  lui         $v0, 0x42A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f1d8) {
            ctx->pc = 0x18F258u;
            return;
        }
    }
    ctx->pc = 0x18F1E0u;
    // 0x18f1e0: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x18f1e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x18f1e4: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x18f1e4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x18f1e8: 0xda620000  lqc2        $vf2, 0x0($s3)
    ctx->pc = 0x18f1e8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x18f1ec: 0x4be110ec  vsub.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x18f1ecu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x18f1f0: 0x4a0002ff  vnop
    ctx->pc = 0x18f1f0u;
    // NOP operation, no action needed for VU0
    // 0x18f1f4: 0x4a0002ff  vnop
    ctx->pc = 0x18f1f4u;
    // NOP operation, no action needed for VU0
    // 0x18f1f8: 0x4a0002ff  vnop
    ctx->pc = 0x18f1f8u;
    // NOP operation, no action needed for VU0
    // 0x18f1fc: 0x4b03f99a  vmulz.x     $vf6, $vf31, $vf3z
    ctx->pc = 0x18f1fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x18f200: 0x4a0002ff  vnop
    ctx->pc = 0x18f200u;
    // NOP operation, no action needed for VU0
    // 0x18f204: 0x4a0002ff  vnop
    ctx->pc = 0x18f204u;
    // NOP operation, no action needed for VU0
    // 0x18f208: 0x4b0319bc  vmulax.x    $ACC, $vf3, $vf3x
    ctx->pc = 0x18f208u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x18f20c: 0x4b03310a  vmaddz.x    $vf4, $vf6, $vf3z
    ctx->pc = 0x18f20cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x18f210: 0x4a0002ff  vnop
    ctx->pc = 0x18f210u;
    // NOP operation, no action needed for VU0
    // 0x18f214: 0x4a0002ff  vnop
    ctx->pc = 0x18f214u;
    // NOP operation, no action needed for VU0
    // 0x18f218: 0x4a0002ff  vnop
    ctx->pc = 0x18f218u;
    // NOP operation, no action needed for VU0
    // 0x18f21c: 0x4a0403bd  .word       0x4A0403BD                   # vsqrt       $Q, $vf4x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x18f21cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x18f220: 0x4a0003bf  vwaitq
    ctx->pc = 0x18f220u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x18f224: 0x4849b000  cfc2.ni     $t1, $vi22
    ctx->pc = 0x18f224u;
    { uint32_t bits; std::memcpy(&bits, &ctx->vu0_q, sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x18f228: 0x4489a000  mtc1        $t1, $f20
    ctx->pc = 0x18f228u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x18f22c: 0x3c02c316  lui         $v0, 0xC316
    ctx->pc = 0x18f22cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49942 << 16));
    // 0x18f230: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x18f230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18f234: 0x26840030  addiu       $a0, $s4, 0x30
    ctx->pc = 0x18f234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    // 0x18f238: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x18f238u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x18f23c: 0xaf828820  sw          $v0, -0x77E0($gp)
    ctx->pc = 0x18f23cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936608), GPR_U32(ctx, 2));
    // 0x18f240: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x18f240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18f244: 0xc7808820  lwc1        $f0, -0x77E0($gp)
    ctx->pc = 0x18f244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18f248: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18f248u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18f24c: 0xc066e26  jal         func_19B898
    ctx->pc = 0x18F24Cu;
    SET_GPR_U32(ctx, 31, 0x18F254u);
    ctx->pc = 0x18F250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F24Cu;
    // 0x18f250: 0xe7a00084  swc1        $f0, 0x84($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x18F24Cu, 0x18F254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F254u;
label_18f254:
    // 0x18f254: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x18f254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    ctx->pc = 0x18f258u;
}
