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

// Function: entry_00191bb4
// Address: 0x191bb4 - 0x191c40
void entry_00191bb4_0x191bb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00191bb4_0x191bb4");
#endif

    switch (ctx->pc) {
        case 0x191bc0u: goto label_191bc0;
        default: break;
    }

    ctx->pc = 0x191bb4u;

    // 0x191bb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x191bb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191bb8: 0xc066e26  jal         func_19B898
    ctx->pc = 0x191BB8u;
    SET_GPR_U32(ctx, 31, 0x191BC0u);
    ctx->pc = 0x191BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191BB8u;
    // 0x191bbc: 0x26250070  addiu       $a1, $s1, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x191BB8u, 0x191BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191BC0u;
label_191bc0:
    // 0x191bc0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x191bc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x191bc4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x191bc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x191bc8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x191bc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x191bcc: 0x3e00008  jr          $ra
    ctx->pc = 0x191BCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x191BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191BCCu;
        // 0x191bd0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191BCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x191BD4u;
    // 0x191bd4: 0x0  nop
    ctx->pc = 0x191bd4u;
    // NOP
    // 0x191bd8: 0x0  nop
    ctx->pc = 0x191bd8u;
    // NOP
    // 0x191bdc: 0x0  nop
    ctx->pc = 0x191bdcu;
    // NOP
    // 0x191be0: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x191be0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x191be4: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x191be4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x191be8: 0x4be110ec  vsub.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x191be8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x191bec: 0x4a0002ff  vnop
    ctx->pc = 0x191becu;
    // NOP operation, no action needed for VU0
    // 0x191bf0: 0x4a0002ff  vnop
    ctx->pc = 0x191bf0u;
    // NOP operation, no action needed for VU0
    // 0x191bf4: 0x4a0002ff  vnop
    ctx->pc = 0x191bf4u;
    // NOP operation, no action needed for VU0
    // 0x191bf8: 0x4b03f959  vmuly.x     $vf5, $vf31, $vf3y
    ctx->pc = 0x191bf8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x191bfc: 0x4b03f99a  vmulz.x     $vf6, $vf31, $vf3z
    ctx->pc = 0x191bfcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x191c00: 0x4a0002ff  vnop
    ctx->pc = 0x191c00u;
    // NOP operation, no action needed for VU0
    // 0x191c04: 0x4b0319bc  vmulax.x    $ACC, $vf3, $vf3x
    ctx->pc = 0x191c04u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x191c08: 0x4b0328bd  vmadday.x   $ACC, $vf5, $vf3y
    ctx->pc = 0x191c08u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x191c0c: 0x4b03310a  vmaddz.x    $vf4, $vf6, $vf3z
    ctx->pc = 0x191c0cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x191c10: 0x4a0002ff  vnop
    ctx->pc = 0x191c10u;
    // NOP operation, no action needed for VU0
    // 0x191c14: 0x4a0002ff  vnop
    ctx->pc = 0x191c14u;
    // NOP operation, no action needed for VU0
    // 0x191c18: 0x4a0002ff  vnop
    ctx->pc = 0x191c18u;
    // NOP operation, no action needed for VU0
    // 0x191c1c: 0x4a0403bd  .word       0x4A0403BD                   # vsqrt       $Q, $vf4x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x191c1cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x191c20: 0x4a0003bf  vwaitq
    ctx->pc = 0x191c20u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x191c24: 0x4849b000  cfc2.ni     $t1, $vi22
    ctx->pc = 0x191c24u;
    { uint32_t bits; std::memcpy(&bits, &ctx->vu0_q, sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x191c28: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x191c28u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x191c2c: 0x3e00008  jr          $ra
    ctx->pc = 0x191C2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191C2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x191C34u;
    // 0x191c34: 0x0  nop
    ctx->pc = 0x191c34u;
    // NOP
    // 0x191c38: 0x0  nop
    ctx->pc = 0x191c38u;
    // NOP
    // 0x191c3c: 0x0  nop
    ctx->pc = 0x191c3cu;
    // NOP
    ctx->pc = 0x191c40u;
}
