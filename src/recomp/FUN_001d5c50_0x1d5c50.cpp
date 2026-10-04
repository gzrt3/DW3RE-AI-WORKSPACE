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

// Function: FUN_001d5c50
// Address: 0x1d5c50 - 0x1d6194
void FUN_001d5c50_0x1d5c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001d5c50_0x1d5c50");
#endif

    switch (ctx->pc) {
        case 0x1d5c88u: goto label_1d5c88;
        case 0x1d5cacu: goto label_1d5cac;
        case 0x1d5cf8u: goto label_1d5cf8;
        case 0x1d5d3cu: goto label_1d5d3c;
        case 0x1d5d5cu: goto label_1d5d5c;
        case 0x1d5d78u: goto label_1d5d78;
        case 0x1d5f40u: goto label_1d5f40;
        case 0x1d5fb0u: goto label_1d5fb0;
        case 0x1d5fe8u: goto label_1d5fe8;
        case 0x1d600cu: goto label_1d600c;
        case 0x1d602cu: goto label_1d602c;
        case 0x1d6048u: goto label_1d6048;
        case 0x1d6068u: goto label_1d6068;
        case 0x1d60dcu: goto label_1d60dc;
        case 0x1d6114u: goto label_1d6114;
        case 0x1d6138u: goto label_1d6138;
        case 0x1d6150u: goto label_1d6150;
        case 0x1d6178u: goto label_1d6178;
        case 0x1d618cu: goto label_1d618c;
        default: break;
    }

    ctx->pc = 0x1d5c50u;

    // 0x1d5c50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1d5c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1d5c54: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d5c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d5c58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d5c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d5c5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d5c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d5c60: 0x8c900024  lw          $s0, 0x24($a0)
    ctx->pc = 0x1d5c60u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1d5c64: 0x8603003c  lh          $v1, 0x3C($s0)
    ctx->pc = 0x1d5c64u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1d5c68: 0x28620080  slti        $v0, $v1, 0x80
    ctx->pc = 0x1d5c68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x1d5c6c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D5C6Cu;
    {
        const bool branch_taken_0x1d5c6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5C6Cu;
        // 0x1d5c70: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5c6c) {
            ctx->pc = 0x1D5C90u;
            goto label_1d5c90;
        }
    }
    ctx->pc = 0x1D5C74u;
    // 0x1d5c74: 0x28610084  slti        $at, $v1, 0x84
    ctx->pc = 0x1d5c74u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)132) ? 1 : 0);
    // 0x1d5c78: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D5C78u;
    {
        const bool branch_taken_0x1d5c78 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5C78u;
        // 0x1d5c7c: 0x28620084  slti        $v0, $v1, 0x84 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)132) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5c78) {
            ctx->pc = 0x1D5C94u;
            goto label_1d5c94;
        }
    }
    ctx->pc = 0x1D5C80u;
    // 0x1d5c80: 0xc06323c  jal         func_18C8F0
    ctx->pc = 0x1D5C80u;
    SET_GPR_U32(ctx, 31, 0x1D5C88u);
    ctx->pc = 0x1D5C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5C80u;
    // 0x1d5c84: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18C8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C8F0u, 0x1D5C80u, 0x1D5C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5C88u;
label_1d5c88:
    // 0x1d5c88: 0x10000142  b           . + 4 + (0x142 << 2)
    ctx->pc = 0x1D5C88u;
    {
        const bool branch_taken_0x1d5c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5C88u;
        // 0x1d5c8c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5c88) {
            ctx->pc = 0x1D6194u;
            return;
        }
    }
    ctx->pc = 0x1D5C90u;
label_1d5c90:
    // 0x1d5c90: 0x28620084  slti        $v0, $v1, 0x84
    ctx->pc = 0x1d5c90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)132) ? 1 : 0);
label_1d5c94:
    // 0x1d5c94: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D5C94u;
    {
        const bool branch_taken_0x1d5c94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5C94u;
        // 0x1d5c98: 0x28610086  slti        $at, $v1, 0x86 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)134) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5c94) {
            ctx->pc = 0x1D5CB4u;
            goto label_1d5cb4;
        }
    }
    ctx->pc = 0x1D5C9Cu;
    // 0x1d5c9c: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D5C9Cu;
    {
        const bool branch_taken_0x1d5c9c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5c9c) {
            ctx->pc = 0x1D5CB4u;
            goto label_1d5cb4;
        }
    }
    ctx->pc = 0x1D5CA4u;
    // 0x1d5ca4: 0xc06322c  jal         func_18C8B0
    ctx->pc = 0x1D5CA4u;
    SET_GPR_U32(ctx, 31, 0x1D5CACu);
    ctx->pc = 0x1D5CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5CA4u;
    // 0x1d5ca8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18C8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C8B0u, 0x1D5CA4u, 0x1D5CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5CACu;
label_1d5cac:
    // 0x1d5cac: 0x10000138  b           . + 4 + (0x138 << 2)
    ctx->pc = 0x1D5CACu;
    {
        const bool branch_taken_0x1d5cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5cac) {
            ctx->pc = 0x1D6190u;
            goto label_1d6190;
        }
    }
    ctx->pc = 0x1D5CB4u;
label_1d5cb4:
    // 0x1d5cb4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1d5cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1d5cb8: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1D5CB8u;
    {
        const bool branch_taken_0x1d5cb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d5cb8) {
            ctx->pc = 0x1D5D00u;
            goto label_1d5d00;
        }
    }
    ctx->pc = 0x1D5CC0u;
    // 0x1d5cc0: 0xc6020188  lwc1        $f2, 0x188($s0)
    ctx->pc = 0x1d5cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d5cc4: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x1d5cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x1d5cc8: 0xc6010154  lwc1        $f1, 0x154($s0)
    ctx->pc = 0x1d5cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d5ccc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d5cccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d5cd0: 0x0  nop
    ctx->pc = 0x1d5cd0u;
    // NOP
    // 0x1d5cd4: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x1d5cd4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1d5cd8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d5cd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d5cdc: 0x0  nop
    ctx->pc = 0x1d5cdcu;
    // NOP
    // 0x1d5ce0: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x1D5CE0u;
    {
        const bool branch_taken_0x1d5ce0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d5ce0) {
            ctx->pc = 0x1D5D00u;
            goto label_1d5d00;
        }
    }
    ctx->pc = 0x1D5CE8u;
    // 0x1d5ce8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1d5ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d5cec: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x1d5cecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1d5cf0: 0xc0630c0  jal         func_18C300
    ctx->pc = 0x1D5CF0u;
    SET_GPR_U32(ctx, 31, 0x1D5CF8u);
    ctx->pc = 0x1D5CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5CF0u;
    // 0x1d5cf4: 0x26060040  addiu       $a2, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18C300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C300u, 0x1D5CF0u, 0x1D5CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5CF8u;
label_1d5cf8:
    // 0x1d5cf8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1D5CF8u;
    {
        const bool branch_taken_0x1d5cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5CF8u;
        // 0x1d5cfc: 0x8e220020  lw          $v0, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5cf8) {
            ctx->pc = 0x1D5D60u;
            goto label_1d5d60;
        }
    }
    ctx->pc = 0x1D5D00u;
label_1d5d00:
    // 0x1d5d00: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x1d5d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d5d04: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1d5d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d5d08: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1d5d08u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d5d0c: 0x0  nop
    ctx->pc = 0x1d5d0cu;
    // NOP
    // 0x1d5d10: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x1D5D10u;
    {
        const bool branch_taken_0x1d5d10 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D5D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5D10u;
        // 0x1d5d14: 0x2402009e  addiu       $v0, $zero, 0x9E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 158));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5d10) {
            ctx->pc = 0x1D5D5Cu;
            goto label_1d5d5c;
        }
    }
    ctx->pc = 0x1D5D18u;
    // 0x1d5d18: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D5D18u;
    {
        const bool branch_taken_0x1d5d18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d5d18) {
            ctx->pc = 0x1D5D2Cu;
            goto label_1d5d2c;
        }
    }
    ctx->pc = 0x1D5D20u;
    // 0x1d5d20: 0x240200a1  addiu       $v0, $zero, 0xA1
    ctx->pc = 0x1d5d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
    // 0x1d5d24: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D5D24u;
    {
        const bool branch_taken_0x1d5d24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D5D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5D24u;
        // 0x1d5d28: 0x2402006d  addiu       $v0, $zero, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5d24) {
            ctx->pc = 0x1D5D44u;
            goto label_1d5d44;
        }
    }
    ctx->pc = 0x1D5D2Cu;
label_1d5d2c:
    // 0x1d5d2c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1d5d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d5d30: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x1d5d30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1d5d34: 0xc063130  jal         func_18C4C0
    ctx->pc = 0x1D5D34u;
    SET_GPR_U32(ctx, 31, 0x1D5D3Cu);
    ctx->pc = 0x1D5D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5D34u;
    // 0x1d5d38: 0x26060040  addiu       $a2, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18C4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C4C0u, 0x1D5D34u, 0x1D5D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5D3Cu;
label_1d5d3c:
    // 0x1d5d3c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1D5D3Cu;
    {
        const bool branch_taken_0x1d5d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5d3c) {
            ctx->pc = 0x1D5D5Cu;
            goto label_1d5d5c;
        }
    }
    ctx->pc = 0x1D5D44u;
label_1d5d44:
    // 0x1d5d44: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D5D44u;
    {
        const bool branch_taken_0x1d5d44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d5d44) {
            ctx->pc = 0x1D5D5Cu;
            goto label_1d5d5c;
        }
    }
    ctx->pc = 0x1D5D4Cu;
    // 0x1d5d4c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1d5d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d5d50: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x1d5d50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x1d5d54: 0xc063134  jal         func_18C4D0
    ctx->pc = 0x1D5D54u;
    SET_GPR_U32(ctx, 31, 0x1D5D5Cu);
    ctx->pc = 0x1D5D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5D54u;
    // 0x1d5d58: 0x26060040  addiu       $a2, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18C4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C4D0u, 0x1D5D54u, 0x1D5D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5D5Cu;
label_1d5d5c:
    // 0x1d5d5c: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x1d5d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_1d5d60:
    // 0x1d5d60: 0x9042023a  lbu         $v0, 0x23A($v0)
    ctx->pc = 0x1d5d60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 570)));
    // 0x1d5d64: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D5D64u;
    {
        const bool branch_taken_0x1d5d64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5d64) {
            ctx->pc = 0x1D5D80u;
            goto label_1d5d80;
        }
    }
    ctx->pc = 0x1D5D6Cu;
    // 0x1d5d6c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1d5d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d5d70: 0xc063158  jal         func_18C560
    ctx->pc = 0x1D5D70u;
    SET_GPR_U32(ctx, 31, 0x1D5D78u);
    ctx->pc = 0x1D5D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5D70u;
    // 0x1d5d74: 0x26050150  addiu       $a1, $s0, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18C560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C560u, 0x1D5D70u, 0x1D5D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5D78u;
label_1d5d78:
    // 0x1d5d78: 0x10000105  b           . + 4 + (0x105 << 2)
    ctx->pc = 0x1D5D78u;
    {
        const bool branch_taken_0x1d5d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5d78) {
            ctx->pc = 0x1D6190u;
            goto label_1d6190;
        }
    }
    ctx->pc = 0x1D5D80u;
label_1d5d80:
    // 0x1d5d80: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1d5d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1d5d84: 0x8c440038  lw          $a0, 0x38($v0)
    ctx->pc = 0x1d5d84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x1d5d88: 0x10800030  beqz        $a0, . + 4 + (0x30 << 2)
    ctx->pc = 0x1D5D88u;
    {
        const bool branch_taken_0x1d5d88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5d88) {
            ctx->pc = 0x1D5E4Cu;
            goto label_1d5e4c;
        }
    }
    ctx->pc = 0x1D5D90u;
    // 0x1d5d90: 0x8445003c  lh          $a1, 0x3C($v0)
    ctx->pc = 0x1d5d90u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1d5d94: 0x2403005b  addiu       $v1, $zero, 0x5B
    ctx->pc = 0x1d5d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    // 0x1d5d98: 0x10a3002c  beq         $a1, $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x1D5D98u;
    {
        const bool branch_taken_0x1d5d98 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D5D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5D98u;
        // 0x1d5d9c: 0x2403005a  addiu       $v1, $zero, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5d98) {
            ctx->pc = 0x1D5E4Cu;
            goto label_1d5e4c;
        }
    }
    ctx->pc = 0x1D5DA0u;
    // 0x1d5da0: 0x10a3002a  beq         $a1, $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x1D5DA0u;
    {
        const bool branch_taken_0x1d5da0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d5da0) {
            ctx->pc = 0x1D5E4Cu;
            goto label_1d5e4c;
        }
    }
    ctx->pc = 0x1D5DA8u;
    // 0x1d5da8: 0x2403004d  addiu       $v1, $zero, 0x4D
    ctx->pc = 0x1d5da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1d5dac: 0x10a30027  beq         $a1, $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x1D5DACu;
    {
        const bool branch_taken_0x1d5dac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D5DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5DACu;
        // 0x1d5db0: 0x2403004c  addiu       $v1, $zero, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5dac) {
            ctx->pc = 0x1D5E4Cu;
            goto label_1d5e4c;
        }
    }
    ctx->pc = 0x1D5DB4u;
    // 0x1d5db4: 0x10a30025  beq         $a1, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x1D5DB4u;
    {
        const bool branch_taken_0x1d5db4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d5db4) {
            ctx->pc = 0x1D5E4Cu;
            goto label_1d5e4c;
        }
    }
    ctx->pc = 0x1D5DBCu;
    // 0x1d5dbc: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x1d5dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x1d5dc0: 0x30637800  andi        $v1, $v1, 0x7800
    ctx->pc = 0x1d5dc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)30720);
    // 0x1d5dc4: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1D5DC4u;
    {
        const bool branch_taken_0x1d5dc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d5dc4) {
            ctx->pc = 0x1D5E2Cu;
            goto label_1d5e2c;
        }
    }
    ctx->pc = 0x1D5DCCu;
    // 0x1d5dcc: 0x8e030194  lw          $v1, 0x194($s0)
    ctx->pc = 0x1d5dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 404)));
    // 0x1d5dd0: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x1d5dd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x1d5dd4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D5DD4u;
    {
        const bool branch_taken_0x1d5dd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5DD4u;
        // 0x1d5dd8: 0x24030079  addiu       $v1, $zero, 0x79 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5dd4) {
            ctx->pc = 0x1D5DF4u;
            goto label_1d5df4;
        }
    }
    ctx->pc = 0x1D5DDCu;
    // 0x1d5ddc: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x1d5ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1d5de0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1d5de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d5de4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1d5de4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1d5de8: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1D5DE8u;
    {
        const bool branch_taken_0x1d5de8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d5de8) {
            ctx->pc = 0x1D5E20u;
            goto label_1d5e20;
        }
    }
    ctx->pc = 0x1D5DF0u;
    // 0x1d5df0: 0x24030079  addiu       $v1, $zero, 0x79
    ctx->pc = 0x1d5df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
label_1d5df4:
    // 0x1d5df4: 0x10a3000a  beq         $a1, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1D5DF4u;
    {
        const bool branch_taken_0x1d5df4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D5DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5DF4u;
        // 0x1d5df8: 0x2403007e  addiu       $v1, $zero, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5df4) {
            ctx->pc = 0x1D5E20u;
            goto label_1d5e20;
        }
    }
    ctx->pc = 0x1D5DFCu;
    // 0x1d5dfc: 0x10a30008  beq         $a1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D5DFCu;
    {
        const bool branch_taken_0x1d5dfc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d5dfc) {
            ctx->pc = 0x1D5E20u;
            goto label_1d5e20;
        }
    }
    ctx->pc = 0x1D5E04u;
    // 0x1d5e04: 0x8c840024  lw          $a0, 0x24($a0)
    ctx->pc = 0x1d5e04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1d5e08: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x1d5e08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x1d5e0c: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x1d5e0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x1d5e10: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1d5e10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d5e14: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1d5e14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1d5e18: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D5E18u;
    {
        const bool branch_taken_0x1d5e18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5e18) {
            ctx->pc = 0x1D5E2Cu;
            goto label_1d5e2c;
        }
    }
    ctx->pc = 0x1D5E20u;
label_1d5e20:
    // 0x1d5e20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d5e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5e24: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1D5E24u;
    {
        const bool branch_taken_0x1d5e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5E24u;
        // 0x1d5e28: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5e24) {
            ctx->pc = 0x1D5EB8u;
            goto label_1d5eb8;
        }
    }
    ctx->pc = 0x1D5E2Cu;
label_1d5e2c:
    // 0x1d5e2c: 0x8443019c  lh          $v1, 0x19C($v0)
    ctx->pc = 0x1d5e2cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 412)));
    // 0x1d5e30: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D5E30u;
    {
        const bool branch_taken_0x1d5e30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d5e30) {
            ctx->pc = 0x1D5E44u;
            goto label_1d5e44;
        }
    }
    ctx->pc = 0x1D5E38u;
    // 0x1d5e38: 0x8442019e  lh          $v0, 0x19E($v0)
    ctx->pc = 0x1d5e38u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 414)));
    // 0x1d5e3c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1D5E3Cu;
    {
        const bool branch_taken_0x1d5e3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5e3c) {
            ctx->pc = 0x1D5EB8u;
            goto label_1d5eb8;
        }
    }
    ctx->pc = 0x1D5E44u;
label_1d5e44:
    // 0x1d5e44: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1D5E44u;
    {
        const bool branch_taken_0x1d5e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5E44u;
        // 0x1d5e48: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5e44) {
            ctx->pc = 0x1D5EB8u;
            goto label_1d5eb8;
        }
    }
    ctx->pc = 0x1D5E4Cu;
label_1d5e4c:
    // 0x1d5e4c: 0x8c440024  lw          $a0, 0x24($v0)
    ctx->pc = 0x1d5e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1d5e50: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x1d5e50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x1d5e54: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x1d5e54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x1d5e58: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1d5e58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d5e5c: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x1d5e5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1d5e60: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D5E60u;
    {
        const bool branch_taken_0x1d5e60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d5e60) {
            ctx->pc = 0x1D5E78u;
            goto label_1d5e78;
        }
    }
    ctx->pc = 0x1D5E68u;
    // 0x1d5e68: 0x8444003c  lh          $a0, 0x3C($v0)
    ctx->pc = 0x1d5e68u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1d5e6c: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x1d5e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x1d5e70: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D5E70u;
    {
        const bool branch_taken_0x1d5e70 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d5e70) {
            ctx->pc = 0x1D5E84u;
            goto label_1d5e84;
        }
    }
    ctx->pc = 0x1D5E78u;
label_1d5e78:
    // 0x1d5e78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d5e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5e7c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1D5E7Cu;
    {
        const bool branch_taken_0x1d5e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5E7Cu;
        // 0x1d5e80: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5e7c) {
            ctx->pc = 0x1D5EB8u;
            goto label_1d5eb8;
        }
    }
    ctx->pc = 0x1D5E84u;
label_1d5e84:
    // 0x1d5e84: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x1d5e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x1d5e88: 0x30637800  andi        $v1, $v1, 0x7800
    ctx->pc = 0x1d5e88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)30720);
    // 0x1d5e8c: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D5E8Cu;
    {
        const bool branch_taken_0x1d5e8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5E8Cu;
        // 0x1d5e90: 0x30a30020  andi        $v1, $a1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5e8c) {
            ctx->pc = 0x1D5EB4u;
            goto label_1d5eb4;
        }
    }
    ctx->pc = 0x1D5E94u;
    // 0x1d5e94: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D5E94u;
    {
        const bool branch_taken_0x1d5e94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d5e94) {
            ctx->pc = 0x1D5EB4u;
            goto label_1d5eb4;
        }
    }
    ctx->pc = 0x1D5E9Cu;
    // 0x1d5e9c: 0x8443019c  lh          $v1, 0x19C($v0)
    ctx->pc = 0x1d5e9cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 412)));
    // 0x1d5ea0: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D5EA0u;
    {
        const bool branch_taken_0x1d5ea0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d5ea0) {
            ctx->pc = 0x1D5EB4u;
            goto label_1d5eb4;
        }
    }
    ctx->pc = 0x1D5EA8u;
    // 0x1d5ea8: 0x8442019e  lh          $v0, 0x19E($v0)
    ctx->pc = 0x1d5ea8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 414)));
    // 0x1d5eac: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D5EACu;
    {
        const bool branch_taken_0x1d5eac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5eac) {
            ctx->pc = 0x1D5EB8u;
            goto label_1d5eb8;
        }
    }
    ctx->pc = 0x1D5EB4u;
label_1d5eb4:
    // 0x1d5eb4: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1d5eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_1d5eb8:
    // 0x1d5eb8: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x1d5eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1d5ebc: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x1d5ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x1d5ec0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d5ec0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d5ec4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1d5ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1d5ec8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1d5ec8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1d5ecc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1d5eccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1d5ed0: 0xc4810050  lwc1        $f1, 0x50($a0)
    ctx->pc = 0x1d5ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d5ed4: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x1d5ed4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1d5ed8: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x1d5ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1d5edc: 0xc4810054  lwc1        $f1, 0x54($a0)
    ctx->pc = 0x1d5edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d5ee0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1d5ee0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1d5ee4: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x1d5ee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1d5ee8: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x1d5ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1d5eec: 0xc4800058  lwc1        $f0, 0x58($a0)
    ctx->pc = 0x1d5eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d5ef0: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x1d5ef0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1d5ef4: 0xafa3003c  sw          $v1, 0x3C($sp)
    ctx->pc = 0x1d5ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 3));
    // 0x1d5ef8: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x1d5ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1d5efc: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x1d5efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1d5f00: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1d5f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d5f04: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1d5f04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1d5f08: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1D5F08u;
    {
        const bool branch_taken_0x1d5f08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5f08) {
            ctx->pc = 0x1D5F48u;
            goto label_1d5f48;
        }
    }
    ctx->pc = 0x1D5F10u;
    // 0x1d5f10: 0xc48001d8  lwc1        $f0, 0x1D8($a0)
    ctx->pc = 0x1d5f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d5f14: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1d5f14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1d5f18: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x1d5f18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1d5f1c: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1d5f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1d5f20: 0xc44001dc  lwc1        $f0, 0x1DC($v0)
    ctx->pc = 0x1d5f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d5f24: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x1d5f24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1d5f28: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x1d5f28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
    // 0x1d5f2c: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x1d5f2cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1d5f30: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1d5f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1d5f34: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1d5f34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d5f38: 0xc06324c  jal         func_18C930
    ctx->pc = 0x1D5F38u;
    SET_GPR_U32(ctx, 31, 0x1D5F40u);
    ctx->pc = 0x1D5F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5F38u;
    // 0x1d5f3c: 0x24450150  addiu       $a1, $v0, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18C930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C930u, 0x1D5F38u, 0x1D5F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5F40u;
label_1d5f40:
    // 0x1d5f40: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x1D5F40u;
    {
        const bool branch_taken_0x1d5f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5F40u;
        // 0x1d5f44: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5f40) {
            ctx->pc = 0x1D6190u;
            goto label_1d6190;
        }
    }
    ctx->pc = 0x1D5F48u;
label_1d5f48:
    // 0x1d5f48: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1d5f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1d5f4c: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x1D5F4Cu;
    {
        const bool branch_taken_0x1d5f4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5F4Cu;
        // 0x1d5f50: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5f4c) {
            ctx->pc = 0x1D6058u;
            goto label_1d6058;
        }
    }
    ctx->pc = 0x1D5F54u;
    // 0x1d5f54: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x1d5f54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x1d5f58: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1d5f58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1d5f5c: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x1D5F5Cu;
    {
        const bool branch_taken_0x1d5f5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5F5Cu;
        // 0x1d5f60: 0x24860040  addiu       $a2, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5f5c) {
            ctx->pc = 0x1D603Cu;
            goto label_1d603c;
        }
    }
    ctx->pc = 0x1D5F64u;
    // 0x1d5f64: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1d5f64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d5f68: 0x248201b0  addiu       $v0, $a0, 0x1B0
    ctx->pc = 0x1d5f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 432));
    // 0x1d5f6c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d5f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d5f70: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d5f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d5f74: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d5f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d5f78: 0x8442002c  lh          $v0, 0x2C($v0)
    ctx->pc = 0x1d5f78u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1d5f7c: 0x1c40000e  bgtz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1D5F7Cu;
    {
        const bool branch_taken_0x1d5f7c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1d5f7c) {
            ctx->pc = 0x1D5FB8u;
            goto label_1d5fb8;
        }
    }
    ctx->pc = 0x1D5F84u;
    // 0x1d5f84: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x1d5f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x1d5f88: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1d5f88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1d5f8c: 0x8c223ffc  lw          $v0, 0x3FFC($at)
    ctx->pc = 0x1d5f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70003FFCu));
    // 0x1d5f90: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x1d5f90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1d5f94: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1d5f94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1d5f98: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1d5f98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d5f9c: 0x24a20080  addiu       $v0, $a1, 0x80
    ctx->pc = 0x1d5f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x1d5fa0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d5fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d5fa4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d5fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d5fa8: 0xc066e26  jal         func_19B898
    ctx->pc = 0x1D5FA8u;
    SET_GPR_U32(ctx, 31, 0x1D5FB0u);
    ctx->pc = 0x1D5FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5FA8u;
    // 0x1d5fac: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x1D5FA8u, 0x1D5FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5FB0u;
label_1d5fb0:
    // 0x1d5fb0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1D5FB0u;
    {
        const bool branch_taken_0x1d5fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5FB0u;
        // 0x1d5fb4: 0x8e230024  lw          $v1, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5fb0) {
            ctx->pc = 0x1D5FECu;
            goto label_1d5fec;
        }
    }
    ctx->pc = 0x1D5FB8u;
label_1d5fb8:
    // 0x1d5fb8: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x1d5fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x1d5fbc: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1d5fbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1d5fc0: 0x8c223ffc  lw          $v0, 0x3FFC($at)
    ctx->pc = 0x1d5fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70003FFCu));
    // 0x1d5fc4: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x1d5fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1d5fc8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1d5fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1d5fcc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1d5fccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1d5fd0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1d5fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d5fd4: 0x24a20080  addiu       $v0, $a1, 0x80
    ctx->pc = 0x1d5fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x1d5fd8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d5fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d5fdc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d5fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d5fe0: 0xc066e26  jal         func_19B898
    ctx->pc = 0x1D5FE0u;
    SET_GPR_U32(ctx, 31, 0x1D5FE8u);
    ctx->pc = 0x1D5FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5FE0u;
    // 0x1d5fe4: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x1D5FE0u, 0x1D5FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5FE8u;
label_1d5fe8:
    // 0x1d5fe8: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x1d5fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1d5fec:
    // 0x1d5fec: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x1d5fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x1d5ff0: 0x8042021f  lb          $v0, 0x21F($v0)
    ctx->pc = 0x1d5ff0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 543)));
    // 0x1d5ff4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D5FF4u;
    {
        const bool branch_taken_0x1d5ff4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d5ff4) {
            ctx->pc = 0x1D601Cu;
            goto label_1d601c;
        }
    }
    ctx->pc = 0x1D5FFCu;
    // 0x1d5ffc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1d5ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d6000: 0x24660040  addiu       $a2, $v1, 0x40
    ctx->pc = 0x1d6000u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x1d6004: 0xc063348  jal         func_18CD20
    ctx->pc = 0x1D6004u;
    SET_GPR_U32(ctx, 31, 0x1D600Cu);
    ctx->pc = 0x1D6008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6004u;
    // 0x1d6008: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18CD20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CD20u, 0x1D6004u, 0x1D600Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D600Cu;
label_1d600c:
    // 0x1d600c: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x1d600cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1d6010: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1d6010u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x1d6014: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x1D6014u;
    {
        const bool branch_taken_0x1d6014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6014u;
        // 0x1d6018: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6014) {
            ctx->pc = 0x1D6190u;
            goto label_1d6190;
        }
    }
    ctx->pc = 0x1D601Cu;
label_1d601c:
    // 0x1d601c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1d601cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d6020: 0x24660040  addiu       $a2, $v1, 0x40
    ctx->pc = 0x1d6020u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x1d6024: 0xc063320  jal         func_18CC80
    ctx->pc = 0x1D6024u;
    SET_GPR_U32(ctx, 31, 0x1D602Cu);
    ctx->pc = 0x1D6028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6024u;
    // 0x1d6028: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CC80u, 0x1D6024u, 0x1D602Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D602Cu;
label_1d602c:
    // 0x1d602c: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x1d602cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1d6030: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1d6030u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x1d6034: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x1D6034u;
    {
        const bool branch_taken_0x1d6034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6034u;
        // 0x1d6038: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6034) {
            ctx->pc = 0x1D6190u;
            goto label_1d6190;
        }
    }
    ctx->pc = 0x1D603Cu;
label_1d603c:
    // 0x1d603c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1d603cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d6040: 0xc06336c  jal         func_18CDB0
    ctx->pc = 0x1D6040u;
    SET_GPR_U32(ctx, 31, 0x1D6048u);
    ctx->pc = 0x1D6044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6040u;
    // 0x1d6044: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18CDB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CDB0u, 0x1D6040u, 0x1D6048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6048u;
label_1d6048:
    // 0x1d6048: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x1d6048u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1d604c: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1d604cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x1d6050: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x1D6050u;
    {
        const bool branch_taken_0x1d6050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6050u;
        // 0x1d6054: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6050) {
            ctx->pc = 0x1D6190u;
            goto label_1d6190;
        }
    }
    ctx->pc = 0x1D6058u;
label_1d6058:
    // 0x1d6058: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D6058u;
    {
        const bool branch_taken_0x1d6058 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D605Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6058u;
        // 0x1d605c: 0x24850150  addiu       $a1, $a0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6058) {
            ctx->pc = 0x1D6068u;
            goto label_1d6068;
        }
    }
    ctx->pc = 0x1D6060u;
    // 0x1d6060: 0xc066e26  jal         func_19B898
    ctx->pc = 0x1D6060u;
    SET_GPR_U32(ctx, 31, 0x1D6068u);
    ctx->pc = 0x1D6064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6060u;
    // 0x1d6064: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x1D6060u, 0x1D6068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6068u;
label_1d6068:
    // 0x1d6068: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x1d6068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1d606c: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x1d606cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x1d6070: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x1D6070u;
    {
        const bool branch_taken_0x1d6070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6070) {
            ctx->pc = 0x1D6158u;
            goto label_1d6158;
        }
    }
    ctx->pc = 0x1D6078u;
    // 0x1d6078: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x1d6078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1d607c: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x1d607cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x1d6080: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1d6080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d6084: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1d6084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1d6088: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x1D6088u;
    {
        const bool branch_taken_0x1d6088 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6088) {
            ctx->pc = 0x1D6158u;
            goto label_1d6158;
        }
    }
    ctx->pc = 0x1D6090u;
    // 0x1d6090: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1d6090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d6094: 0x248201b0  addiu       $v0, $a0, 0x1B0
    ctx->pc = 0x1d6094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 432));
    // 0x1d6098: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d6098u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d609c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d609cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d60a0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d60a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d60a4: 0x8442002c  lh          $v0, 0x2C($v0)
    ctx->pc = 0x1d60a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x1d60a8: 0x1c40000e  bgtz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1D60A8u;
    {
        const bool branch_taken_0x1d60a8 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1d60a8) {
            ctx->pc = 0x1D60E4u;
            goto label_1d60e4;
        }
    }
    ctx->pc = 0x1D60B0u;
    // 0x1d60b0: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x1d60b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x1d60b4: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1d60b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1d60b8: 0x8c223ffc  lw          $v0, 0x3FFC($at)
    ctx->pc = 0x1d60b8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70003FFCu));
    // 0x1d60bc: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x1d60bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1d60c0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1d60c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1d60c4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1d60c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d60c8: 0x24a20080  addiu       $v0, $a1, 0x80
    ctx->pc = 0x1d60c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x1d60cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d60ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d60d0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d60d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d60d4: 0xc066e26  jal         func_19B898
    ctx->pc = 0x1D60D4u;
    SET_GPR_U32(ctx, 31, 0x1D60DCu);
    ctx->pc = 0x1D60D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D60D4u;
    // 0x1d60d8: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x1D60D4u, 0x1D60DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D60DCu;
label_1d60dc:
    // 0x1d60dc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1D60DCu;
    {
        const bool branch_taken_0x1d60dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D60E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D60DCu;
        // 0x1d60e0: 0x8e230024  lw          $v1, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d60dc) {
            ctx->pc = 0x1D6118u;
            goto label_1d6118;
        }
    }
    ctx->pc = 0x1D60E4u;
label_1d60e4:
    // 0x1d60e4: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x1d60e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x1d60e8: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x1d60e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x1d60ec: 0x8c223ffc  lw          $v0, 0x3FFC($at)
    ctx->pc = 0x1d60ecu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70003FFCu));
    // 0x1d60f0: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x1d60f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1d60f4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1d60f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1d60f8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1d60f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1d60fc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1d60fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d6100: 0x24a20080  addiu       $v0, $a1, 0x80
    ctx->pc = 0x1d6100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x1d6104: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d6104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d6108: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1d6108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d610c: 0xc066e26  jal         func_19B898
    ctx->pc = 0x1D610Cu;
    SET_GPR_U32(ctx, 31, 0x1D6114u);
    ctx->pc = 0x1D6110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D610Cu;
    // 0x1d6110: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x1D610Cu, 0x1D6114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6114u;
label_1d6114:
    // 0x1d6114: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x1d6114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1d6118:
    // 0x1d6118: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x1d6118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x1d611c: 0x8042021f  lb          $v0, 0x21F($v0)
    ctx->pc = 0x1d611cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 543)));
    // 0x1d6120: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D6120u;
    {
        const bool branch_taken_0x1d6120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d6120) {
            ctx->pc = 0x1D6140u;
            goto label_1d6140;
        }
    }
    ctx->pc = 0x1D6128u;
    // 0x1d6128: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1d6128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d612c: 0x24660040  addiu       $a2, $v1, 0x40
    ctx->pc = 0x1d612cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x1d6130: 0xc0633b8  jal         func_18CEE0
    ctx->pc = 0x1D6130u;
    SET_GPR_U32(ctx, 31, 0x1D6138u);
    ctx->pc = 0x1D6134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6130u;
    // 0x1d6134: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18CEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CEE0u, 0x1D6130u, 0x1D6138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6138u;
label_1d6138:
    // 0x1d6138: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1D6138u;
    {
        const bool branch_taken_0x1d6138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D613Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6138u;
        // 0x1d613c: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6138) {
            ctx->pc = 0x1D6190u;
            goto label_1d6190;
        }
    }
    ctx->pc = 0x1D6140u;
label_1d6140:
    // 0x1d6140: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1d6140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d6144: 0x24660040  addiu       $a2, $v1, 0x40
    ctx->pc = 0x1d6144u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x1d6148: 0xc063390  jal         func_18CE40
    ctx->pc = 0x1D6148u;
    SET_GPR_U32(ctx, 31, 0x1D6150u);
    ctx->pc = 0x1D614Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6148u;
    // 0x1d614c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18CE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CE40u, 0x1D6148u, 0x1D6150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6150u;
label_1d6150:
    // 0x1d6150: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1D6150u;
    {
        const bool branch_taken_0x1d6150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6150) {
            ctx->pc = 0x1D618Cu;
            goto label_1d618c;
        }
    }
    ctx->pc = 0x1D6158u;
label_1d6158:
    // 0x1d6158: 0x8483003c  lh          $v1, 0x3C($a0)
    ctx->pc = 0x1d6158u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x1d615c: 0x240200a3  addiu       $v0, $zero, 0xA3
    ctx->pc = 0x1d615cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 163));
    // 0x1d6160: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D6160u;
    {
        const bool branch_taken_0x1d6160 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D6164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6160u;
        // 0x1d6164: 0x24860040  addiu       $a2, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6160) {
            ctx->pc = 0x1D6180u;
            goto label_1d6180;
        }
    }
    ctx->pc = 0x1D6168u;
    // 0x1d6168: 0x24860040  addiu       $a2, $a0, 0x40
    ctx->pc = 0x1d6168u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x1d616c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1d616cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d6170: 0xc0633dc  jal         func_18CF70
    ctx->pc = 0x1D6170u;
    SET_GPR_U32(ctx, 31, 0x1D6178u);
    ctx->pc = 0x1D6174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6170u;
    // 0x1d6174: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18CF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CF70u, 0x1D6170u, 0x1D6178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6178u;
label_1d6178:
    // 0x1d6178: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D6178u;
    {
        const bool branch_taken_0x1d6178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6178) {
            ctx->pc = 0x1D618Cu;
            goto label_1d618c;
        }
    }
    ctx->pc = 0x1D6180u;
label_1d6180:
    // 0x1d6180: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1d6180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d6184: 0xc063404  jal         func_18D010
    ctx->pc = 0x1D6184u;
    SET_GPR_U32(ctx, 31, 0x1D618Cu);
    ctx->pc = 0x1D6188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6184u;
    // 0x1d6188: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D010u, 0x1D6184u, 0x1D618Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D618Cu;
label_1d618c:
    // 0x1d618c: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1d618cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_1d6190:
    // 0x1d6190: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d6190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x1d6194u;
}
