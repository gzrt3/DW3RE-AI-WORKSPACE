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

// Function: FUN_001faec0
// Address: 0x1faec0 - 0x1faf70
void FUN_001faec0_0x1faec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001faec0_0x1faec0");
#endif

    switch (ctx->pc) {
        case 0x1faef4u: goto label_1faef4;
        case 0x1faf44u: goto label_1faf44;
        case 0x1faf50u: goto label_1faf50;
        default: break;
    }

    ctx->pc = 0x1faec0u;

    // 0x1faec0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1faec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1faec4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1faec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1faec8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1faec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1faecc: 0x908302e3  lbu         $v1, 0x2E3($a0)
    ctx->pc = 0x1faeccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 739)));
    // 0x1faed0: 0x28610014  slti        $at, $v1, 0x14
    ctx->pc = 0x1faed0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x1faed4: 0x10200020  beqz        $at, . + 4 + (0x20 << 2)
    ctx->pc = 0x1FAED4u;
    {
        const bool branch_taken_0x1faed4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAED4u;
        // 0x1faed8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faed4) {
            ctx->pc = 0x1FAF58u;
            goto label_1faf58;
        }
    }
    ctx->pc = 0x1FAEDCu;
    // 0x1faedc: 0x8f828590  lw          $v0, -0x7A70($gp)
    ctx->pc = 0x1faedcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x1faee0: 0x304201c0  andi        $v0, $v0, 0x1C0
    ctx->pc = 0x1faee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)448);
    // 0x1faee4: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1FAEE4u;
    {
        const bool branch_taken_0x1faee4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FAEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAEE4u;
        // 0x1faee8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faee4) {
            ctx->pc = 0x1FAF48u;
            goto label_1faf48;
        }
    }
    ctx->pc = 0x1FAEECu;
    // 0x1faeec: 0xc08f0cc  jal         func_23C330
    ctx->pc = 0x1FAEECu;
    SET_GPR_U32(ctx, 31, 0x1FAEF4u);
    ctx->pc = 0x23C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C330u, 0x1FAEECu, 0x1FAEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FAEF4u;
label_1faef4:
    // 0x1faef4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1faef4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1faef8: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x1faef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1faefc: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x1faefcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x1faf00: 0x24060050  addiu       $a2, $zero, 0x50
    ctx->pc = 0x1faf00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1faf04: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1faf04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1faf08: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1faf08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x1faf0c: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x1faf0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1faf10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1faf10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1faf14: 0x0  nop
    ctx->pc = 0x1faf14u;
    // NOP
    // 0x1faf18: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1faf18u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1faf1c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x1faf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x1faf20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1faf20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1faf24: 0x0  nop
    ctx->pc = 0x1faf24u;
    // NOP
    // 0x1faf28: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1faf28u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x1faf2c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1faf2cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1faf30: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1faf30u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1faf34: 0x0  nop
    ctx->pc = 0x1faf34u;
    // NOP
    // 0x1faf38: 0x2442003c  addiu       $v0, $v0, 0x3C
    ctx->pc = 0x1faf38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
    // 0x1faf3c: 0xc05b4d4  jal         func_16D350
    ctx->pc = 0x1FAF3Cu;
    SET_GPR_U32(ctx, 31, 0x1FAF44u);
    ctx->pc = 0x1FAF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FAF3Cu;
    // 0x1faf40: 0x304800ff  andi        $t0, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D350u, 0x1FAF3Cu, 0x1FAF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FAF44u;
label_1faf44:
    // 0x1faf44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1faf44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1faf48:
    // 0x1faf48: 0xc0591f4  jal         func_1647D0
    ctx->pc = 0x1FAF48u;
    SET_GPR_U32(ctx, 31, 0x1FAF50u);
    ctx->pc = 0x1FAF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FAF48u;
    // 0x1faf4c: 0xa20002e3  sb          $zero, 0x2E3($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 739), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x1FAF48u, 0x1FAF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FAF50u;
label_1faf50:
    // 0x1faf50: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1FAF50u;
    {
        const bool branch_taken_0x1faf50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAF50u;
        // 0x1faf54: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faf50) {
            ctx->pc = 0x1FAF70u;
            return;
        }
    }
    ctx->pc = 0x1FAF58u;
label_1faf58:
    // 0x1faf58: 0x2463ffec  addiu       $v1, $v1, -0x14
    ctx->pc = 0x1faf58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1faf5c: 0xa20302e3  sb          $v1, 0x2E3($s0)
    ctx->pc = 0x1faf5cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 739), (uint8_t)GPR_U32(ctx, 3));
    // 0x1faf60: 0x960302e6  lhu         $v1, 0x2E6($s0)
    ctx->pc = 0x1faf60u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 742)));
    // 0x1faf64: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1faf64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1faf68: 0xa60302e6  sh          $v1, 0x2E6($s0)
    ctx->pc = 0x1faf68u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 742), (uint16_t)GPR_U32(ctx, 3));
    // 0x1faf6c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1faf6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x1faf70u;
}
