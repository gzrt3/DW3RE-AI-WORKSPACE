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

// Function: FUN_00125010
// Address: 0x125010 - 0x12511c
void FUN_00125010_0x125010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00125010_0x125010");
#endif

    switch (ctx->pc) {
        case 0x125028u: goto label_125028;
        case 0x125054u: goto label_125054;
        case 0x125090u: goto label_125090;
        case 0x1250c0u: goto label_1250c0;
        case 0x1250e8u: goto label_1250e8;
        case 0x125108u: goto label_125108;
        default: break;
    }

    ctx->pc = 0x125010u;

    // 0x125010: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x125010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x125014: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x125014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x125018: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x125018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x12501c: 0xc48c0300  lwc1        $f12, 0x300($a0)
    ctx->pc = 0x12501cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x125020: 0xc06d412  jal         func_1B5048
    ctx->pc = 0x125020u;
    SET_GPR_U32(ctx, 31, 0x125028u);
    ctx->pc = 0x125024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125020u;
    // 0x125024: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5048u, 0x125020u, 0x125028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125028u;
label_125028:
    // 0x125028: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x125028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x12502c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x12502cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x125030: 0xc6010330  lwc1        $f1, 0x330($s0)
    ctx->pc = 0x125030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x125034: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x125034u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x125038: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x125038u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x12503c: 0xe6000250  swc1        $f0, 0x250($s0)
    ctx->pc = 0x12503cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 592), bits); }
    // 0x125040: 0xc6000334  lwc1        $f0, 0x334($s0)
    ctx->pc = 0x125040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 820)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x125044: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x125044u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x125048: 0xe6000254  swc1        $f0, 0x254($s0)
    ctx->pc = 0x125048u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 596), bits); }
    // 0x12504c: 0xc06d4c0  jal         func_1B5300
    ctx->pc = 0x12504Cu;
    SET_GPR_U32(ctx, 31, 0x125054u);
    ctx->pc = 0x125050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12504Cu;
    // 0x125050: 0xc60c0300  lwc1        $f12, 0x300($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5300u, 0x12504Cu, 0x125054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125054u;
label_125054:
    // 0x125054: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x125054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x125058: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x125058u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x12505c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x12505cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x125060: 0xc6010338  lwc1        $f1, 0x338($s0)
    ctx->pc = 0x125060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x125064: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x125064u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x125068: 0x3c023dd6  lui         $v0, 0x3DD6
    ctx->pc = 0x125068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15830 << 16));
    // 0x12506c: 0x344276c3  ori         $v0, $v0, 0x76C3
    ctx->pc = 0x12506cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30403);
    // 0x125070: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x125070u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x125074: 0xe6000258  swc1        $f0, 0x258($s0)
    ctx->pc = 0x125074u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 600), bits); }
    // 0x125078: 0xae03025c  sw          $v1, 0x25C($s0)
    ctx->pc = 0x125078u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 604), GPR_U32(ctx, 3));
    // 0x12507c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12507cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x125080: 0xc6010300  lwc1        $f1, 0x300($s0)
    ctx->pc = 0x125080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x125084: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x125084u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x125088: 0xc064aa4  jal         func_192A90
    ctx->pc = 0x125088u;
    SET_GPR_U32(ctx, 31, 0x125090u);
    ctx->pc = 0x12508Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125088u;
    // 0x12508c: 0xe60c0300  swc1        $f12, 0x300($s0) (Delay Slot)
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 768), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x192A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192A90u, 0x125088u, 0x125090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125090u;
label_125090:
    // 0x125090: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x125090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
    // 0x125094: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x125094u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x125098: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x125098u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12509c: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x12509cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
    // 0x1250a0: 0xe6000300  swc1        $f0, 0x300($s0)
    ctx->pc = 0x1250a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 768), bits); }
    // 0x1250a4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1250a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1250a8: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x1250a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x1250ac: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1250acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1250b0: 0x0  nop
    ctx->pc = 0x1250b0u;
    // NOP
    // 0x1250b4: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x1250b4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1250b8: 0xc064aa4  jal         func_192A90
    ctx->pc = 0x1250B8u;
    SET_GPR_U32(ctx, 31, 0x1250C0u);
    ctx->pc = 0x1250BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1250B8u;
    // 0x1250bc: 0xe60c02a4  swc1        $f12, 0x2A4($s0) (Delay Slot)
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 676), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x192A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192A90u, 0x1250B8u, 0x1250C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1250C0u;
label_1250c0:
    // 0x1250c0: 0xe60002a4  swc1        $f0, 0x2A4($s0)
    ctx->pc = 0x1250c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 676), bits); }
    // 0x1250c4: 0x920302e3  lbu         $v1, 0x2E3($s0)
    ctx->pc = 0x1250c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 739)));
    // 0x1250c8: 0x2861000b  slti        $at, $v1, 0xB
    ctx->pc = 0x1250c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x1250cc: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1250CCu;
    {
        const bool branch_taken_0x1250cc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1250D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1250CCu;
        // 0x1250d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1250cc) {
            ctx->pc = 0x1250E0u;
            goto label_1250e0;
        }
    }
    ctx->pc = 0x1250D4u;
    // 0x1250d4: 0x2463fff6  addiu       $v1, $v1, -0xA
    ctx->pc = 0x1250d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967286));
    // 0x1250d8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1250D8u;
    {
        const bool branch_taken_0x1250d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1250DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1250D8u;
        // 0x1250dc: 0xa20302e3  sb          $v1, 0x2E3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 739), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1250d8) {
            ctx->pc = 0x1250F0u;
            goto label_1250f0;
        }
    }
    ctx->pc = 0x1250E0u;
label_1250e0:
    // 0x1250e0: 0xc0591f4  jal         func_1647D0
    ctx->pc = 0x1250E0u;
    SET_GPR_U32(ctx, 31, 0x1250E8u);
    ctx->pc = 0x1250E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1250E0u;
    // 0x1250e4: 0xa20002e3  sb          $zero, 0x2E3($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 739), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x1250E0u, 0x1250E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1250E8u;
label_1250e8:
    // 0x1250e8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1250E8u;
    {
        const bool branch_taken_0x1250e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1250ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1250E8u;
        // 0x1250ec: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1250e8) {
            ctx->pc = 0x12511Cu;
            return;
        }
    }
    ctx->pc = 0x1250F0u;
label_1250f0:
    // 0x1250f0: 0x960302e6  lhu         $v1, 0x2E6($s0)
    ctx->pc = 0x1250f0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 742)));
    // 0x1250f4: 0x2861000d  slti        $at, $v1, 0xD
    ctx->pc = 0x1250f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)13) ? 1 : 0);
    // 0x1250f8: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x1250F8u;
    {
        const bool branch_taken_0x1250f8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1250FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1250F8u;
        // 0x1250fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1250f8) {
            ctx->pc = 0x125110u;
            goto label_125110;
        }
    }
    ctx->pc = 0x125100u;
    // 0x125100: 0xc0591f4  jal         func_1647D0
    ctx->pc = 0x125100u;
    SET_GPR_U32(ctx, 31, 0x125108u);
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x125100u, 0x125108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125108u;
label_125108:
    // 0x125108: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x125108u;
    {
        const bool branch_taken_0x125108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x125108) {
            ctx->pc = 0x125118u;
            goto label_125118;
        }
    }
    ctx->pc = 0x125110u;
label_125110:
    // 0x125110: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x125110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x125114: 0xa60302e6  sh          $v1, 0x2E6($s0)
    ctx->pc = 0x125114u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 742), (uint16_t)GPR_U32(ctx, 3));
label_125118:
    // 0x125118: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x125118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x12511cu;
}
