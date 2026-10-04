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

// Function: entry_00143d10
// Address: 0x143d10 - 0x143d28
void entry_00143d10_0x143d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00143d10_0x143d10");
#endif

    ctx->pc = 0x143d10u;

    // 0x143d10: 0x30e30001  andi        $v1, $a3, 0x1
    ctx->pc = 0x143d10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x143d14: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x143d14u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x143d18: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x143d18u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x143d1c: 0x0  nop
    ctx->pc = 0x143d1cu;
    // NOP
    // 0x143d20: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x143d20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x143d24: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x143d24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    ctx->pc = 0x143d28u;
}
