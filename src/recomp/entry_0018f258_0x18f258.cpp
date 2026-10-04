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

// Function: entry_0018f258
// Address: 0x18f258 - 0x18f440
void entry_0018f258_0x18f258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018f258_0x18f258");
#endif

    switch (ctx->pc) {
        case 0x18f2d0u: goto label_18f2d0;
        case 0x18f2d8u: goto label_18f2d8;
        case 0x18f2e8u: goto label_18f2e8;
        case 0x18f2f8u: goto label_18f2f8;
        case 0x18f308u: goto label_18f308;
        case 0x18f31cu: goto label_18f31c;
        case 0x18f330u: goto label_18f330;
        case 0x18f354u: goto label_18f354;
        case 0x18f360u: goto label_18f360;
        case 0x18f404u: goto label_18f404;
        default: break;
    }

    ctx->pc = 0x18f258u;

    // 0x18f258: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18f258u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18f25c: 0x0  nop
    ctx->pc = 0x18f25cu;
    // NOP
    // 0x18f260: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x18f260u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18f264: 0x0  nop
    ctx->pc = 0x18f264u;
    // NOP
    // 0x18f268: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x18F268u;
    {
        const bool branch_taken_0x18f268 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18F26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F268u;
        // 0x18f26c: 0xaf80881c  sw          $zero, -0x77E4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936604), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f268) {
            ctx->pc = 0x18F27Cu;
            goto label_18f27c;
        }
    }
    ctx->pc = 0x18F270u;
    // 0x18f270: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x18f270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x18f274: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x18F274u;
    {
        const bool branch_taken_0x18f274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18F278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F274u;
        // 0x18f278: 0xaf82881c  sw          $v0, -0x77E4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936604), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f274) {
            ctx->pc = 0x18F2B8u;
            goto label_18f2b8;
        }
    }
    ctx->pc = 0x18F27Cu;
label_18f27c:
    // 0x18f27c: 0x4617a034  c.lt.s      $f20, $f23
    ctx->pc = 0x18f27cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18f280: 0x0  nop
    ctx->pc = 0x18f280u;
    // NOP
    // 0x18f284: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x18F284u;
    {
        const bool branch_taken_0x18f284 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18f284) {
            ctx->pc = 0x18F2B8u;
            goto label_18f2b8;
        }
    }
    ctx->pc = 0x18F28Cu;
    // 0x18f28c: 0x4600b881  sub.s       $f2, $f23, $f0
    ctx->pc = 0x18f28cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[23], ctx->f[0]);
    // 0x18f290: 0x3c03c2c8  lui         $v1, 0xC2C8
    ctx->pc = 0x18f290u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49864 << 16));
    // 0x18f294: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x18f294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x18f298: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x18f298u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x18f29c: 0x4600a041  sub.s       $f1, $f20, $f0
    ctx->pc = 0x18f29cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x18f2a0: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x18f2a0u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[2] = ctx->f[3] / ctx->f[2];
    // 0x18f2a4: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x18f2a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x18f2a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18f2a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18f2ac: 0x0  nop
    ctx->pc = 0x18f2acu;
    // NOP
    // 0x18f2b0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x18f2b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x18f2b4: 0xe780881c  swc1        $f0, -0x77E4($gp)
    ctx->pc = 0x18f2b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294936604), bits); }
label_18f2b8:
    // 0x18f2b8: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x18f2b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18f2bc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x18f2bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f2c0: 0xc780881c  lwc1        $f0, -0x77E4($gp)
    ctx->pc = 0x18f2c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18f2c4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x18f2c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x18f2c8: 0xc064294  jal         func_190A50
    ctx->pc = 0x18F2C8u;
    SET_GPR_U32(ctx, 31, 0x18F2D0u);
    ctx->pc = 0x18F2CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F2C8u;
    // 0x18f2cc: 0xe6600004  swc1        $f0, 0x4($s3) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x190A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190A50u, 0x18F2C8u, 0x18F2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F2D0u;
label_18f2d0:
    // 0x18f2d0: 0xc066e44  jal         func_19B910
    ctx->pc = 0x18F2D0u;
    SET_GPR_U32(ctx, 31, 0x18F2D8u);
    ctx->pc = 0x18F2D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F2D0u;
    // 0x18f2d4: 0x27a401e0  addiu       $a0, $sp, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B910u, 0x18F2D0u, 0x18F2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F2D8u;
label_18f2d8:
    // 0x18f2d8: 0xc68c0028  lwc1        $f12, 0x28($s4)
    ctx->pc = 0x18f2d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x18f2dc: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x18f2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x18f2e0: 0xc066e6c  jal         func_19B9B0
    ctx->pc = 0x18F2E0u;
    SET_GPR_U32(ctx, 31, 0x18F2E8u);
    ctx->pc = 0x18F2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F2E0u;
    // 0x18f2e4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B9B0u, 0x18F2E0u, 0x18F2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F2E8u;
label_18f2e8:
    // 0x18f2e8: 0xc68c0020  lwc1        $f12, 0x20($s4)
    ctx->pc = 0x18f2e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x18f2ec: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x18f2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x18f2f0: 0xc066e96  jal         func_19BA58
    ctx->pc = 0x18F2F0u;
    SET_GPR_U32(ctx, 31, 0x18F2F8u);
    ctx->pc = 0x18F2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F2F0u;
    // 0x18f2f4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BA58u, 0x18F2F0u, 0x18F2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F2F8u;
label_18f2f8:
    // 0x18f2f8: 0xc68c0024  lwc1        $f12, 0x24($s4)
    ctx->pc = 0x18f2f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x18f2fc: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x18f2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x18f300: 0xc066ec0  jal         func_19BB00
    ctx->pc = 0x18F300u;
    SET_GPR_U32(ctx, 31, 0x18F308u);
    ctx->pc = 0x18F304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F300u;
    // 0x18f304: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BB00u, 0x18F300u, 0x18F308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F308u;
label_18f308:
    // 0x18f308: 0x3c060028  lui         $a2, 0x28
    ctx->pc = 0x18f308u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)40 << 16));
    // 0x18f30c: 0x26840010  addiu       $a0, $s4, 0x10
    ctx->pc = 0x18f30cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x18f310: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x18f310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x18f314: 0xc066d7a  jal         func_19B5E8
    ctx->pc = 0x18F314u;
    SET_GPR_U32(ctx, 31, 0x18F31Cu);
    ctx->pc = 0x18F318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F314u;
    // 0x18f318: 0x24c62f70  addiu       $a2, $a2, 0x2F70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B5E8u, 0x18F314u, 0x18F31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F31Cu;
label_18f31c:
    // 0x18f31c: 0x3c060028  lui         $a2, 0x28
    ctx->pc = 0x18f31cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)40 << 16));
    // 0x18f320: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x18f320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f324: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x18f324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x18f328: 0xc066d7a  jal         func_19B5E8
    ctx->pc = 0x18F328u;
    SET_GPR_U32(ctx, 31, 0x18F330u);
    ctx->pc = 0x18F32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F328u;
    // 0x18f32c: 0x24c62f80  addiu       $a2, $a2, 0x2F80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B5E8u, 0x18F328u, 0x18F330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F330u;
label_18f330:
    // 0x18f330: 0x8e8300e8  lw          $v1, 0xE8($s4)
    ctx->pc = 0x18f330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 232)));
    // 0x18f334: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x18f334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x18f338: 0x24429c40  addiu       $v0, $v0, -0x63C0
    ctx->pc = 0x18f338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941760));
    // 0x18f33c: 0x26850030  addiu       $a1, $s4, 0x30
    ctx->pc = 0x18f33cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    // 0x18f340: 0x26860010  addiu       $a2, $s4, 0x10
    ctx->pc = 0x18f340u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x18f344: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x18f344u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f348: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x18f348u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x18f34c: 0xc066f08  jal         func_19BC20
    ctx->pc = 0x18F34Cu;
    SET_GPR_U32(ctx, 31, 0x18F354u);
    ctx->pc = 0x18F350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F34Cu;
    // 0x18f350: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BC20u, 0x18F34Cu, 0x18F354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F354u;
label_18f354:
    // 0x18f354: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x18f354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f358: 0xc0643e4  jal         func_190F90
    ctx->pc = 0x18F358u;
    SET_GPR_U32(ctx, 31, 0x18F360u);
    ctx->pc = 0x18F35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F358u;
    // 0x18f35c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190F90u, 0x18F358u, 0x18F360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F360u;
label_18f360:
    // 0x18f360: 0x26820030  addiu       $v0, $s4, 0x30
    ctx->pc = 0x18f360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    // 0x18f364: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x18f364u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18f368: 0xda620000  lqc2        $vf2, 0x0($s3)
    ctx->pc = 0x18f368u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x18f36c: 0x4be110ec  vsub.xyzw   $vf3, $vf2, $vf1
    ctx->pc = 0x18f36cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x18f370: 0x4a0002ff  vnop
    ctx->pc = 0x18f370u;
    // NOP operation, no action needed for VU0
    // 0x18f374: 0x4a0002ff  vnop
    ctx->pc = 0x18f374u;
    // NOP operation, no action needed for VU0
    // 0x18f378: 0x4a0002ff  vnop
    ctx->pc = 0x18f378u;
    // NOP operation, no action needed for VU0
    // 0x18f37c: 0x4b03f99a  vmulz.x     $vf6, $vf31, $vf3z
    ctx->pc = 0x18f37cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x18f380: 0x4a0002ff  vnop
    ctx->pc = 0x18f380u;
    // NOP operation, no action needed for VU0
    // 0x18f384: 0x4a0002ff  vnop
    ctx->pc = 0x18f384u;
    // NOP operation, no action needed for VU0
    // 0x18f388: 0x4b0319bc  vmulax.x    $ACC, $vf3, $vf3x
    ctx->pc = 0x18f388u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x18f38c: 0x4b03310a  vmaddz.x    $vf4, $vf6, $vf3z
    ctx->pc = 0x18f38cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x18f390: 0x4a0002ff  vnop
    ctx->pc = 0x18f390u;
    // NOP operation, no action needed for VU0
    // 0x18f394: 0x4a0002ff  vnop
    ctx->pc = 0x18f394u;
    // NOP operation, no action needed for VU0
    // 0x18f398: 0x4a0002ff  vnop
    ctx->pc = 0x18f398u;
    // NOP operation, no action needed for VU0
    // 0x18f39c: 0x4a0403bd  .word       0x4A0403BD                   # vsqrt       $Q, $vf4x # 00000000 <InstrIdType: R5900_COP2_SPECIAL2>
    ctx->pc = 0x18f39cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
    // 0x18f3a0: 0x4a0003bf  vwaitq
    ctx->pc = 0x18f3a0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x18f3a4: 0x4849b000  cfc2.ni     $t1, $vi22
    ctx->pc = 0x18f3a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->vu0_q, sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x18f3a8: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x18f3a8u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18f3ac: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x18f3acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x18f3b0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18f3b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18f3b4: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x18f3b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x18f3b8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x18f3b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18f3bc: 0x0  nop
    ctx->pc = 0x18f3bcu;
    // NOP
    // 0x18f3c0: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x18F3C0u;
    {
        const bool branch_taken_0x18f3c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18F3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F3C0u;
        // 0x18f3c4: 0x3c024226  lui         $v0, 0x4226 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16934 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18f3c0) {
            ctx->pc = 0x18F3E4u;
            goto label_18f3e4;
        }
    }
    ctx->pc = 0x18F3C8u;
    // 0x18f3c8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x18f3c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x18f3cc: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x18f3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x18f3d0: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x18f3d0u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[1];
    // 0x18f3d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18f3d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18f3d8: 0x0  nop
    ctx->pc = 0x18f3d8u;
    // NOP
    // 0x18f3dc: 0x46010082  mul.s       $f2, $f0, $f1
    ctx->pc = 0x18f3dcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x18f3e0: 0x3c024226  lui         $v0, 0x4226
    ctx->pc = 0x18f3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16934 << 16));
label_18f3e4:
    // 0x18f3e4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x18f3e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18f3e8: 0x344227f0  ori         $v0, $v0, 0x27F0
    ctx->pc = 0x18f3e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10224);
    // 0x18f3ec: 0x26840070  addiu       $a0, $s4, 0x70
    ctx->pc = 0x18f3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 112));
    // 0x18f3f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18f3f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18f3f4: 0x0  nop
    ctx->pc = 0x18f3f4u;
    // NOP
    // 0x18f3f8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x18f3f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x18f3fc: 0xc066e26  jal         func_19B898
    ctx->pc = 0x18F3FCu;
    SET_GPR_U32(ctx, 31, 0x18F404u);
    ctx->pc = 0x18F400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F3FCu;
    // 0x18f400: 0xe6800098  swc1        $f0, 0x98($s4) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 152), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x18F3FCu, 0x18F404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F404u;
label_18f404:
    // 0x18f404: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x18f404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18f408: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x18f408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x18f40c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x18f40cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18f410: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x18f410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x18f414: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x18f414u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18f418: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x18f418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x18f41c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x18f41cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18f420: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x18f420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x18f424: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x18f424u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18f428: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x18f428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x18f42c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x18f42cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18f430: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x18f430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x18f434: 0x3e00008  jr          $ra
    ctx->pc = 0x18F434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F434u;
        // 0x18f438: 0x27bd0290  addiu       $sp, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F434u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18F43Cu;
    // 0x18f43c: 0x0  nop
    ctx->pc = 0x18f43cu;
    // NOP
    ctx->pc = 0x18f440u;
}
