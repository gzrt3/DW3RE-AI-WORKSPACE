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

// Function: entry_001281bc
// Address: 0x1281bc - 0x1281f0
void entry_001281bc_0x1281bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001281bc_0x1281bc");
#endif

    ctx->pc = 0x1281bcu;

    // 0x1281bc: 0xe62823  subu        $a1, $a3, $a2
    ctx->pc = 0x1281bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x1281c0: 0x908302e3  lbu         $v1, 0x2E3($a0)
    ctx->pc = 0x1281c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 739)));
    // 0x1281c4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1281c4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1281c8: 0x0  nop
    ctx->pc = 0x1281c8u;
    // NOP
    // 0x1281cc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1281ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1281d0: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1281d0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x1281d4: 0x0  nop
    ctx->pc = 0x1281d4u;
    // NOP
    // 0x1281d8: 0x0  nop
    ctx->pc = 0x1281d8u;
    // NOP
    // 0x1281dc: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1281DCu;
    {
        const bool branch_taken_0x1281dc = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x1281dc) {
            ctx->pc = 0x1281F0u;
            return;
        }
    }
    ctx->pc = 0x1281E4u;
    // 0x1281e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1281e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1281e8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1281E8u;
    {
        const bool branch_taken_0x1281e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1281ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1281E8u;
        // 0x1281ec: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1281e8) {
            ctx->pc = 0x12820Cu;
            return;
        }
    }
    ctx->pc = 0x1281F0u;
}
