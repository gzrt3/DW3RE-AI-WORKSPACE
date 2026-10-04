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

// Function: entry_0017166c
// Address: 0x17166c - 0x1716a0
void entry_0017166c_0x17166c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017166c_0x17166c");
#endif

    ctx->pc = 0x17166cu;

    // 0x17166c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x17166cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x171670: 0xc4801120  lwc1        $f0, 0x1120($a0)
    ctx->pc = 0x171670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x171674: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x171674u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x171678: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x171678u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x17167c: 0xc4801954  lwc1        $f0, 0x1954($a0)
    ctx->pc = 0x17167cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x171680: 0x46020043  div.s       $f1, $f0, $f2
    ctx->pc = 0x171680u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[2];
    // 0x171684: 0x0  nop
    ctx->pc = 0x171684u;
    // NOP
    // 0x171688: 0x0  nop
    ctx->pc = 0x171688u;
    // NOP
    // 0x17168c: 0x5a00004  bltz        $t5, . + 4 + (0x4 << 2)
    ctx->pc = 0x17168Cu;
    {
        const bool branch_taken_0x17168c = (GPR_S32(ctx, 13) < 0);
        if (branch_taken_0x17168c) {
            ctx->pc = 0x1716A0u;
            return;
        }
    }
    ctx->pc = 0x171694u;
    // 0x171694: 0x448d0000  mtc1        $t5, $f0
    ctx->pc = 0x171694u;
    { uint32_t bits = GPR_U32(ctx, 13); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x171698: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x171698u;
    {
        const bool branch_taken_0x171698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17169Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171698u;
        // 0x17169c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x171698) {
            ctx->pc = 0x1716BCu;
            return;
        }
    }
    ctx->pc = 0x1716A0u;
}
