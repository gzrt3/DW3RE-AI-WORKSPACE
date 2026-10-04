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

// Function: entry_00131e84
// Address: 0x131e84 - 0x131ec8
void entry_00131e84_0x131e84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131e84_0x131e84");
#endif

    switch (ctx->pc) {
        case 0x131e8cu: goto label_131e8c;
        default: break;
    }

    ctx->pc = 0x131e84u;

    // 0x131e84: 0xc08f0cc  jal         func_23C330
    ctx->pc = 0x131E84u;
    SET_GPR_U32(ctx, 31, 0x131E8Cu);
    ctx->pc = 0x23C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C330u, 0x131E84u, 0x131E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131E8Cu;
label_131e8c:
    // 0x131e8c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x131e8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x131e90: 0x0  nop
    ctx->pc = 0x131e90u;
    // NOP
    // 0x131e94: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x131e94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x131e98: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x131e98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x131e9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x131e9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x131ea0: 0x0  nop
    ctx->pc = 0x131ea0u;
    // NOP
    // 0x131ea4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x131ea4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x131ea8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x131ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x131eac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x131eacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x131eb0: 0x0  nop
    ctx->pc = 0x131eb0u;
    // NOP
    // 0x131eb4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x131eb4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x131eb8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x131eb8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x131ebc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x131ebcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x131ec0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x131EC0u;
    {
        const bool branch_taken_0x131ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131EC0u;
        // 0x131ec4: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x131ec0) {
            ctx->pc = 0x131F0Cu;
            return;
        }
    }
    ctx->pc = 0x131EC8u;
}
