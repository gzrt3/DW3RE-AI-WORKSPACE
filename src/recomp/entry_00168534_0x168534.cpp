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

// Function: entry_00168534
// Address: 0x168534 - 0x168590
void entry_00168534_0x168534(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00168534_0x168534");
#endif

    ctx->pc = 0x168534u;

    // 0x168534: 0x0  nop
    ctx->pc = 0x168534u;
    // NOP
    // 0x168538: 0x795021  addu        $t2, $v1, $t9
    ctx->pc = 0x168538u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 25)));
    // 0x16853c: 0xc5400000  lwc1        $f0, 0x0($t2)
    ctx->pc = 0x16853cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x168540: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x168540u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x168544: 0x0  nop
    ctx->pc = 0x168544u;
    // NOP
    // 0x168548: 0x4501fff6  bc1t        . + 4 + (-0xA << 2)
    ctx->pc = 0x168548u;
    {
        const bool branch_taken_0x168548 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16854Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168548u;
        // 0x16854c: 0xd5080  sll         $t2, $t5, 2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168548) {
            ctx->pc = 0x168524u;
            return;
        }
    }
    ctx->pc = 0x168550u;
    // 0x168550: 0x6a5021  addu        $t2, $v1, $t2
    ctx->pc = 0x168550u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x168554: 0xc5450000  lwc1        $f5, 0x0($t2)
    ctx->pc = 0x168554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x168558: 0x46066101  sub.s       $f4, $f12, $f6
    ctx->pc = 0x168558u;
    ctx->f[4] = FPU_SUB_S(ctx->f[12], ctx->f[6]);
    // 0x16855c: 0xc5420008  lwc1        $f2, 0x8($t2)
    ctx->pc = 0x16855cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x168560: 0x46062941  sub.s       $f5, $f5, $f6
    ctx->pc = 0x168560u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[6]);
    // 0x168564: 0x46052143  div.s       $f5, $f4, $f5
    ctx->pc = 0x168564u;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[5] = ctx->f[4] / ctx->f[5];
    // 0x168568: 0x46052902  mul.s       $f4, $f5, $f5
    ctx->pc = 0x168568u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x16856c: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x16856cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x168570: 0xc5430004  lwc1        $f3, 0x4($t2)
    ctx->pc = 0x168570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x168574: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x168574u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x168578: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x168578u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x16857c: 0xc541000c  lwc1        $f1, 0xC($t2)
    ctx->pc = 0x16857cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x168580: 0x46021818  adda.s      $f3, $f2
    ctx->pc = 0x168580u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[3], ctx->f[2]));
    // 0x168584: 0xc5400010  lwc1        $f0, 0x10($t2)
    ctx->pc = 0x168584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x168588: 0x4601285c  madd.s      $f1, $f5, $f1
    ctx->pc = 0x168588u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[5], ctx->f[1]));
    // 0x16858c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x16858cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    ctx->pc = 0x168590u;
}
