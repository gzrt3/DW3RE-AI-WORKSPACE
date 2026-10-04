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

// Function: entry_0014f1c0
// Address: 0x14f1c0 - 0x14f1e0
void entry_0014f1c0_0x14f1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014f1c0_0x14f1c0");
#endif

    switch (ctx->pc) {
        case 0x14f1d8u: goto label_14f1d8;
        default: break;
    }

    ctx->pc = 0x14f1c0u;

    // 0x14f1c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14f1c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14f1c4: 0x8602019e  lh          $v0, 0x19E($s0)
    ctx->pc = 0x14f1c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 414)));
    // 0x14f1c8: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x14f1c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x14f1cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14f1ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14f1d0: 0xc06d51e  jal         func_1B5478
    ctx->pc = 0x14F1D0u;
    SET_GPR_U32(ctx, 31, 0x14F1D8u);
    ctx->pc = 0x14F1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F1D0u;
    // 0x14f1d4: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5478u, 0x14F1D0u, 0x14F1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F1D8u;
label_14f1d8:
    // 0x14f1d8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14F1D8u;
    {
        const bool branch_taken_0x14f1d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F1D8u;
        // 0x14f1dc: 0xe60001bc  swc1        $f0, 0x1BC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 444), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f1d8) {
            ctx->pc = 0x14F1E8u;
            return;
        }
    }
    ctx->pc = 0x14F1E0u;
}
