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

// Function: entry_0012f184
// Address: 0x12f184 - 0x12f230
void entry_0012f184_0x12f184(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012f184_0x12f184");
#endif

    ctx->pc = 0x12f184u;

    // 0x12f184: 0xc48202a8  lwc1        $f2, 0x2A8($a0)
    ctx->pc = 0x12f184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12f188: 0x3c033d49  lui         $v1, 0x3D49
    ctx->pc = 0x12f188u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15689 << 16));
    // 0x12f18c: 0x34650fdb  ori         $a1, $v1, 0xFDB
    ctx->pc = 0x12f18cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x12f190: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x12f190u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12f194: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x12f194u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x12f198: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x12f198u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x12f19c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x12f19cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12f1a0: 0x0  nop
    ctx->pc = 0x12f1a0u;
    // NOP
    // 0x12f1a4: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x12f1a4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x12f1a8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x12f1a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12f1ac: 0x0  nop
    ctx->pc = 0x12f1acu;
    // NOP
    // 0x12f1b0: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x12F1B0u;
    {
        const bool branch_taken_0x12f1b0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x12F1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F1B0u;
        // 0x12f1b4: 0xe48102a8  swc1        $f1, 0x2A8($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 680), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f1b0) {
            ctx->pc = 0x12F1D4u;
            goto label_12f1d4;
        }
    }
    ctx->pc = 0x12F1B8u;
    // 0x12f1b8: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x12f1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x12f1bc: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x12f1bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x12f1c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x12f1c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12f1c4: 0x0  nop
    ctx->pc = 0x12f1c4u;
    // NOP
    // 0x12f1c8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x12f1c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x12f1cc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x12F1CCu;
    {
        const bool branch_taken_0x12f1cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F1CCu;
        // 0x12f1d0: 0xe48002a8  swc1        $f0, 0x2A8($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 680), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f1cc) {
            ctx->pc = 0x12F208u;
            goto label_12f208;
        }
    }
    ctx->pc = 0x12F1D4u;
label_12f1d4:
    // 0x12f1d4: 0x3c03c049  lui         $v1, 0xC049
    ctx->pc = 0x12f1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49225 << 16));
    // 0x12f1d8: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x12f1d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x12f1dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x12f1dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12f1e0: 0x0  nop
    ctx->pc = 0x12f1e0u;
    // NOP
    // 0x12f1e4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x12f1e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12f1e8: 0x0  nop
    ctx->pc = 0x12f1e8u;
    // NOP
    // 0x12f1ec: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x12F1ECu;
    {
        const bool branch_taken_0x12f1ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12F1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F1ECu;
        // 0x12f1f0: 0x3c0340c9  lui         $v1, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f1ec) {
            ctx->pc = 0x12F208u;
            goto label_12f208;
        }
    }
    ctx->pc = 0x12F1F4u;
    // 0x12f1f4: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x12f1f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x12f1f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x12f1f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12f1fc: 0x0  nop
    ctx->pc = 0x12f1fcu;
    // NOP
    // 0x12f200: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x12f200u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x12f204: 0xe48002a8  swc1        $f0, 0x2A8($a0)
    ctx->pc = 0x12f204u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 680), bits); }
label_12f208:
    // 0x12f208: 0x948602e6  lhu         $a2, 0x2E6($a0)
    ctx->pc = 0x12f208u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 742)));
    // 0x12f20c: 0x278580e4  addiu       $a1, $gp, -0x7F1C
    ctx->pc = 0x12f20cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934756));
    // 0x12f210: 0x908302e3  lbu         $v1, 0x2E3($a0)
    ctx->pc = 0x12f210u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 739)));
    // 0x12f214: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x12f214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x12f218: 0x90a50000  lbu         $a1, 0x0($a1)
    ctx->pc = 0x12f218u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12f21c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x12f21cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x12f220: 0xa08302e3  sb          $v1, 0x2E3($a0)
    ctx->pc = 0x12f220u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 739), (uint8_t)GPR_U32(ctx, 3));
    // 0x12f224: 0x948302e6  lhu         $v1, 0x2E6($a0)
    ctx->pc = 0x12f224u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 742)));
    // 0x12f228: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x12f228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12f22c: 0xa48302e6  sh          $v1, 0x2E6($a0)
    ctx->pc = 0x12f22cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 742), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x12f230u;
}
