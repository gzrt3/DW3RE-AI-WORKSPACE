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

// Function: FUN_00227d10
// Address: 0x227d10 - 0x227e24
void FUN_00227d10_0x227d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00227d10_0x227d10");
#endif

    switch (ctx->pc) {
        case 0x227d38u: goto label_227d38;
        case 0x227d4cu: goto label_227d4c;
        case 0x227d68u: goto label_227d68;
        case 0x227dc4u: goto label_227dc4;
        case 0x227e08u: goto label_227e08;
        default: break;
    }

    ctx->pc = 0x227d10u;

    // 0x227d10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x227d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x227d14: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x227d14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x227d18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x227d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x227d1c: 0x2406007f  addiu       $a2, $zero, 0x7F
    ctx->pc = 0x227d1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x227d20: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x227d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x227d24: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x227d24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x227d28: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x227d28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227d2c: 0x2408003c  addiu       $t0, $zero, 0x3C
    ctx->pc = 0x227d2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x227d30: 0xc05b4d4  jal         func_16D350
    ctx->pc = 0x227D30u;
    SET_GPR_U32(ctx, 31, 0x227D38u);
    ctx->pc = 0x227D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227D30u;
    // 0x227d34: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D350u, 0x227D30u, 0x227D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227D38u;
label_227d38:
    // 0x227d38: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x227d38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x227d3c: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x227d3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x227d40: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x227d40u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x227d44: 0xc05d988  jal         func_176620
    ctx->pc = 0x227D44u;
    SET_GPR_U32(ctx, 31, 0x227D4Cu);
    ctx->pc = 0x227D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227D44u;
    // 0x227d48: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176620u, 0x227D44u, 0x227D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227D4Cu;
label_227d4c:
    // 0x227d4c: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x227d4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x227d50: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x227d50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x227d54: 0x8e070004  lw          $a3, 0x4($s0)
    ctx->pc = 0x227d54u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x227d58: 0x248499b0  addiu       $a0, $a0, -0x6650
    ctx->pc = 0x227d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941104));
    // 0x227d5c: 0x8e080008  lw          $t0, 0x8($s0)
    ctx->pc = 0x227d5cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x227d60: 0xc05d9d8  jal         func_176760
    ctx->pc = 0x227D60u;
    SET_GPR_U32(ctx, 31, 0x227D68u);
    ctx->pc = 0x227D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227D60u;
    // 0x227d64: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176760u, 0x227D60u, 0x227D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227D68u;
label_227d68:
    // 0x227d68: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x227d68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x227d6c: 0x8c224afc  lw          $v0, 0x4AFC($at)
    ctx->pc = 0x227d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x334AFCu));
    // 0x227d70: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x227D70u;
    {
        const bool branch_taken_0x227d70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x227D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227D70u;
        // 0x227d74: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227d70) {
            ctx->pc = 0x227E0Cu;
            goto label_227e0c;
        }
    }
    ctx->pc = 0x227D78u;
    // 0x227d78: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x227d78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x227d7c: 0x8c224af8  lw          $v0, 0x4AF8($at)
    ctx->pc = 0x227d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x334AF8u));
    // 0x227d80: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x227D80u;
    {
        const bool branch_taken_0x227d80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x227D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227D80u;
        // 0x227d84: 0x3c030029  lui         $v1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227d80) {
            ctx->pc = 0x227E08u;
            goto label_227e08;
        }
    }
    ctx->pc = 0x227D88u;
    // 0x227d88: 0x3c070059  lui         $a3, 0x59
    ctx->pc = 0x227d88u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)89 << 16));
    // 0x227d8c: 0x2463edb0  addiu       $v1, $v1, -0x1250
    ctx->pc = 0x227d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962608));
    // 0x227d90: 0x24e799b0  addiu       $a3, $a3, -0x6650
    ctx->pc = 0x227d90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294941104));
    // 0x227d94: 0x78660000  lq          $a2, 0x0($v1)
    ctx->pc = 0x227d94u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x227d98: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x227d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x227d9c: 0x78650010  lq          $a1, 0x10($v1)
    ctx->pc = 0x227d9cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x227da0: 0x27a80020  addiu       $t0, $sp, 0x20
    ctx->pc = 0x227da0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x227da4: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x227da4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227da8: 0x240200bf  addiu       $v0, $zero, 0xBF
    ctx->pc = 0x227da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 191));
    // 0x227dac: 0x90630024  lbu         $v1, 0x24($v1)
    ctx->pc = 0x227dacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x227db0: 0x7d060000  sq          $a2, 0x0($t0)
    ctx->pc = 0x227db0u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 6));
    // 0x227db4: 0x7d050010  sq          $a1, 0x10($t0)
    ctx->pc = 0x227db4u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 16), GPR_VEC(ctx, 5));
    // 0x227db8: 0xe5000020  swc1        $f0, 0x20($t0)
    ctx->pc = 0x227db8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 32), bits); }
    // 0x227dbc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x227DBCu;
    {
        const bool branch_taken_0x227dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x227DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227DBCu;
        // 0x227dc0: 0xa1030024  sb          $v1, 0x24($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 36), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227dbc) {
            ctx->pc = 0x227DE0u;
            goto label_227de0;
        }
    }
    ctx->pc = 0x227DC4u;
label_227dc4:
    // 0x227dc4: 0x80e30000  lb          $v1, 0x0($a3)
    ctx->pc = 0x227dc4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x227dc8: 0x14a30008  bne         $a1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x227DC8u;
    {
        const bool branch_taken_0x227dc8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x227DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227DC8u;
        // 0x227dcc: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227dc8) {
            ctx->pc = 0x227DECu;
            goto label_227dec;
        }
    }
    ctx->pc = 0x227DD0u;
    // 0x227dd0: 0x871823  subu        $v1, $a0, $a3
    ctx->pc = 0x227dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x227dd4: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x227DD4u;
    {
        const bool branch_taken_0x227dd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x227dd4) {
            ctx->pc = 0x227DECu;
            goto label_227dec;
        }
    }
    ctx->pc = 0x227DDCu;
    // 0x227ddc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x227ddcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_227de0:
    // 0x227de0: 0x81050000  lb          $a1, 0x0($t0)
    ctx->pc = 0x227de0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x227de4: 0x14a0fff7  bnez        $a1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x227DE4u;
    {
        const bool branch_taken_0x227de4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x227de4) {
            ctx->pc = 0x227DC4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_227dc4;
        }
    }
    ctx->pc = 0x227DECu;
label_227dec:
    // 0x227dec: 0x0  nop
    ctx->pc = 0x227decu;
    // NOP
    // 0x227df0: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x227DF0u;
    {
        const bool branch_taken_0x227df0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x227DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227DF0u;
        // 0x227df4: 0x3c040059  lui         $a0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227df0) {
            ctx->pc = 0x227E08u;
            goto label_227e08;
        }
    }
    ctx->pc = 0x227DF8u;
    // 0x227df8: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x227df8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
    // 0x227dfc: 0x248499b0  addiu       $a0, $a0, -0x6650
    ctx->pc = 0x227dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941104));
    // 0x227e00: 0xc08f20e  jal         func_23C838
    ctx->pc = 0x227E00u;
    SET_GPR_U32(ctx, 31, 0x227E08u);
    ctx->pc = 0x227E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227E00u;
    // 0x227e04: 0x24a5e1a0  addiu       $a1, $a1, -0x1E60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23C838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23C838u, 0x227E00u, 0x227E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227E08u;
label_227e08:
    // 0x227e08: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x227e08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_227e0c:
    // 0x227e0c: 0x3c080059  lui         $t0, 0x59
    ctx->pc = 0x227e0cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)89 << 16));
    // 0x227e10: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x227e10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227e14: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x227e14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227e18: 0x24070039  addiu       $a3, $zero, 0x39
    ctx->pc = 0x227e18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x227e1c: 0xc070430  jal         func_1C10C0
    ctx->pc = 0x227E1Cu;
    SET_GPR_U32(ctx, 31, 0x227E24u);
    ctx->pc = 0x227E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227E1Cu;
    // 0x227e20: 0x250899b0  addiu       $t0, $t0, -0x6650 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294941104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C10C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C10C0u, 0x227E1Cu, 0x227E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227E24u;
}
