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

// Function: FUN_001116f0
// Address: 0x1116f0 - 0x111858
void FUN_001116f0_0x1116f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001116f0_0x1116f0");
#endif

    ctx->pc = 0x1116f0u;

    // 0x1116f0: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x1116f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1116f4: 0x3c0368db  lui         $v1, 0x68DB
    ctx->pc = 0x1116f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26843 << 16));
    // 0x1116f8: 0x34678bad  ori         $a3, $v1, 0x8BAD
    ctx->pc = 0x1116f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)35757);
    // 0x1116fc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1116fcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x111700: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x111700u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x111704: 0x0  nop
    ctx->pc = 0x111704u;
    // NOP
    // 0x111708: 0xe30018  mult        $zero, $a3, $v1
    ctx->pc = 0x111708u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x11170c: 0x337c2  srl         $a2, $v1, 31
    ctx->pc = 0x11170cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x111710: 0x0  nop
    ctx->pc = 0x111710u;
    // NOP
    // 0x111714: 0x1810  mfhi        $v1
    ctx->pc = 0x111714u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x111718: 0x31ac3  sra         $v1, $v1, 11
    ctx->pc = 0x111718u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 11));
    // 0x11171c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x11171cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x111720: 0xa0830026  sb          $v1, 0x26($a0)
    ctx->pc = 0x111720u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 38), (uint8_t)GPR_U32(ctx, 3));
    // 0x111724: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x111724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x111728: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x111728u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x11172c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x11172cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x111730: 0x0  nop
    ctx->pc = 0x111730u;
    // NOP
    // 0x111734: 0xe30018  mult        $zero, $a3, $v1
    ctx->pc = 0x111734u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x111738: 0x337c2  srl         $a2, $v1, 31
    ctx->pc = 0x111738u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x11173c: 0x0  nop
    ctx->pc = 0x11173cu;
    // NOP
    // 0x111740: 0x1810  mfhi        $v1
    ctx->pc = 0x111740u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x111744: 0x31ac3  sra         $v1, $v1, 11
    ctx->pc = 0x111744u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 11));
    // 0x111748: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x111748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x11174c: 0xa0830027  sb          $v1, 0x27($a0)
    ctx->pc = 0x11174cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 39), (uint8_t)GPR_U32(ctx, 3));
    // 0x111750: 0x90890027  lbu         $t1, 0x27($a0)
    ctx->pc = 0x111750u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 39)));
    // 0x111754: 0x5200004  bltz        $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x111754u;
    {
        const bool branch_taken_0x111754 = (GPR_S32(ctx, 9) < 0);
        ctx->pc = 0x111758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111754u;
        // 0x111758: 0x93042  srl         $a2, $t1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111754) {
            ctx->pc = 0x111768u;
            goto label_111768;
        }
    }
    ctx->pc = 0x11175Cu;
    // 0x11175c: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x11175cu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x111760: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x111760u;
    {
        const bool branch_taken_0x111760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111760u;
        // 0x111764: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x111760) {
            ctx->pc = 0x111780u;
            goto label_111780;
        }
    }
    ctx->pc = 0x111768u;
label_111768:
    // 0x111768: 0x31230001  andi        $v1, $t1, 0x1
    ctx->pc = 0x111768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
    // 0x11176c: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x11176cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x111770: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x111770u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x111774: 0x0  nop
    ctx->pc = 0x111774u;
    // NOP
    // 0x111778: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x111778u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x11177c: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x11177cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_111780:
    // 0x111780: 0x3c03459c  lui         $v1, 0x459C
    ctx->pc = 0x111780u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17820 << 16));
    // 0x111784: 0x90870026  lbu         $a3, 0x26($a0)
    ctx->pc = 0x111784u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 38)));
    // 0x111788: 0x34664000  ori         $a2, $v1, 0x4000
    ctx->pc = 0x111788u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x11178c: 0x44861000  mtc1        $a2, $f2
    ctx->pc = 0x11178cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x111790: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x111790u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
    // 0x111794: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x111794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x111798: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x111798u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x11179c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x11179cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x1117a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1117a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1117a4: 0x0  nop
    ctx->pc = 0x1117a4u;
    // NOP
    // 0x1117a8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1117a8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x1117ac: 0x0  nop
    ctx->pc = 0x1117acu;
    // NOP
    // 0x1117b0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1117b0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1117b4: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x1117b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x1117b8: 0x4e00004  bltz        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1117B8u;
    {
        const bool branch_taken_0x1117b8 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x1117BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1117B8u;
        // 0x1117bc: 0x73042  srl         $a2, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1117b8) {
            ctx->pc = 0x1117CCu;
            goto label_1117cc;
        }
    }
    ctx->pc = 0x1117C0u;
    // 0x1117c0: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x1117c0u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1117c4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1117C4u;
    {
        const bool branch_taken_0x1117c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1117C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1117C4u;
        // 0x1117c8: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1117c4) {
            ctx->pc = 0x1117E4u;
            goto label_1117e4;
        }
    }
    ctx->pc = 0x1117CCu;
label_1117cc:
    // 0x1117cc: 0x30e30001  andi        $v1, $a3, 0x1
    ctx->pc = 0x1117ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
    // 0x1117d0: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1117d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1117d4: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1117d4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1117d8: 0x0  nop
    ctx->pc = 0x1117d8u;
    // NOP
    // 0x1117dc: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x1117dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1117e0: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x1117e0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_1117e4:
    // 0x1117e4: 0x3c03459c  lui         $v1, 0x459C
    ctx->pc = 0x1117e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17820 << 16));
    // 0x1117e8: 0x240c0005  addiu       $t4, $zero, 0x5
    ctx->pc = 0x1117e8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1117ec: 0x34664000  ori         $a2, $v1, 0x4000
    ctx->pc = 0x1117ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x1117f0: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x1117f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x1117f4: 0x44861000  mtc1        $a2, $f2
    ctx->pc = 0x1117f4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1117f8: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x1117f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
    // 0x1117fc: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x1117fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x111800: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x111800u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x111804: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x111804u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x111808: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x111808u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x11180c: 0x312500ff  andi        $a1, $t1, 0xFF
    ctx->pc = 0x11180cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x111810: 0xc74821  addu        $t1, $a2, $a3
    ctx->pc = 0x111810u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x111814: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x111814u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x111818: 0x0  nop
    ctx->pc = 0x111818u;
    // NOP
    // 0x11181c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x11181cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x111820: 0x3c036666  lui         $v1, 0x6666
    ctx->pc = 0x111820u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26214 << 16));
    // 0x111824: 0x346b6667  ori         $t3, $v1, 0x6667
    ctx->pc = 0x111824u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26215);
    // 0x111828: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x111828u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x11182c: 0x655021  addu        $t2, $v1, $a1
    ctx->pc = 0x11182cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x111830: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x111830u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x111834: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x111834u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x111838: 0x0  nop
    ctx->pc = 0x111838u;
    // NOP
    // 0x11183c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x11183cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x111840: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x111840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x111844: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x111844u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x111848: 0x1680018  mult        $zero, $t3, $t0
    ctx->pc = 0x111848u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x11184c: 0x82fc2  srl         $a1, $t0, 31
    ctx->pc = 0x11184cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 8), 31));
    // 0x111850: 0x0  nop
    ctx->pc = 0x111850u;
    // NOP
    // 0x111854: 0x1810  mfhi        $v1
    ctx->pc = 0x111854u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    ctx->pc = 0x111858u;
}
