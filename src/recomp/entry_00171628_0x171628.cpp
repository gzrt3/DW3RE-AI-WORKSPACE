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

// Function: entry_00171628
// Address: 0x171628 - 0x171650
void entry_00171628_0x171628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00171628_0x171628");
#endif

    ctx->pc = 0x171628u;

    // 0x171628: 0x14c6821  addu        $t5, $t2, $t4
    ctx->pc = 0x171628u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 12)));
    // 0x17162c: 0xc4801950  lwc1        $f0, 0x1950($a0)
    ctx->pc = 0x17162cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x171630: 0x46020043  div.s       $f1, $f0, $f2
    ctx->pc = 0x171630u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[2];
    // 0x171634: 0x0  nop
    ctx->pc = 0x171634u;
    // NOP
    // 0x171638: 0x0  nop
    ctx->pc = 0x171638u;
    // NOP
    // 0x17163c: 0x5a00004  bltz        $t5, . + 4 + (0x4 << 2)
    ctx->pc = 0x17163Cu;
    {
        const bool branch_taken_0x17163c = (GPR_S32(ctx, 13) < 0);
        if (branch_taken_0x17163c) {
            ctx->pc = 0x171650u;
            return;
        }
    }
    ctx->pc = 0x171644u;
    // 0x171644: 0x448d0000  mtc1        $t5, $f0
    ctx->pc = 0x171644u;
    { uint32_t bits = GPR_U32(ctx, 13); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x171648: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x171648u;
    {
        const bool branch_taken_0x171648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17164Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171648u;
        // 0x17164c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x171648) {
            ctx->pc = 0x17166Cu;
            return;
        }
    }
    ctx->pc = 0x171650u;
}
