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

// Function: FUN_001588e0
// Address: 0x1588e0 - 0x158d10
void FUN_001588e0_0x1588e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001588e0_0x1588e0");
#endif

    switch (ctx->pc) {
        case 0x158938u: goto label_158938;
        case 0x158980u: goto label_158980;
        case 0x1589c8u: goto label_1589c8;
        case 0x158a14u: goto label_158a14;
        case 0x158a6cu: goto label_158a6c;
        default: break;
    }

    ctx->pc = 0x1588e0u;

    // 0x1588e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1588e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1588e4: 0x3c030005  lui         $v1, 0x5
    ctx->pc = 0x1588e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5 << 16));
    // 0x1588e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1588e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1588ec: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1588ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1588f0: 0xac204900  sw          $zero, 0x4900($at)
    ctx->pc = 0x1588f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x334900u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x334900u, _value); } while (0);
    // 0x1588f4: 0x3c080033  lui         $t0, 0x33
    ctx->pc = 0x1588f4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)51 << 16));
    // 0x1588f8: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x1588f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
    // 0x1588fc: 0x34637e40  ori         $v1, $v1, 0x7E40
    ctx->pc = 0x1588fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32320);
    // 0x158900: 0x8c25c994  lw          $a1, -0x366C($at)
    ctx->pc = 0x158900u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x29C994u));
    // 0x158904: 0x25081300  addiu       $t0, $t0, 0x1300
    ctx->pc = 0x158904u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4864));
    // 0x158908: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x158908u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15890c: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x15890cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
    // 0x158910: 0x8c24c9c0  lw          $a0, -0x3640($at)
    ctx->pc = 0x158910u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x29C9C0u));
    // 0x158914: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x158914u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x158918: 0xac234904  sw          $v1, 0x4904($at)
    ctx->pc = 0x158918u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x334904u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x334904u, _value); } while (0);
    // 0x15891c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x15891cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x158920: 0xac254afc  sw          $a1, 0x4AFC($at)
    ctx->pc = 0x158920u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x334AFCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x334AFCu, _value); } while (0);
    // 0x158924: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x158924u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x158928: 0xac244af8  sw          $a0, 0x4AF8($at)
    ctx->pc = 0x158928u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x334AF8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x334AF8u, _value); } while (0);
    // 0x15892c: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x15892cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x158930: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x158930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x158934: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x158934u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_158938:
    // 0x158938: 0xa1050220  sb          $a1, 0x220($t0)
    ctx->pc = 0x158938u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 544), (uint8_t)GPR_U32(ctx, 5));
    // 0x15893c: 0xa1040222  sb          $a0, 0x222($t0)
    ctx->pc = 0x15893cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 546), (uint8_t)GPR_U32(ctx, 4));
    // 0x158940: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x158940u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x158944: 0xad00022c  sw          $zero, 0x22C($t0)
    ctx->pc = 0x158944u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 556), GPR_U32(ctx, 0));
    // 0x158948: 0x28e3000c  slti        $v1, $a3, 0xC
    ctx->pc = 0x158948u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x15894c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x15894Cu;
    {
        const bool branch_taken_0x15894c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x158950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15894Cu;
        // 0x158950: 0x25080240  addiu       $t0, $t0, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15894c) {
            ctx->pc = 0x158938u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_158938;
        }
    }
    ctx->pc = 0x158954u;
    // 0x158954: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x158954u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x158958: 0x28c30002  slti        $v1, $a2, 0x2
    ctx->pc = 0x158958u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x15895c: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x15895Cu;
    {
        const bool branch_taken_0x15895c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x158960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15895Cu;
        // 0x158960: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15895c) {
            ctx->pc = 0x158938u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_158938;
        }
    }
    ctx->pc = 0x158964u;
    // 0x158964: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x158964u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x158968: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x158968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x15896c: 0x9024490c  lbu         $a0, 0x490C($at)
    ctx->pc = 0x15896cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x33490Cu));
    // 0x158970: 0x14850011  bne         $a0, $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x158970u;
    {
        const bool branch_taken_0x158970 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x158974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158970u;
        // 0x158974: 0x24030040  addiu       $v1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158970) {
            ctx->pc = 0x1589B8u;
            goto label_1589b8;
        }
    }
    ctx->pc = 0x158978u;
    // 0x158978: 0xc08f0cc  jal         func_23C330
    ctx->pc = 0x158978u;
    SET_GPR_U32(ctx, 31, 0x158980u);
    ctx->pc = 0x23C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C330u, 0x158978u, 0x158980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158980u;
label_158980:
    // 0x158980: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x158980u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x158984: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x158984u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x158988: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x158988u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15898c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x15898cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x158990: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x158990u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x158994: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x158994u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x158998: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x158998u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x15899c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15899cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1589a0: 0x0  nop
    ctx->pc = 0x1589a0u;
    // NOP
    // 0x1589a4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1589a4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x1589a8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1589a8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1589ac: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1589acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1589b0: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x1589B0u;
    {
        const bool branch_taken_0x1589b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1589B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1589B0u;
        // 0x1589b4: 0xa0234910  sb          $v1, 0x4910($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 18704), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1589b0) {
            ctx->pc = 0x158AA8u;
            goto label_158aa8;
        }
    }
    ctx->pc = 0x1589B8u;
label_1589b8:
    // 0x1589b8: 0x14830011  bne         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1589B8u;
    {
        const bool branch_taken_0x1589b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1589b8) {
            ctx->pc = 0x158A00u;
            goto label_158a00;
        }
    }
    ctx->pc = 0x1589C0u;
    // 0x1589c0: 0xc08f0cc  jal         func_23C330
    ctx->pc = 0x1589C0u;
    SET_GPR_U32(ctx, 31, 0x1589C8u);
    ctx->pc = 0x23C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C330u, 0x1589C0u, 0x1589C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1589C8u;
label_1589c8:
    // 0x1589c8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1589c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1589cc: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x1589ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x1589d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1589d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1589d4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x1589d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x1589d8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1589d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1589dc: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x1589dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x1589e0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1589e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1589e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1589e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1589e8: 0x0  nop
    ctx->pc = 0x1589e8u;
    // NOP
    // 0x1589ec: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1589ecu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x1589f0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1589f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1589f4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1589f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1589f8: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x1589F8u;
    {
        const bool branch_taken_0x1589f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1589FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1589F8u;
        // 0x1589fc: 0xa0234910  sb          $v1, 0x4910($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 18704), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1589f8) {
            ctx->pc = 0x158AA8u;
            goto label_158aa8;
        }
    }
    ctx->pc = 0x158A00u;
label_158a00:
    // 0x158a00: 0x24030041  addiu       $v1, $zero, 0x41
    ctx->pc = 0x158a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x158a04: 0x14830011  bne         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x158A04u;
    {
        const bool branch_taken_0x158a04 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x158A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158A04u;
        // 0x158a08: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158a04) {
            ctx->pc = 0x158A4Cu;
            goto label_158a4c;
        }
    }
    ctx->pc = 0x158A0Cu;
    // 0x158a0c: 0xc08f0cc  jal         func_23C330
    ctx->pc = 0x158A0Cu;
    SET_GPR_U32(ctx, 31, 0x158A14u);
    ctx->pc = 0x23C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C330u, 0x158A0Cu, 0x158A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158A14u;
label_158a14:
    // 0x158a14: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x158a14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x158a18: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x158a18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x158a1c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x158a1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x158a20: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x158a20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x158a24: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x158a24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x158a28: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x158a28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x158a2c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x158a2cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x158a30: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x158a30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x158a34: 0x0  nop
    ctx->pc = 0x158a34u;
    // NOP
    // 0x158a38: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x158a38u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x158a3c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x158a3cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x158a40: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x158a40u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x158a44: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x158A44u;
    {
        const bool branch_taken_0x158a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158A44u;
        // 0x158a48: 0xa0234910  sb          $v1, 0x4910($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 18704), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158a44) {
            ctx->pc = 0x158AA8u;
            goto label_158aa8;
        }
    }
    ctx->pc = 0x158A4Cu;
label_158a4c:
    // 0x158a4c: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x158a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x158a50: 0x84244af4  lh          $a0, 0x4AF4($at)
    ctx->pc = 0x158a50u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19188)));
    // 0x158a54: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x158A54u;
    {
        const bool branch_taken_0x158a54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x158a54) {
            ctx->pc = 0x158A64u;
            goto label_158a64;
        }
    }
    ctx->pc = 0x158A5Cu;
    // 0x158a5c: 0x14850011  bne         $a0, $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x158A5Cu;
    {
        const bool branch_taken_0x158a5c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x158A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158A5Cu;
        // 0x158a60: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158a5c) {
            ctx->pc = 0x158AA4u;
            goto label_158aa4;
        }
    }
    ctx->pc = 0x158A64u;
label_158a64:
    // 0x158a64: 0xc08f0cc  jal         func_23C330
    ctx->pc = 0x158A64u;
    SET_GPR_U32(ctx, 31, 0x158A6Cu);
    ctx->pc = 0x23C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C330u, 0x158A64u, 0x158A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158A6Cu;
label_158a6c:
    // 0x158a6c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x158a6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x158a70: 0x3c034110  lui         $v1, 0x4110
    ctx->pc = 0x158a70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16656 << 16));
    // 0x158a74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x158a74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x158a78: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x158a78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x158a7c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x158a7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x158a80: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x158a80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
    // 0x158a84: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x158a84u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x158a88: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x158a88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x158a8c: 0x0  nop
    ctx->pc = 0x158a8cu;
    // NOP
    // 0x158a90: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x158a90u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x158a94: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x158a94u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x158a98: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x158a98u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x158a9c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x158A9Cu;
    {
        const bool branch_taken_0x158a9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158A9Cu;
        // 0x158aa0: 0xa0234910  sb          $v1, 0x4910($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 18704), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158a9c) {
            ctx->pc = 0x158AA8u;
            goto label_158aa8;
        }
    }
    ctx->pc = 0x158AA4u;
label_158aa4:
    // 0x158aa4: 0xa0204910  sb          $zero, 0x4910($at)
    ctx->pc = 0x158aa4u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 18704), (uint8_t)GPR_U32(ctx, 0));
label_158aa8:
    // 0x158aa8: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x158aa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x158aac: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x158aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x158ab0: 0xa0204af7  sb          $zero, 0x4AF7($at)
    ctx->pc = 0x158ab0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x334AF7u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x334AF7u, _value); } while (0);
    // 0x158ab4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x158ab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x158ab8: 0x90244999  lbu         $a0, 0x4999($at)
    ctx->pc = 0x158ab8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x334999u));
    // 0x158abc: 0x14830011  bne         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x158ABCu;
    {
        const bool branch_taken_0x158abc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x158AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158ABCu;
        // 0x158ac0: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158abc) {
            ctx->pc = 0x158B04u;
            goto label_158b04;
        }
    }
    ctx->pc = 0x158AC4u;
    // 0x158ac4: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x158ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x158ac8: 0x8c244970  lw          $a0, 0x4970($at)
    ctx->pc = 0x158ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 18800)));
    // 0x158acc: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x158ACCu;
    {
        const bool branch_taken_0x158acc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x158AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158ACCu;
        // 0x158ad0: 0x2403000d  addiu       $v1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158acc) {
            ctx->pc = 0x158AECu;
            goto label_158aec;
        }
    }
    ctx->pc = 0x158AD4u;
    // 0x158ad4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x158ad4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x158ad8: 0x90234af7  lbu         $v1, 0x4AF7($at)
    ctx->pc = 0x158ad8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x334AF7u));
    // 0x158adc: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x158adcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x158ae0: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x158ae0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x158ae4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x158AE4u;
    {
        const bool branch_taken_0x158ae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158AE4u;
        // 0x158ae8: 0xa0234af7  sb          $v1, 0x4AF7($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 19191), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158ae4) {
            ctx->pc = 0x158B04u;
            goto label_158b04;
        }
    }
    ctx->pc = 0x158AECu;
label_158aec:
    // 0x158aec: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x158AECu;
    {
        const bool branch_taken_0x158aec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x158AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158AECu;
        // 0x158af0: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158aec) {
            ctx->pc = 0x158B04u;
            goto label_158b04;
        }
    }
    ctx->pc = 0x158AF4u;
    // 0x158af4: 0x90234af7  lbu         $v1, 0x4AF7($at)
    ctx->pc = 0x158af4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19191)));
    // 0x158af8: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x158af8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x158afc: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x158afcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x158b00: 0xa0234af7  sb          $v1, 0x4AF7($at)
    ctx->pc = 0x158b00u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x334AF7u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x334AF7u, _value); } while (0);
label_158b04:
    // 0x158b04: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x158b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x158b08: 0x30660400  andi        $a2, $v1, 0x400
    ctx->pc = 0x158b08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x158b0c: 0x10c00019  beqz        $a2, . + 4 + (0x19 << 2)
    ctx->pc = 0x158B0Cu;
    {
        const bool branch_taken_0x158b0c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x158B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158B0Cu;
        // 0x158b10: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158b0c) {
            ctx->pc = 0x158B74u;
            goto label_158b74;
        }
    }
    ctx->pc = 0x158B14u;
    // 0x158b14: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x158b14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x158b18: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x158b18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x158b1c: 0x90244a29  lbu         $a0, 0x4A29($at)
    ctx->pc = 0x158b1cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x334A29u));
    // 0x158b20: 0x1483002d  bne         $a0, $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x158B20u;
    {
        const bool branch_taken_0x158b20 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x158b20) {
            ctx->pc = 0x158BD8u;
            goto label_158bd8;
        }
    }
    ctx->pc = 0x158B28u;
    // 0x158b28: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x158b28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x158b2c: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x158b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x158b30: 0x8c244a00  lw          $a0, 0x4A00($at)
    ctx->pc = 0x158b30u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x334A00u));
    // 0x158b34: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x158B34u;
    {
        const bool branch_taken_0x158b34 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x158B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158B34u;
        // 0x158b38: 0x2403000d  addiu       $v1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158b34) {
            ctx->pc = 0x158B54u;
            goto label_158b54;
        }
    }
    ctx->pc = 0x158B3Cu;
    // 0x158b3c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x158b3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x158b40: 0x90234af7  lbu         $v1, 0x4AF7($at)
    ctx->pc = 0x158b40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x334AF7u));
    // 0x158b44: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x158b44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x158b48: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x158b48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x158b4c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x158B4Cu;
    {
        const bool branch_taken_0x158b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158B4Cu;
        // 0x158b50: 0xa0234af7  sb          $v1, 0x4AF7($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 19191), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158b4c) {
            ctx->pc = 0x158BD8u;
            goto label_158bd8;
        }
    }
    ctx->pc = 0x158B54u;
label_158b54:
    // 0x158b54: 0x14830020  bne         $a0, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x158B54u;
    {
        const bool branch_taken_0x158b54 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x158b54) {
            ctx->pc = 0x158BD8u;
            goto label_158bd8;
        }
    }
    ctx->pc = 0x158B5Cu;
    // 0x158b5c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x158b5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x158b60: 0x90234af7  lbu         $v1, 0x4AF7($at)
    ctx->pc = 0x158b60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x334AF7u));
    // 0x158b64: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x158b64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x158b68: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x158b68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x158b6c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x158B6Cu;
    {
        const bool branch_taken_0x158b6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158B6Cu;
        // 0x158b70: 0xa0234af7  sb          $v1, 0x4AF7($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 19191), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158b6c) {
            ctx->pc = 0x158BD8u;
            goto label_158bd8;
        }
    }
    ctx->pc = 0x158B74u;
label_158b74:
    // 0x158b74: 0x90254af6  lbu         $a1, 0x4AF6($at)
    ctx->pc = 0x158b74u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19190)));
    // 0x158b78: 0x28a10029  slti        $at, $a1, 0x29
    ctx->pc = 0x158b78u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x158b7c: 0x10200016  beqz        $at, . + 4 + (0x16 << 2)
    ctx->pc = 0x158B7Cu;
    {
        const bool branch_taken_0x158b7c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x158b7c) {
            ctx->pc = 0x158BD8u;
            goto label_158bd8;
        }
    }
    ctx->pc = 0x158B84u;
    // 0x158b84: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x158b84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x158b88: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x158b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x158b8c: 0x90244a29  lbu         $a0, 0x4A29($at)
    ctx->pc = 0x158b8cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x334A29u));
    // 0x158b90: 0x14830011  bne         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x158B90u;
    {
        const bool branch_taken_0x158b90 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x158b90) {
            ctx->pc = 0x158BD8u;
            goto label_158bd8;
        }
    }
    ctx->pc = 0x158B98u;
    // 0x158b98: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x158b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x158b9c: 0x14a30007  bne         $a1, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x158B9Cu;
    {
        const bool branch_taken_0x158b9c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x158BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158B9Cu;
        // 0x158ba0: 0x2403000d  addiu       $v1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158b9c) {
            ctx->pc = 0x158BBCu;
            goto label_158bbc;
        }
    }
    ctx->pc = 0x158BA4u;
    // 0x158ba4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x158ba4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x158ba8: 0x90234af7  lbu         $v1, 0x4AF7($at)
    ctx->pc = 0x158ba8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x334AF7u));
    // 0x158bac: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x158bacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x158bb0: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x158bb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x158bb4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x158BB4u;
    {
        const bool branch_taken_0x158bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158BB4u;
        // 0x158bb8: 0xa0234af7  sb          $v1, 0x4AF7($at) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 1), 19191), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158bb4) {
            ctx->pc = 0x158BD8u;
            goto label_158bd8;
        }
    }
    ctx->pc = 0x158BBCu;
label_158bbc:
    // 0x158bbc: 0x14a30006  bne         $a1, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x158BBCu;
    {
        const bool branch_taken_0x158bbc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x158bbc) {
            ctx->pc = 0x158BD8u;
            goto label_158bd8;
        }
    }
    ctx->pc = 0x158BC4u;
    // 0x158bc4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x158bc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x158bc8: 0x90234af7  lbu         $v1, 0x4AF7($at)
    ctx->pc = 0x158bc8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x334AF7u));
    // 0x158bcc: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x158bccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x158bd0: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x158bd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x158bd4: 0xa0234af7  sb          $v1, 0x4AF7($at)
    ctx->pc = 0x158bd4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x334AF7u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x334AF7u, _value); } while (0);
label_158bd8:
    // 0x158bd8: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x158bd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x158bdc: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x158bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x158be0: 0x8c244970  lw          $a0, 0x4970($at)
    ctx->pc = 0x158be0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x334970u));
    // 0x158be4: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x158BE4u;
    {
        const bool branch_taken_0x158be4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x158BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158BE4u;
        // 0x158be8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158be4) {
            ctx->pc = 0x158BF0u;
            goto label_158bf0;
        }
    }
    ctx->pc = 0x158BECu;
    // 0x158bec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x158becu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_158bf0:
    // 0x158bf0: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x158BF0u;
    {
        const bool branch_taken_0x158bf0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x158BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158BF0u;
        // 0x158bf4: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158bf0) {
            ctx->pc = 0x158C14u;
            goto label_158c14;
        }
    }
    ctx->pc = 0x158BF8u;
    // 0x158bf8: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x158bf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x158bfc: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x158bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x158c00: 0x8c244a00  lw          $a0, 0x4A00($at)
    ctx->pc = 0x158c00u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x334A00u));
    // 0x158c04: 0x1483000a  bne         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x158C04u;
    {
        const bool branch_taken_0x158c04 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x158c04) {
            ctx->pc = 0x158C30u;
            goto label_158c30;
        }
    }
    ctx->pc = 0x158C0Cu;
    // 0x158c0c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x158C0Cu;
    {
        const bool branch_taken_0x158c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158C0Cu;
        // 0x158c10: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158c0c) {
            ctx->pc = 0x158C30u;
            goto label_158c30;
        }
    }
    ctx->pc = 0x158C14u;
label_158c14:
    // 0x158c14: 0x90244af6  lbu         $a0, 0x4AF6($at)
    ctx->pc = 0x158c14u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 19190)));
    // 0x158c18: 0x28810029  slti        $at, $a0, 0x29
    ctx->pc = 0x158c18u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x158c1c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x158C1Cu;
    {
        const bool branch_taken_0x158c1c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x158C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158C1Cu;
        // 0x158c20: 0x2403000c  addiu       $v1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158c1c) {
            ctx->pc = 0x158C30u;
            goto label_158c30;
        }
    }
    ctx->pc = 0x158C24u;
    // 0x158c24: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x158C24u;
    {
        const bool branch_taken_0x158c24 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x158c24) {
            ctx->pc = 0x158C30u;
            goto label_158c30;
        }
    }
    ctx->pc = 0x158C2Cu;
    // 0x158c2c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x158c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_158c30:
    // 0x158c30: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x158c30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x158c34: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x158c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x158c38: 0x84244af4  lh          $a0, 0x4AF4($at)
    ctx->pc = 0x158c38u;
    SET_GPR_S32(ctx, 4, (int16_t)FAST_READ16(0x334AF4u));
    // 0x158c3c: 0x1483002f  bne         $a0, $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x158C3Cu;
    {
        const bool branch_taken_0x158c3c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x158C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158C3Cu;
        // 0x158c40: 0x24030195  addiu       $v1, $zero, 0x195 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 405));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158c3c) {
            ctx->pc = 0x158CFCu;
            goto label_158cfc;
        }
    }
    ctx->pc = 0x158C44u;
    // 0x158c44: 0x3c01002a  lui         $at, 0x2A
    ctx->pc = 0x158c44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)42 << 16));
    // 0x158c48: 0x8c23ccf8  lw          $v1, -0x3308($at)
    ctx->pc = 0x158c48u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x29CCF8u));
    // 0x158c4c: 0x1460002a  bnez        $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x158C4Cu;
    {
        const bool branch_taken_0x158c4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x158c4c) {
            ctx->pc = 0x158CF8u;
            goto label_158cf8;
        }
    }
    ctx->pc = 0x158C54u;
    // 0x158c54: 0x14a00028  bnez        $a1, . + 4 + (0x28 << 2)
    ctx->pc = 0x158C54u;
    {
        const bool branch_taken_0x158c54 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x158C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158C54u;
        // 0x158c58: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158c54) {
            ctx->pc = 0x158CF8u;
            goto label_158cf8;
        }
    }
    ctx->pc = 0x158C5Cu;
    // 0x158c5c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x158c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x158c60: 0x8c244afc  lw          $a0, 0x4AFC($at)
    ctx->pc = 0x158c60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19196)));
    // 0x158c64: 0x14830024  bne         $a0, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x158C64u;
    {
        const bool branch_taken_0x158c64 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x158c64) {
            ctx->pc = 0x158CF8u;
            goto label_158cf8;
        }
    }
    ctx->pc = 0x158C6Cu;
    // 0x158c6c: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x158c6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x158c70: 0x24030049  addiu       $v1, $zero, 0x49
    ctx->pc = 0x158c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x158c74: 0x9024490c  lbu         $a0, 0x490C($at)
    ctx->pc = 0x158c74u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x33490Cu));
    // 0x158c78: 0x1483001f  bne         $a0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x158C78u;
    {
        const bool branch_taken_0x158c78 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x158C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158C78u;
        // 0x158c7c: 0x3c01002b  lui         $at, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158c78) {
            ctx->pc = 0x158CF8u;
            goto label_158cf8;
        }
    }
    ctx->pc = 0x158C80u;
    // 0x158c80: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x158c80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x158c84: 0x8c2300ac  lw          $v1, 0xAC($at)
    ctx->pc = 0x158c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 172)));
    // 0x158c88: 0x1464001b  bne         $v1, $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x158C88u;
    {
        const bool branch_taken_0x158c88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x158c88) {
            ctx->pc = 0x158CF8u;
            goto label_158cf8;
        }
    }
    ctx->pc = 0x158C90u;
    // 0x158c90: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x158c90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x158c94: 0x8c230064  lw          $v1, 0x64($at)
    ctx->pc = 0x158c94u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x2B0064u));
    // 0x158c98: 0x14640017  bne         $v1, $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x158C98u;
    {
        const bool branch_taken_0x158c98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x158C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158C98u;
        // 0x158c9c: 0x3c01002b  lui         $at, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158c98) {
            ctx->pc = 0x158CF8u;
            goto label_158cf8;
        }
    }
    ctx->pc = 0x158CA0u;
    // 0x158ca0: 0x8c2302ec  lw          $v1, 0x2EC($at)
    ctx->pc = 0x158ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 748)));
    // 0x158ca4: 0x14640014  bne         $v1, $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x158CA4u;
    {
        const bool branch_taken_0x158ca4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x158ca4) {
            ctx->pc = 0x158CF8u;
            goto label_158cf8;
        }
    }
    ctx->pc = 0x158CACu;
    // 0x158cac: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x158cacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x158cb0: 0x8c2302d4  lw          $v1, 0x2D4($at)
    ctx->pc = 0x158cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x2B02D4u));
    // 0x158cb4: 0x14640010  bne         $v1, $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x158CB4u;
    {
        const bool branch_taken_0x158cb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x158CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158CB4u;
        // 0x158cb8: 0x3c01002b  lui         $at, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158cb4) {
            ctx->pc = 0x158CF8u;
            goto label_158cf8;
        }
    }
    ctx->pc = 0x158CBCu;
    // 0x158cbc: 0x8c230214  lw          $v1, 0x214($at)
    ctx->pc = 0x158cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 532)));
    // 0x158cc0: 0x1464000d  bne         $v1, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x158CC0u;
    {
        const bool branch_taken_0x158cc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x158cc0) {
            ctx->pc = 0x158CF8u;
            goto label_158cf8;
        }
    }
    ctx->pc = 0x158CC8u;
    // 0x158cc8: 0x3c01002b  lui         $at, 0x2B
    ctx->pc = 0x158cc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
    // 0x158ccc: 0x8c23013c  lw          $v1, 0x13C($at)
    ctx->pc = 0x158cccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x2B013Cu));
    // 0x158cd0: 0x14640009  bne         $v1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x158CD0u;
    {
        const bool branch_taken_0x158cd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x158CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158CD0u;
        // 0x158cd4: 0x3c01002b  lui         $at, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158cd0) {
            ctx->pc = 0x158CF8u;
            goto label_158cf8;
        }
    }
    ctx->pc = 0x158CD8u;
    // 0x158cd8: 0x8c230124  lw          $v1, 0x124($at)
    ctx->pc = 0x158cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 292)));
    // 0x158cdc: 0x14640006  bne         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x158CDCu;
    {
        const bool branch_taken_0x158cdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x158cdc) {
            ctx->pc = 0x158CF8u;
            goto label_158cf8;
        }
    }
    ctx->pc = 0x158CE4u;
    // 0x158ce4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x158ce4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x158ce8: 0x90234af7  lbu         $v1, 0x4AF7($at)
    ctx->pc = 0x158ce8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x334AF7u));
    // 0x158cec: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x158cecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x158cf0: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x158cf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x158cf4: 0xa0234af7  sb          $v1, 0x4AF7($at)
    ctx->pc = 0x158cf4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x334AF7u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x334AF7u, _value); } while (0);
label_158cf8:
    // 0x158cf8: 0x24030195  addiu       $v1, $zero, 0x195
    ctx->pc = 0x158cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 405));
label_158cfc:
    // 0x158cfc: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x158cfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x158d00: 0xa42349a2  sh          $v1, 0x49A2($at)
    ctx->pc = 0x158d00u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3349A2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x3349A2u, _value); } while (0);
    // 0x158d04: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x158d04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x158d08: 0xa4234a32  sh          $v1, 0x4A32($at)
    ctx->pc = 0x158d08u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x334A32u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x334A32u, _value); } while (0);
    // 0x158d0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x158d0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x158d10u;
}
