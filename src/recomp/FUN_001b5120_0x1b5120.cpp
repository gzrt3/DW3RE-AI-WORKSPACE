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

// Function: FUN_001b5120
// Address: 0x1b5120 - 0x1b5140
void FUN_001b5120_0x1b5120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b5120_0x1b5120");
#endif

    ctx->pc = 0x1b5120u;

    // 0x1b5120: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b5120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b5124: 0x46006006  mov.s       $f0, $f12
    ctx->pc = 0x1b5124u;
    ctx->f[0] = FPU_MOV_S(ctx->f[12]);
    // 0x1b5128: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1b5128u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1b512c: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x1b512cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x1b5130: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1b5130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b5134: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b5134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1b5138: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1b5138u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1b513c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b513cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    ctx->pc = 0x1b5140u;
}
