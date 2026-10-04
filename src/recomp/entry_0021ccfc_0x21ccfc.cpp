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

// Function: entry_0021ccfc
// Address: 0x21ccfc - 0x21cd14
void entry_0021ccfc_0x21ccfc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021ccfc_0x21ccfc");
#endif

    ctx->pc = 0x21ccfcu;

    // 0x21ccfc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x21ccfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x21cd00: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x21cd00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x21cd04: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21cd04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21cd08: 0x0  nop
    ctx->pc = 0x21cd08u;
    // NOP
    // 0x21cd0c: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x21cd0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x21cd10: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x21cd10u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
    ctx->pc = 0x21cd14u;
}
