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

// Function: entry_0013f0a0
// Address: 0x13f0a0 - 0x13f0c0
void entry_0013f0a0_0x13f0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013f0a0_0x13f0a0");
#endif

    switch (ctx->pc) {
        case 0x13f0b8u: goto label_13f0b8;
        default: break;
    }

    ctx->pc = 0x13f0a0u;

    // 0x13f0a0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x13f0a0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13f0a4: 0x8602019e  lh          $v0, 0x19E($s0)
    ctx->pc = 0x13f0a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 414)));
    // 0x13f0a8: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x13f0a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x13f0ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13f0acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13f0b0: 0xc06d51e  jal         func_1B5478
    ctx->pc = 0x13F0B0u;
    SET_GPR_U32(ctx, 31, 0x13F0B8u);
    ctx->pc = 0x13F0B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F0B0u;
    // 0x13f0b4: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5478u, 0x13F0B0u, 0x13F0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F0B8u;
label_13f0b8:
    // 0x13f0b8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x13F0B8u;
    {
        const bool branch_taken_0x13f0b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F0B8u;
        // 0x13f0bc: 0xe60001bc  swc1        $f0, 0x1BC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 444), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f0b8) {
            ctx->pc = 0x13F0C8u;
            return;
        }
    }
    ctx->pc = 0x13F0C0u;
}
