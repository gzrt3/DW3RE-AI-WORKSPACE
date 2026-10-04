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

// Function: entry_001b4f14
// Address: 0x1b4f14 - 0x1b4fb8
void entry_001b4f14_0x1b4f14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b4f14_0x1b4f14");
#endif

    ctx->pc = 0x1b4f14u;

    // 0x1b4f14: 0x460d6b02  mul.s       $f12, $f13, $f13
    ctx->pc = 0x1b4f14u;
    ctx->f[12] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
    // 0x1b4f18: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x1b4f18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
    // 0x1b4f1c: 0x2442b278  addiu       $v0, $v0, -0x4D88
    ctx->pc = 0x1b4f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947448));
    // 0x1b4f20: 0xc4470028  lwc1        $f7, 0x28($v0)
    ctx->pc = 0x1b4f20u;
    { uint32_t bits = FAST_READ32(0x2CB2A0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1b4f24: 0xc4440020  lwc1        $f4, 0x20($v0)
    ctx->pc = 0x1b4f24u;
    { uint32_t bits = FAST_READ32(0x2CB298u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1b4f28: 0x460c6002  mul.s       $f0, $f12, $f12
    ctx->pc = 0x1b4f28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x1b4f2c: 0xc4450024  lwc1        $f5, 0x24($v0)
    ctx->pc = 0x1b4f2cu;
    { uint32_t bits = FAST_READ32(0x2CB29Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1b4f30: 0xc4460018  lwc1        $f6, 0x18($v0)
    ctx->pc = 0x1b4f30u;
    { uint32_t bits = FAST_READ32(0x2CB290u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1b4f34: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x1b4f34u;
    { uint32_t bits = FAST_READ32(0x2CB294u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b4f38: 0xc4480010  lwc1        $f8, 0x10($v0)
    ctx->pc = 0x1b4f38u;
    { uint32_t bits = FAST_READ32(0x2CB288u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x1b4f3c: 0x460701c2  mul.s       $f7, $f0, $f7
    ctx->pc = 0x1b4f3cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x1b4f40: 0xc4420014  lwc1        $f2, 0x14($v0)
    ctx->pc = 0x1b4f40u;
    { uint32_t bits = FAST_READ32(0x2CB28Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b4f44: 0x46050142  mul.s       $f5, $f0, $f5
    ctx->pc = 0x1b4f44u;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x1b4f48: 0xc4490008  lwc1        $f9, 0x8($v0)
    ctx->pc = 0x1b4f48u;
    { uint32_t bits = FAST_READ32(0x2CB280u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x1b4f4c: 0xc443000c  lwc1        $f3, 0xC($v0)
    ctx->pc = 0x1b4f4cu;
    { uint32_t bits = FAST_READ32(0x2CB284u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b4f50: 0xc44a0004  lwc1        $f10, 0x4($v0)
    ctx->pc = 0x1b4f50u;
    { uint32_t bits = FAST_READ32(0x2CB27Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x1b4f54: 0x46072100  add.s       $f4, $f4, $f7
    ctx->pc = 0x1b4f54u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[7]);
    // 0x1b4f58: 0xc44b0000  lwc1        $f11, 0x0($v0)
    ctx->pc = 0x1b4f58u;
    { uint32_t bits = FAST_READ32(0x2CB278u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x1b4f5c: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x1b4f5cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x1b4f60: 0x46040102  mul.s       $f4, $f0, $f4
    ctx->pc = 0x1b4f60u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x1b4f64: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1b4f64u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1b4f68: 0x46043180  add.s       $f6, $f6, $f4
    ctx->pc = 0x1b4f68u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[4]);
    // 0x1b4f6c: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x1b4f6cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1b4f70: 0x46060182  mul.s       $f6, $f0, $f6
    ctx->pc = 0x1b4f70u;
    ctx->f[6] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x1b4f74: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x1b4f74u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1b4f78: 0x46064200  add.s       $f8, $f8, $f6
    ctx->pc = 0x1b4f78u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[6]);
    // 0x1b4f7c: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x1b4f7cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x1b4f80: 0x46080202  mul.s       $f8, $f0, $f8
    ctx->pc = 0x1b4f80u;
    ctx->f[8] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x1b4f84: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x1b4f84u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1b4f88: 0x46084a40  add.s       $f9, $f9, $f8
    ctx->pc = 0x1b4f88u;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[8]);
    // 0x1b4f8c: 0x46035280  add.s       $f10, $f10, $f3
    ctx->pc = 0x1b4f8cu;
    ctx->f[10] = FPU_ADD_S(ctx->f[10], ctx->f[3]);
    // 0x1b4f90: 0x46090242  mul.s       $f9, $f0, $f9
    ctx->pc = 0x1b4f90u;
    ctx->f[9] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
    // 0x1b4f94: 0x460a0042  mul.s       $f1, $f0, $f10
    ctx->pc = 0x1b4f94u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[10]);
    // 0x1b4f98: 0x46095ac0  add.s       $f11, $f11, $f9
    ctx->pc = 0x1b4f98u;
    ctx->f[11] = FPU_ADD_S(ctx->f[11], ctx->f[9]);
    // 0x1b4f9c: 0x4610006  bgez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B4F9Cu;
    {
        const bool branch_taken_0x1b4f9c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1B4FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4F9Cu;
        // 0x1b4fa0: 0x460b6002  mul.s       $f0, $f12, $f11 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[11]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4f9c) {
            ctx->pc = 0x1B4FB8u;
            return;
        }
    }
    ctx->pc = 0x1B4FA4u;
    // 0x1b4fa4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b4fa4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b4fa8: 0x46006802  mul.s       $f0, $f13, $f0
    ctx->pc = 0x1b4fa8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x1b4fac: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1B4FACu;
    {
        const bool branch_taken_0x1b4fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4FACu;
        // 0x1b4fb0: 0x46006801  sub.s       $f0, $f13, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4fac) {
            ctx->pc = 0x1B4FF0u;
            return;
        }
    }
    ctx->pc = 0x1B4FB4u;
    // 0x1b4fb4: 0x0  nop
    ctx->pc = 0x1b4fb4u;
    // NOP
    ctx->pc = 0x1b4fb8u;
}
