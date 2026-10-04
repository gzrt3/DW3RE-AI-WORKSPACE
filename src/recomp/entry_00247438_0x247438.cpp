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

// Function: entry_00247438
// Address: 0x247438 - 0x247478
void entry_00247438_0x247438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00247438_0x247438");
#endif

    ctx->pc = 0x247438u;

    // 0x247438: 0x1021821  addu        $v1, $t0, $v0
    ctx->pc = 0x247438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x24743c: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x24743cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x247440: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x247440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x247444: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x247444u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x247448: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x247448u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x24744c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x24744cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x247450: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x247450u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x247454: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x247454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x247458: 0x0  nop
    ctx->pc = 0x247458u;
    // NOP
    // 0x24745c: 0xd9410000  lqc2        $vf1, 0x0($t2)
    ctx->pc = 0x24745cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x247460: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x247460u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x247464: 0x48a31800  qmtc2.ni    $v1, $vf3
    ctx->pc = 0x247464u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x247468: 0x4bc102bc  vadda.xyz   $ACC, $vf1, $vf0
    ctx->pc = 0x247468u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[1]); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x24746c: 0x4bc31048  vmaddx.xyz  $vf1, $vf2, $vf3x
    ctx->pc = 0x24746cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x247470: 0xf9410000  sqc2        $vf1, 0x0($t2)
    ctx->pc = 0x247470u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x247474: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x247474u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    ctx->pc = 0x247478u;
}
