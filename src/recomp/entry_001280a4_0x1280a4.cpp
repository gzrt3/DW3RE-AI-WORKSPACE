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

// Function: entry_001280a4
// Address: 0x1280a4 - 0x1280fc
void entry_001280a4_0x1280a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001280a4_0x1280a4");
#endif

    ctx->pc = 0x1280a4u;

    // 0x1280a4: 0x948602e6  lhu         $a2, 0x2E6($a0)
    ctx->pc = 0x1280a4u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 742)));
    // 0x1280a8: 0x948302f8  lhu         $v1, 0x2F8($a0)
    ctx->pc = 0x1280a8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 760)));
    // 0x1280ac: 0xc3082a  slt         $at, $a2, $v1
    ctx->pc = 0x1280acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1280b0: 0x1020002e  beqz        $at, . + 4 + (0x2E << 2)
    ctx->pc = 0x1280B0u;
    {
        const bool branch_taken_0x1280b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1280b0) {
            ctx->pc = 0x12816Cu;
            return;
        }
    }
    ctx->pc = 0x1280B8u;
    // 0x1280b8: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x1280b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1280bc: 0x908602e3  lbu         $a2, 0x2E3($a0)
    ctx->pc = 0x1280bcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 739)));
    // 0x1280c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1280c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1280c4: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1280c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1280c8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1280c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1280cc: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x1280ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1280d0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1280d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1280d4: 0x0  nop
    ctx->pc = 0x1280d4u;
    // NOP
    // 0x1280d8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1280d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1280dc: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x1280dcu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x1280e0: 0x0  nop
    ctx->pc = 0x1280e0u;
    // NOP
    // 0x1280e4: 0x0  nop
    ctx->pc = 0x1280e4u;
    // NOP
    // 0x1280e8: 0x4c00004  bltz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1280E8u;
    {
        const bool branch_taken_0x1280e8 = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x1280e8) {
            ctx->pc = 0x1280FCu;
            return;
        }
    }
    ctx->pc = 0x1280F0u;
    // 0x1280f0: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1280f0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1280f4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1280F4u;
    {
        const bool branch_taken_0x1280f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1280F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1280F4u;
        // 0x1280f8: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1280f4) {
            ctx->pc = 0x128118u;
            return;
        }
    }
    ctx->pc = 0x1280FCu;
}
