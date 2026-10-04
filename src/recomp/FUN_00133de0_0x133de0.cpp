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

// Function: FUN_00133de0
// Address: 0x133de0 - 0x133e58
void FUN_00133de0_0x133de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00133de0_0x133de0");
#endif

    ctx->pc = 0x133de0u;

    // 0x133de0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x133de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x133de4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x133de4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x133de8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x133de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x133dec: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x133decu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x133df0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x133df0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x133df4: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x133df4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x133df8: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x133df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x133dfc: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x133dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x133e00: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x133e00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x133e04: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x133e04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x133e08: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x133e08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x133e0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x133e0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x133e10: 0x0  nop
    ctx->pc = 0x133e10u;
    // NOP
    // 0x133e14: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x133e14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x133e18: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x133e18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x133e1c: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x133e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x133e20: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x133e20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x133e24: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x133e24u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x133e28: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x133e28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x133e2c: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x133e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x133e30: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x133e30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x133e34: 0xafa5002c  sw          $a1, 0x2C($sp)
    ctx->pc = 0x133e34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 5));
    // 0x133e38: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x133e38u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x133e3c: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x133e3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x133e40: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x133e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x133e44: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x133e44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x133e48: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x133e48u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x133e4c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x133e4cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x133e50: 0x0  nop
    ctx->pc = 0x133e50u;
    // NOP
    // 0x133e54: 0x46001502  mul.s       $f20, $f2, $f0
    ctx->pc = 0x133e54u;
    ctx->f[20] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    ctx->pc = 0x133e58u;
}
