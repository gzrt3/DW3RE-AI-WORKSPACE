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

// Function: entry_001349c4
// Address: 0x1349c4 - 0x134ad8
void entry_001349c4_0x1349c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001349c4_0x1349c4");
#endif

    switch (ctx->pc) {
        case 0x134a94u: goto label_134a94;
        case 0x134aa8u: goto label_134aa8;
        case 0x134abcu: goto label_134abc;
        default: break;
    }

    ctx->pc = 0x1349c4u;

    // 0x1349c4: 0x0  nop
    ctx->pc = 0x1349c4u;
    // NOP
    // 0x1349c8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1349c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x1349cc: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1349ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1349d0: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1349d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x1349d4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1349d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1349d8: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1349d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x1349dc: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x1349dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1349e0: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x1349e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x1349e4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1349e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1349e8: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x1349e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1349ec: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x1349ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1349f0: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x1349f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1349f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1349f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1349f8: 0x0  nop
    ctx->pc = 0x1349f8u;
    // NOP
    // 0x1349fc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1349fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x134a00: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x134a00u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x134a04: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x134a04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x134a08: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x134a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134a0c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x134a0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x134a10: 0xafa4003c  sw          $a0, 0x3C($sp)
    ctx->pc = 0x134a10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 4));
    // 0x134a14: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x134a14u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x134a18: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x134a18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x134a1c: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x134a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134a20: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x134a20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x134a24: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x134a24u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x134a28: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x134a28u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x134a2c: 0x0  nop
    ctx->pc = 0x134a2cu;
    // NOP
    // 0x134a30: 0x46001502  mul.s       $f20, $f2, $f0
    ctx->pc = 0x134a30u;
    ctx->f[20] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x134a34: 0x4603a036  c.le.s      $f20, $f3
    ctx->pc = 0x134a34u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x134a38: 0x0  nop
    ctx->pc = 0x134a38u;
    // NOP
    // 0x134a3c: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x134A3Cu;
    {
        const bool branch_taken_0x134a3c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x134A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134A3Cu;
        // 0x134a40: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134a3c) {
            ctx->pc = 0x134A58u;
            goto label_134a58;
        }
    }
    ctx->pc = 0x134A44u;
    // 0x134a44: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x134a44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x134a48: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x134a48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x134a4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x134a4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134a50: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x134A50u;
    {
        const bool branch_taken_0x134a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134A50u;
        // 0x134a54: 0x4600a501  sub.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x134a50) {
            ctx->pc = 0x134A88u;
            goto label_134a88;
        }
    }
    ctx->pc = 0x134A58u;
label_134a58:
    // 0x134a58: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x134a58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x134a5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x134a5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134a60: 0x0  nop
    ctx->pc = 0x134a60u;
    // NOP
    // 0x134a64: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x134a64u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x134a68: 0x0  nop
    ctx->pc = 0x134a68u;
    // NOP
    // 0x134a6c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x134A6Cu;
    {
        const bool branch_taken_0x134a6c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x134a6c) {
            ctx->pc = 0x134A88u;
            goto label_134a88;
        }
    }
    ctx->pc = 0x134A74u;
    // 0x134a74: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x134a74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x134a78: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x134a78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x134a7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x134a7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134a80: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x134A80u;
    {
        const bool branch_taken_0x134a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134A80u;
        // 0x134a84: 0x46140500  add.s       $f20, $f0, $f20 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x134a80) {
            ctx->pc = 0x134A88u;
            goto label_134a88;
        }
    }
    ctx->pc = 0x134A88u;
label_134a88:
    // 0x134a88: 0x3c040031  lui         $a0, 0x31
    ctx->pc = 0x134a88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49 << 16));
    // 0x134a8c: 0xc066e44  jal         func_19B910
    ctx->pc = 0x134A8Cu;
    SET_GPR_U32(ctx, 31, 0x134A94u);
    ctx->pc = 0x134A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134A8Cu;
    // 0x134a90: 0x2484a460  addiu       $a0, $a0, -0x5BA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B910u, 0x134A8Cu, 0x134A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134A94u;
label_134a94:
    // 0x134a94: 0x3c040031  lui         $a0, 0x31
    ctx->pc = 0x134a94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49 << 16));
    // 0x134a98: 0x2484a460  addiu       $a0, $a0, -0x5BA0
    ctx->pc = 0x134a98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943840));
    // 0x134a9c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x134a9cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x134aa0: 0xc066ec0  jal         func_19BB00
    ctx->pc = 0x134AA0u;
    SET_GPR_U32(ctx, 31, 0x134AA8u);
    ctx->pc = 0x134AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134AA0u;
    // 0x134aa4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BB00u, 0x134AA0u, 0x134AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134AA8u;
label_134aa8:
    // 0x134aa8: 0x3c040031  lui         $a0, 0x31
    ctx->pc = 0x134aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49 << 16));
    // 0x134aac: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x134aacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x134ab0: 0x2484a460  addiu       $a0, $a0, -0x5BA0
    ctx->pc = 0x134ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943840));
    // 0x134ab4: 0xc066e1a  jal         func_19B868
    ctx->pc = 0x134AB4u;
    SET_GPR_U32(ctx, 31, 0x134ABCu);
    ctx->pc = 0x134AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134AB4u;
    // 0x134ab8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B868u, 0x134AB4u, 0x134ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134ABCu;
label_134abc:
    // 0x134abc: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x134abcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x134ac0: 0x8c23a3e0  lw          $v1, -0x5C20($at)
    ctx->pc = 0x134ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x30A3E0u));
    // 0x134ac4: 0xe79484f8  swc1        $f20, -0x7B08($gp)
    ctx->pc = 0x134ac4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294935800), bits); }
    // 0x134ac8: 0x34630400  ori         $v1, $v1, 0x400
    ctx->pc = 0x134ac8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1024);
    // 0x134acc: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x134accu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x134ad0: 0x100000db  b           . + 4 + (0xDB << 2)
    ctx->pc = 0x134AD0u;
    {
        const bool branch_taken_0x134ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134AD0u;
        // 0x134ad4: 0xac23a3e0  sw          $v1, -0x5C20($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294943712), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134ad0) {
            ctx->pc = 0x134E40u;
            return;
        }
    }
    ctx->pc = 0x134AD8u;
}
