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

// Function: FUN_0022eec0
// Address: 0x22eec0 - 0x22ef80
void FUN_0022eec0_0x22eec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0022eec0_0x22eec0");
#endif

    switch (ctx->pc) {
        case 0x22ef30u: goto label_22ef30;
        case 0x22ef38u: goto label_22ef38;
        default: break;
    }

    ctx->pc = 0x22eec0u;

    // 0x22eec0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22eec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22eec4: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x22eec4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x22eec8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x22eec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x22eecc: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x22eeccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x22eed0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22eed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22eed4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22eed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22eed8: 0x9024490d  lbu         $a0, 0x490D($at)
    ctx->pc = 0x22eed8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x33490Du));
    // 0x22eedc: 0x14830027  bne         $a0, $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x22EEDCu;
    {
        const bool branch_taken_0x22eedc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x22EEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EEDCu;
        // 0x22eee0: 0x3c010033  lui         $at, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22eedc) {
            ctx->pc = 0x22EF7Cu;
            goto label_22ef7c;
        }
    }
    ctx->pc = 0x22EEE4u;
    // 0x22eee4: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x22eee4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x22eee8: 0x9023490c  lbu         $v1, 0x490C($at)
    ctx->pc = 0x22eee8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 1), 18700)));
    // 0x22eeec: 0x24020027  addiu       $v0, $zero, 0x27
    ctx->pc = 0x22eeecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x22eef0: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22EEF0u;
    {
        const bool branch_taken_0x22eef0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22EEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EEF0u;
        // 0x22eef4: 0x2484a2b0  addiu       $a0, $a0, -0x5D50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943408));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22eef0) {
            ctx->pc = 0x22EF0Cu;
            goto label_22ef0c;
        }
    }
    ctx->pc = 0x22EEF8u;
    // 0x22eef8: 0x2402005b  addiu       $v0, $zero, 0x5B
    ctx->pc = 0x22eef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    // 0x22eefc: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22EEFCu;
    {
        const bool branch_taken_0x22eefc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22EF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EEFCu;
        // 0x22ef00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22eefc) {
            ctx->pc = 0x22EF10u;
            goto label_22ef10;
        }
    }
    ctx->pc = 0x22EF04u;
    // 0x22ef04: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x22EF04u;
    {
        const bool branch_taken_0x22ef04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EF04u;
        // 0x22ef08: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ef04) {
            ctx->pc = 0x22EF10u;
            goto label_22ef10;
        }
    }
    ctx->pc = 0x22EF0Cu;
label_22ef0c:
    // 0x22ef0c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x22ef0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22ef10:
    // 0x22ef10: 0xa0820234  sb          $v0, 0x234($a0)
    ctx->pc = 0x22ef10u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 564), (uint8_t)GPR_U32(ctx, 2));
    // 0x22ef14: 0x3c100029  lui         $s0, 0x29
    ctx->pc = 0x22ef14u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)41 << 16));
    // 0x22ef18: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x22ef18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x22ef1c: 0xa0800245  sb          $zero, 0x245($a0)
    ctx->pc = 0x22ef1cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 581), (uint8_t)GPR_U32(ctx, 0));
    // 0x22ef20: 0xa0820232  sb          $v0, 0x232($a0)
    ctx->pc = 0x22ef20u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 562), (uint8_t)GPR_U32(ctx, 2));
    // 0x22ef24: 0x2610eff0  addiu       $s0, $s0, -0x1010
    ctx->pc = 0x22ef24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963184));
    // 0x22ef28: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x22ef28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ef2c: 0xa480003c  sh          $zero, 0x3C($a0)
    ctx->pc = 0x22ef2cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 60), (uint16_t)GPR_U32(ctx, 0));
label_22ef30:
    // 0x22ef30: 0xc08f0cc  jal         func_23C330
    ctx->pc = 0x22EF30u;
    SET_GPR_U32(ctx, 31, 0x22EF38u);
    ctx->pc = 0x23C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C330u, 0x22EF30u, 0x22EF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22EF38u;
label_22ef38:
    // 0x22ef38: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22ef38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x22ef3c: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x22ef3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x22ef40: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22ef40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22ef44: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x22ef44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x22ef48: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x22ef48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x22ef4c: 0x3c044f00  lui         $a0, 0x4F00
    ctx->pc = 0x22ef4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20224 << 16));
    // 0x22ef50: 0x2a230019  slti        $v1, $s1, 0x19
    ctx->pc = 0x22ef50u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)25) ? 1 : 0);
    // 0x22ef54: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x22ef54u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x22ef58: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x22ef58u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22ef5c: 0x0  nop
    ctx->pc = 0x22ef5cu;
    // NOP
    // 0x22ef60: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x22ef60u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x22ef64: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x22ef64u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x22ef68: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x22ef68u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x22ef6c: 0x0  nop
    ctx->pc = 0x22ef6cu;
    // NOP
    // 0x22ef70: 0xae040020  sw          $a0, 0x20($s0)
    ctx->pc = 0x22ef70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 4));
    // 0x22ef74: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x22EF74u;
    {
        const bool branch_taken_0x22ef74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22EF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22EF74u;
        // 0x22ef78: 0x26100030  addiu       $s0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ef74) {
            ctx->pc = 0x22EF30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22ef30;
        }
    }
    ctx->pc = 0x22EF7Cu;
label_22ef7c:
    // 0x22ef7c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x22ef7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x22ef80u;
}
