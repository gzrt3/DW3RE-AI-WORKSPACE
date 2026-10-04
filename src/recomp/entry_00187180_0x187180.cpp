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

// Function: entry_00187180
// Address: 0x187180 - 0x1871f4
void entry_00187180_0x187180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187180_0x187180");
#endif

    ctx->pc = 0x187180u;

    // 0x187180: 0xc4810260  lwc1        $f1, 0x260($a0)
    ctx->pc = 0x187180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x187184: 0x3c0347af  lui         $v1, 0x47AF
    ctx->pc = 0x187184u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18351 << 16));
    // 0x187188: 0x3463c800  ori         $v1, $v1, 0xC800
    ctx->pc = 0x187188u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)51200);
    // 0x18718c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x18718cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x187190: 0x0  nop
    ctx->pc = 0x187190u;
    // NOP
    // 0x187194: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x187194u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x187198: 0x0  nop
    ctx->pc = 0x187198u;
    // NOP
    // 0x18719c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x18719Cu;
    {
        const bool branch_taken_0x18719c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18719c) {
            ctx->pc = 0x1871ACu;
            goto label_1871ac;
        }
    }
    ctx->pc = 0x1871A4u;
    // 0x1871a4: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1871A4u;
    {
        const bool branch_taken_0x1871a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1871A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1871A4u;
        // 0x1871a8: 0xa080023c  sb          $zero, 0x23C($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 572), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1871a4) {
            ctx->pc = 0x187248u;
            return;
        }
    }
    ctx->pc = 0x1871ACu;
label_1871ac:
    // 0x1871ac: 0x90860244  lbu         $a2, 0x244($a0)
    ctx->pc = 0x1871acu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 580)));
    // 0x1871b0: 0x3c030029  lui         $v1, 0x29
    ctx->pc = 0x1871b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
    // 0x1871b4: 0x2463aec4  addiu       $v1, $v1, -0x513C
    ctx->pc = 0x1871b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946500));
    // 0x1871b8: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x1871b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x1871bc: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1871bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1871c0: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x1871c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1871c4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1871c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1871c8: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x1871c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1871cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1871ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1871d0: 0x0  nop
    ctx->pc = 0x1871d0u;
    // NOP
    // 0x1871d4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1871d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1871d8: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1871d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1871dc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1871dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1871e0: 0x0  nop
    ctx->pc = 0x1871e0u;
    // NOP
    // 0x1871e4: 0x45010018  bc1t        . + 4 + (0x18 << 2)
    ctx->pc = 0x1871E4u;
    {
        const bool branch_taken_0x1871e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1871e4) {
            ctx->pc = 0x187248u;
            return;
        }
    }
    ctx->pc = 0x1871ECu;
    // 0x1871ec: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1871ECu;
    {
        const bool branch_taken_0x1871ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1871F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1871ECu;
        // 0x1871f0: 0xa087023c  sb          $a3, 0x23C($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 572), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1871ec) {
            ctx->pc = 0x187248u;
            return;
        }
    }
    ctx->pc = 0x1871F4u;
}
