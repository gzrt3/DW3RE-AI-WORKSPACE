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

// Function: entry_001716bc
// Address: 0x1716bc - 0x1716f0
void entry_001716bc_0x1716bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001716bc_0x1716bc");
#endif

    ctx->pc = 0x1716bcu;

    // 0x1716bc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1716bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1716c0: 0xc4801124  lwc1        $f0, 0x1124($a0)
    ctx->pc = 0x1716c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1716c4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1716c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1716c8: 0xe4e00004  swc1        $f0, 0x4($a3)
    ctx->pc = 0x1716c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x1716cc: 0xc4801958  lwc1        $f0, 0x1958($a0)
    ctx->pc = 0x1716ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1716d0: 0x46020043  div.s       $f1, $f0, $f2
    ctx->pc = 0x1716d0u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[2];
    // 0x1716d4: 0x0  nop
    ctx->pc = 0x1716d4u;
    // NOP
    // 0x1716d8: 0x0  nop
    ctx->pc = 0x1716d8u;
    // NOP
    // 0x1716dc: 0x5a00004  bltz        $t5, . + 4 + (0x4 << 2)
    ctx->pc = 0x1716DCu;
    {
        const bool branch_taken_0x1716dc = (GPR_S32(ctx, 13) < 0);
        if (branch_taken_0x1716dc) {
            ctx->pc = 0x1716F0u;
            return;
        }
    }
    ctx->pc = 0x1716E4u;
    // 0x1716e4: 0x448d0000  mtc1        $t5, $f0
    ctx->pc = 0x1716e4u;
    { uint32_t bits = GPR_U32(ctx, 13); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1716e8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1716E8u;
    {
        const bool branch_taken_0x1716e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1716ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1716E8u;
        // 0x1716ec: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1716e8) {
            ctx->pc = 0x17170Cu;
            return;
        }
    }
    ctx->pc = 0x1716F0u;
}
