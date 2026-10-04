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

// Function: entry_00131038
// Address: 0x131038 - 0x1310b0
void entry_00131038_0x131038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131038_0x131038");
#endif

    switch (ctx->pc) {
        case 0x1310a4u: goto label_1310a4;
        default: break;
    }

    ctx->pc = 0x131038u;

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
    ctx->pc = 0x1310b0u;
}
