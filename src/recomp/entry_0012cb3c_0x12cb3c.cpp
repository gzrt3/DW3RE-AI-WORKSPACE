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

// Function: entry_0012cb3c
// Address: 0x12cb3c - 0x12cb9c
void entry_0012cb3c_0x12cb3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012cb3c_0x12cb3c");
#endif

    ctx->pc = 0x12cb3cu;

    // 0x12cb3c: 0x10200017  beqz        $at, . + 4 + (0x17 << 2)
    ctx->pc = 0x12CB3Cu;
    {
        const bool branch_taken_0x12cb3c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x12cb3c) {
            ctx->pc = 0x12CB9Cu;
            return;
        }
    }
    ctx->pc = 0x12CB44u;
    // 0x12cb44: 0xc6010300  lwc1        $f1, 0x300($s0)
    ctx->pc = 0x12cb44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12cb48: 0x3c024210  lui         $v0, 0x4210
    ctx->pc = 0x12cb48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16912 << 16));
    // 0x12cb4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12cb4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12cb50: 0x0  nop
    ctx->pc = 0x12cb50u;
    // NOP
    // 0x12cb54: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x12cb54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12cb58: 0x0  nop
    ctx->pc = 0x12cb58u;
    // NOP
    // 0x12cb5c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x12CB5Cu;
    {
        const bool branch_taken_0x12cb5c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x12CB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CB5Cu;
        // 0x12cb60: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cb5c) {
            ctx->pc = 0x12CB74u;
            goto label_12cb74;
        }
    }
    ctx->pc = 0x12CB64u;
    // 0x12cb64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12cb64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12cb68: 0x0  nop
    ctx->pc = 0x12cb68u;
    // NOP
    // 0x12cb6c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x12cb6cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x12cb70: 0xe6000300  swc1        $f0, 0x300($s0)
    ctx->pc = 0x12cb70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 768), bits); }
label_12cb74:
    // 0x12cb74: 0x960202e6  lhu         $v0, 0x2E6($s0)
    ctx->pc = 0x12cb74u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 742)));
    // 0x12cb78: 0x28410029  slti        $at, $v0, 0x29
    ctx->pc = 0x12cb78u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x12cb7c: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x12CB7Cu;
    {
        const bool branch_taken_0x12cb7c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x12cb7c) {
            ctx->pc = 0x12CB9Cu;
            return;
        }
    }
    ctx->pc = 0x12CB84u;
    // 0x12cb84: 0x920202e3  lbu         $v0, 0x2E3($s0)
    ctx->pc = 0x12cb84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 739)));
    // 0x12cb88: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x12cb88u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x12cb8c: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x12CB8Cu;
    {
        const bool branch_taken_0x12cb8c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x12cb8c) {
            ctx->pc = 0x12CB9Cu;
            return;
        }
    }
    ctx->pc = 0x12CB94u;
    // 0x12cb94: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x12cb94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x12cb98: 0xa20202e3  sb          $v0, 0x2E3($s0)
    ctx->pc = 0x12cb98u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 739), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x12cb9cu;
}
