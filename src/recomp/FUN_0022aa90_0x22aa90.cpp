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

// Function: FUN_0022aa90
// Address: 0x22aa90 - 0x22abe8
void FUN_0022aa90_0x22aa90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0022aa90_0x22aa90");
#endif

    switch (ctx->pc) {
        case 0x22ab60u: goto label_22ab60;
        default: break;
    }

    ctx->pc = 0x22aa90u;

    // 0x22aa90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22aa90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22aa94: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x22aa94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x22aa98: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x22aa98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x22aa9c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22aa9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22aaa0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22aaa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22aaa4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22aaa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22aaa8: 0x8c900000  lw          $s0, 0x0($a0)
    ctx->pc = 0x22aaa8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x22aaac: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x22aaacu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22aab0: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22AAB0u;
    {
        const bool branch_taken_0x22aab0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x22AAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AAB0u;
        // 0x22aab4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22aab0) {
            ctx->pc = 0x22AAC4u;
            goto label_22aac4;
        }
    }
    ctx->pc = 0x22AAB8u;
    // 0x22aab8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22aab8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22aabc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x22AABCu;
    {
        const bool branch_taken_0x22aabc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AABCu;
        // 0x22aac0: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22aabc) {
            ctx->pc = 0x22AAE0u;
            goto label_22aae0;
        }
    }
    ctx->pc = 0x22AAC4u;
label_22aac4:
    // 0x22aac4: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x22aac4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x22aac8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22aac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x22aacc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x22aaccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x22aad0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22aad0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22aad4: 0x0  nop
    ctx->pc = 0x22aad4u;
    // NOP
    // 0x22aad8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x22aad8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x22aadc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x22aadcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_22aae0:
    // 0x22aae0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x22aae0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x22aae4: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x22aae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x22aae8: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x22aae8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x22aaec: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x22aaecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x22aaf0: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x22aaf0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x22aaf4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22AAF4u;
    {
        const bool branch_taken_0x22aaf4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x22AAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AAF4u;
        // 0x22aaf8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22aaf4) {
            ctx->pc = 0x22AB08u;
            goto label_22ab08;
        }
    }
    ctx->pc = 0x22AAFCu;
    // 0x22aafc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22aafcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22ab00: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x22AB00u;
    {
        const bool branch_taken_0x22ab00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AB00u;
        // 0x22ab04: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ab00) {
            ctx->pc = 0x22AB20u;
            goto label_22ab20;
        }
    }
    ctx->pc = 0x22AB08u;
label_22ab08:
    // 0x22ab08: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22ab08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x22ab0c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x22ab0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x22ab10: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22ab10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22ab14: 0x0  nop
    ctx->pc = 0x22ab14u;
    // NOP
    // 0x22ab18: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x22ab18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x22ab1c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x22ab1cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_22ab20:
    // 0x22ab20: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x22ab20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x22ab24: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x22ab24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x22ab28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22ab28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22ab2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22ab2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ab30: 0x26250004  addiu       $a1, $s1, 0x4
    ctx->pc = 0x22ab30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x22ab34: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x22ab34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x22ab38: 0x240200f0  addiu       $v0, $zero, 0xF0
    ctx->pc = 0x22ab38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x22ab3c: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x22ab3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x22ab40: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x22ab40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x22ab44: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x22ab44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x22ab48: 0xa220003b  sb          $zero, 0x3B($s1)
    ctx->pc = 0x22ab48u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 59), (uint8_t)GPR_U32(ctx, 0));
    // 0x22ab4c: 0xa223003c  sb          $v1, 0x3C($s1)
    ctx->pc = 0x22ab4cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 60), (uint8_t)GPR_U32(ctx, 3));
    // 0x22ab50: 0xa6220040  sh          $v0, 0x40($s1)
    ctx->pc = 0x22ab50u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 64), (uint16_t)GPR_U32(ctx, 2));
    // 0x22ab54: 0xa2200036  sb          $zero, 0x36($s1)
    ctx->pc = 0x22ab54u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 54), (uint8_t)GPR_U32(ctx, 0));
    // 0x22ab58: 0xc0445bc  jal         func_1116F0
    ctx->pc = 0x22AB58u;
    SET_GPR_U32(ctx, 31, 0x22AB60u);
    ctx->pc = 0x22AB5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AB58u;
    // 0x22ab5c: 0xa6200042  sh          $zero, 0x42($s1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 17), 66), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1116F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1116F0u, 0x22AB58u, 0x22AB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AB60u;
label_22ab60:
    // 0x22ab60: 0x9222003a  lbu         $v0, 0x3A($s1)
    ctx->pc = 0x22ab60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 58)));
    // 0x22ab64: 0xa2220044  sb          $v0, 0x44($s1)
    ctx->pc = 0x22ab64u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 68), (uint8_t)GPR_U32(ctx, 2));
    // 0x22ab68: 0x92220026  lbu         $v0, 0x26($s1)
    ctx->pc = 0x22ab68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 38)));
    // 0x22ab6c: 0xa2220022  sb          $v0, 0x22($s1)
    ctx->pc = 0x22ab6cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 34), (uint8_t)GPR_U32(ctx, 2));
    // 0x22ab70: 0xa2220028  sb          $v0, 0x28($s1)
    ctx->pc = 0x22ab70u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 40), (uint8_t)GPR_U32(ctx, 2));
    // 0x22ab74: 0x92220027  lbu         $v0, 0x27($s1)
    ctx->pc = 0x22ab74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 39)));
    // 0x22ab78: 0xa2220023  sb          $v0, 0x23($s1)
    ctx->pc = 0x22ab78u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 35), (uint8_t)GPR_U32(ctx, 2));
    // 0x22ab7c: 0xa2220029  sb          $v0, 0x29($s1)
    ctx->pc = 0x22ab7cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 41), (uint8_t)GPR_U32(ctx, 2));
    // 0x22ab80: 0x92020004  lbu         $v0, 0x4($s0)
    ctx->pc = 0x22ab80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x22ab84: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22AB84u;
    {
        const bool branch_taken_0x22ab84 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x22AB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AB84u;
        // 0x22ab88: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ab84) {
            ctx->pc = 0x22AB98u;
            goto label_22ab98;
        }
    }
    ctx->pc = 0x22AB8Cu;
    // 0x22ab8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22ab8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22ab90: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x22AB90u;
    {
        const bool branch_taken_0x22ab90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AB90u;
        // 0x22ab94: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ab90) {
            ctx->pc = 0x22ABB0u;
            goto label_22abb0;
        }
    }
    ctx->pc = 0x22AB98u;
label_22ab98:
    // 0x22ab98: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22ab98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x22ab9c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x22ab9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x22aba0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22aba0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22aba4: 0x0  nop
    ctx->pc = 0x22aba4u;
    // NOP
    // 0x22aba8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x22aba8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x22abac: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x22abacu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_22abb0:
    // 0x22abb0: 0x3c034234  lui         $v1, 0x4234
    ctx->pc = 0x22abb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16948 << 16));
    // 0x22abb4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x22abb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x22abb8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22abb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22abbc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x22abbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x22abc0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x22abc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x22abc4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x22abc4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x22abc8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22abc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22abcc: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x22abccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
    // 0x22abd0: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x22abd0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x22abd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22abd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22abd8: 0x0  nop
    ctx->pc = 0x22abd8u;
    // NOP
    // 0x22abdc: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x22abdcu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x22abe0: 0x0  nop
    ctx->pc = 0x22abe0u;
    // NOP
    // 0x22abe4: 0x0  nop
    ctx->pc = 0x22abe4u;
    // NOP
    ctx->pc = 0x22abe8u;
}
