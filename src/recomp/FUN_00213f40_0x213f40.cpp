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

// Function: FUN_00213f40
// Address: 0x213f40 - 0x213fa0
void FUN_00213f40_0x213f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00213f40_0x213f40");
#endif

    ctx->pc = 0x213f40u;

    // 0x213f40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x213f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x213f44: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x213f44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213f48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x213f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x213f4c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x213f4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x213f50: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x213f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x213f54: 0x3c034420  lui         $v1, 0x4420
    ctx->pc = 0x213f54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17440 << 16));
    // 0x213f58: 0x24060029  addiu       $a2, $zero, 0x29
    ctx->pc = 0x213f58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x213f5c: 0x44833000  mtc1        $v1, $f6
    ctx->pc = 0x213f5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x213f60: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x213f60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x213f64: 0x3c0c437f  lui         $t4, 0x437F
    ctx->pc = 0x213f64u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)17279 << 16));
    // 0x213f68: 0x3c0b4300  lui         $t3, 0x4300
    ctx->pc = 0x213f68u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)17152 << 16));
    // 0x213f6c: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x213f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
    // 0x213f70: 0x44832800  mtc1        $v1, $f5
    ctx->pc = 0x213f70u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x213f74: 0x3c0343a0  lui         $v1, 0x43A0
    ctx->pc = 0x213f74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17312 << 16));
    // 0x213f78: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x213f78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x213f7c: 0x3c0363e7  lui         $v1, 0x63E7
    ctx->pc = 0x213f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)25575 << 16));
    // 0x213f80: 0x3465063f  ori         $a1, $v1, 0x63F
    ctx->pc = 0x213f80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1599);
    // 0x213f84: 0x3c0343e0  lui         $v1, 0x43E0
    ctx->pc = 0x213f84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17376 << 16));
    // 0x213f88: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x213f88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x213f8c: 0x3c0341e0  lui         $v1, 0x41E0
    ctx->pc = 0x213f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16864 << 16));
    // 0x213f90: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x213f90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x213f94: 0x3c034360  lui         $v1, 0x4360
    ctx->pc = 0x213f94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17248 << 16));
    // 0x213f98: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x213f98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x213f9c: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x213f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    ctx->pc = 0x213fa0u;
}
