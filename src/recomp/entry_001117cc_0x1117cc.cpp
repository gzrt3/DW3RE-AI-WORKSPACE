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

// Function: entry_001117cc
// Address: 0x1117cc - 0x1117e4
void entry_001117cc_0x1117cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001117cc_0x1117cc");
#endif

    ctx->pc = 0x1117ccu;

    // 0x1117cc: 0x30e30001  andi        $v1, $a3, 0x1
    ctx->pc = 0x1117ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x1117d0: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1117d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1117d4: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1117d4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1117d8: 0x0  nop
    ctx->pc = 0x1117d8u;
    // NOP
    // 0x1117dc: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x1117dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1117e0: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x1117e0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
    ctx->pc = 0x1117e4u;
}
