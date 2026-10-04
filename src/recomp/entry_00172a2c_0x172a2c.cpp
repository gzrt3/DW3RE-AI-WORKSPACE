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

// Function: entry_00172a2c
// Address: 0x172a2c - 0x172b34
void entry_00172a2c_0x172a2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00172a2c_0x172a2c");
#endif

    ctx->pc = 0x172a2cu;

    // 0x172a2c: 0xc4820dcc  lwc1        $f2, 0xDCC($a0)
    ctx->pc = 0x172a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x172a30: 0x25430090  addiu       $v1, $t2, 0x90
    ctx->pc = 0x172a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 144));
    // 0x172a34: 0xc5410094  lwc1        $f1, 0x94($t2)
    ctx->pc = 0x172a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172a38: 0x254600b0  addiu       $a2, $t2, 0xB0
    ctx->pc = 0x172a38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), 176));
    // 0x172a3c: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x172a3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x172a40: 0x0  nop
    ctx->pc = 0x172a40u;
    // NOP
    // 0x172a44: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x172A44u;
    {
        const bool branch_taken_0x172a44 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x172A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172A44u;
        // 0x172a48: 0x254700a0  addiu       $a3, $t2, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172a44) {
            ctx->pc = 0x172A5Cu;
            goto label_172a5c;
        }
    }
    ctx->pc = 0x172A4Cu;
    // 0x172a4c: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x172a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172a50: 0x46012842  mul.s       $f1, $f5, $f1
    ctx->pc = 0x172a50u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x172a54: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x172A54u;
    {
        const bool branch_taken_0x172a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172A54u;
        // 0x172a58: 0xe4c10004  swc1        $f1, 0x4($a2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x172a54) {
            ctx->pc = 0x172A74u;
            goto label_172a74;
        }
    }
    ctx->pc = 0x172A5Cu;
label_172a5c:
    // 0x172a5c: 0x0  nop
    ctx->pc = 0x172a5cu;
    // NOP
    // 0x172a60: 0xc4820d80  lwc1        $f2, 0xD80($a0)
    ctx->pc = 0x172a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x172a64: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x172a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172a68: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x172a68u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x172a6c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x172a6cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x172a70: 0xe4c10004  swc1        $f1, 0x4($a2)
    ctx->pc = 0x172a70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
label_172a74:
    // 0x172a74: 0x0  nop
    ctx->pc = 0x172a74u;
    // NOP
    // 0x172a78: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x172a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x172a7c: 0xc4820d84  lwc1        $f2, 0xD84($a0)
    ctx->pc = 0x172a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x172a80: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x172a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172a84: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x172a84u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x172a88: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x172a88u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x172a8c: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x172a8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x172a90: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x172a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x172a94: 0xc4820d84  lwc1        $f2, 0xD84($a0)
    ctx->pc = 0x172a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x172a98: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x172a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172a9c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x172a9cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x172aa0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x172aa0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x172aa4: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x172aa4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x172aa8: 0xc4c30008  lwc1        $f3, 0x8($a2)
    ctx->pc = 0x172aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x172aac: 0xc4820d84  lwc1        $f2, 0xD84($a0)
    ctx->pc = 0x172aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x172ab0: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x172ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x172ab4: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x172ab4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x172ab8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x172ab8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x172abc: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x172abcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x172ac0: 0x94830d70  lhu         $v1, 0xD70($a0)
    ctx->pc = 0x172ac0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 3440)));
    // 0x172ac4: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x172AC4u;
    {
        const bool branch_taken_0x172ac4 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x172ac4) {
            ctx->pc = 0x172AD8u;
            goto label_172ad8;
        }
    }
    ctx->pc = 0x172ACCu;
    // 0x172acc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x172accu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x172ad0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x172AD0u;
    {
        const bool branch_taken_0x172ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172AD0u;
        // 0x172ad4: 0x46800860  cvt.s.w     $f1, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x172ad0) {
            ctx->pc = 0x172AF4u;
            goto label_172af4;
        }
    }
    ctx->pc = 0x172AD8u;
label_172ad8:
    // 0x172ad8: 0x33042  srl         $a2, $v1, 1
    ctx->pc = 0x172ad8u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x172adc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x172adcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x172ae0: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x172ae0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x172ae4: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x172ae4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x172ae8: 0x0  nop
    ctx->pc = 0x172ae8u;
    // NOP
    // 0x172aec: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x172aecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x172af0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x172af0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_172af4:
    // 0x172af4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x172af4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x172af8: 0x0  nop
    ctx->pc = 0x172af8u;
    // NOP
    // 0x172afc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x172AFCu;
    {
        const bool branch_taken_0x172afc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x172afc) {
            ctx->pc = 0x172B14u;
            goto label_172b14;
        }
    }
    ctx->pc = 0x172B04u;
    // 0x172b04: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x172b04u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x172b08: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x172b08u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x172b0c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x172B0Cu;
    {
        const bool branch_taken_0x172b0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172B0Cu;
        // 0x172b10: 0xace3000c  sw          $v1, 0xC($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172b0c) {
            ctx->pc = 0x172B2Cu;
            goto label_172b2c;
        }
    }
    ctx->pc = 0x172B14u;
label_172b14:
    // 0x172b14: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x172b14u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x172b18: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x172b18u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x172b1c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x172b1cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x172b20: 0x0  nop
    ctx->pc = 0x172b20u;
    // NOP
    // 0x172b24: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x172b24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x172b28: 0xace3000c  sw          $v1, 0xC($a3)
    ctx->pc = 0x172b28u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 3));
label_172b2c:
    // 0x172b2c: 0x25290050  addiu       $t1, $t1, 0x50
    ctx->pc = 0x172b2cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 80));
    // 0x172b30: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x172b30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    ctx->pc = 0x172b34u;
}
