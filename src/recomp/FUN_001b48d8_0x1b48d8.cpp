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

// Function: FUN_001b48d8
// Address: 0x1b48d8 - 0x1b4908
void FUN_001b48d8_0x1b48d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b48d8_0x1b48d8");
#endif

    ctx->pc = 0x1b48d8u;

    // 0x1b48d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b48d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b48dc: 0x46006006  mov.s       $f0, $f12
    ctx->pc = 0x1b48dcu;
    ctx->f[0] = FPU_MOV_S(ctx->f[12]);
    // 0x1b48e0: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1b48e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1b48e4: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x1b48e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x1b48e8: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x1b48e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b48ec: 0x46006024  .word       0x46006024                   # cvt.w.s     $f0, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1b48ecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1b48f0: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x1b48f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x1b48f4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1b48f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1b48f8: 0x3c0231ff  lui         $v0, 0x31FF
    ctx->pc = 0x1b48f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12799 << 16));
    // 0x1b48fc: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x1b48fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x1b4900: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b4900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1b4904: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1b4904u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    ctx->pc = 0x1b4908u;
}
