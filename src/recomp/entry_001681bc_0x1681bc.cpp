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

// Function: entry_001681bc
// Address: 0x1681bc - 0x168218
void entry_001681bc_0x1681bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001681bc_0x1681bc");
#endif

    ctx->pc = 0x1681bcu;

    // 0x1681bc: 0x0  nop
    ctx->pc = 0x1681bcu;
    // NOP
    // 0x1681c0: 0x1d03821  addu        $a3, $t6, $s0
    ctx->pc = 0x1681c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 16)));
    // 0x1681c4: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x1681c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1681c8: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x1681c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1681cc: 0x0  nop
    ctx->pc = 0x1681ccu;
    // NOP
    // 0x1681d0: 0x4501fff6  bc1t        . + 4 + (-0xA << 2)
    ctx->pc = 0x1681D0u;
    {
        const bool branch_taken_0x1681d0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1681D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1681D0u;
        // 0x1681d4: 0xd3880  sll         $a3, $t5, 2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1681d0) {
            ctx->pc = 0x1681ACu;
            return;
        }
    }
    ctx->pc = 0x1681D8u;
    // 0x1681d8: 0x1c73821  addu        $a3, $t6, $a3
    ctx->pc = 0x1681d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 7)));
    // 0x1681dc: 0xc4e50000  lwc1        $f5, 0x0($a3)
    ctx->pc = 0x1681dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1681e0: 0x46066101  sub.s       $f4, $f12, $f6
    ctx->pc = 0x1681e0u;
    ctx->f[4] = FPU_SUB_S(ctx->f[12], ctx->f[6]);
    // 0x1681e4: 0xc4e20008  lwc1        $f2, 0x8($a3)
    ctx->pc = 0x1681e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1681e8: 0x46062941  sub.s       $f5, $f5, $f6
    ctx->pc = 0x1681e8u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[6]);
    // 0x1681ec: 0x46052143  div.s       $f5, $f4, $f5
    ctx->pc = 0x1681ecu;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[5] = ctx->f[4] / ctx->f[5];
    // 0x1681f0: 0x46052902  mul.s       $f4, $f5, $f5
    ctx->pc = 0x1681f0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x1681f4: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x1681f4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x1681f8: 0xc4e30004  lwc1        $f3, 0x4($a3)
    ctx->pc = 0x1681f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1681fc: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x1681fcu;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x168200: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x168200u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x168204: 0xc4e1000c  lwc1        $f1, 0xC($a3)
    ctx->pc = 0x168204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x168208: 0x46021818  adda.s      $f3, $f2
    ctx->pc = 0x168208u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[3], ctx->f[2]));
    // 0x16820c: 0xc4e00010  lwc1        $f0, 0x10($a3)
    ctx->pc = 0x16820cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x168210: 0x4601285c  madd.s      $f1, $f5, $f1
    ctx->pc = 0x168210u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[5], ctx->f[1]));
    // 0x168214: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x168214u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    ctx->pc = 0x168218u;
}
