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

// Function: FUN_001b5008
// Address: 0x1b5008 - 0x1b503c
void FUN_001b5008_0x1b5008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b5008_0x1b5008");
#endif

    ctx->pc = 0x1b5008u;

    // 0x1b5008: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b5008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b500c: 0x46006006  mov.s       $f0, $f12
    ctx->pc = 0x1b500cu;
    ctx->f[0] = FPU_MOV_S(ctx->f[12]);
    // 0x1b5010: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1b5010u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1b5014: 0xe7ad0004  swc1        $f13, 0x4($sp)
    ctx->pc = 0x1b5014u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1b5018: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x1b5018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x1b501c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1b501cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1b5020: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x1b5020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1b5024: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b5024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1b5028: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1b5028u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1b502c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1b502cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b5030: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1b5030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1b5034: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b5034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b5038: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b5038u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    ctx->pc = 0x1b503cu;
}
