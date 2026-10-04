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

// Function: entry_0012cbb4
// Address: 0x12cbb4 - 0x12cbcc
void entry_0012cbb4_0x12cbb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012cbb4_0x12cbb4");
#endif

    ctx->pc = 0x12cbb4u;

    // 0x12cbb4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x12cbb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x12cbb8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x12cbb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x12cbbc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x12cbbcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12cbc0: 0x0  nop
    ctx->pc = 0x12cbc0u;
    // NOP
    // 0x12cbc4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x12cbc4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x12cbc8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x12cbc8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    ctx->pc = 0x12cbccu;
}
