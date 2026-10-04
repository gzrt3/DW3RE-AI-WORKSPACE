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

// Function: entry_00111768
// Address: 0x111768 - 0x111780
void entry_00111768_0x111768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111768_0x111768");
#endif

    ctx->pc = 0x111768u;

    // 0x111768: 0x31230001  andi        $v1, $t1, 0x1
    ctx->pc = 0x111768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
    // 0x11176c: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x11176cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x111770: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x111770u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x111774: 0x0  nop
    ctx->pc = 0x111774u;
    // NOP
    // 0x111778: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x111778u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x11177c: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x11177cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
    ctx->pc = 0x111780u;
}
