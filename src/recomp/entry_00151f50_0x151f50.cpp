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

// Function: entry_00151f50
// Address: 0x151f50 - 0x152020
void entry_00151f50_0x151f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00151f50_0x151f50");
#endif

    switch (ctx->pc) {
        case 0x151fccu: goto label_151fcc;
        case 0x151fd8u: goto label_151fd8;
        case 0x152010u: goto label_152010;
        default: break;
    }

    ctx->pc = 0x151f50u;

    // 0x151f50: 0x860303c8  lh          $v1, 0x3C8($s0)
    ctx->pc = 0x151f50u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 968)));
    // 0x151f54: 0x240200c8  addiu       $v0, $zero, 0xC8
    ctx->pc = 0x151f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x151f58: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x151f58u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x151f5c: 0x0  nop
    ctx->pc = 0x151f5cu;
    // NOP
    // 0x151f60: 0x0  nop
    ctx->pc = 0x151f60u;
    // NOP
    // 0x151f64: 0x1810  mfhi        $v1
    ctx->pc = 0x151f64u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x151f68: 0x28610065  slti        $at, $v1, 0x65
    ctx->pc = 0x151f68u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)101) ? 1 : 0);
    // 0x151f6c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x151F6Cu;
    {
        const bool branch_taken_0x151f6c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x151f6c) {
            ctx->pc = 0x151F78u;
            goto label_151f78;
        }
    }
    ctx->pc = 0x151F74u;
    // 0x151f74: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x151f74u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_151f78:
    // 0x151f78: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x151f78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x151f7c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x151f7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151f80: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x151f80u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x151f84: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x151f84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x151f88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x151f88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151f8c: 0xc60303bc  lwc1        $f3, 0x3BC($s0)
    ctx->pc = 0x151f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 956)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x151f90: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x151f90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151f94: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x151f94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x151f98: 0x24c6b8b0  addiu       $a2, $a2, -0x4750
    ctx->pc = 0x151f98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949040));
    // 0x151f9c: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x151f9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x151fa0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x151fa0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x151fa4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x151fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x151fa8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x151fa8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x151fac: 0x46021819  suba.s      $f3, $f2
    ctx->pc = 0x151facu;
    FPU_SET_ACC(ctx, FPU_SUB_S(ctx->f[3], ctx->f[2]));
    // 0x151fb0: 0x4600081c  madd.s      $f0, $f1, $f0
    ctx->pc = 0x151fb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[0]));
    // 0x151fb4: 0xe60003b4  swc1        $f0, 0x3B4($s0)
    ctx->pc = 0x151fb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 948), bits); }
    // 0x151fb8: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x151fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x151fbc: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x151fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x151fc0: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x151fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x151fc4: 0xc066d86  jal         func_19B618
    ctx->pc = 0x151FC4u;
    SET_GPR_U32(ctx, 31, 0x151FCCu);
    ctx->pc = 0x151FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151FC4u;
    // 0x151fc8: 0xae02003c  sw          $v0, 0x3C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B618u, 0x151FC4u, 0x151FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151FCCu;
label_151fcc:
    // 0x151fcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x151fccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151fd0: 0xc064f54  jal         func_193D50
    ctx->pc = 0x151FD0u;
    SET_GPR_U32(ctx, 31, 0x151FD8u);
    ctx->pc = 0x151FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151FD0u;
    // 0x151fd4: 0x260503b0  addiu       $a1, $s0, 0x3B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x193D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x193D50u, 0x151FD0u, 0x151FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151FD8u;
label_151fd8:
    // 0x151fd8: 0xc60003b0  lwc1        $f0, 0x3B0($s0)
    ctx->pc = 0x151fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151fdc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x151fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x151fe0: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x151fe0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x151fe4: 0xc60003bc  lwc1        $f0, 0x3BC($s0)
    ctx->pc = 0x151fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 956)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151fe8: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x151fe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x151fec: 0xc60003b8  lwc1        $f0, 0x3B8($s0)
    ctx->pc = 0x151fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151ff0: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x151ff0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x151ff4: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x151ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x151ff8: 0x860203c8  lh          $v0, 0x3C8($s0)
    ctx->pc = 0x151ff8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 968)));
    // 0x151ffc: 0x2841003c  slti        $at, $v0, 0x3C
    ctx->pc = 0x151ffcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)60) ? 1 : 0);
    // 0x152000: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x152000u;
    {
        const bool branch_taken_0x152000 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x152004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152000u;
        // 0x152004: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152000) {
            ctx->pc = 0x152018u;
            goto label_152018;
        }
    }
    ctx->pc = 0x152008u;
    // 0x152008: 0xc045cb8  jal         func_1172E0
    ctx->pc = 0x152008u;
    SET_GPR_U32(ctx, 31, 0x152010u);
    ctx->pc = 0x1172E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1172E0u, 0x152008u, 0x152010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152010u;
label_152010:
    // 0x152010: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x152010u;
    {
        const bool branch_taken_0x152010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x152010) {
            ctx->pc = 0x152020u;
            return;
        }
    }
    ctx->pc = 0x152018u;
label_152018:
    // 0x152018: 0xc045c3c  jal         func_1170F0
    ctx->pc = 0x152018u;
    SET_GPR_U32(ctx, 31, 0x152020u);
    ctx->pc = 0x15201Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152018u;
    // 0x15201c: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1170F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1170F0u, 0x152018u, 0x152020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152020u;
}
