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

// Function: FUN_00157d20
// Address: 0x157d20 - 0x157e20
void FUN_00157d20_0x157d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00157d20_0x157d20");
#endif

    switch (ctx->pc) {
        case 0x157d74u: goto label_157d74;
        case 0x157d80u: goto label_157d80;
        case 0x157d90u: goto label_157d90;
        case 0x157db4u: goto label_157db4;
        case 0x157dc4u: goto label_157dc4;
        case 0x157dccu: goto label_157dcc;
        case 0x157dd4u: goto label_157dd4;
        case 0x157decu: goto label_157dec;
        case 0x157df8u: goto label_157df8;
        case 0x157e08u: goto label_157e08;
        case 0x157e10u: goto label_157e10;
        case 0x157e18u: goto label_157e18;
        default: break;
    }

    ctx->pc = 0x157d20u;

    // 0x157d20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x157d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x157d24: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x157d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x157d28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x157d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x157d2c: 0x24030029  addiu       $v1, $zero, 0x29
    ctx->pc = 0x157d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x157d30: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x157d30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x157d34: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x157d34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x157d38: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x157d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x157d3c: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x157d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    // 0x157d40: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x157d40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x157d44: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x157d44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157d48: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x157d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x157d4c: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x157d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x157d50: 0xa4224af4  sh          $v0, 0x4AF4($at)
    ctx->pc = 0x157d50u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x334AF4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x334AF4u, _value); } while (0);
    // 0x157d54: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x157d54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x157d58: 0x3c010033  lui         $at, 0x33
    ctx->pc = 0x157d58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51 << 16));
    // 0x157d5c: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x157d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x157d60: 0xa0234af6  sb          $v1, 0x4AF6($at)
    ctx->pc = 0x157d60u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x334AF6u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x334AF6u, _value); } while (0);
    // 0x157d64: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x157d64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x157d68: 0xaf80863c  sw          $zero, -0x79C4($gp)
    ctx->pc = 0x157d68u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936124), GPR_U32(ctx, 0));
    // 0x157d6c: 0xc07b1ac  jal         func_1EC6B0
    ctx->pc = 0x157D6Cu;
    SET_GPR_U32(ctx, 31, 0x157D74u);
    ctx->pc = 0x157D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157D6Cu;
    // 0x157d70: 0xaf808590  sw          $zero, -0x7A70($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935952), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EC6B0u, 0x157D6Cu, 0x157D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157D74u;
label_157d74:
    // 0x157d74: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x157d74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x157d78: 0xc05af64  jal         func_16BD90
    ctx->pc = 0x157D78u;
    SET_GPR_U32(ctx, 31, 0x157D80u);
    ctx->pc = 0x157D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157D78u;
    // 0x157d7c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16BD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16BD90u, 0x157D78u, 0x157D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157D80u;
label_157d80:
    // 0x157d80: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x157d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x157d84: 0x27a50018  addiu       $a1, $sp, 0x18
    ctx->pc = 0x157d84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x157d88: 0xc078388  jal         func_1E0E20
    ctx->pc = 0x157D88u;
    SET_GPR_U32(ctx, 31, 0x157D90u);
    ctx->pc = 0x157D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157D88u;
    // 0x157d8c: 0x27a6001c  addiu       $a2, $sp, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0E20u, 0x157D88u, 0x157D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157D90u;
label_157d90:
    // 0x157d90: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x157D90u;
    {
        const bool branch_taken_0x157d90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x157D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157D90u;
        // 0x157d94: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157d90) {
            ctx->pc = 0x157E08u;
            goto label_157e08;
        }
    }
    ctx->pc = 0x157D98u;
    // 0x157d98: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x157d98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x157d9c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x157d9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x157da0: 0x27a70024  addiu       $a3, $sp, 0x24
    ctx->pc = 0x157da0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x157da4: 0x27a80028  addiu       $t0, $sp, 0x28
    ctx->pc = 0x157da4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x157da8: 0x27a9002c  addiu       $t1, $sp, 0x2C
    ctx->pc = 0x157da8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x157dac: 0xc079258  jal         func_1E4960
    ctx->pc = 0x157DACu;
    SET_GPR_U32(ctx, 31, 0x157DB4u);
    ctx->pc = 0x157DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157DACu;
    // 0x157db0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E4960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4960u, 0x157DACu, 0x157DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157DB4u;
label_157db4:
    // 0x157db4: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x157DB4u;
    {
        const bool branch_taken_0x157db4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x157db4) {
            ctx->pc = 0x157E08u;
            goto label_157e08;
        }
    }
    ctx->pc = 0x157DBCu;
    // 0x157dbc: 0xc05af50  jal         func_16BD40
    ctx->pc = 0x157DBCu;
    SET_GPR_U32(ctx, 31, 0x157DC4u);
    ctx->pc = 0x16BD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16BD40u, 0x157DBCu, 0x157DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157DC4u;
label_157dc4:
    // 0x157dc4: 0xc05b1e0  jal         func_16C780
    ctx->pc = 0x157DC4u;
    SET_GPR_U32(ctx, 31, 0x157DCCu);
    ctx->pc = 0x16C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C780u, 0x157DC4u, 0x157DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157DCCu;
label_157dcc:
    // 0x157dcc: 0xc05b578  jal         func_16D5E0
    ctx->pc = 0x157DCCu;
    SET_GPR_U32(ctx, 31, 0x157DD4u);
    ctx->pc = 0x157DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157DCCu;
    // 0x157dd0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x157DCCu, 0x157DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157DD4u;
label_157dd4:
    // 0x157dd4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x157dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x157dd8: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x157dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x157ddc: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x157ddcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x157de0: 0x8fa7002c  lw          $a3, 0x2C($sp)
    ctx->pc = 0x157de0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x157de4: 0xc056690  jal         func_159A40
    ctx->pc = 0x157DE4u;
    SET_GPR_U32(ctx, 31, 0x157DECu);
    ctx->pc = 0x157DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157DE4u;
    // 0x157de8: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x159A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159A40u, 0x157DE4u, 0x157DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157DECu;
label_157dec:
    // 0x157dec: 0x8fa5001c  lw          $a1, 0x1C($sp)
    ctx->pc = 0x157decu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x157df0: 0xc0568c0  jal         func_15A300
    ctx->pc = 0x157DF0u;
    SET_GPR_U32(ctx, 31, 0x157DF8u);
    ctx->pc = 0x157DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157DF0u;
    // 0x157df4: 0x8fa40018  lw          $a0, 0x18($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15A300u, 0x157DF0u, 0x157DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157DF8u;
label_157df8:
    // 0x157df8: 0x8f828590  lw          $v0, -0x7A70($gp)
    ctx->pc = 0x157df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x157dfc: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x157dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x157e00: 0xc051368  jal         func_144DA0
    ctx->pc = 0x157E00u;
    SET_GPR_U32(ctx, 31, 0x157E08u);
    ctx->pc = 0x157E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157E00u;
    // 0x157e04: 0xaf828590  sw          $v0, -0x7A70($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935952), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144DA0u, 0x157E00u, 0x157E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157E08u;
label_157e08:
    // 0x157e08: 0xc05af50  jal         func_16BD40
    ctx->pc = 0x157E08u;
    SET_GPR_U32(ctx, 31, 0x157E10u);
    ctx->pc = 0x16BD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16BD40u, 0x157E08u, 0x157E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157E10u;
label_157e10:
    // 0x157e10: 0xc05b1e0  jal         func_16C780
    ctx->pc = 0x157E10u;
    SET_GPR_U32(ctx, 31, 0x157E18u);
    ctx->pc = 0x16C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C780u, 0x157E10u, 0x157E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157E18u;
label_157e18:
    // 0x157e18: 0xc05b578  jal         func_16D5E0
    ctx->pc = 0x157E18u;
    SET_GPR_U32(ctx, 31, 0x157E20u);
    ctx->pc = 0x157E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157E18u;
    // 0x157e1c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D5E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D5E0u, 0x157E18u, 0x157E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157E20u;
}
