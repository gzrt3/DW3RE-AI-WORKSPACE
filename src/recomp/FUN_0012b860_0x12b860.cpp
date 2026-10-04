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

// Function: FUN_0012b860
// Address: 0x12b860 - 0x12b9cc
void FUN_0012b860_0x12b860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0012b860_0x12b860");
#endif

    switch (ctx->pc) {
        case 0x12b88cu: goto label_12b88c;
        case 0x12b8acu: goto label_12b8ac;
        default: break;
    }

    ctx->pc = 0x12b860u;

    // 0x12b860: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12b860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12b864: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x12b864u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x12b868: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12b868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12b86c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x12b86cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12b870: 0x9025a3ea  lbu         $a1, -0x5C16($at)
    ctx->pc = 0x12b870u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)FAST_READ8(0x30A3EAu));
    // 0x12b874: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12B874u;
    {
        const bool branch_taken_0x12b874 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x12b874) {
            ctx->pc = 0x12B884u;
            goto label_12b884;
        }
    }
    ctx->pc = 0x12B87Cu;
    // 0x12b87c: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x12B87Cu;
    {
        const bool branch_taken_0x12b87c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x12b87c) {
            ctx->pc = 0x12B894u;
            goto label_12b894;
        }
    }
    ctx->pc = 0x12B884u;
label_12b884:
    // 0x12b884: 0xc0591f4  jal         func_1647D0
    ctx->pc = 0x12B884u;
    SET_GPR_U32(ctx, 31, 0x12B88Cu);
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x12B884u, 0x12B88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B88Cu;
label_12b88c:
    // 0x12b88c: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x12B88Cu;
    {
        const bool branch_taken_0x12b88c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B88Cu;
        // 0x12b890: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b88c) {
            ctx->pc = 0x12B9CCu;
            return;
        }
    }
    ctx->pc = 0x12B894u;
label_12b894:
    // 0x12b894: 0x94830d72  lhu         $v1, 0xD72($a0)
    ctx->pc = 0x12b894u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 3442)));
    // 0x12b898: 0x28610021  slti        $at, $v1, 0x21
    ctx->pc = 0x12b898u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x12b89c: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x12B89Cu;
    {
        const bool branch_taken_0x12b89c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B89Cu;
        // 0x12b8a0: 0x28610011  slti        $at, $v1, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b89c) {
            ctx->pc = 0x12B8B4u;
            goto label_12b8b4;
        }
    }
    ctx->pc = 0x12B8A4u;
    // 0x12b8a4: 0xc0591f4  jal         func_1647D0
    ctx->pc = 0x12B8A4u;
    SET_GPR_U32(ctx, 31, 0x12B8ACu);
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x12B8A4u, 0x12B8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B8ACu;
label_12b8ac:
    // 0x12b8ac: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x12B8ACu;
    {
        const bool branch_taken_0x12b8ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b8ac) {
            ctx->pc = 0x12B9C8u;
            goto label_12b9c8;
        }
    }
    ctx->pc = 0x12B8B4u;
label_12b8b4:
    // 0x12b8b4: 0x14200009  bnez        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x12B8B4u;
    {
        const bool branch_taken_0x12b8b4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x12b8b4) {
            ctx->pc = 0x12B8DCu;
            goto label_12b8dc;
        }
    }
    ctx->pc = 0x12B8BCu;
    // 0x12b8bc: 0x94830d70  lhu         $v1, 0xD70($a0)
    ctx->pc = 0x12b8bcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 3440)));
    // 0x12b8c0: 0x28610006  slti        $at, $v1, 0x6
    ctx->pc = 0x12b8c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x12b8c4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x12B8C4u;
    {
        const bool branch_taken_0x12b8c4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x12b8c4) {
            ctx->pc = 0x12B8D4u;
            goto label_12b8d4;
        }
    }
    ctx->pc = 0x12B8CCu;
    // 0x12b8cc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x12B8CCu;
    {
        const bool branch_taken_0x12b8cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B8CCu;
        // 0x12b8d0: 0xa4800d70  sh          $zero, 0xD70($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 3440), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b8cc) {
            ctx->pc = 0x12B8DCu;
            goto label_12b8dc;
        }
    }
    ctx->pc = 0x12B8D4u;
label_12b8d4:
    // 0x12b8d4: 0x2463fffa  addiu       $v1, $v1, -0x6
    ctx->pc = 0x12b8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
    // 0x12b8d8: 0xa4830d70  sh          $v1, 0xD70($a0)
    ctx->pc = 0x12b8d8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 3440), (uint16_t)GPR_U32(ctx, 3));
label_12b8dc:
    // 0x12b8dc: 0x94850d72  lhu         $a1, 0xD72($a0)
    ctx->pc = 0x12b8dcu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 3442)));
    // 0x12b8e0: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x12b8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x12b8e4: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x12b8e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x12b8e8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x12b8e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12b8ec: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x12b8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x12b8f0: 0xa4830d72  sh          $v1, 0xD72($a0)
    ctx->pc = 0x12b8f0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 3442), (uint16_t)GPR_U32(ctx, 3));
    // 0x12b8f4: 0xc4810d80  lwc1        $f1, 0xD80($a0)
    ctx->pc = 0x12b8f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12b8f8: 0xc48000b4  lwc1        $f0, 0xB4($a0)
    ctx->pc = 0x12b8f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12b8fc: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x12b8fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x12b900: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x12b900u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x12b904: 0xe48000b4  swc1        $f0, 0xB4($a0)
    ctx->pc = 0x12b904u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 180), bits); }
    // 0x12b908: 0xc48200b0  lwc1        $f2, 0xB0($a0)
    ctx->pc = 0x12b908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12b90c: 0xc4810d84  lwc1        $f1, 0xD84($a0)
    ctx->pc = 0x12b90cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12b910: 0xc4800090  lwc1        $f0, 0x90($a0)
    ctx->pc = 0x12b910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12b914: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x12b914u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x12b918: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x12b918u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x12b91c: 0xe4800090  swc1        $f0, 0x90($a0)
    ctx->pc = 0x12b91cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 144), bits); }
    // 0x12b920: 0xc48200b4  lwc1        $f2, 0xB4($a0)
    ctx->pc = 0x12b920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12b924: 0xc4810d84  lwc1        $f1, 0xD84($a0)
    ctx->pc = 0x12b924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12b928: 0xc4800094  lwc1        $f0, 0x94($a0)
    ctx->pc = 0x12b928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12b92c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x12b92cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x12b930: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x12b930u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x12b934: 0xe4800094  swc1        $f0, 0x94($a0)
    ctx->pc = 0x12b934u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 148), bits); }
    // 0x12b938: 0xc48200b8  lwc1        $f2, 0xB8($a0)
    ctx->pc = 0x12b938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12b93c: 0xc4810d84  lwc1        $f1, 0xD84($a0)
    ctx->pc = 0x12b93cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12b940: 0xc4800098  lwc1        $f0, 0x98($a0)
    ctx->pc = 0x12b940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12b944: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x12b944u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x12b948: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x12b948u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x12b94c: 0xe4800098  swc1        $f0, 0x98($a0)
    ctx->pc = 0x12b94cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 152), bits); }
    // 0x12b950: 0x94830d70  lhu         $v1, 0xD70($a0)
    ctx->pc = 0x12b950u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 3440)));
    // 0x12b954: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x12B954u;
    {
        const bool branch_taken_0x12b954 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x12B958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B954u;
        // 0x12b958: 0x32842  srl         $a1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b954) {
            ctx->pc = 0x12B968u;
            goto label_12b968;
        }
    }
    ctx->pc = 0x12B95Cu;
    // 0x12b95c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x12b95cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12b960: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x12B960u;
    {
        const bool branch_taken_0x12b960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B960u;
        // 0x12b964: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b960) {
            ctx->pc = 0x12B980u;
            goto label_12b980;
        }
    }
    ctx->pc = 0x12B968u;
label_12b968:
    // 0x12b968: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x12b968u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x12b96c: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x12b96cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x12b970: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x12b970u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12b974: 0x0  nop
    ctx->pc = 0x12b974u;
    // NOP
    // 0x12b978: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x12b978u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x12b97c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x12b97cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_12b980:
    // 0x12b980: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x12b980u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x12b984: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x12b984u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12b988: 0x0  nop
    ctx->pc = 0x12b988u;
    // NOP
    // 0x12b98c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x12b98cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12b990: 0x0  nop
    ctx->pc = 0x12b990u;
    // NOP
    // 0x12b994: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x12B994u;
    {
        const bool branch_taken_0x12b994 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x12b994) {
            ctx->pc = 0x12B9ACu;
            goto label_12b9ac;
        }
    }
    ctx->pc = 0x12B99Cu;
    // 0x12b99c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x12b99cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x12b9a0: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x12b9a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x12b9a4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x12B9A4u;
    {
        const bool branch_taken_0x12b9a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B9A4u;
        // 0x12b9a8: 0xac8500ac  sw          $a1, 0xAC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 172), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b9a4) {
            ctx->pc = 0x12B9C8u;
            goto label_12b9c8;
        }
    }
    ctx->pc = 0x12B9ACu;
label_12b9ac:
    // 0x12b9ac: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x12b9acu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x12b9b0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x12b9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x12b9b4: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x12b9b4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x12b9b8: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x12b9b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x12b9bc: 0x0  nop
    ctx->pc = 0x12b9bcu;
    // NOP
    // 0x12b9c0: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x12b9c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x12b9c4: 0xac8500ac  sw          $a1, 0xAC($a0)
    ctx->pc = 0x12b9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 172), GPR_U32(ctx, 5));
label_12b9c8:
    // 0x12b9c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12b9c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x12b9ccu;
}
