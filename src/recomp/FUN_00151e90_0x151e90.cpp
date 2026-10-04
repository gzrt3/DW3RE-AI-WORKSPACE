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

// Function: FUN_00151e90
// Address: 0x151e90 - 0x152034
void FUN_00151e90_0x151e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00151e90_0x151e90");
#endif

    switch (ctx->pc) {
        case 0x151eacu: goto label_151eac;
        case 0x151efcu: goto label_151efc;
        case 0x151f10u: goto label_151f10;
        case 0x151fccu: goto label_151fcc;
        case 0x151fd8u: goto label_151fd8;
        case 0x152010u: goto label_152010;
        case 0x152020u: goto label_152020;
        default: break;
    }

    ctx->pc = 0x151e90u;

    // 0x151e90: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x151e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x151e94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x151e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x151e98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x151e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x151e9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x151e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x151ea0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x151ea0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151ea4: 0x3c100032  lui         $s0, 0x32
    ctx->pc = 0x151ea4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)50 << 16));
    // 0x151ea8: 0x26106c70  addiu       $s0, $s0, 0x6C70
    ctx->pc = 0x151ea8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 27760));
label_151eac:
    // 0x151eac: 0x8e0303c0  lw          $v1, 0x3C0($s0)
    ctx->pc = 0x151eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 960)));
    // 0x151eb0: 0x1060005b  beqz        $v1, . + 4 + (0x5B << 2)
    ctx->pc = 0x151EB0u;
    {
        const bool branch_taken_0x151eb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x151eb0) {
            ctx->pc = 0x152020u;
            goto label_152020;
        }
    }
    ctx->pc = 0x151EB8u;
    // 0x151eb8: 0x8e0403c4  lw          $a0, 0x3C4($s0)
    ctx->pc = 0x151eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 964)));
    // 0x151ebc: 0x10800016  beqz        $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x151EBCu;
    {
        const bool branch_taken_0x151ebc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x151ebc) {
            ctx->pc = 0x151F18u;
            goto label_151f18;
        }
    }
    ctx->pc = 0x151EC4u;
    // 0x151ec4: 0x9083023a  lbu         $v1, 0x23A($a0)
    ctx->pc = 0x151ec4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 570)));
    // 0x151ec8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x151EC8u;
    {
        const bool branch_taken_0x151ec8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x151ec8) {
            ctx->pc = 0x151EE8u;
            goto label_151ee8;
        }
    }
    ctx->pc = 0x151ED0u;
    // 0x151ed0: 0x9083023b  lbu         $v1, 0x23B($a0)
    ctx->pc = 0x151ed0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 571)));
    // 0x151ed4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x151ED4u;
    {
        const bool branch_taken_0x151ed4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x151ed4) {
            ctx->pc = 0x151EF0u;
            goto label_151ef0;
        }
    }
    ctx->pc = 0x151EDCu;
    // 0x151edc: 0x908301a2  lbu         $v1, 0x1A2($a0)
    ctx->pc = 0x151edcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 418)));
    // 0x151ee0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x151EE0u;
    {
        const bool branch_taken_0x151ee0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x151ee0) {
            ctx->pc = 0x151EF0u;
            goto label_151ef0;
        }
    }
    ctx->pc = 0x151EE8u;
label_151ee8:
    // 0x151ee8: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x151EE8u;
    {
        const bool branch_taken_0x151ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151EE8u;
        // 0x151eec: 0xae0003c4  sw          $zero, 0x3C4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 964), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151ee8) {
            ctx->pc = 0x152020u;
            goto label_152020;
        }
    }
    ctx->pc = 0x151EF0u;
label_151ef0:
    // 0x151ef0: 0x24850150  addiu       $a1, $a0, 0x150
    ctx->pc = 0x151ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 336));
    // 0x151ef4: 0xc066e26  jal         func_19B898
    ctx->pc = 0x151EF4u;
    SET_GPR_U32(ctx, 31, 0x151EFCu);
    ctx->pc = 0x151EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151EF4u;
    // 0x151ef8: 0x260403b0  addiu       $a0, $s0, 0x3B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x151EF4u, 0x151EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151EFCu;
label_151efc:
    // 0x151efc: 0x260403b0  addiu       $a0, $s0, 0x3B0
    ctx->pc = 0x151efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 944));
    // 0x151f00: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x151f00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x151f04: 0x27a6005c  addiu       $a2, $sp, 0x5C
    ctx->pc = 0x151f04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x151f08: 0xc05f3d0  jal         func_17CF40
    ctx->pc = 0x151F08u;
    SET_GPR_U32(ctx, 31, 0x151F10u);
    ctx->pc = 0x151F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151F08u;
    // 0x151f0c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CF40u, 0x151F08u, 0x151F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151F10u;
label_151f10:
    // 0x151f10: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x151F10u;
    {
        const bool branch_taken_0x151f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151F10u;
        // 0x151f14: 0xe60003bc  swc1        $f0, 0x3BC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 956), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x151f10) {
            ctx->pc = 0x152020u;
            goto label_152020;
        }
    }
    ctx->pc = 0x151F18u;
label_151f18:
    // 0x151f18: 0x860403ca  lh          $a0, 0x3CA($s0)
    ctx->pc = 0x151f18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 970)));
    // 0x151f1c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x151f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x151f20: 0x1083000b  beq         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x151F20u;
    {
        const bool branch_taken_0x151f20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x151f20) {
            ctx->pc = 0x151F50u;
            goto label_151f50;
        }
    }
    ctx->pc = 0x151F28u;
    // 0x151f28: 0x860303c8  lh          $v1, 0x3C8($s0)
    ctx->pc = 0x151f28u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 968)));
    // 0x151f2c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x151f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x151f30: 0xa60303c8  sh          $v1, 0x3C8($s0)
    ctx->pc = 0x151f30u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 968), (uint16_t)GPR_U32(ctx, 3));
    // 0x151f34: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x151f34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x151f38: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x151f38u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x151f3c: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x151f3cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x151f40: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x151F40u;
    {
        const bool branch_taken_0x151f40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x151f40) {
            ctx->pc = 0x151F50u;
            goto label_151f50;
        }
    }
    ctx->pc = 0x151F48u;
    // 0x151f48: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x151F48u;
    {
        const bool branch_taken_0x151f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151F48u;
        // 0x151f4c: 0xae0003c0  sw          $zero, 0x3C0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 960), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151f48) {
            ctx->pc = 0x152020u;
            goto label_152020;
        }
    }
    ctx->pc = 0x151F50u;
label_151f50:
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
            goto label_152020;
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
label_152020:
    // 0x152020: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x152020u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x152024: 0x2a230014  slti        $v1, $s1, 0x14
    ctx->pc = 0x152024u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x152028: 0x1460ffa0  bnez        $v1, . + 4 + (-0x60 << 2)
    ctx->pc = 0x152028u;
    {
        const bool branch_taken_0x152028 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15202Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152028u;
        // 0x15202c: 0x261003d0  addiu       $s0, $s0, 0x3D0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152028) {
            ctx->pc = 0x151EACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_151eac;
        }
    }
    ctx->pc = 0x152030u;
    // 0x152030: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x152030u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x152034u;
}
