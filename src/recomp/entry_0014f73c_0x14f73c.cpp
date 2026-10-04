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

// Function: entry_0014f73c
// Address: 0x14f73c - 0x14f7a0
void entry_0014f73c_0x14f73c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014f73c_0x14f73c");
#endif

    ctx->pc = 0x14f73cu;

    // 0x14f73c: 0xc60101bc  lwc1        $f1, 0x1BC($s0)
    ctx->pc = 0x14f73cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14f740: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x14f740u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x14f744: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x14f744u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x14f748: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14f748u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14f74c: 0x0  nop
    ctx->pc = 0x14f74cu;
    // NOP
    // 0x14f750: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x14f750u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14f754: 0x0  nop
    ctx->pc = 0x14f754u;
    // NOP
    // 0x14f758: 0x45010010  bc1t        . + 4 + (0x10 << 2)
    ctx->pc = 0x14F758u;
    {
        const bool branch_taken_0x14f758 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14F75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F758u;
        // 0x14f75c: 0x30a30100  andi        $v1, $a1, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f758) {
            ctx->pc = 0x14F79Cu;
            goto label_14f79c;
        }
    }
    ctx->pc = 0x14F760u;
    // 0x14f760: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x14F760u;
    {
        const bool branch_taken_0x14f760 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f760) {
            ctx->pc = 0x14F79Cu;
            goto label_14f79c;
        }
    }
    ctx->pc = 0x14F768u;
    // 0x14f768: 0xc4800218  lwc1        $f0, 0x218($a0)
    ctx->pc = 0x14f768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14f76c: 0x0  nop
    ctx->pc = 0x14f76cu;
    // NOP
    // 0x14f770: 0x44090800  mfc1        $t1, $f1
    ctx->pc = 0x14f770u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x14f774: 0x48a90800  qmtc2.ni    $t1, $vf1
    ctx->pc = 0x14f774u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
    // 0x14f778: 0x4a000138  vcallms     0x20
    ctx->pc = 0x14f778u;
    {     ctx->vu0_tpc = 0x20;     runtime->executeVU0Microprogram(rdram, ctx, 0x20); }
    // 0x14f77c: 0x48290801  qmfc2.i     $t1, $vf1
    ctx->pc = 0x14f77cu;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x14f780: 0x44890800  mtc1        $t1, $f1
    ctx->pc = 0x14f780u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14f784: 0x48291000  qmfc2.ni    $t1, $vf2
    ctx->pc = 0x14f784u;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x14f788: 0x44891000  mtc1        $t1, $f2
    ctx->pc = 0x14f788u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x14f78c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x14f78cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x14f790: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x14f790u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x14f794: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x14f794u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x14f798: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x14f798u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_14f79c:
    // 0x14f79c: 0xc6010050  lwc1        $f1, 0x50($s0)
    ctx->pc = 0x14f79cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    ctx->pc = 0x14f7a0u;
}
