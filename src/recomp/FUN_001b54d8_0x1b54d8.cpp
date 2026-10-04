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

// Function: FUN_001b54d8
// Address: 0x1b54d8 - 0x1b5544
void FUN_001b54d8_0x1b54d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b54d8_0x1b54d8");
#endif

    ctx->pc = 0x1b54d8u;

    // 0x1b54d8: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x1b54d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1b54dc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1b54dcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1b54e0: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x1b54e0u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x1b54e4: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x1b54e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1b54e8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1b54e8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1b54ec: 0x620019  multu       $v1, $v0
    ctx->pc = 0x1b54ecu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 3) * (uint64_t)GPR_U32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1b54f0: 0x3012  mflo        $a2
    ctx->pc = 0x1b54f0u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x1b54f4: 0x4010  mfhi        $t0
    ctx->pc = 0x1b54f4u;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x1b54f8: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x1b54f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x1b54fc: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1b54fcu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1b5500: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x1b5500u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1b5504: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1b5504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b5508: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x1b5508u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1b550c: 0x70822018  mult1       $a0, $a0, $v0
    ctx->pc = 0x1b550cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1b5510: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x1b5510u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x1b5514: 0x1254824  and         $t1, $t1, $a1
    ctx->pc = 0x1b5514u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 5));
    // 0x1b5518: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x1b5518u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x1b551c: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x1b551cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x1b5520: 0x1264825  or          $t1, $t1, $a2
    ctx->pc = 0x1b5520u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 6));
    // 0x1b5524: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x1b5524u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x1b5528: 0x1274824  and         $t1, $t1, $a3
    ctx->pc = 0x1b5528u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 7));
    // 0x1b552c: 0x1284825  or          $t1, $t1, $t0
    ctx->pc = 0x1b552cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 8));
    // 0x1b5530: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1b5530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1b5534: 0x9103f  dsra32      $v0, $t1, 0
    ctx->pc = 0x1b5534u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 9) >> (32 + 0));
    // 0x1b5538: 0x1273824  and         $a3, $t1, $a3
    ctx->pc = 0x1b5538u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) & GPR_U64(ctx, 7));
    // 0x1b553c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b553cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b5540: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b5540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    ctx->pc = 0x1b5544u;
}
