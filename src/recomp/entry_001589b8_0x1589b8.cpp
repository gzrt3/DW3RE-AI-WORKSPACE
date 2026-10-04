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

// Function: entry_001589b8
// Address: 0x1589b8 - 0x158a00
void entry_001589b8_0x1589b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001589b8_0x1589b8");
#endif

    switch (ctx->pc) {
        case 0x1589c8u: goto label_1589c8;
        default: break;
    }

    ctx->pc = 0x1589b8u;

    // 0x1589b8: 0x14830011  bne         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1589B8u;
    {
        const bool branch_taken_0x1589b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1589b8) {
            ctx->pc = 0x158A00u;
            return;
        }
    }
    ctx->pc = 0x1589C0u;
    // 0x1589c0: 0xc08f0cc  jal         func_23C330
    ctx->pc = 0x1589C0u;
    SET_GPR_U32(ctx, 31, 0x1589C8u);
    ctx->pc = 0x23C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C330u, 0x1589C0u, 0x1589C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1589C8u;
label_1589c8:
    // 0x1589c8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1589c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1589cc: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x1589ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x1589d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1589d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1589d4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1589d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1589d8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1589d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1589dc: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x1589dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x1589e0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1589e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1589e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1589e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1589e8: 0x0  nop
    ctx->pc = 0x1589e8u;
    // NOP
    // 0x1589ec: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1589ecu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x1589f0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1589f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1589f4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1589f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1589f8: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x1589F8u;
    {
        const bool branch_taken_0x1589f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1589FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1589F8u;
        // 0x1589fc: 0xa0234910  sb          $v1, 0x4910($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 18704), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1589f8) {
            ctx->pc = 0x158AA8u;
            return;
        }
    }
    ctx->pc = 0x158A00u;
}
