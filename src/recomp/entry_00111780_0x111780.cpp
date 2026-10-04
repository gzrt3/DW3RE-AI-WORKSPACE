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

// Function: entry_00111780
// Address: 0x111780 - 0x1117cc
void entry_00111780_0x111780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111780_0x111780");
#endif

    ctx->pc = 0x111780u;

    // 0x111780: 0x3c03459c  lui         $v1, 0x459C
    ctx->pc = 0x111780u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17820 << 16));
    // 0x111784: 0x90870026  lbu         $a3, 0x26($a0)
    ctx->pc = 0x111784u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 38)));
    // 0x111788: 0x34664000  ori         $a2, $v1, 0x4000
    ctx->pc = 0x111788u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x11178c: 0x44861000  mtc1        $a2, $f2
    ctx->pc = 0x11178cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x111790: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x111790u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
    // 0x111794: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x111794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x111798: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x111798u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x11179c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x11179cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x1117a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1117a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1117a4: 0x0  nop
    ctx->pc = 0x1117a4u;
    // NOP
    // 0x1117a8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1117a8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x1117ac: 0x0  nop
    ctx->pc = 0x1117acu;
    // NOP
    // 0x1117b0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1117b0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1117b4: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x1117b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1117b8: 0x4e00004  bltz        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1117B8u;
    {
        const bool branch_taken_0x1117b8 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x1117BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1117B8u;
        // 0x1117bc: 0x73042  srl         $a2, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1117b8) {
            ctx->pc = 0x1117CCu;
            return;
        }
    }
    ctx->pc = 0x1117C0u;
    // 0x1117c0: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x1117c0u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1117c4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1117C4u;
    {
        const bool branch_taken_0x1117c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1117C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1117C4u;
        // 0x1117c8: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1117c4) {
            ctx->pc = 0x1117E4u;
            return;
        }
    }
    ctx->pc = 0x1117CCu;
}
