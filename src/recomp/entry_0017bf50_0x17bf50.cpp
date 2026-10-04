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

// Function: entry_0017bf50
// Address: 0x17bf50 - 0x17bf78
void entry_0017bf50_0x17bf50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017bf50_0x17bf50");
#endif

    ctx->pc = 0x17bf50u;

    // 0x17bf50: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x17bf50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17bf54: 0x3c034416  lui         $v1, 0x4416
    ctx->pc = 0x17bf54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17430 << 16));
    // 0x17bf58: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x17bf58u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x17bf5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17bf5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17bf60: 0x8f848450  lw          $a0, -0x7BB0($gp)
    ctx->pc = 0x17bf60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935632)));
    // 0x17bf64: 0x3c03c040  lui         $v1, 0xC040
    ctx->pc = 0x17bf64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49216 << 16));
    // 0x17bf68: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x17bf68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17bf6c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x17bf6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x17bf70: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x17bf70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x17bf74: 0xaf838758  sw          $v1, -0x78A8($gp)
    ctx->pc = 0x17bf74u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936408), GPR_U32(ctx, 3));
    ctx->pc = 0x17bf78u;
}
