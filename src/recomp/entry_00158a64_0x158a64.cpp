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

// Function: entry_00158a64
// Address: 0x158a64 - 0x158aa4
void entry_00158a64_0x158a64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00158a64_0x158a64");
#endif

    switch (ctx->pc) {
        case 0x158a6cu: goto label_158a6c;
        default: break;
    }

    ctx->pc = 0x158a64u;

    // 0x158a64: 0xc08f0cc  jal         func_23C330
    ctx->pc = 0x158A64u;
    SET_GPR_U32(ctx, 31, 0x158A6Cu);
    ctx->pc = 0x23C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C330u, 0x158A64u, 0x158A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158A6Cu;
label_158a6c:
    // 0x158a6c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x158a6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x158a70: 0x3c034110  lui         $v1, 0x4110
    ctx->pc = 0x158a70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16656 << 16));
    // 0x158a74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x158a74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x158a78: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x158a78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x158a7c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x158a7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x158a80: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x158a80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x158a84: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x158a84u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x158a88: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x158a88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x158a8c: 0x0  nop
    ctx->pc = 0x158a8cu;
    // NOP
    // 0x158a90: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x158a90u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x158a94: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x158a94u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x158a98: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x158a98u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x158a9c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x158A9Cu;
    {
        const bool branch_taken_0x158a9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158A9Cu;
        // 0x158aa0: 0xa0234910  sb          $v1, 0x4910($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 18704), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158a9c) {
            ctx->pc = 0x158AA8u;
            return;
        }
    }
    ctx->pc = 0x158AA4u;
}
