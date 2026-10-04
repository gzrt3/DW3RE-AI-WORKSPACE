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

// Function: entry_0017bed4
// Address: 0x17bed4 - 0x17bee4
void entry_0017bed4_0x17bed4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017bed4_0x17bed4");
#endif

    ctx->pc = 0x17bed4u;

    // 0x17bed4: 0xc481001c  lwc1        $f1, 0x1C($a0)
    ctx->pc = 0x17bed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17bed8: 0x0  nop
    ctx->pc = 0x17bed8u;
    // NOP
    // 0x17bedc: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x17bedcu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
    // 0x17bee0: 0xe4810038  swc1        $f1, 0x38($a0)
    ctx->pc = 0x17bee0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
    ctx->pc = 0x17bee4u;
}
