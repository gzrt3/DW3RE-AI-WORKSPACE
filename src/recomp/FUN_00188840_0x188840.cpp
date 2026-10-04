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

// Function: FUN_00188840
// Address: 0x188840 - 0x1889c0
void FUN_00188840_0x188840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00188840_0x188840");
#endif

    switch (ctx->pc) {
        case 0x1889a8u: goto label_1889a8;
        case 0x1889bcu: goto label_1889bc;
        default: break;
    }

    ctx->pc = 0x188840u;

    // 0x188840: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x188840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x188844: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x188844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x188848: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x188848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18884c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18884cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x188850: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x188850u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x188854: 0x90840231  lbu         $a0, 0x231($a0)
    ctx->pc = 0x188854u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 561)));
    // 0x188858: 0x1083000f  beq         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x188858u;
    {
        const bool branch_taken_0x188858 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x188858) {
            ctx->pc = 0x188898u;
            goto label_188898;
        }
    }
    ctx->pc = 0x188860u;
    // 0x188860: 0xc4a10150  lwc1        $f1, 0x150($a1)
    ctx->pc = 0x188860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x188864: 0xc6000150  lwc1        $f0, 0x150($s0)
    ctx->pc = 0x188864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188868: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x188868u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x18886c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18886cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x188870: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x188870u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x188874: 0x0  nop
    ctx->pc = 0x188874u;
    // NOP
    // 0x188878: 0xa603019c  sh          $v1, 0x19C($s0)
    ctx->pc = 0x188878u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 412), (uint16_t)GPR_U32(ctx, 3));
    // 0x18887c: 0xc4a10158  lwc1        $f1, 0x158($a1)
    ctx->pc = 0x18887cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x188880: 0xc6000158  lwc1        $f0, 0x158($s0)
    ctx->pc = 0x188880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x188884: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x188884u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x188888: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x188888u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x18888c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x18888cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x188890: 0x0  nop
    ctx->pc = 0x188890u;
    // NOP
    // 0x188894: 0xa603019e  sh          $v1, 0x19E($s0)
    ctx->pc = 0x188894u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 414), (uint16_t)GPR_U32(ctx, 3));
label_188898:
    // 0x188898: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x188898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x18889c: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x18889cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1888a0: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x1888a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x1888a4: 0x10600034  beqz        $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x1888A4u;
    {
        const bool branch_taken_0x1888a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1888a4) {
            ctx->pc = 0x188978u;
            goto label_188978;
        }
    }
    ctx->pc = 0x1888ACu;
    // 0x1888ac: 0x92040231  lbu         $a0, 0x231($s0)
    ctx->pc = 0x1888acu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 561)));
    // 0x1888b0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1888b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1888b4: 0x10830023  beq         $a0, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x1888B4u;
    {
        const bool branch_taken_0x1888b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1888b4) {
            ctx->pc = 0x188944u;
            goto label_188944;
        }
    }
    ctx->pc = 0x1888BCu;
    // 0x1888bc: 0xc6010260  lwc1        $f1, 0x260($s0)
    ctx->pc = 0x1888bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1888c0: 0x3c03481c  lui         $v1, 0x481C
    ctx->pc = 0x1888c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18460 << 16));
    // 0x1888c4: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x1888c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x1888c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1888c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1888cc: 0x0  nop
    ctx->pc = 0x1888ccu;
    // NOP
    // 0x1888d0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1888d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1888d4: 0x0  nop
    ctx->pc = 0x1888d4u;
    // NOP
    // 0x1888d8: 0x45000038  bc1f        . + 4 + (0x38 << 2)
    ctx->pc = 0x1888D8u;
    {
        const bool branch_taken_0x1888d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1888d8) {
            ctx->pc = 0x1889BCu;
            goto label_1889bc;
        }
    }
    ctx->pc = 0x1888E0u;
    // 0x1888e0: 0x90a30232  lbu         $v1, 0x232($a1)
    ctx->pc = 0x1888e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 562)));
    // 0x1888e4: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1888E4u;
    {
        const bool branch_taken_0x1888e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1888e4) {
            ctx->pc = 0x188934u;
            goto label_188934;
        }
    }
    ctx->pc = 0x1888ECu;
    // 0x1888ec: 0x8ca30024  lw          $v1, 0x24($a1)
    ctx->pc = 0x1888ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x1888f0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1888f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1888f4: 0x30630800  andi        $v1, $v1, 0x800
    ctx->pc = 0x1888f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
    // 0x1888f8: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1888F8u;
    {
        const bool branch_taken_0x1888f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1888f8) {
            ctx->pc = 0x188934u;
            goto label_188934;
        }
    }
    ctx->pc = 0x188900u;
    // 0x188900: 0x86040252  lh          $a0, 0x252($s0)
    ctx->pc = 0x188900u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 594)));
    // 0x188904: 0x3c035555  lui         $v1, 0x5555
    ctx->pc = 0x188904u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21845 << 16));
    // 0x188908: 0x34635556  ori         $v1, $v1, 0x5556
    ctx->pc = 0x188908u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21846);
    // 0x18890c: 0x86050222  lh          $a1, 0x222($s0)
    ctx->pc = 0x18890cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 546)));
    // 0x188910: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x188910u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x188914: 0x0  nop
    ctx->pc = 0x188914u;
    // NOP
    // 0x188918: 0x0  nop
    ctx->pc = 0x188918u;
    // NOP
    // 0x18891c: 0x1810  mfhi        $v1
    ctx->pc = 0x18891cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x188920: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x188920u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x188924: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x188924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x188928: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x188928u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x18892c: 0x10200023  beqz        $at, . + 4 + (0x23 << 2)
    ctx->pc = 0x18892Cu;
    {
        const bool branch_taken_0x18892c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x18892c) {
            ctx->pc = 0x1889BCu;
            goto label_1889bc;
        }
    }
    ctx->pc = 0x188934u;
label_188934:
    // 0x188934: 0x8e030194  lw          $v1, 0x194($s0)
    ctx->pc = 0x188934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 404)));
    // 0x188938: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x188938u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x18893c: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x18893Cu;
    {
        const bool branch_taken_0x18893c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18893Cu;
        // 0x188940: 0xae030194  sw          $v1, 0x194($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 404), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18893c) {
            ctx->pc = 0x1889BCu;
            goto label_1889bc;
        }
    }
    ctx->pc = 0x188944u;
label_188944:
    // 0x188944: 0xc6010260  lwc1        $f1, 0x260($s0)
    ctx->pc = 0x188944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x188948: 0x3c034a09  lui         $v1, 0x4A09
    ctx->pc = 0x188948u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18953 << 16));
    // 0x18894c: 0x34635440  ori         $v1, $v1, 0x5440
    ctx->pc = 0x18894cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21568);
    // 0x188950: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x188950u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x188954: 0x0  nop
    ctx->pc = 0x188954u;
    // NOP
    // 0x188958: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x188958u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18895c: 0x0  nop
    ctx->pc = 0x18895cu;
    // NOP
    // 0x188960: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x188960u;
    {
        const bool branch_taken_0x188960 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x188960) {
            ctx->pc = 0x1889BCu;
            goto label_1889bc;
        }
    }
    ctx->pc = 0x188968u;
    // 0x188968: 0x8e030194  lw          $v1, 0x194($s0)
    ctx->pc = 0x188968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 404)));
    // 0x18896c: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x18896cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x188970: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x188970u;
    {
        const bool branch_taken_0x188970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188970u;
        // 0x188974: 0xae030194  sw          $v1, 0x194($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 404), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188970) {
            ctx->pc = 0x1889BCu;
            goto label_1889bc;
        }
    }
    ctx->pc = 0x188978u;
label_188978:
    // 0x188978: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x188978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18897c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18897cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x188980: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x188980u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x188984: 0x0  nop
    ctx->pc = 0x188984u;
    // NOP
    // 0x188988: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x188988u;
    {
        const bool branch_taken_0x188988 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x18898Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188988u;
        // 0x18898c: 0x418c3  sra         $v1, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188988) {
            ctx->pc = 0x188998u;
            goto label_188998;
        }
    }
    ctx->pc = 0x188990u;
    // 0x188990: 0x24830007  addiu       $v1, $a0, 0x7
    ctx->pc = 0x188990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 7));
    // 0x188994: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x188994u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
label_188998:
    // 0x188998: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x188998u;
    {
        const bool branch_taken_0x188998 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18899Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188998u;
        // 0x18899c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188998) {
            ctx->pc = 0x1889BCu;
            goto label_1889bc;
        }
    }
    ctx->pc = 0x1889A0u;
    // 0x1889a0: 0xc062348  jal         func_188D20
    ctx->pc = 0x1889A0u;
    SET_GPR_U32(ctx, 31, 0x1889A8u);
    ctx->pc = 0x188D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x188D20u, 0x1889A0u, 0x1889A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1889A8u;
label_1889a8:
    // 0x1889a8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1889a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1889ac: 0x4a00003  bltz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1889ACu;
    {
        const bool branch_taken_0x1889ac = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x1889B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1889ACu;
        // 0x1889b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1889ac) {
            ctx->pc = 0x1889BCu;
            goto label_1889bc;
        }
    }
    ctx->pc = 0x1889B4u;
    // 0x1889b4: 0xc062274  jal         func_1889D0
    ctx->pc = 0x1889B4u;
    SET_GPR_U32(ctx, 31, 0x1889BCu);
    ctx->pc = 0x1889D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1889D0u, 0x1889B4u, 0x1889BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1889BCu;
label_1889bc:
    // 0x1889bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1889bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x1889c0u;
}
