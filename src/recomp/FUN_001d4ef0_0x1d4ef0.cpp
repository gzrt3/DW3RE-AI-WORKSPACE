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

// Function: FUN_001d4ef0
// Address: 0x1d4ef0 - 0x1d50a8
void FUN_001d4ef0_0x1d4ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d4ef0_0x1d4ef0");
#endif

    switch (ctx->pc) {
        case 0x1d4f1cu: goto label_1d4f1c;
        case 0x1d4f44u: goto label_1d4f44;
        case 0x1d4f5cu: goto label_1d4f5c;
        case 0x1d4f74u: goto label_1d4f74;
        case 0x1d4fecu: goto label_1d4fec;
        case 0x1d5080u: goto label_1d5080;
        case 0x1d5094u: goto label_1d5094;
        case 0x1d50a4u: goto label_1d50a4;
        default: break;
    }

    ctx->pc = 0x1d4ef0u;

    // 0x1d4ef0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d4ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d4ef4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d4ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d4ef8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d4ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d4efc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d4efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d4f00: 0x8f828590  lw          $v0, -0x7A70($gp)
    ctx->pc = 0x1d4f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x1d4f04: 0x8c900024  lw          $s0, 0x24($a0)
    ctx->pc = 0x1d4f04u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1d4f08: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1d4f08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x1d4f0c: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1D4F0Cu;
    {
        const bool branch_taken_0x1d4f0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4F0Cu;
        // 0x1d4f10: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4f0c) {
            ctx->pc = 0x1D4F50u;
            goto label_1d4f50;
        }
    }
    ctx->pc = 0x1D4F14u;
    // 0x1d4f14: 0xc051688  jal         func_145A20
    ctx->pc = 0x1D4F14u;
    SET_GPR_U32(ctx, 31, 0x1D4F1Cu);
    ctx->pc = 0x145A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145A20u, 0x1D4F14u, 0x1D4F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4F1Cu;
label_1d4f1c:
    // 0x1d4f1c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1d4f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1d4f20: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1d4f20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1d4f24: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1d4f24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d4f28: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1d4f28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1d4f2c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D4F2Cu;
    {
        const bool branch_taken_0x1d4f2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4F2Cu;
        // 0x1d4f30: 0x30620100  andi        $v0, $v1, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4f2c) {
            ctx->pc = 0x1D4F4Cu;
            goto label_1d4f4c;
        }
    }
    ctx->pc = 0x1D4F34u;
    // 0x1d4f34: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D4F34u;
    {
        const bool branch_taken_0x1d4f34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4F34u;
        // 0x1d4f38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4f34) {
            ctx->pc = 0x1D4F4Cu;
            goto label_1d4f4c;
        }
    }
    ctx->pc = 0x1D4F3Cu;
    // 0x1d4f3c: 0xc075430  jal         func_1D50C0
    ctx->pc = 0x1D4F3Cu;
    SET_GPR_U32(ctx, 31, 0x1D4F44u);
    ctx->pc = 0x1D50C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D50C0u, 0x1D4F3Cu, 0x1D4F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4F44u;
label_1d4f44:
    // 0x1d4f44: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D4F44u;
    {
        const bool branch_taken_0x1d4f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4F44u;
        // 0x1d4f48: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4f44) {
            ctx->pc = 0x1D4F54u;
            goto label_1d4f54;
        }
    }
    ctx->pc = 0x1D4F4Cu;
label_1d4f4c:
    // 0x1d4f4c: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x1d4f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
label_1d4f50:
    // 0x1d4f50: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x1d4f50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_1d4f54:
    // 0x1d4f54: 0xc04fbd4  jal         func_13EF50
    ctx->pc = 0x1D4F54u;
    SET_GPR_U32(ctx, 31, 0x1D4F5Cu);
    ctx->pc = 0x13EF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13EF50u, 0x1D4F54u, 0x1D4F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4F5Cu;
label_1d4f5c:
    // 0x1d4f5c: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x1d4f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1d4f60: 0x9063023a  lbu         $v1, 0x23A($v1)
    ctx->pc = 0x1d4f60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 570)));
    // 0x1d4f64: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D4F64u;
    {
        const bool branch_taken_0x1d4f64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4F64u;
        // 0x1d4f68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4f64) {
            ctx->pc = 0x1D4F74u;
            goto label_1d4f74;
        }
    }
    ctx->pc = 0x1D4F6Cu;
    // 0x1d4f6c: 0xc054638  jal         func_1518E0
    ctx->pc = 0x1D4F6Cu;
    SET_GPR_U32(ctx, 31, 0x1D4F74u);
    ctx->pc = 0x1518E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1518E0u, 0x1D4F6Cu, 0x1D4F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4F74u;
label_1d4f74:
    // 0x1d4f74: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x1d4f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x1d4f78: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x1d4f78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x1d4f7c: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1D4F7Cu;
    {
        const bool branch_taken_0x1d4f7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d4f7c) {
            ctx->pc = 0x1D4FCCu;
            goto label_1d4fcc;
        }
    }
    ctx->pc = 0x1D4F84u;
    // 0x1d4f84: 0x8e250024  lw          $a1, 0x24($s1)
    ctx->pc = 0x1d4f84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1d4f88: 0x84a3003c  lh          $v1, 0x3C($a1)
    ctx->pc = 0x1d4f88u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x1d4f8c: 0x28630096  slti        $v1, $v1, 0x96
    ctx->pc = 0x1d4f8cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)150) ? 1 : 0);
    // 0x1d4f90: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D4F90u;
    {
        const bool branch_taken_0x1d4f90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4F90u;
        // 0x1d4f94: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4f90) {
            ctx->pc = 0x1D4F9Cu;
            goto label_1d4f9c;
        }
    }
    ctx->pc = 0x1D4F98u;
    // 0x1d4f98: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d4f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d4f9c:
    // 0x1d4f9c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1D4F9Cu;
    {
        const bool branch_taken_0x1d4f9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4f9c) {
            ctx->pc = 0x1D4FCCu;
            goto label_1d4fcc;
        }
    }
    ctx->pc = 0x1D4FA4u;
    // 0x1d4fa4: 0x8ca4002c  lw          $a0, 0x2C($a1)
    ctx->pc = 0x1d4fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x1d4fa8: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x1d4fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x1d4fac: 0x3463000c  ori         $v1, $v1, 0xC
    ctx->pc = 0x1d4facu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12);
    // 0x1d4fb0: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1d4fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1d4fb4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1d4fb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1d4fb8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D4FB8u;
    {
        const bool branch_taken_0x1d4fb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4fb8) {
            ctx->pc = 0x1D4FCCu;
            goto label_1d4fcc;
        }
    }
    ctx->pc = 0x1D4FC0u;
    // 0x1d4fc0: 0x84a301ae  lh          $v1, 0x1AE($a1)
    ctx->pc = 0x1d4fc0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 430)));
    // 0x1d4fc4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d4fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d4fc8: 0xa4a301ae  sh          $v1, 0x1AE($a1)
    ctx->pc = 0x1d4fc8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 430), (uint16_t)GPR_U32(ctx, 3));
label_1d4fcc:
    // 0x1d4fcc: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x1d4fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x1d4fd0: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x1d4fd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x1d4fd4: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D4FD4u;
    {
        const bool branch_taken_0x1d4fd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d4fd4) {
            ctx->pc = 0x1D4FECu;
            goto label_1d4fec;
        }
    }
    ctx->pc = 0x1D4FDCu;
    // 0x1d4fdc: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x1d4fdcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d4fe0: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x1d4fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x1d4fe4: 0xc060754  jal         func_181D50
    ctx->pc = 0x1D4FE4u;
    SET_GPR_U32(ctx, 31, 0x1D4FECu);
    ctx->pc = 0x1D4FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4FE4u;
    // 0x1d4fe8: 0x26050040  addiu       $a1, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181D50u, 0x1D4FE4u, 0x1D4FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4FECu;
label_1d4fec:
    // 0x1d4fec: 0xc6000150  lwc1        $f0, 0x150($s0)
    ctx->pc = 0x1d4fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d4ff0: 0x3c03459c  lui         $v1, 0x459C
    ctx->pc = 0x1d4ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17820 << 16));
    // 0x1d4ff4: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x1d4ff4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x1d4ff8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1d4ff8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d4ffc: 0x0  nop
    ctx->pc = 0x1d4ffcu;
    // NOP
    // 0x1d5000: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1d5000u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x1d5004: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d5004u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1d5008: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1d5008u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1d500c: 0x0  nop
    ctx->pc = 0x1d500cu;
    // NOP
    // 0x1d5010: 0xa6230018  sh          $v1, 0x18($s1)
    ctx->pc = 0x1d5010u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 24), (uint16_t)GPR_U32(ctx, 3));
    // 0x1d5014: 0xc6000158  lwc1        $f0, 0x158($s0)
    ctx->pc = 0x1d5014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d5018: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1d5018u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x1d501c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d501cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1d5020: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1d5020u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1d5024: 0x0  nop
    ctx->pc = 0x1d5024u;
    // NOP
    // 0x1d5028: 0xa623001a  sh          $v1, 0x1A($s1)
    ctx->pc = 0x1d5028u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 26), (uint16_t)GPR_U32(ctx, 3));
    // 0x1d502c: 0x8f848590  lw          $a0, -0x7A70($gp)
    ctx->pc = 0x1d502cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x1d5030: 0x30830004  andi        $v1, $a0, 0x4
    ctx->pc = 0x1d5030u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x1d5034: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D5034u;
    {
        const bool branch_taken_0x1d5034 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5034u;
        // 0x1d5038: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5034) {
            ctx->pc = 0x1D5048u;
            goto label_1d5048;
        }
    }
    ctx->pc = 0x1D503Cu;
    // 0x1d503c: 0x30830020  andi        $v1, $a0, 0x20
    ctx->pc = 0x1d503cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
    // 0x1d5040: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1D5040u;
    {
        const bool branch_taken_0x1d5040 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5040) {
            ctx->pc = 0x1D50A4u;
            goto label_1d50a4;
        }
    }
    ctx->pc = 0x1D5048u;
label_1d5048:
    // 0x1d5048: 0x90234af3  lbu         $v1, 0x4AF3($at)
    ctx->pc = 0x1d5048u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19187)));
    // 0x1d504c: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x1d504cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x1d5050: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1D5050u;
    {
        const bool branch_taken_0x1d5050 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5050) {
            ctx->pc = 0x1D509Cu;
            goto label_1d509c;
        }
    }
    ctx->pc = 0x1D5058u;
    // 0x1d5058: 0x8e300020  lw          $s0, 0x20($s1)
    ctx->pc = 0x1d5058u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1d505c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d505cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5060: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1d5060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d5064: 0x920501a2  lbu         $a1, 0x1A2($s0)
    ctx->pc = 0x1d5064u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 418)));
    // 0x1d5068: 0x831804  sllv        $v1, $v1, $a0
    ctx->pc = 0x1d5068u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x1d506c: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x1d506cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1d5070: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1D5070u;
    {
        const bool branch_taken_0x1d5070 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5070u;
        // 0x1d5074: 0x26050050  addiu       $a1, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5070) {
            ctx->pc = 0x1D50A4u;
            goto label_1d50a4;
        }
    }
    ctx->pc = 0x1D5078u;
    // 0x1d5078: 0xc045180  jal         func_114600
    ctx->pc = 0x1D5078u;
    SET_GPR_U32(ctx, 31, 0x1D5080u);
    ctx->pc = 0x114600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114600u, 0x1D5078u, 0x1D5080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5080u;
label_1d5080:
    // 0x1d5080: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D5080u;
    {
        const bool branch_taken_0x1d5080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5080u;
        // 0x1d5084: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5080) {
            ctx->pc = 0x1D50A4u;
            goto label_1d50a4;
        }
    }
    ctx->pc = 0x1D5088u;
    // 0x1d5088: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1d5088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d508c: 0xc045a34  jal         func_1168D0
    ctx->pc = 0x1D508Cu;
    SET_GPR_U32(ctx, 31, 0x1D5094u);
    ctx->pc = 0x1D5090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D508Cu;
    // 0x1d5090: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1168D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1168D0u, 0x1D508Cu, 0x1D5094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5094u;
label_1d5094:
    // 0x1d5094: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D5094u;
    {
        const bool branch_taken_0x1d5094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5094u;
        // 0x1d5098: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5094) {
            ctx->pc = 0x1D50A8u;
            return;
        }
    }
    ctx->pc = 0x1D509Cu;
label_1d509c:
    // 0x1d509c: 0xc045a10  jal         func_116840
    ctx->pc = 0x1D509Cu;
    SET_GPR_U32(ctx, 31, 0x1D50A4u);
    ctx->pc = 0x1D50A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D509Cu;
    // 0x1d50a0: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116840u, 0x1D509Cu, 0x1D50A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D50A4u;
label_1d50a4:
    // 0x1d50a4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d50a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x1d50a8u;
}
