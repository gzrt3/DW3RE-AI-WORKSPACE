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

// Function: entry_001871f4
// Address: 0x1871f4 - 0x187248
void entry_001871f4_0x1871f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001871f4_0x1871f4");
#endif

    ctx->pc = 0x1871f4u;

    // 0x1871f4: 0x90860244  lbu         $a2, 0x244($a0)
    ctx->pc = 0x1871f4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 580)));
    // 0x1871f8: 0x3c03437a  lui         $v1, 0x437A
    ctx->pc = 0x1871f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17274 << 16));
    // 0x1871fc: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1871fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x187200: 0x3c050029  lui         $a1, 0x29
    ctx->pc = 0x187200u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)41 << 16));
    // 0x187204: 0x24a5aec4  addiu       $a1, $a1, -0x513C
    ctx->pc = 0x187204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946500));
    // 0x187208: 0xc4800260  lwc1        $f0, 0x260($a0)
    ctx->pc = 0x187208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18720c: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x18720cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x187210: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x187210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x187214: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x187214u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x187218: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x187218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x18721c: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x18721cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x187220: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x187220u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x187224: 0x0  nop
    ctx->pc = 0x187224u;
    // NOP
    // 0x187228: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x187228u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x18722c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x18722cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x187230: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x187230u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x187234: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x187234u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x187238: 0x0  nop
    ctx->pc = 0x187238u;
    // NOP
    // 0x18723c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x18723Cu;
    {
        const bool branch_taken_0x18723c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x187240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18723Cu;
        // 0x187240: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18723c) {
            ctx->pc = 0x187248u;
            return;
        }
    }
    ctx->pc = 0x187244u;
    // 0x187244: 0xa083023c  sb          $v1, 0x23C($a0)
    ctx->pc = 0x187244u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 572), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x187248u;
}
