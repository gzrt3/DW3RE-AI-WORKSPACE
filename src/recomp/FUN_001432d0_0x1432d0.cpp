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

// Function: FUN_001432d0
// Address: 0x1432d0 - 0x143404
void FUN_001432d0_0x1432d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001432d0_0x1432d0");
#endif

    switch (ctx->pc) {
        case 0x143310u: goto label_143310;
        case 0x1433a4u: goto label_1433a4;
        default: break;
    }

    ctx->pc = 0x1432d0u;

    // 0x1432d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1432d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1432d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1432d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1432d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1432d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1432dc: 0x8c820194  lw          $v0, 0x194($a0)
    ctx->pc = 0x1432dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 404)));
    // 0x1432e0: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x1432e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x1432e4: 0x10400045  beqz        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x1432E4u;
    {
        const bool branch_taken_0x1432e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1432E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1432E4u;
        // 0x1432e8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1432e4) {
            ctx->pc = 0x1433FCu;
            goto label_1433fc;
        }
    }
    ctx->pc = 0x1432ECu;
    // 0x1432ec: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1432ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1432f0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1432f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1432f4: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1432f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x1432f8: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x1432F8u;
    {
        const bool branch_taken_0x1432f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1432FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1432F8u;
        // 0x1432fc: 0x240201ff  addiu       $v0, $zero, 0x1FF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1432f8) {
            ctx->pc = 0x143400u;
            goto label_143400;
        }
    }
    ctx->pc = 0x143300u;
    // 0x143300: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x143300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x143304: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x143304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x143308: 0xc066e08  jal         func_19B820
    ctx->pc = 0x143308u;
    SET_GPR_U32(ctx, 31, 0x143310u);
    ctx->pc = 0x14330Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143308u;
    // 0x14330c: 0x26060160  addiu       $a2, $s0, 0x160 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B820u, 0x143308u, 0x143310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143310u;
label_143310:
    // 0x143310: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x143310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x143314: 0x27a30028  addiu       $v1, $sp, 0x28
    ctx->pc = 0x143314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x143318: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x143318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14331c: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x14331cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x143320: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x143320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x143324: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x143324u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x143328: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x143328u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x14332c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x14332cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x143330: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x143330u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[0]));
    // 0x143334: 0x4602101c  madd.s      $f0, $f2, $f2
    ctx->pc = 0x143334u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x143338: 0x46000004  c1          0x4
    ctx->pc = 0x143338u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x14333c: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x14333cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x143340: 0x46011836  c.le.s      $f3, $f1
    ctx->pc = 0x143340u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x143344: 0x0  nop
    ctx->pc = 0x143344u;
    // NOP
    // 0x143348: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x143348u;
    {
        const bool branch_taken_0x143348 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14334Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143348u;
        // 0x14334c: 0xe6000010  swc1        $f0, 0x10($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x143348) {
            ctx->pc = 0x143358u;
            goto label_143358;
        }
    }
    ctx->pc = 0x143350u;
    // 0x143350: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x143350u;
    {
        const bool branch_taken_0x143350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x143354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143350u;
        // 0x143354: 0x3c024120  lui         $v0, 0x4120 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143350) {
            ctx->pc = 0x143360u;
            goto label_143360;
        }
    }
    ctx->pc = 0x143358u;
label_143358:
    // 0x143358: 0x46001846  mov.s       $f1, $f3
    ctx->pc = 0x143358u;
    ctx->f[1] = FPU_MOV_S(ctx->f[3]);
    // 0x14335c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x14335cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_143360:
    // 0x143360: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x143360u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x143364: 0x0  nop
    ctx->pc = 0x143364u;
    // NOP
    // 0x143368: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x143368u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14336c: 0x0  nop
    ctx->pc = 0x14336cu;
    // NOP
    // 0x143370: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x143370u;
    {
        const bool branch_taken_0x143370 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x143374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143370u;
        // 0x143374: 0xe6010010  swc1        $f1, 0x10($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x143370) {
            ctx->pc = 0x14337Cu;
            goto label_14337c;
        }
    }
    ctx->pc = 0x143378u;
    // 0x143378: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x143378u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_14337c:
    // 0x14337c: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x14337cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x143380: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x143380u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x143384: 0x0  nop
    ctx->pc = 0x143384u;
    // NOP
    // 0x143388: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x143388u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14338c: 0x0  nop
    ctx->pc = 0x14338cu;
    // NOP
    // 0x143390: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x143390u;
    {
        const bool branch_taken_0x143390 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x143390) {
            ctx->pc = 0x1433A8u;
            goto label_1433a8;
        }
    }
    ctx->pc = 0x143398u;
    // 0x143398: 0xc7ac0020  lwc1        $f12, 0x20($sp)
    ctx->pc = 0x143398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x14339c: 0xc06d51e  jal         func_1B5478
    ctx->pc = 0x14339Cu;
    SET_GPR_U32(ctx, 31, 0x1433A4u);
    ctx->pc = 0x1433A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14339Cu;
    // 0x1433a0: 0xc46d0000  lwc1        $f13, 0x0($v1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5478u, 0x14339Cu, 0x1433A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1433A4u;
label_1433a4:
    // 0x1433a4: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x1433a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_1433a8:
    // 0x1433a8: 0xc60101bc  lwc1        $f1, 0x1BC($s0)
    ctx->pc = 0x1433a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1433ac: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1433acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1433b0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1433b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1433b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1433b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1433b8: 0x0  nop
    ctx->pc = 0x1433b8u;
    // NOP
    // 0x1433bc: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1433bcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1433c0: 0x0  nop
    ctx->pc = 0x1433c0u;
    // NOP
    // 0x1433c4: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x1433C4u;
    {
        const bool branch_taken_0x1433c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1433c4) {
            ctx->pc = 0x1433ECu;
            goto label_1433ec;
        }
    }
    ctx->pc = 0x1433CCu;
    // 0x1433cc: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x1433ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1433d0: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1433d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x1433d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1433d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1433d8: 0x0  nop
    ctx->pc = 0x1433d8u;
    // NOP
    // 0x1433dc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1433dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1433e0: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x1433e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x1433e4: 0xc60001bc  lwc1        $f0, 0x1BC($s0)
    ctx->pc = 0x1433e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1433e8: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x1433e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_1433ec:
    // 0x1433ec: 0xc60001ec  lwc1        $f0, 0x1EC($s0)
    ctx->pc = 0x1433ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1433f0: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x1433f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1433f4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1433F4u;
    {
        const bool branch_taken_0x1433f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1433F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1433F4u;
        // 0x1433f8: 0xe6000014  swc1        $f0, 0x14($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1433f4) {
            ctx->pc = 0x143400u;
            goto label_143400;
        }
    }
    ctx->pc = 0x1433FCu;
label_1433fc:
    // 0x1433fc: 0x240201ff  addiu       $v0, $zero, 0x1FF
    ctx->pc = 0x1433fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
label_143400:
    // 0x143400: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x143400u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x143404u;
}
