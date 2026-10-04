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

// Function: entry_00171424
// Address: 0x171424 - 0x171498
void entry_00171424_0x171424(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00171424_0x171424");
#endif

    ctx->pc = 0x171424u;

    // 0x171424: 0x0  nop
    ctx->pc = 0x171424u;
    // NOP
    // 0x171428: 0xc5200004  lwc1        $f0, 0x4($t1)
    ctx->pc = 0x171428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17142c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x17142cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x171430: 0xe5200004  swc1        $f0, 0x4($t1)
    ctx->pc = 0x171430u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4), bits); }
    // 0x171434: 0xc5010000  lwc1        $f1, 0x0($t0)
    ctx->pc = 0x171434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x171438: 0xc5200000  lwc1        $f0, 0x0($t1)
    ctx->pc = 0x171438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17143c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x17143cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x171440: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x171440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x171444: 0xc5210004  lwc1        $f1, 0x4($t1)
    ctx->pc = 0x171444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x171448: 0xc5000004  lwc1        $f0, 0x4($t0)
    ctx->pc = 0x171448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17144c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x17144cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x171450: 0xe5000004  swc1        $f0, 0x4($t0)
    ctx->pc = 0x171450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x171454: 0xc5210008  lwc1        $f1, 0x8($t1)
    ctx->pc = 0x171454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x171458: 0xc5000008  lwc1        $f0, 0x8($t0)
    ctx->pc = 0x171458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17145c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x17145cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x171460: 0xe5000008  swc1        $f0, 0x8($t0)
    ctx->pc = 0x171460u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x171464: 0x94861132  lhu         $a2, 0x1132($a0)
    ctx->pc = 0x171464u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4402)));
    // 0x171468: 0x28c1002e  slti        $at, $a2, 0x2E
    ctx->pc = 0x171468u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)46) ? 1 : 0);
    // 0x17146c: 0x1420000a  bnez        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x17146Cu;
    {
        const bool branch_taken_0x17146c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x17146c) {
            ctx->pc = 0x171498u;
            return;
        }
    }
    ctx->pc = 0x171474u;
    // 0x171474: 0x8d460000  lw          $a2, 0x0($t2)
    ctx->pc = 0x171474u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x171478: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x171478u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x17147c: 0xad460000  sw          $a2, 0x0($t2)
    ctx->pc = 0x17147cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 6));
    // 0x171480: 0x8d460004  lw          $a2, 0x4($t2)
    ctx->pc = 0x171480u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x171484: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x171484u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x171488: 0xad460004  sw          $a2, 0x4($t2)
    ctx->pc = 0x171488u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 6));
    // 0x17148c: 0x8d460008  lw          $a2, 0x8($t2)
    ctx->pc = 0x17148cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x171490: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x171490u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x171494: 0xad460008  sw          $a2, 0x8($t2)
    ctx->pc = 0x171494u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 6));
    ctx->pc = 0x171498u;
}
