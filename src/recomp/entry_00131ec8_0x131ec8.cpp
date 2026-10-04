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

// Function: entry_00131ec8
// Address: 0x131ec8 - 0x131f0c
void entry_00131ec8_0x131ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131ec8_0x131ec8");
#endif

    switch (ctx->pc) {
        case 0x131ed0u: goto label_131ed0;
        default: break;
    }

    ctx->pc = 0x131ec8u;

    // 0x131ec8: 0xc08f0cc  jal         func_23C330
    ctx->pc = 0x131EC8u;
    SET_GPR_U32(ctx, 31, 0x131ED0u);
    ctx->pc = 0x23C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C330u, 0x131EC8u, 0x131ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131ED0u;
label_131ed0:
    // 0x131ed0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x131ed0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x131ed4: 0x0  nop
    ctx->pc = 0x131ed4u;
    // NOP
    // 0x131ed8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x131ed8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x131edc: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x131edcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x131ee0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x131ee0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x131ee4: 0x0  nop
    ctx->pc = 0x131ee4u;
    // NOP
    // 0x131ee8: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x131ee8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x131eec: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x131eecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x131ef0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x131ef0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x131ef4: 0x0  nop
    ctx->pc = 0x131ef4u;
    // NOP
    // 0x131ef8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x131ef8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x131efc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x131efcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x131f00: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x131f00u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x131f04: 0x0  nop
    ctx->pc = 0x131f04u;
    // NOP
    // 0x131f08: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x131f08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->pc = 0x131f0cu;
}
