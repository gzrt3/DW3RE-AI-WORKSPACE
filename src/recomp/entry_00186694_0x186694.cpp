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

// Function: entry_00186694
// Address: 0x186694 - 0x186904
void entry_00186694_0x186694(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00186694_0x186694");
#endif

    switch (ctx->pc) {
        case 0x186770u: goto label_186770;
        case 0x1867f8u: goto label_1867f8;
        case 0x18688cu: goto label_18688c;
        default: break;
    }

    ctx->pc = 0x186694u;

    // 0x186694: 0xc6220044  lwc1        $f2, 0x44($s1)
    ctx->pc = 0x186694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x186698: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x186698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x18669c: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x18669cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1866a0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1866a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1866a4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1866a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1866a8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1866a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1866ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1866acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1866b0: 0x0  nop
    ctx->pc = 0x1866b0u;
    // NOP
    // 0x1866b4: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x1866b4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1866b8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1866b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1866bc: 0x0  nop
    ctx->pc = 0x1866bcu;
    // NOP
    // 0x1866c0: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x1866C0u;
    {
        const bool branch_taken_0x1866c0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1866C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1866C0u;
        // 0x1866c4: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1866c0) {
            ctx->pc = 0x1866DCu;
            goto label_1866dc;
        }
    }
    ctx->pc = 0x1866C8u;
    // 0x1866c8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1866c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1866cc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1866ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1866d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1866d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1866d4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1866D4u;
    {
        const bool branch_taken_0x1866d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1866D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1866D4u;
        // 0x1866d8: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1866d4) {
            ctx->pc = 0x18670Cu;
            goto label_18670c;
        }
    }
    ctx->pc = 0x1866DCu;
label_1866dc:
    // 0x1866dc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1866dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1866e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1866e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1866e4: 0x0  nop
    ctx->pc = 0x1866e4u;
    // NOP
    // 0x1866e8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1866e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1866ec: 0x0  nop
    ctx->pc = 0x1866ecu;
    // NOP
    // 0x1866f0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1866F0u;
    {
        const bool branch_taken_0x1866f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1866f0) {
            ctx->pc = 0x18670Cu;
            goto label_18670c;
        }
    }
    ctx->pc = 0x1866F8u;
    // 0x1866f8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1866f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1866fc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1866fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x186700: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x186700u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186704: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x186704u;
    {
        const bool branch_taken_0x186704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186704u;
        // 0x186708: 0x46010040  add.s       $f1, $f0, $f1 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x186704) {
            ctx->pc = 0x18670Cu;
            goto label_18670c;
        }
    }
    ctx->pc = 0x18670Cu;
label_18670c:
    // 0x18670c: 0x44090800  mfc1        $t1, $f1
    ctx->pc = 0x18670cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x186710: 0x48a90800  qmtc2.ni    $t1, $vf1
    ctx->pc = 0x186710u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 9));
    // 0x186714: 0x4a000138  vcallms     0x20
    ctx->pc = 0x186714u;
    {     ctx->vu0_tpc = 0x20;     runtime->executeVU0Microprogram(rdram, ctx, 0x20); }
    // 0x186718: 0x48290801  qmfc2.i     $t1, $vf1
    ctx->pc = 0x186718u;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x18671c: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x18671cu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186720: 0x48291000  qmfc2.ni    $t1, $vf2
    ctx->pc = 0x186720u;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x186724: 0x44891800  mtc1        $t1, $f3
    ctx->pc = 0x186724u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x186728: 0x3c024316  lui         $v0, 0x4316
    ctx->pc = 0x186728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17174 << 16));
    // 0x18672c: 0x27a40084  addiu       $a0, $sp, 0x84
    ctx->pc = 0x18672cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    // 0x186730: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x186730u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x186734: 0x26250150  addiu       $a1, $s1, 0x150
    ctx->pc = 0x186734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x186738: 0xc6010150  lwc1        $f1, 0x150($s0)
    ctx->pc = 0x186738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18673c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x18673cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x186740: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x186740u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x186744: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x186744u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x186748: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x186748u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x18674c: 0xc6010154  lwc1        $f1, 0x154($s0)
    ctx->pc = 0x18674cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x186750: 0x46031002  mul.s       $f0, $f2, $f3
    ctx->pc = 0x186750u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x186754: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x186754u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x186758: 0xc6010158  lwc1        $f1, 0x158($s0)
    ctx->pc = 0x186758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18675c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x18675cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x186760: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x186760u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x186764: 0xc600015c  lwc1        $f0, 0x15C($s0)
    ctx->pc = 0x186764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x186768: 0xc0439e8  jal         func_10E7A0
    ctx->pc = 0x186768u;
    SET_GPR_U32(ctx, 31, 0x186770u);
    ctx->pc = 0x18676Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186768u;
    // 0x18676c: 0xe7a0004c  swc1        $f0, 0x4C($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E7A0u, 0x186768u, 0x186770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186770u;
label_186770:
    // 0x186770: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x186770u;
    {
        const bool branch_taken_0x186770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x186770) {
            ctx->pc = 0x186780u;
            goto label_186780;
        }
    }
    ctx->pc = 0x186778u;
    // 0x186778: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x186778u;
    {
        const bool branch_taken_0x186778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18677Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186778u;
        // 0x18677c: 0xafa00084  sw          $zero, 0x84($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186778) {
            ctx->pc = 0x1867FCu;
            goto label_1867fc;
        }
    }
    ctx->pc = 0x186780u;
label_186780:
    // 0x186780: 0xc6220044  lwc1        $f2, 0x44($s1)
    ctx->pc = 0x186780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x186784: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x186784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x186788: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x186788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18678c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x18678cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x186790: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x186790u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186794: 0x0  nop
    ctx->pc = 0x186794u;
    // NOP
    // 0x186798: 0x46020b01  sub.s       $f12, $f1, $f2
    ctx->pc = 0x186798u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x18679c: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x18679cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1867a0: 0x0  nop
    ctx->pc = 0x1867a0u;
    // NOP
    // 0x1867a4: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x1867A4u;
    {
        const bool branch_taken_0x1867a4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1867A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1867A4u;
        // 0x1867a8: 0xe7ac0084  swc1        $f12, 0x84($sp) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1867a4) {
            ctx->pc = 0x1867C0u;
            goto label_1867c0;
        }
    }
    ctx->pc = 0x1867ACu;
    // 0x1867ac: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1867acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1867b0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1867b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1867b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1867b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1867b8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1867B8u;
    {
        const bool branch_taken_0x1867b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1867BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1867B8u;
        // 0x1867bc: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1867b8) {
            ctx->pc = 0x1867F0u;
            goto label_1867f0;
        }
    }
    ctx->pc = 0x1867C0u;
label_1867c0:
    // 0x1867c0: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x1867c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
    // 0x1867c4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1867c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1867c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1867c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1867cc: 0x0  nop
    ctx->pc = 0x1867ccu;
    // NOP
    // 0x1867d0: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x1867d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1867d4: 0x0  nop
    ctx->pc = 0x1867d4u;
    // NOP
    // 0x1867d8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1867D8u;
    {
        const bool branch_taken_0x1867d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1867DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1867D8u;
        // 0x1867dc: 0x3c0240c9  lui         $v0, 0x40C9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1867d8) {
            ctx->pc = 0x1867F0u;
            goto label_1867f0;
        }
    }
    ctx->pc = 0x1867E0u;
    // 0x1867e0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1867e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1867e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1867e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1867e8: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x1867E8u;
    {
        const bool branch_taken_0x1867e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1867ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1867E8u;
        // 0x1867ec: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1867e8) {
            ctx->pc = 0x1867F0u;
            goto label_1867f0;
        }
    }
    ctx->pc = 0x1867F0u;
label_1867f0:
    // 0x1867f0: 0xc06d448  jal         func_1B5120
    ctx->pc = 0x1867F0u;
    SET_GPR_U32(ctx, 31, 0x1867F8u);
    ctx->pc = 0x1B5120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5120u, 0x1867F0u, 0x1867F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1867F8u;
label_1867f8:
    // 0x1867f8: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x1867f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_1867fc:
    // 0x1867fc: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x1867fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x186800: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x186800u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x186804: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x186804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x186808: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x186808u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18680c: 0x0  nop
    ctx->pc = 0x18680cu;
    // NOP
    // 0x186810: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x186810u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x186814: 0x0  nop
    ctx->pc = 0x186814u;
    // NOP
    // 0x186818: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x186818u;
    {
        const bool branch_taken_0x186818 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x186818) {
            ctx->pc = 0x186834u;
            goto label_186834;
        }
    }
    ctx->pc = 0x186820u;
    // 0x186820: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x186820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x186824: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x186824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x186828: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x186828u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x18682c: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x18682Cu;
    {
        const bool branch_taken_0x18682c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18682c) {
            ctx->pc = 0x18686Cu;
            goto label_18686c;
        }
    }
    ctx->pc = 0x186834u;
label_186834:
    // 0x186834: 0xc6210150  lwc1        $f1, 0x150($s1)
    ctx->pc = 0x186834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x186838: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x186838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18683c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x18683cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x186840: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x186840u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x186844: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x186844u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x186848: 0x0  nop
    ctx->pc = 0x186848u;
    // NOP
    // 0x18684c: 0xa623019c  sh          $v1, 0x19C($s1)
    ctx->pc = 0x18684cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 412), (uint16_t)GPR_U32(ctx, 3));
    // 0x186850: 0xc6210158  lwc1        $f1, 0x158($s1)
    ctx->pc = 0x186850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x186854: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x186854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x186858: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x186858u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x18685c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x18685cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x186860: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x186860u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x186864: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x186864u;
    {
        const bool branch_taken_0x186864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186864u;
        // 0x186868: 0xa623019e  sh          $v1, 0x19E($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 414), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186864) {
            ctx->pc = 0x186874u;
            goto label_186874;
        }
    }
    ctx->pc = 0x18686Cu;
label_18686c:
    // 0x18686c: 0xa620019e  sh          $zero, 0x19E($s1)
    ctx->pc = 0x18686cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 414), (uint16_t)GPR_U32(ctx, 0));
    // 0x186870: 0xa620019c  sh          $zero, 0x19C($s1)
    ctx->pc = 0x186870u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 412), (uint16_t)GPR_U32(ctx, 0));
label_186874:
    // 0x186874: 0x9623022c  lhu         $v1, 0x22C($s1)
    ctx->pc = 0x186874u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 556)));
    // 0x186878: 0x30632000  andi        $v1, $v1, 0x2000
    ctx->pc = 0x186878u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x18687c: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x18687Cu;
    {
        const bool branch_taken_0x18687c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18687c) {
            ctx->pc = 0x1868F8u;
            goto label_1868f8;
        }
    }
    ctx->pc = 0x186884u;
    // 0x186884: 0xc08f0cc  jal         func_23C330
    ctx->pc = 0x186884u;
    SET_GPR_U32(ctx, 31, 0x18688Cu);
    ctx->pc = 0x23C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C330u, 0x186884u, 0x18688Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18688Cu;
label_18688c:
    // 0x18688c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18688cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x186890: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x186890u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x186894: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x186894u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x186898: 0x92250232  lbu         $a1, 0x232($s1)
    ctx->pc = 0x186898u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 562)));
    // 0x18689c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x18689cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1868a0: 0x3c064f00  lui         $a2, 0x4F00
    ctx->pc = 0x1868a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20224 << 16));
    // 0x1868a4: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x1868a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
    // 0x1868a8: 0x24632b14  addiu       $v1, $v1, 0x2B14
    ctx->pc = 0x1868a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11028));
    // 0x1868ac: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x1868acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x1868b0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1868b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1868b4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1868b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1868b8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1868b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1868bc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1868bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1868c0: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1868c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1868c4: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1868c4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1868c8: 0x0  nop
    ctx->pc = 0x1868c8u;
    // NOP
    // 0x1868cc: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1868ccu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x1868d0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1868d0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1868d4: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1868d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1868d8: 0x0  nop
    ctx->pc = 0x1868d8u;
    // NOP
    // 0x1868dc: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x1868dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1868e0: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x1868E0u;
    {
        const bool branch_taken_0x1868e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1868e0) {
            ctx->pc = 0x1868F8u;
            goto label_1868f8;
        }
    }
    ctx->pc = 0x1868E8u;
    // 0x1868e8: 0x8223023d  lb          $v1, 0x23D($s1)
    ctx->pc = 0x1868e8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 573)));
    // 0x1868ec: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x1868ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x1868f0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1868F0u;
    {
        const bool branch_taken_0x1868f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1868F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1868F0u;
        // 0x1868f4: 0xa223023d  sb          $v1, 0x23D($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 573), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1868f0) {
            ctx->pc = 0x186904u;
            return;
        }
    }
    ctx->pc = 0x1868F8u;
label_1868f8:
    // 0x1868f8: 0x8223023d  lb          $v1, 0x23D($s1)
    ctx->pc = 0x1868f8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 573)));
    // 0x1868fc: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x1868fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x186900: 0xa223023d  sb          $v1, 0x23D($s1)
    ctx->pc = 0x186900u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 573), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x186904u;
}
