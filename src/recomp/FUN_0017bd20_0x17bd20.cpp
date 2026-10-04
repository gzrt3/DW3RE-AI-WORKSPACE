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

// Function: FUN_0017bd20
// Address: 0x17bd20 - 0x17bef0
void FUN_0017bd20_0x17bd20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0017bd20_0x17bd20");
#endif

    ctx->pc = 0x17bd20u;

    // 0x17bd20: 0x8f858800  lw          $a1, -0x7800($gp)
    ctx->pc = 0x17bd20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936576)));
    // 0x17bd24: 0x3c0340e0  lui         $v1, 0x40E0
    ctx->pc = 0x17bd24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16608 << 16));
    // 0x17bd28: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17bd28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17bd2c: 0x8f848454  lw          $a0, -0x7BAC($gp)
    ctx->pc = 0x17bd2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935636)));
    // 0x17bd30: 0x30a3000f  andi        $v1, $a1, 0xF
    ctx->pc = 0x17bd30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x17bd34: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x17bd34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17bd38: 0x0  nop
    ctx->pc = 0x17bd38u;
    // NOP
    // 0x17bd3c: 0x468009e0  cvt.s.w     $f7, $f1
    ctx->pc = 0x17bd3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[7] = FPU_CVT_S_W(tmp); }
    // 0x17bd40: 0x460039c3  div.s       $f7, $f7, $f0
    ctx->pc = 0x17bd40u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[7] = copysignf(INFINITY, ctx->f[7] * 0.0f); } else ctx->f[7] = ctx->f[7] / ctx->f[0];
    // 0x17bd44: 0x0  nop
    ctx->pc = 0x17bd44u;
    // NOP
    // 0x17bd48: 0x0  nop
    ctx->pc = 0x17bd48u;
    // NOP
    // 0x17bd4c: 0x10800074  beqz        $a0, . + 4 + (0x74 << 2)
    ctx->pc = 0x17BD4Cu;
    {
        const bool branch_taken_0x17bd4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x17bd4c) {
            ctx->pc = 0x17BF20u;
            return;
        }
    }
    ctx->pc = 0x17BD54u;
    // 0x17bd54: 0x3c053c23  lui         $a1, 0x3C23
    ctx->pc = 0x17bd54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15395 << 16));
    // 0x17bd58: 0x3c063f00  lui         $a2, 0x3F00
    ctx->pc = 0x17bd58u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16128 << 16));
    // 0x17bd5c: 0x34a5d70a  ori         $a1, $a1, 0xD70A
    ctx->pc = 0x17bd5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)55050);
    // 0x17bd60: 0x3c033e0f  lui         $v1, 0x3E0F
    ctx->pc = 0x17bd60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15887 << 16));
    // 0x17bd64: 0x44853000  mtc1        $a1, $f6
    ctx->pc = 0x17bd64u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x17bd68: 0x34635c29  ori         $v1, $v1, 0x5C29
    ctx->pc = 0x17bd68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)23593);
    // 0x17bd6c: 0x44862000  mtc1        $a2, $f4
    ctx->pc = 0x17bd6cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x17bd70: 0x3c094140  lui         $t1, 0x4140
    ctx->pc = 0x17bd70u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16704 << 16));
    // 0x17bd74: 0x3c053dcc  lui         $a1, 0x3DCC
    ctx->pc = 0x17bd74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15820 << 16));
    // 0x17bd78: 0x34a5cccd  ori         $a1, $a1, 0xCCCD
    ctx->pc = 0x17bd78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52429);
    // 0x17bd7c: 0x3c06bc23  lui         $a2, 0xBC23
    ctx->pc = 0x17bd7cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)48163 << 16));
    // 0x17bd80: 0x44852800  mtc1        $a1, $f5
    ctx->pc = 0x17bd80u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x17bd84: 0x34cbd70a  ori         $t3, $a2, 0xD70A
    ctx->pc = 0x17bd84u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)55050);
    // 0x17bd88: 0x3c05c049  lui         $a1, 0xC049
    ctx->pc = 0x17bd88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49225 << 16));
    // 0x17bd8c: 0x34a50fdb  ori         $a1, $a1, 0xFDB
    ctx->pc = 0x17bd8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4059);
    // 0x17bd90: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x17bd90u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x17bd94: 0x3c05bdcc  lui         $a1, 0xBDCC
    ctx->pc = 0x17bd94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48588 << 16));
    // 0x17bd98: 0x34a5cccd  ori         $a1, $a1, 0xCCCD
    ctx->pc = 0x17bd98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52429);
    // 0x17bd9c: 0x44854000  mtc1        $a1, $f8
    ctx->pc = 0x17bd9cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x17bda0: 0x3c053d8f  lui         $a1, 0x3D8F
    ctx->pc = 0x17bda0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15759 << 16));
    // 0x17bda4: 0x34aa5c29  ori         $t2, $a1, 0x5C29
    ctx->pc = 0x17bda4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)23593);
    // 0x17bda8: 0x3c05be4c  lui         $a1, 0xBE4C
    ctx->pc = 0x17bda8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48716 << 16));
    // 0x17bdac: 0x34a8cccd  ori         $t0, $a1, 0xCCCD
    ctx->pc = 0x17bdacu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52429);
    // 0x17bdb0: 0x3c053f20  lui         $a1, 0x3F20
    ctx->pc = 0x17bdb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16160 << 16));
    // 0x17bdb4: 0x34a6d97c  ori         $a2, $a1, 0xD97C
    ctx->pc = 0x17bdb4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)55676);
    // 0x17bdb8: 0x3c0540c9  lui         $a1, 0x40C9
    ctx->pc = 0x17bdb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16585 << 16));
    // 0x17bdbc: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x17bdbcu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17bdc0: 0x34a50fdb  ori         $a1, $a1, 0xFDB
    ctx->pc = 0x17bdc0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4059);
    // 0x17bdc4: 0x44854800  mtc1        $a1, $f9
    ctx->pc = 0x17bdc4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x17bdc8: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x17bdc8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
    // 0x17bdcc: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x17bdccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17bdd0: 0x30e50100  andi        $a1, $a3, 0x100
    ctx->pc = 0x17bdd0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)256);
    // 0x17bdd4: 0x10a0002b  beqz        $a1, . + 4 + (0x2B << 2)
    ctx->pc = 0x17BDD4u;
    {
        const bool branch_taken_0x17bdd4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x17bdd4) {
            ctx->pc = 0x17BE84u;
            goto label_17be84;
        }
    }
    ctx->pc = 0x17BDDCu;
    // 0x17bddc: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x17bddcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x17bde0: 0x46003847  neg.s       $f1, $f7
    ctx->pc = 0x17bde0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[7]);
    // 0x17bde4: 0xac83002c  sw          $v1, 0x2C($a0)
    ctx->pc = 0x17bde4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 3));
    // 0x17bde8: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x17bde8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x17bdec: 0xc4820020  lwc1        $f2, 0x20($a0)
    ctx->pc = 0x17bdecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x17bdf0: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x17bdf0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17bdf4: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x17bdf4u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x17bdf8: 0x46023082  mul.s       $f2, $f6, $f2
    ctx->pc = 0x17bdf8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
    // 0x17bdfc: 0xe4820034  swc1        $f2, 0x34($a0)
    ctx->pc = 0x17bdfcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x17be00: 0xc4820020  lwc1        $f2, 0x20($a0)
    ctx->pc = 0x17be00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x17be04: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x17be04u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x17be08: 0xe4820030  swc1        $f2, 0x30($a0)
    ctx->pc = 0x17be08u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x17be0c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x17BE0Cu;
    {
        const bool branch_taken_0x17be0c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x17BE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BE0Cu;
        // 0x17be10: 0xe4810024  swc1        $f1, 0x24($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17be0c) {
            ctx->pc = 0x17BE1Cu;
            goto label_17be1c;
        }
    }
    ctx->pc = 0x17BE14u;
    // 0x17be14: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x17BE14u;
    {
        const bool branch_taken_0x17be14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BE14u;
        // 0x17be18: 0xac8b0024  sw          $t3, 0x24($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17be14) {
            ctx->pc = 0x17BE34u;
            goto label_17be34;
        }
    }
    ctx->pc = 0x17BE1Cu;
label_17be1c:
    // 0x17be1c: 0x0  nop
    ctx->pc = 0x17be1cu;
    // NOP
    // 0x17be20: 0x46080836  c.le.s      $f1, $f8
    ctx->pc = 0x17be20u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17be24: 0x0  nop
    ctx->pc = 0x17be24u;
    // NOP
    // 0x17be28: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x17BE28u;
    {
        const bool branch_taken_0x17be28 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17be28) {
            ctx->pc = 0x17BE34u;
            goto label_17be34;
        }
    }
    ctx->pc = 0x17BE30u;
    // 0x17be30: 0xe4880024  swc1        $f8, 0x24($a0)
    ctx->pc = 0x17be30u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
label_17be34:
    // 0x17be34: 0x0  nop
    ctx->pc = 0x17be34u;
    // NOP
    // 0x17be38: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x17be38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x17be3c: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x17BE3Cu;
    {
        const bool branch_taken_0x17be3c = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x17BE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BE3Cu;
        // 0x17be40: 0x53842  srl         $a3, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17be3c) {
            ctx->pc = 0x17BE50u;
            goto label_17be50;
        }
    }
    ctx->pc = 0x17BE44u;
    // 0x17be44: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x17be44u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17be48: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x17BE48u;
    {
        const bool branch_taken_0x17be48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BE48u;
        // 0x17be4c: 0x468008a0  cvt.s.w     $f2, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17be48) {
            ctx->pc = 0x17BE68u;
            goto label_17be68;
        }
    }
    ctx->pc = 0x17BE50u;
label_17be50:
    // 0x17be50: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x17be50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x17be54: 0xe53825  or          $a3, $a3, $a1
    ctx->pc = 0x17be54u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 5));
    // 0x17be58: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x17be58u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17be5c: 0x0  nop
    ctx->pc = 0x17be5cu;
    // NOP
    // 0x17be60: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x17be60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x17be64: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x17be64u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_17be68:
    // 0x17be68: 0xc4810020  lwc1        $f1, 0x20($a0)
    ctx->pc = 0x17be68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17be6c: 0x0  nop
    ctx->pc = 0x17be6cu;
    // NOP
    // 0x17be70: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x17be70u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
    // 0x17be74: 0x0  nop
    ctx->pc = 0x17be74u;
    // NOP
    // 0x17be78: 0x0  nop
    ctx->pc = 0x17be78u;
    // NOP
    // 0x17be7c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x17BE7Cu;
    {
        const bool branch_taken_0x17be7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BE7Cu;
        // 0x17be80: 0xe4810038  swc1        $f1, 0x38($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17be7c) {
            ctx->pc = 0x17BEE4u;
            goto label_17bee4;
        }
    }
    ctx->pc = 0x17BE84u;
label_17be84:
    // 0x17be84: 0x0  nop
    ctx->pc = 0x17be84u;
    // NOP
    // 0x17be88: 0x30e50200  andi        $a1, $a3, 0x200
    ctx->pc = 0x17be88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)512);
    // 0x17be8c: 0x10a00015  beqz        $a1, . + 4 + (0x15 << 2)
    ctx->pc = 0x17BE8Cu;
    {
        const bool branch_taken_0x17be8c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x17be8c) {
            ctx->pc = 0x17BEE4u;
            goto label_17bee4;
        }
    }
    ctx->pc = 0x17BE94u;
    // 0x17be94: 0xac8a003c  sw          $t2, 0x3C($a0)
    ctx->pc = 0x17be94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 10));
    // 0x17be98: 0xac890030  sw          $t1, 0x30($a0)
    ctx->pc = 0x17be98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 9));
    // 0x17be9c: 0xac880034  sw          $t0, 0x34($a0)
    ctx->pc = 0x17be9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 8));
    // 0x17bea0: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x17bea0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x17bea4: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x17bea4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x17bea8: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x17BEA8u;
    {
        const bool branch_taken_0x17bea8 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x17BEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BEA8u;
        // 0x17beac: 0x53842  srl         $a3, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bea8) {
            ctx->pc = 0x17BEBCu;
            goto label_17bebc;
        }
    }
    ctx->pc = 0x17BEB0u;
    // 0x17beb0: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x17beb0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17beb4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x17BEB4u;
    {
        const bool branch_taken_0x17beb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BEB4u;
        // 0x17beb8: 0x468008a0  cvt.s.w     $f2, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17beb4) {
            ctx->pc = 0x17BED4u;
            goto label_17bed4;
        }
    }
    ctx->pc = 0x17BEBCu;
label_17bebc:
    // 0x17bebc: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x17bebcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x17bec0: 0xe53825  or          $a3, $a3, $a1
    ctx->pc = 0x17bec0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 5));
    // 0x17bec4: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x17bec4u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17bec8: 0x0  nop
    ctx->pc = 0x17bec8u;
    // NOP
    // 0x17becc: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x17beccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x17bed0: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x17bed0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_17bed4:
    // 0x17bed4: 0xc481001c  lwc1        $f1, 0x1C($a0)
    ctx->pc = 0x17bed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17bed8: 0x0  nop
    ctx->pc = 0x17bed8u;
    // NOP
    // 0x17bedc: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x17bedcu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
    // 0x17bee0: 0xe4810038  swc1        $f1, 0x38($a0)
    ctx->pc = 0x17bee0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
label_17bee4:
    // 0x17bee4: 0x0  nop
    ctx->pc = 0x17bee4u;
    // NOP
    // 0x17bee8: 0xe4870028  swc1        $f7, 0x28($a0)
    ctx->pc = 0x17bee8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x17beec: 0x460039c0  add.s       $f7, $f7, $f0
    ctx->pc = 0x17beecu;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[0]);
    ctx->pc = 0x17bef0u;
}
