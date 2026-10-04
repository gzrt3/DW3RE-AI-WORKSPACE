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

// Function: entry_001311d8
// Address: 0x1311d8 - 0x13121c
void entry_001311d8_0x1311d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001311d8_0x1311d8");
#endif

    switch (ctx->pc) {
        case 0x1311e0u: goto label_1311e0;
        default: break;
    }

    ctx->pc = 0x1311d8u;

    // 0x1311d8: 0xc08f0cc  jal         func_23C330
    ctx->pc = 0x1311D8u;
    SET_GPR_U32(ctx, 31, 0x1311E0u);
    ctx->pc = 0x23C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C330u, 0x1311D8u, 0x1311E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1311E0u;
label_1311e0:
    // 0x1311e0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1311e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1311e4: 0x0  nop
    ctx->pc = 0x1311e4u;
    // NOP
    // 0x1311e8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1311e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1311ec: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x1311ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x1311f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1311f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1311f4: 0x0  nop
    ctx->pc = 0x1311f4u;
    // NOP
    // 0x1311f8: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1311f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1311fc: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1311fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x131200: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x131200u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x131204: 0x0  nop
    ctx->pc = 0x131204u;
    // NOP
    // 0x131208: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x131208u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x13120c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x13120cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x131210: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x131210u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x131214: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x131214u;
    {
        const bool branch_taken_0x131214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131214u;
        // 0x131218: 0xa2020001  sb          $v0, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131214) {
            ctx->pc = 0x13127Cu;
            return;
        }
    }
    ctx->pc = 0x13121Cu;
}
