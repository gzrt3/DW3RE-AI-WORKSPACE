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

// Function: FUN_0022ef90
// Address: 0x22ef90 - 0x22f0e4
void FUN_0022ef90_0x22ef90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0022ef90_0x22ef90");
#endif

    switch (ctx->pc) {
        case 0x22efc0u: goto label_22efc0;
        case 0x22efd8u: goto label_22efd8;
        case 0x22f078u: goto label_22f078;
        case 0x22f08cu: goto label_22f08c;
        case 0x22f094u: goto label_22f094;
        default: break;
    }

    ctx->pc = 0x22ef90u;

    // 0x22ef90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22ef90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22ef94: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x22ef94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x22ef98: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x22ef98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x22ef9c: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x22ef9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x22efa0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22efa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22efa4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22efa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22efa8: 0x9024490d  lbu         $a0, 0x490D($at)
    ctx->pc = 0x22efa8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x33490Du));
    // 0x22efac: 0x1483004c  bne         $a0, $v1, . + 4 + (0x4C << 2)
    ctx->pc = 0x22EFACu;
    {
        const bool branch_taken_0x22efac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x22efac) {
            ctx->pc = 0x22F0E0u;
            goto label_22f0e0;
        }
    }
    ctx->pc = 0x22EFB4u;
    // 0x22efb4: 0x3c100029  lui         $s0, 0x29
    ctx->pc = 0x22efb4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)41 << 16));
    // 0x22efb8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x22efb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22efbc: 0x2610eff0  addiu       $s0, $s0, -0x1010
    ctx->pc = 0x22efbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963184));
label_22efc0:
    // 0x22efc0: 0x3c04004b  lui         $a0, 0x4B
    ctx->pc = 0x22efc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)75 << 16));
    // 0x22efc4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22efc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22efc8: 0x248403a0  addiu       $a0, $a0, 0x3A0
    ctx->pc = 0x22efc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 928));
    // 0x22efcc: 0x3c034bbe  lui         $v1, 0x4BBE
    ctx->pc = 0x22efccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)19390 << 16));
    // 0x22efd0: 0x3463bc20  ori         $v1, $v1, 0xBC20
    ctx->pc = 0x22efd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)48160);
    // 0x22efd4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22efd4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22efd8:
    // 0x22efd8: 0x0  nop
    ctx->pc = 0x22efd8u;
    // NOP
    // 0x22efdc: 0x84830012  lh          $v1, 0x12($a0)
    ctx->pc = 0x22efdcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x22efe0: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x22EFE0u;
    {
        const bool branch_taken_0x22efe0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22efe0) {
            ctx->pc = 0x22F01Cu;
            goto label_22f01c;
        }
    }
    ctx->pc = 0x22EFE8u;
    // 0x22efe8: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x22efe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x22efec: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x22efecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x22eff0: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x22eff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x22eff4: 0xc4640150  lwc1        $f4, 0x150($v1)
    ctx->pc = 0x22eff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x22eff8: 0xc4610158  lwc1        $f1, 0x158($v1)
    ctx->pc = 0x22eff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22effc: 0x460418c1  sub.s       $f3, $f3, $f4
    ctx->pc = 0x22effcu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
    // 0x22f000: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x22f000u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x22f004: 0x4603181a  mula.s      $f3, $f3
    ctx->pc = 0x22f004u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[3], ctx->f[3]));
    // 0x22f008: 0x4601085c  madd.s      $f1, $f1, $f1
    ctx->pc = 0x22f008u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x22f00c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x22f00cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22f010: 0x0  nop
    ctx->pc = 0x22f010u;
    // NOP
    // 0x22f014: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x22F014u;
    {
        const bool branch_taken_0x22f014 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22f014) {
            ctx->pc = 0x22F030u;
            goto label_22f030;
        }
    }
    ctx->pc = 0x22F01Cu;
label_22f01c:
    // 0x22f01c: 0x0  nop
    ctx->pc = 0x22f01cu;
    // NOP
    // 0x22f020: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x22f020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x22f024: 0x28a30002  slti        $v1, $a1, 0x2
    ctx->pc = 0x22f024u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x22f028: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x22F028u;
    {
        const bool branch_taken_0x22f028 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F028u;
        // 0x22f02c: 0x24840070  addiu       $a0, $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f028) {
            ctx->pc = 0x22EFD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22efd8;
        }
    }
    ctx->pc = 0x22F030u;
label_22f030:
    // 0x22f030: 0x28a10002  slti        $at, $a1, 0x2
    ctx->pc = 0x22f030u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x22f034: 0x10200025  beqz        $at, . + 4 + (0x25 << 2)
    ctx->pc = 0x22F034u;
    {
        const bool branch_taken_0x22f034 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f034) {
            ctx->pc = 0x22F0CCu;
            goto label_22f0cc;
        }
    }
    ctx->pc = 0x22F03Cu;
    // 0x22f03c: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x22f03cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x22f040: 0x240300b4  addiu       $v1, $zero, 0xB4
    ctx->pc = 0x22f040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x22f044: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x22f044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x22f048: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x22f048u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x22f04c: 0x0  nop
    ctx->pc = 0x22f04cu;
    // NOP
    // 0x22f050: 0x0  nop
    ctx->pc = 0x22f050u;
    // NOP
    // 0x22f054: 0x1810  mfhi        $v1
    ctx->pc = 0x22f054u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x22f058: 0x1460001c  bnez        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x22F058u;
    {
        const bool branch_taken_0x22f058 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F058u;
        // 0x22f05c: 0xae040020  sw          $a0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f058) {
            ctx->pc = 0x22F0CCu;
            goto label_22f0cc;
        }
    }
    ctx->pc = 0x22F060u;
    // 0x22f060: 0x3c060059  lui         $a2, 0x59
    ctx->pc = 0x22f060u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)89 << 16));
    // 0x22f064: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22f064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22f068: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x22f068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x22f06c: 0x24c6a2b0  addiu       $a2, $a2, -0x5D50
    ctx->pc = 0x22f06cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294943408));
    // 0x22f070: 0xc07a518  jal         func_1E9460
    ctx->pc = 0x22F070u;
    SET_GPR_U32(ctx, 31, 0x22F078u);
    ctx->pc = 0x22F074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F070u;
    // 0x22f074: 0x24070013  addiu       $a3, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9460u, 0x22F070u, 0x22F078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F078u;
label_22f078:
    // 0x22f078: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x22f078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22f07c: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x22f07cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x22f080: 0x2406003c  addiu       $a2, $zero, 0x3C
    ctx->pc = 0x22f080u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x22f084: 0xc05ae1c  jal         func_16B870
    ctx->pc = 0x22F084u;
    SET_GPR_U32(ctx, 31, 0x22F08Cu);
    ctx->pc = 0x22F088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F084u;
    // 0x22f088: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16B870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B870u, 0x22F084u, 0x22F08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F08Cu;
label_22f08c:
    // 0x22f08c: 0xc08f0cc  jal         func_23C330
    ctx->pc = 0x22F08Cu;
    SET_GPR_U32(ctx, 31, 0x22F094u);
    ctx->pc = 0x23C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C330u, 0x22F08Cu, 0x22F094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F094u;
label_22f094:
    // 0x22f094: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22f094u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22f098: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x22f098u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x22f09c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22f09cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22f0a0: 0x0  nop
    ctx->pc = 0x22f0a0u;
    // NOP
    // 0x22f0a4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x22f0a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x22f0a8: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x22f0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x22f0ac: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x22f0acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x22f0b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22f0b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22f0b4: 0x0  nop
    ctx->pc = 0x22f0b4u;
    // NOP
    // 0x22f0b8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x22f0b8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x22f0bc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x22f0bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x22f0c0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x22f0c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x22f0c4: 0x0  nop
    ctx->pc = 0x22f0c4u;
    // NOP
    // 0x22f0c8: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x22f0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
label_22f0cc:
    // 0x22f0cc: 0x0  nop
    ctx->pc = 0x22f0ccu;
    // NOP
    // 0x22f0d0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x22f0d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x22f0d4: 0x2a230019  slti        $v1, $s1, 0x19
    ctx->pc = 0x22f0d4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)25) ? 1 : 0);
    // 0x22f0d8: 0x1460ffb9  bnez        $v1, . + 4 + (-0x47 << 2)
    ctx->pc = 0x22F0D8u;
    {
        const bool branch_taken_0x22f0d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F0D8u;
        // 0x22f0dc: 0x26100030  addiu       $s0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f0d8) {
            ctx->pc = 0x22EFC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22efc0;
        }
    }
    ctx->pc = 0x22F0E0u;
label_22f0e0:
    // 0x22f0e0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x22f0e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x22f0e4u;
}
