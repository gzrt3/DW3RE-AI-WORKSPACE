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

// Function: FUN_00130fe0
// Address: 0x130fe0 - 0x1310b4
void FUN_00130fe0_0x130fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00130fe0_0x130fe0");
#endif

    switch (ctx->pc) {
        case 0x131004u: goto label_131004;
        case 0x131030u: goto label_131030;
        case 0x1310a4u: goto label_1310a4;
        default: break;
    }

    ctx->pc = 0x130fe0u;

    // 0x130fe0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x130fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x130fe4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x130fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x130fe8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x130fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x130fec: 0x94820012  lhu         $v0, 0x12($a0)
    ctx->pc = 0x130fecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x130ff0: 0x28420028  slti        $v0, $v0, 0x28
    ctx->pc = 0x130ff0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)40) ? 1 : 0);
    // 0x130ff4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x130FF4u;
    {
        const bool branch_taken_0x130ff4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x130FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130FF4u;
        // 0x130ff8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130ff4) {
            ctx->pc = 0x13100Cu;
            goto label_13100c;
        }
    }
    ctx->pc = 0x130FFCu;
    // 0x130ffc: 0xc0591f4  jal         func_1647D0
    ctx->pc = 0x130FFCu;
    SET_GPR_U32(ctx, 31, 0x131004u);
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x130FFCu, 0x131004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131004u;
label_131004:
    // 0x131004: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x131004u;
    {
        const bool branch_taken_0x131004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131004u;
        // 0x131008: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131004) {
            ctx->pc = 0x1310B4u;
            return;
        }
    }
    ctx->pc = 0x13100Cu;
label_13100c:
    // 0x13100c: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x13100cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x131010: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x131010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x131014: 0x9023a3ea  lbu         $v1, -0x5C16($at)
    ctx->pc = 0x131014u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x30A3EAu));
    // 0x131018: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x131018u;
    {
        const bool branch_taken_0x131018 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x13101Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131018u;
        // 0x13101c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131018) {
            ctx->pc = 0x131028u;
            goto label_131028;
        }
    }
    ctx->pc = 0x131020u;
    // 0x131020: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x131020u;
    {
        const bool branch_taken_0x131020 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x131020) {
            ctx->pc = 0x131038u;
            goto label_131038;
        }
    }
    ctx->pc = 0x131028u;
label_131028:
    // 0x131028: 0xc0591f4  jal         func_1647D0
    ctx->pc = 0x131028u;
    SET_GPR_U32(ctx, 31, 0x131030u);
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x131028u, 0x131030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131030u;
label_131030:
    // 0x131030: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x131030u;
    {
        const bool branch_taken_0x131030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x131030) {
            ctx->pc = 0x1310B0u;
            goto label_1310b0;
        }
    }
    ctx->pc = 0x131038u;
label_131038:
    // 0x131038: 0xc6020050  lwc1        $f2, 0x50($s0)
    ctx->pc = 0x131038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13103c: 0x3c02404b  lui         $v0, 0x404B
    ctx->pc = 0x13103cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16459 << 16));
    // 0x131040: 0x34433333  ori         $v1, $v0, 0x3333
    ctx->pc = 0x131040u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x131044: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x131044u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x131048: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x131048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x13104c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13104cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x131050: 0x0  nop
    ctx->pc = 0x131050u;
    // NOP
    // 0x131054: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x131054u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x131058: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x131058u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13105c: 0x0  nop
    ctx->pc = 0x13105cu;
    // NOP
    // 0x131060: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x131060u;
    {
        const bool branch_taken_0x131060 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x131064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131060u;
        // 0x131064: 0xe6010050  swc1        $f1, 0x50($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x131060) {
            ctx->pc = 0x131078u;
            goto label_131078;
        }
    }
    ctx->pc = 0x131068u;
    // 0x131068: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x131068u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x13106c: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x13106cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x131070: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x131070u;
    {
        const bool branch_taken_0x131070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131070u;
        // 0x131074: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131070) {
            ctx->pc = 0x131094u;
            goto label_131094;
        }
    }
    ctx->pc = 0x131078u;
label_131078:
    // 0x131078: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x131078u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x13107c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x13107cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x131080: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x131080u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x131084: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x131084u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x131088: 0x0  nop
    ctx->pc = 0x131088u;
    // NOP
    // 0x13108c: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x13108cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x131090: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x131090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_131094:
    // 0x131094: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x131094u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x131098: 0x2407003c  addiu       $a3, $zero, 0x3C
    ctx->pc = 0x131098u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x13109c: 0xc05b264  jal         func_16C990
    ctx->pc = 0x13109Cu;
    SET_GPR_U32(ctx, 31, 0x1310A4u);
    ctx->pc = 0x1310A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13109Cu;
    // 0x1310a0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C990u, 0x13109Cu, 0x1310A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1310A4u;
label_1310a4:
    // 0x1310a4: 0x96030012  lhu         $v1, 0x12($s0)
    ctx->pc = 0x1310a4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
    // 0x1310a8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1310a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1310ac: 0xa6030012  sh          $v1, 0x12($s0)
    ctx->pc = 0x1310acu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 3));
label_1310b0:
    // 0x1310b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1310b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x1310b4u;
}
