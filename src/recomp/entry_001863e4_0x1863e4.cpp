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

// Function: entry_001863e4
// Address: 0x1863e4 - 0x186694
void entry_001863e4_0x1863e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001863e4_0x1863e4");
#endif

    switch (ctx->pc) {
        case 0x18641cu: goto label_18641c;
        case 0x18643cu: goto label_18643c;
        case 0x186580u: goto label_186580;
        case 0x186608u: goto label_186608;
        default: break;
    }

    ctx->pc = 0x1863e4u;

    // 0x1863e4: 0x30a30010  andi        $v1, $a1, 0x10
    ctx->pc = 0x1863e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16);
    // 0x1863e8: 0x106000aa  beqz        $v1, . + 4 + (0xAA << 2)
    ctx->pc = 0x1863E8u;
    {
        const bool branch_taken_0x1863e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1863e8) {
            ctx->pc = 0x186694u;
            return;
        }
    }
    ctx->pc = 0x1863F0u;
    // 0x1863f0: 0xc6210260  lwc1        $f1, 0x260($s1)
    ctx->pc = 0x1863f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1863f4: 0x3c03471c  lui         $v1, 0x471C
    ctx->pc = 0x1863f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18204 << 16));
    // 0x1863f8: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x1863f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x1863fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1863fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186400: 0x0  nop
    ctx->pc = 0x186400u;
    // NOP
    // 0x186404: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x186404u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x186408: 0x0  nop
    ctx->pc = 0x186408u;
    // NOP
    // 0x18640c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x18640Cu;
    {
        const bool branch_taken_0x18640c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x186410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18640Cu;
        // 0x186410: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18640c) {
            ctx->pc = 0x18641Cu;
            goto label_18641c;
        }
    }
    ctx->pc = 0x186414u;
    // 0x186414: 0xc061cd8  jal         func_187360
    ctx->pc = 0x186414u;
    SET_GPR_U32(ctx, 31, 0x18641Cu);
    ctx->pc = 0x186418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186414u;
    // 0x186418: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187360u, 0x186414u, 0x18641Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18641Cu;
label_18641c:
    // 0x18641c: 0x8e230194  lw          $v1, 0x194($s1)
    ctx->pc = 0x18641cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 404)));
    // 0x186420: 0x30631c07  andi        $v1, $v1, 0x1C07
    ctx->pc = 0x186420u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7175);
    // 0x186424: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x186424u;
    {
        const bool branch_taken_0x186424 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x186424) {
            ctx->pc = 0x186494u;
            goto label_186494;
        }
    }
    ctx->pc = 0x18642Cu;
    // 0x18642c: 0x8222023d  lb          $v0, 0x23D($s1)
    ctx->pc = 0x18642cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 573)));
    // 0x186430: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x186430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x186434: 0xc08f0cc  jal         func_23C330
    ctx->pc = 0x186434u;
    SET_GPR_U32(ctx, 31, 0x18643Cu);
    ctx->pc = 0x186438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186434u;
    // 0x186438: 0xa222023d  sb          $v0, 0x23D($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 573), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C330u, 0x186434u, 0x18643Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18643Cu;
label_18643c:
    // 0x18643c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18643cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x186440: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x186440u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
    // 0x186444: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x186444u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186448: 0x92250230  lbu         $a1, 0x230($s1)
    ctx->pc = 0x186448u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 560)));
    // 0x18644c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x18644cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x186450: 0x3c064f00  lui         $a2, 0x4F00
    ctx->pc = 0x186450u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20224 << 16));
    // 0x186454: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x186454u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
    // 0x186458: 0x24632b15  addiu       $v1, $v1, 0x2B15
    ctx->pc = 0x186458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11029));
    // 0x18645c: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x18645cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x186460: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x186460u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x186464: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x186464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x186468: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x186468u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x18646c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18646cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x186470: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x186470u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x186474: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x186474u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186478: 0x0  nop
    ctx->pc = 0x186478u;
    // NOP
    // 0x18647c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x18647cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x186480: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x186480u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x186484: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x186484u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x186488: 0x0  nop
    ctx->pc = 0x186488u;
    // NOP
    // 0x18648c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18648cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x186490: 0xa6230224  sh          $v1, 0x224($s1)
    ctx->pc = 0x186490u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 548), (uint16_t)GPR_U32(ctx, 3));
label_186494:
    // 0x186494: 0x9223023d  lbu         $v1, 0x23D($s1)
    ctx->pc = 0x186494u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 573)));
    // 0x186498: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x186498u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x18649c: 0x14600119  bnez        $v1, . + 4 + (0x119 << 2)
    ctx->pc = 0x18649Cu;
    {
        const bool branch_taken_0x18649c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18649c) {
            ctx->pc = 0x186904u;
            return;
        }
    }
    ctx->pc = 0x1864A4u;
    // 0x1864a4: 0xc6220044  lwc1        $f2, 0x44($s1)
    ctx->pc = 0x1864a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1864a8: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x1864a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x1864ac: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x1864acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1864b0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1864b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1864b4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1864b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1864b8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1864b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1864bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1864bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1864c0: 0x0  nop
    ctx->pc = 0x1864c0u;
    // NOP
    // 0x1864c4: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x1864c4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1864c8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1864c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1864cc: 0x0  nop
    ctx->pc = 0x1864ccu;
    // NOP
    // 0x1864d0: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x1864D0u;
    {
        const bool branch_taken_0x1864d0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1864D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1864D0u;
        // 0x1864d4: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1864d0) {
            ctx->pc = 0x1864ECu;
            goto label_1864ec;
        }
    }
    ctx->pc = 0x1864D8u;
    // 0x1864d8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1864d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1864dc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1864dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1864e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1864e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1864e4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1864E4u;
    {
        const bool branch_taken_0x1864e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1864E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1864E4u;
        // 0x1864e8: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1864e4) {
            ctx->pc = 0x18651Cu;
            goto label_18651c;
        }
    }
    ctx->pc = 0x1864ECu;
label_1864ec:
    // 0x1864ec: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1864ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1864f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1864f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1864f4: 0x0  nop
    ctx->pc = 0x1864f4u;
    // NOP
    // 0x1864f8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1864f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1864fc: 0x0  nop
    ctx->pc = 0x1864fcu;
    // NOP
    // 0x186500: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x186500u;
    {
        const bool branch_taken_0x186500 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x186500) {
            ctx->pc = 0x18651Cu;
            goto label_18651c;
        }
    }
    ctx->pc = 0x186508u;
    // 0x186508: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x186508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x18650c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18650cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x186510: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x186510u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186514: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x186514u;
    {
        const bool branch_taken_0x186514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186514u;
        // 0x186518: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x186514) {
            ctx->pc = 0x18651Cu;
            goto label_18651c;
        }
    }
    ctx->pc = 0x18651Cu;
label_18651c:
    // 0x18651c: 0x44090800  mfc1        $t1, $f1
    ctx->pc = 0x18651cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x186520: 0x48a90800  qmtc2.ni    $t1, $vf1
    ctx->pc = 0x186520u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
    // 0x186524: 0x4a000138  vcallms     0x20
    ctx->pc = 0x186524u;
    {     ctx->vu0_tpc = 0x20;     runtime->executeVU0Microprogram(rdram, ctx, 0x20); }
    // 0x186528: 0x48290801  qmfc2.i     $t1, $vf1
    ctx->pc = 0x186528u;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x18652c: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x18652cu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186530: 0x48291000  qmfc2.ni    $t1, $vf2
    ctx->pc = 0x186530u;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x186534: 0x44891800  mtc1        $t1, $f3
    ctx->pc = 0x186534u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x186538: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x186538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x18653c: 0x27a4008c  addiu       $a0, $sp, 0x8C
    ctx->pc = 0x18653cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    // 0x186540: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x186540u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x186544: 0x26250150  addiu       $a1, $s1, 0x150
    ctx->pc = 0x186544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x186548: 0xc6010150  lwc1        $f1, 0x150($s0)
    ctx->pc = 0x186548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18654c: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x18654cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x186550: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x186550u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x186554: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x186554u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x186558: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x186558u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x18655c: 0xc6010154  lwc1        $f1, 0x154($s0)
    ctx->pc = 0x18655cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x186560: 0x46031002  mul.s       $f0, $f2, $f3
    ctx->pc = 0x186560u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x186564: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x186564u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x186568: 0xc6010158  lwc1        $f1, 0x158($s0)
    ctx->pc = 0x186568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18656c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18656cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x186570: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x186570u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x186574: 0xc600015c  lwc1        $f0, 0x15C($s0)
    ctx->pc = 0x186574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x186578: 0xc0439e8  jal         func_10E7A0
    ctx->pc = 0x186578u;
    SET_GPR_U32(ctx, 31, 0x186580u);
    ctx->pc = 0x18657Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186578u;
    // 0x18657c: 0xe7a0006c  swc1        $f0, 0x6C($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E7A0u, 0x186578u, 0x186580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186580u;
label_186580:
    // 0x186580: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x186580u;
    {
        const bool branch_taken_0x186580 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x186580) {
            ctx->pc = 0x186590u;
            goto label_186590;
        }
    }
    ctx->pc = 0x186588u;
    // 0x186588: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x186588u;
    {
        const bool branch_taken_0x186588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18658Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186588u;
        // 0x18658c: 0xafa0008c  sw          $zero, 0x8C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186588) {
            ctx->pc = 0x18660Cu;
            goto label_18660c;
        }
    }
    ctx->pc = 0x186590u;
label_186590:
    // 0x186590: 0xc6220044  lwc1        $f2, 0x44($s1)
    ctx->pc = 0x186590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x186594: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x186594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x186598: 0xc7a1008c  lwc1        $f1, 0x8C($sp)
    ctx->pc = 0x186598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18659c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18659cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1865a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1865a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1865a4: 0x0  nop
    ctx->pc = 0x1865a4u;
    // NOP
    // 0x1865a8: 0x46020b01  sub.s       $f12, $f1, $f2
    ctx->pc = 0x1865a8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x1865ac: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x1865acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1865b0: 0x0  nop
    ctx->pc = 0x1865b0u;
    // NOP
    // 0x1865b4: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x1865B4u;
    {
        const bool branch_taken_0x1865b4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1865B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1865B4u;
        // 0x1865b8: 0xe7ac008c  swc1        $f12, 0x8C($sp) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1865b4) {
            ctx->pc = 0x1865D0u;
            goto label_1865d0;
        }
    }
    ctx->pc = 0x1865BCu;
    // 0x1865bc: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1865bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1865c0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1865c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1865c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1865c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1865c8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1865C8u;
    {
        const bool branch_taken_0x1865c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1865CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1865C8u;
        // 0x1865cc: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1865c8) {
            ctx->pc = 0x186600u;
            goto label_186600;
        }
    }
    ctx->pc = 0x1865D0u;
label_1865d0:
    // 0x1865d0: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1865d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x1865d4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1865d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1865d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1865d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1865dc: 0x0  nop
    ctx->pc = 0x1865dcu;
    // NOP
    // 0x1865e0: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x1865e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1865e4: 0x0  nop
    ctx->pc = 0x1865e4u;
    // NOP
    // 0x1865e8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1865E8u;
    {
        const bool branch_taken_0x1865e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1865ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1865E8u;
        // 0x1865ec: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1865e8) {
            ctx->pc = 0x186600u;
            goto label_186600;
        }
    }
    ctx->pc = 0x1865F0u;
    // 0x1865f0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1865f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1865f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1865f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1865f8: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x1865F8u;
    {
        const bool branch_taken_0x1865f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1865FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1865F8u;
        // 0x1865fc: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1865f8) {
            ctx->pc = 0x186600u;
            goto label_186600;
        }
    }
    ctx->pc = 0x186600u;
label_186600:
    // 0x186600: 0xc06d448  jal         func_1B5120
    ctx->pc = 0x186600u;
    SET_GPR_U32(ctx, 31, 0x186608u);
    ctx->pc = 0x1B5120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5120u, 0x186600u, 0x186608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186608u;
label_186608:
    // 0x186608: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x186608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_18660c:
    // 0x18660c: 0xc7a1008c  lwc1        $f1, 0x8C($sp)
    ctx->pc = 0x18660cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x186610: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x186610u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x186614: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x186614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x186618: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x186618u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18661c: 0x0  nop
    ctx->pc = 0x18661cu;
    // NOP
    // 0x186620: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x186620u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x186624: 0x0  nop
    ctx->pc = 0x186624u;
    // NOP
    // 0x186628: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x186628u;
    {
        const bool branch_taken_0x186628 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x186628) {
            ctx->pc = 0x186644u;
            goto label_186644;
        }
    }
    ctx->pc = 0x186630u;
    // 0x186630: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x186630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x186634: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x186634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x186638: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x186638u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x18663c: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x18663Cu;
    {
        const bool branch_taken_0x18663c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18663c) {
            ctx->pc = 0x18667Cu;
            goto label_18667c;
        }
    }
    ctx->pc = 0x186644u;
label_186644:
    // 0x186644: 0xc6210150  lwc1        $f1, 0x150($s1)
    ctx->pc = 0x186644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x186648: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x186648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18664c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x18664cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x186650: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x186650u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x186654: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x186654u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x186658: 0x0  nop
    ctx->pc = 0x186658u;
    // NOP
    // 0x18665c: 0xa623019c  sh          $v1, 0x19C($s1)
    ctx->pc = 0x18665cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 412), (uint16_t)GPR_U32(ctx, 3));
    // 0x186660: 0xc6210158  lwc1        $f1, 0x158($s1)
    ctx->pc = 0x186660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x186664: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x186664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x186668: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x186668u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x18666c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18666cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x186670: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x186670u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x186674: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x186674u;
    {
        const bool branch_taken_0x186674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186674u;
        // 0x186678: 0xa623019e  sh          $v1, 0x19E($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 414), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186674) {
            ctx->pc = 0x186684u;
            goto label_186684;
        }
    }
    ctx->pc = 0x18667Cu;
label_18667c:
    // 0x18667c: 0xa620019e  sh          $zero, 0x19E($s1)
    ctx->pc = 0x18667cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 414), (uint16_t)GPR_U32(ctx, 0));
    // 0x186680: 0xa620019c  sh          $zero, 0x19C($s1)
    ctx->pc = 0x186680u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 412), (uint16_t)GPR_U32(ctx, 0));
label_186684:
    // 0x186684: 0x8e230194  lw          $v1, 0x194($s1)
    ctx->pc = 0x186684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 404)));
    // 0x186688: 0x34634010  ori         $v1, $v1, 0x4010
    ctx->pc = 0x186688u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16400);
    // 0x18668c: 0x1000009d  b           . + 4 + (0x9D << 2)
    ctx->pc = 0x18668Cu;
    {
        const bool branch_taken_0x18668c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18668Cu;
        // 0x186690: 0xae230194  sw          $v1, 0x194($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 404), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18668c) {
            ctx->pc = 0x186904u;
            return;
        }
    }
    ctx->pc = 0x186694u;
}
