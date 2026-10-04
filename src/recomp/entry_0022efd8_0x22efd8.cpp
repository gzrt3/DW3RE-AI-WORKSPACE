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

// Function: entry_0022efd8
// Address: 0x22efd8 - 0x22f01c
void entry_0022efd8_0x22efd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022efd8_0x22efd8");
#endif

    ctx->pc = 0x22efd8u;

    // 0x22efd8: 0x0  nop
    ctx->pc = 0x22efd8u;
    // NOP
    // 0x22efdc: 0x84830012  lh          $v1, 0x12($a0)
    ctx->pc = 0x22efdcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x22efe0: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x22EFE0u;
    {
        const bool branch_taken_0x22efe0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22efe0) {
            ctx->pc = 0x22F01Cu;
            return;
        }
    }
    ctx->pc = 0x22EFE8u;
    // 0x22efe8: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x22efe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x22efec: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x22efecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x22eff0: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x22eff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x22eff4: 0xc4640150  lwc1        $f4, 0x150($v1)
    ctx->pc = 0x22eff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x22eff8: 0xc4610158  lwc1        $f1, 0x158($v1)
    ctx->pc = 0x22eff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22effc: 0x460418c1  sub.s       $f3, $f3, $f4
    ctx->pc = 0x22effcu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
    // 0x22f000: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x22f000u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x22f004: 0x4603181a  mula.s      $f3, $f3
    ctx->pc = 0x22f004u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[3]));
    // 0x22f008: 0x4601085c  madd.s      $f1, $f1, $f1
    ctx->pc = 0x22f008u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x22f00c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22f00cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22f010: 0x0  nop
    ctx->pc = 0x22f010u;
    // NOP
    // 0x22f014: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x22F014u;
    {
        const bool branch_taken_0x22f014 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22f014) {
            ctx->pc = 0x22F030u;
            return;
        }
    }
    ctx->pc = 0x22F01Cu;
}
