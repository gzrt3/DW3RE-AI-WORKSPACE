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

// Function: FUN_00169880
// Address: 0x169880 - 0x1699d8
void FUN_00169880_0x169880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00169880_0x169880");
#endif

    switch (ctx->pc) {
        case 0x169898u: goto label_169898;
        case 0x169900u: goto label_169900;
        default: break;
    }

    ctx->pc = 0x169880u;

    // 0x169880: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x169880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x169884: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x169884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x169888: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x169888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16988c: 0x8f908524  lw          $s0, -0x7ADC($gp)
    ctx->pc = 0x16988cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935844)));
    // 0x169890: 0xc06468c  jal         func_191A30
    ctx->pc = 0x169890u;
    SET_GPR_U32(ctx, 31, 0x169898u);
    ctx->pc = 0x169894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169890u;
    // 0x169894: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191A30u, 0x169890u, 0x169898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169898u;
label_169898:
    // 0x169898: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x169898u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x16989c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x16989cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1698a0: 0x9023490d  lbu         $v1, 0x490D($at)
    ctx->pc = 0x1698a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x33490Du));
    // 0x1698a4: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1698A4u;
    {
        const bool branch_taken_0x1698a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1698A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1698A4u;
        // 0x1698a8: 0x27a30028  addiu       $v1, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1698a4) {
            ctx->pc = 0x1698F8u;
            goto label_1698f8;
        }
    }
    ctx->pc = 0x1698ACu;
    // 0x1698ac: 0x3c02479c  lui         $v0, 0x479C
    ctx->pc = 0x1698acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18332 << 16));
    // 0x1698b0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1698b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1698b4: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1698b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1698b8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1698b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1698bc: 0x0  nop
    ctx->pc = 0x1698bcu;
    // NOP
    // 0x1698c0: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x1698c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1698c4: 0x0  nop
    ctx->pc = 0x1698c4u;
    // NOP
    // 0x1698c8: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x1698C8u;
    {
        const bool branch_taken_0x1698c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1698c8) {
            ctx->pc = 0x1698F8u;
            goto label_1698f8;
        }
    }
    ctx->pc = 0x1698D0u;
    // 0x1698d0: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x1698d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1698d4: 0x3c02471c  lui         $v0, 0x471C
    ctx->pc = 0x1698d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18204 << 16));
    // 0x1698d8: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1698d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1698dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1698dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1698e0: 0x0  nop
    ctx->pc = 0x1698e0u;
    // NOP
    // 0x1698e4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1698e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1698e8: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1698e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1698ec: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1698ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1698f0: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1698f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1698f4: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1698f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_1698f8:
    // 0x1698f8: 0xc088d68  jal         func_2235A0
    ctx->pc = 0x1698F8u;
    SET_GPR_U32(ctx, 31, 0x169900u);
    ctx->pc = 0x2235A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2235A0u, 0x1698F8u, 0x169900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169900u;
label_169900:
    // 0x169900: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x169900u;
    {
        const bool branch_taken_0x169900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x169900) {
            ctx->pc = 0x169978u;
            goto label_169978;
        }
    }
    ctx->pc = 0x169908u;
    // 0x169908: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x169908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16990c: 0x3c02459c  lui         $v0, 0x459C
    ctx->pc = 0x16990cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17820 << 16));
    // 0x169910: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x169910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x169914: 0x3c030031  lui         $v1, 0x31
    ctx->pc = 0x169914u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49 << 16));
    // 0x169918: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x169918u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x16991c: 0x24637b50  addiu       $v1, $v1, 0x7B50
    ctx->pc = 0x16991cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31568));
    // 0x169920: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x169920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x169924: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x169924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x169928: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x169928u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
    // 0x16992c: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x16992cu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x169930: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x169930u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x169934: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x169934u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x169938: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x169938u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x16993c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x16993cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x169940: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x169940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x169944: 0x24630000  addiu       $v1, $v1, 0x0
    ctx->pc = 0x169944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 0));
    // 0x169948: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x169948u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x16994c: 0x0  nop
    ctx->pc = 0x16994cu;
    // NOP
    // 0x169950: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x169950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x169954: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x169954u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x169958: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x169958u;
    {
        const bool branch_taken_0x169958 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x16995Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169958u;
        // 0x16995c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169958) {
            ctx->pc = 0x169970u;
            goto label_169970;
        }
    }
    ctx->pc = 0x169960u;
    // 0x169960: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x169960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x169964: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x169964u;
    {
        const bool branch_taken_0x169964 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x169964) {
            ctx->pc = 0x169978u;
            goto label_169978;
        }
    }
    ctx->pc = 0x16996Cu;
    // 0x16996c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x16996cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_169970:
    // 0x169970: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x169970u;
    {
        const bool branch_taken_0x169970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169970u;
        // 0x169974: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169970) {
            ctx->pc = 0x1699D8u;
            return;
        }
    }
    ctx->pc = 0x169978u;
label_169978:
    // 0x169978: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x169978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16997c: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x16997cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x169980: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x169980u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x169984: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x169984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x169988: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x169988u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x16998c: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x16998cu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
    // 0x169990: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x169990u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x169994: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x169994u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x169998: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x169998u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x16999c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x16999cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1699a0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1699a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1699a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1699a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1699a8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1699a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1699ac: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1699acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1699b0: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1699B0u;
    {
        const bool branch_taken_0x1699b0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1699B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1699B0u;
        // 0x1699b4: 0x28411900  slti        $at, $v0, 0x1900 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6400) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1699b0) {
            ctx->pc = 0x1699C0u;
            goto label_1699c0;
        }
    }
    ctx->pc = 0x1699B8u;
    // 0x1699b8: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1699B8u;
    {
        const bool branch_taken_0x1699b8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1699b8) {
            ctx->pc = 0x1699C8u;
            goto label_1699c8;
        }
    }
    ctx->pc = 0x1699C0u;
label_1699c0:
    // 0x1699c0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1699C0u;
    {
        const bool branch_taken_0x1699c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1699C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1699C0u;
        // 0x1699c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1699c0) {
            ctx->pc = 0x1699D4u;
            goto label_1699d4;
        }
    }
    ctx->pc = 0x1699C8u;
label_1699c8:
    // 0x1699c8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1699c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1699cc: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1699ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1699d0: 0x0  nop
    ctx->pc = 0x1699d0u;
    // NOP
label_1699d4:
    // 0x1699d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1699d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x1699d8u;
}
