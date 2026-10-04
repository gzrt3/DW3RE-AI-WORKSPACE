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

// Function: FUN_00230d60
// Address: 0x230d60 - 0x2310ac
void FUN_00230d60_0x230d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00230d60_0x230d60");
#endif

    switch (ctx->pc) {
        case 0x230db0u: goto label_230db0;
        case 0x230dc8u: goto label_230dc8;
        case 0x230de8u: goto label_230de8;
        case 0x230df8u: goto label_230df8;
        case 0x230e2cu: goto label_230e2c;
        case 0x230e48u: goto label_230e48;
        case 0x230e58u: goto label_230e58;
        case 0x230e60u: goto label_230e60;
        case 0x230e70u: goto label_230e70;
        case 0x230e78u: goto label_230e78;
        case 0x230e98u: goto label_230e98;
        case 0x230ea0u: goto label_230ea0;
        case 0x230ea8u: goto label_230ea8;
        case 0x230ec8u: goto label_230ec8;
        case 0x230f04u: goto label_230f04;
        case 0x230f0cu: goto label_230f0c;
        case 0x230f18u: goto label_230f18;
        case 0x230f40u: goto label_230f40;
        case 0x230f50u: goto label_230f50;
        case 0x230f68u: goto label_230f68;
        case 0x230f80u: goto label_230f80;
        case 0x230f98u: goto label_230f98;
        case 0x230fa8u: goto label_230fa8;
        case 0x230fbcu: goto label_230fbc;
        case 0x230fccu: goto label_230fcc;
        case 0x230fe0u: goto label_230fe0;
        case 0x230fe8u: goto label_230fe8;
        case 0x230ff0u: goto label_230ff0;
        case 0x231000u: goto label_231000;
        case 0x231008u: goto label_231008;
        case 0x231010u: goto label_231010;
        case 0x231020u: goto label_231020;
        case 0x231030u: goto label_231030;
        case 0x231038u: goto label_231038;
        case 0x231040u: goto label_231040;
        case 0x231054u: goto label_231054;
        default: break;
    }

    ctx->pc = 0x230d60u;

    // 0x230d60: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x230d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x230d64: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x230d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x230d68: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x230d68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230d6c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x230d6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x230d70: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x230d70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230d74: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x230d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x230d78: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x230d78u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230d7c: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x230d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x230d80: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x230d80u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230d84: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x230d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x230d88: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x230d88u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230d8c: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x230d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x230d90: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x230d90u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230d94: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x230d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x230d98: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x230d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x230d9c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x230d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x230da0: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x230da0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x230da4: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x230DA4u;
    {
        const bool branch_taken_0x230da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230DA4u;
        // 0x230da8: 0x2a560005  slti        $s6, $s2, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 22, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x230da4) {
            ctx->pc = 0x230FBCu;
            goto label_230fbc;
        }
    }
    ctx->pc = 0x230DACu;
    // 0x230dac: 0x0  nop
    ctx->pc = 0x230dacu;
    // NOP
label_230db0:
    // 0x230db0: 0x16a0000f  bnez        $s5, . + 4 + (0xF << 2)
    ctx->pc = 0x230DB0u;
    {
        const bool branch_taken_0x230db0 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x230DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230DB0u;
        // 0x230db4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230db0) {
            ctx->pc = 0x230DF0u;
            goto label_230df0;
        }
    }
    ctx->pc = 0x230DB8u;
    // 0x230db8: 0x12e0000d  beqz        $s7, . + 4 + (0xD << 2)
    ctx->pc = 0x230DB8u;
    {
        const bool branch_taken_0x230db8 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x230db8) {
            ctx->pc = 0x230DF0u;
            goto label_230df0;
        }
    }
    ctx->pc = 0x230DC0u;
    // 0x230dc0: 0xc08c34a  jal         func_230D28
    ctx->pc = 0x230DC0u;
    SET_GPR_U32(ctx, 31, 0x230DC8u);
    ctx->pc = 0x230D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230D28u, 0x230DC0u, 0x230DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230DC8u;
label_230dc8:
    // 0x230dc8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x230dc8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230dcc: 0x12a00008  beqz        $s5, . + 4 + (0x8 << 2)
    ctx->pc = 0x230DCCu;
    {
        const bool branch_taken_0x230dcc = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x230DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230DCCu;
        // 0x230dd0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230dcc) {
            ctx->pc = 0x230DF0u;
            goto label_230df0;
        }
    }
    ctx->pc = 0x230DD4u;
    // 0x230dd4: 0x8f8482d0  lw          $a0, -0x7D30($gp)
    ctx->pc = 0x230dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
    // 0x230dd8: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x230dd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
    // 0x230ddc: 0x34211158  ori         $at, $at, 0x1158
    ctx->pc = 0x230ddcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4440);
    // 0x230de0: 0xc08cd30  jal         func_2334C0
    ctx->pc = 0x230DE0u;
    SET_GPR_U32(ctx, 31, 0x230DE8u);
    ctx->pc = 0x230DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230DE0u;
    // 0x230de4: 0x242021  addu        $a0, $at, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2334C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2334C0u, 0x230DE0u, 0x230DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230DE8u;
label_230de8:
    // 0x230de8: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x230DE8u;
    {
        const bool branch_taken_0x230de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x230de8) {
            ctx->pc = 0x231028u;
            goto label_231028;
        }
    }
    ctx->pc = 0x230DF0u;
label_230df0:
    // 0x230df0: 0xc08c768  jal         func_231DA0
    ctx->pc = 0x230DF0u;
    SET_GPR_U32(ctx, 31, 0x230DF8u);
    ctx->pc = 0x230DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230DF0u;
    // 0x230df4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231DA0u, 0x230DF0u, 0x230DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230DF8u;
label_230df8:
    // 0x230df8: 0x1a600042  blez        $s3, . + 4 + (0x42 << 2)
    ctx->pc = 0x230DF8u;
    {
        const bool branch_taken_0x230df8 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x230DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230DF8u;
        // 0x230dfc: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230df8) {
            ctx->pc = 0x230F04u;
            goto label_230f04;
        }
    }
    ctx->pc = 0x230E00u;
    // 0x230e00: 0x24027fff  addiu       $v0, $zero, 0x7FFF
    ctx->pc = 0x230e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x230e04: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x230e04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x230e08: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x230E08u;
    {
        const bool branch_taken_0x230e08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230E08u;
        // 0x230e0c: 0x8f8382d8  lw          $v1, -0x7D28($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230e08) {
            ctx->pc = 0x230F04u;
            goto label_230f04;
        }
    }
    ctx->pc = 0x230E10u;
    // 0x230e10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x230e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x230e14: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x230E14u;
    {
        const bool branch_taken_0x230e14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x230E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230E14u;
        // 0x230e18: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230e14) {
            ctx->pc = 0x230E38u;
            goto label_230e38;
        }
    }
    ctx->pc = 0x230E1Cu;
    // 0x230e1c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x230e1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x230e20: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x230e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x230e24: 0xc08dac2  jal         func_236B08
    ctx->pc = 0x230E24u;
    SET_GPR_U32(ctx, 31, 0x230E2Cu);
    ctx->pc = 0x230E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230E24u;
    // 0x230e28: 0x27a70004  addiu       $a3, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236B08u, 0x230E24u, 0x230E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230E2Cu;
label_230e2c:
    // 0x230e2c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x230E2Cu;
    {
        const bool branch_taken_0x230e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230E2Cu;
        // 0x230e30: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230e2c) {
            ctx->pc = 0x230EF0u;
            goto label_230ef0;
        }
    }
    ctx->pc = 0x230E34u;
    // 0x230e34: 0x0  nop
    ctx->pc = 0x230e34u;
    // NOP
label_230e38:
    // 0x230e38: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x230e38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x230e3c: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x230e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x230e40: 0xc06c2f0  jal         func_1B0BC0
    ctx->pc = 0x230E40u;
    SET_GPR_U32(ctx, 31, 0x230E48u);
    ctx->pc = 0x230E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230E40u;
    // 0x230e44: 0x27a70004  addiu       $a3, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0BC0u, 0x230E40u, 0x230E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230E48u;
label_230e48:
    // 0x230e48: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x230e48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230e4c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x230e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x230e50: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x230E50u;
    {
        const bool branch_taken_0x230e50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230E50u;
        // 0x230e54: 0x8f8382d0  lw          $v1, -0x7D30($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230e50) {
            ctx->pc = 0x230ED4u;
            goto label_230ed4;
        }
    }
    ctx->pc = 0x230E58u;
label_230e58:
    // 0x230e58: 0xc06c2e2  jal         func_1B0B88
    ctx->pc = 0x230E58u;
    SET_GPR_U32(ctx, 31, 0x230E60u);
    ctx->pc = 0x1B0B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0B88u, 0x230E58u, 0x230E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230E60u;
label_230e60:
    // 0x230e60: 0x1040fffd  beqz        $v0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x230E60u;
    {
        const bool branch_taken_0x230e60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230E60u;
        // 0x230e64: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230e60) {
            ctx->pc = 0x230E58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_230e58;
        }
    }
    ctx->pc = 0x230E68u;
    // 0x230e68: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x230E68u;
    {
        const bool branch_taken_0x230e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x230e68) {
            ctx->pc = 0x230E98u;
            goto label_230e98;
        }
    }
    ctx->pc = 0x230E70u;
label_230e70:
    // 0x230e70: 0xc08c34a  jal         func_230D28
    ctx->pc = 0x230E70u;
    SET_GPR_U32(ctx, 31, 0x230E78u);
    ctx->pc = 0x230D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230D28u, 0x230E70u, 0x230E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230E78u;
label_230e78:
    // 0x230e78: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x230e78u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230e7c: 0x12a00006  beqz        $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x230E7Cu;
    {
        const bool branch_taken_0x230e7c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x230e7c) {
            ctx->pc = 0x230E98u;
            goto label_230e98;
        }
    }
    ctx->pc = 0x230E84u;
    // 0x230e84: 0x8f8482d0  lw          $a0, -0x7D30($gp)
    ctx->pc = 0x230e84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
    // 0x230e88: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x230e88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
    // 0x230e8c: 0x34211158  ori         $at, $at, 0x1158
    ctx->pc = 0x230e8cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4440);
    // 0x230e90: 0xc08cd30  jal         func_2334C0
    ctx->pc = 0x230E90u;
    SET_GPR_U32(ctx, 31, 0x230E98u);
    ctx->pc = 0x230E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230E90u;
    // 0x230e94: 0x242021  addu        $a0, $at, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2334C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2334C0u, 0x230E90u, 0x230E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230E98u;
label_230e98:
    // 0x230e98: 0xc06c03a  jal         func_1B00E8
    ctx->pc = 0x230E98u;
    SET_GPR_U32(ctx, 31, 0x230EA0u);
    ctx->pc = 0x230E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230E98u;
    // 0x230e9c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B00E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B00E8u, 0x230E98u, 0x230EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230EA0u;
label_230ea0:
    // 0x230ea0: 0x1450fff3  bne         $v0, $s0, . + 4 + (-0xD << 2)
    ctx->pc = 0x230EA0u;
    {
        const bool branch_taken_0x230ea0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x230ea0) {
            ctx->pc = 0x230E70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_230e70;
        }
    }
    ctx->pc = 0x230EA8u;
label_230ea8:
    // 0x230ea8: 0x8f8582d0  lw          $a1, -0x7D30($gp)
    ctx->pc = 0x230ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
    // 0x230eac: 0x3c040009  lui         $a0, 0x9
    ctx->pc = 0x230eacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)9 << 16));
    // 0x230eb0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x230eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x230eb4: 0x8c84128c  lw          $a0, 0x128C($a0)
    ctx->pc = 0x230eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4748)));
    // 0x230eb8: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x230eb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
    // 0x230ebc: 0x34211284  ori         $at, $at, 0x1284
    ctx->pc = 0x230ebcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4740);
    // 0x230ec0: 0xc06c2bc  jal         func_1B0AF0
    ctx->pc = 0x230EC0u;
    SET_GPR_U32(ctx, 31, 0x230EC8u);
    ctx->pc = 0x230EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230EC0u;
    // 0x230ec4: 0x252821  addu        $a1, $at, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0AF0u, 0x230EC0u, 0x230EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230EC8u;
label_230ec8:
    // 0x230ec8: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x230EC8u;
    {
        const bool branch_taken_0x230ec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230EC8u;
        // 0x230ecc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230ec8) {
            ctx->pc = 0x230EA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_230ea8;
        }
    }
    ctx->pc = 0x230ED0u;
    // 0x230ed0: 0x8f8382d0  lw          $v1, -0x7D30($gp)
    ctx->pc = 0x230ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_230ed4:
    // 0x230ed4: 0x3c020009  lui         $v0, 0x9
    ctx->pc = 0x230ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9 << 16));
    // 0x230ed8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x230ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x230edc: 0x8c42128c  lw          $v0, 0x128C($v0)
    ctx->pc = 0x230edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4748)));
    // 0x230ee0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x230ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x230ee4: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x230ee4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
    // 0x230ee8: 0x230821  addu        $at, $at, $v1
    ctx->pc = 0x230ee8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 3)));
    // 0x230eec: 0xac22128c  sw          $v0, 0x128C($at)
    ctx->pc = 0x230eecu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4748), GPR_U32(ctx, 2));
label_230ef0:
    // 0x230ef0: 0x632c0  sll         $a2, $a2, 11
    ctx->pc = 0x230ef0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 11));
    // 0x230ef4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x230ef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230ef8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x230ef8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230efc: 0xc08c778  jal         func_231DE0
    ctx->pc = 0x230EFCu;
    SET_GPR_U32(ctx, 31, 0x230F04u);
    ctx->pc = 0x230F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230EFCu;
    // 0x230f00: 0x2669823  subu        $s3, $s3, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231DE0u, 0x230EFCu, 0x230F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230F04u;
label_230f04:
    // 0x230f04: 0xc08c42e  jal         func_2310B8
    ctx->pc = 0x230F04u;
    SET_GPR_U32(ctx, 31, 0x230F0Cu);
    ctx->pc = 0x2310B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310B8u, 0x230F04u, 0x230F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230F0Cu;
label_230f0c:
    // 0x230f0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x230f0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230f10: 0xc08c792  jal         func_231E48
    ctx->pc = 0x230F10u;
    SET_GPR_U32(ctx, 31, 0x230F18u);
    ctx->pc = 0x230F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230F10u;
    // 0x230f14: 0x27a50008  addiu       $a1, $sp, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231E48u, 0x230F10u, 0x230F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230F18u;
label_230f18:
    // 0x230f18: 0x5840000f  blezl       $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x230F18u;
    {
        const bool branch_taken_0x230f18 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x230f18) {
            ctx->pc = 0x230F1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x230F18u;
            // 0x230f1c: 0x8f8482d0  lw          $a0, -0x7D30($gp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x230F58u;
            goto label_230f58;
        }
    }
    ctx->pc = 0x230F20u;
    // 0x230f20: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x230f20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x230f24: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x230f24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230f28: 0x3c080001  lui         $t0, 0x1
    ctx->pc = 0x230f28u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)1 << 16));
    // 0x230f2c: 0x1114021  addu        $t0, $t0, $s1
    ctx->pc = 0x230f2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 17)));
    // 0x230f30: 0x8d088008  lw          $t0, -0x7FF8($t0)
    ctx->pc = 0x230f30u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294934536)));
    // 0x230f34: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x230f34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230f38: 0xc0686fa  jal         func_1A1BE8
    ctx->pc = 0x230F38u;
    SET_GPR_U32(ctx, 31, 0x230F40u);
    ctx->pc = 0x230F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230F38u;
    // 0x230f3c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BE8u, 0x230F38u, 0x230F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230F40u;
label_230f40:
    // 0x230f40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x230f40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230f44: 0x2429023  subu        $s2, $s2, $v0
    ctx->pc = 0x230f44u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x230f48: 0xc08c7aa  jal         func_231EA8
    ctx->pc = 0x230F48u;
    SET_GPR_U32(ctx, 31, 0x230F50u);
    ctx->pc = 0x230F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230F48u;
    // 0x230f4c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231EA8u, 0x230F48u, 0x230F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230F50u;
label_230f50:
    // 0x230f50: 0x2a560005  slti        $s6, $s2, 0x5
    ctx->pc = 0x230f50u;
    SET_GPR_U64(ctx, 22, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x230f54: 0x8f8482d0  lw          $a0, -0x7D30($gp)
    ctx->pc = 0x230f54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
label_230f58:
    // 0x230f58: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x230f58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
    // 0x230f5c: 0x34211210  ori         $at, $at, 0x1210
    ctx->pc = 0x230f5cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4624);
    // 0x230f60: 0xc08c86e  jal         func_2321B8
    ctx->pc = 0x230F60u;
    SET_GPR_U32(ctx, 31, 0x230F68u);
    ctx->pc = 0x230F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230F60u;
    // 0x230f64: 0x242021  addu        $a0, $at, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2321B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2321B8u, 0x230F60u, 0x230F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230F68u;
label_230f68:
    // 0x230f68: 0x16e00014  bnez        $s7, . + 4 + (0x14 << 2)
    ctx->pc = 0x230F68u;
    {
        const bool branch_taken_0x230f68 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x230F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230F68u;
        // 0x230f6c: 0x8f8482d0  lw          $a0, -0x7D30($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230f68) {
            ctx->pc = 0x230FBCu;
            goto label_230fbc;
        }
    }
    ctx->pc = 0x230F70u;
    // 0x230f70: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x230f70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
    // 0x230f74: 0x34211210  ori         $at, $at, 0x1210
    ctx->pc = 0x230f74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4624);
    // 0x230f78: 0xc08c864  jal         func_232190
    ctx->pc = 0x230F78u;
    SET_GPR_U32(ctx, 31, 0x230F80u);
    ctx->pc = 0x230F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230F78u;
    // 0x230f7c: 0x242021  addu        $a0, $at, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232190u, 0x230F78u, 0x230F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230F80u;
label_230f80:
    // 0x230f80: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x230F80u;
    {
        const bool branch_taken_0x230f80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230F80u;
        // 0x230f84: 0x8f8482d0  lw          $a0, -0x7D30($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230f80) {
            ctx->pc = 0x230FBCu;
            goto label_230fbc;
        }
    }
    ctx->pc = 0x230F88u;
    // 0x230f88: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x230f88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
    // 0x230f8c: 0x34211144  ori         $at, $at, 0x1144
    ctx->pc = 0x230f8cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4420);
    // 0x230f90: 0xc08cf6c  jal         func_233DB0
    ctx->pc = 0x230F90u;
    SET_GPR_U32(ctx, 31, 0x230F98u);
    ctx->pc = 0x230F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230F90u;
    // 0x230f94: 0x242021  addu        $a0, $at, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233DB0u, 0x230F90u, 0x230F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230F98u;
label_230f98:
    // 0x230f98: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x230F98u;
    {
        const bool branch_taken_0x230f98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230F98u;
        // 0x230f9c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230f98) {
            ctx->pc = 0x230FBCu;
            goto label_230fbc;
        }
    }
    ctx->pc = 0x230FA0u;
    // 0x230fa0: 0xc08d0d4  jal         func_234350
    ctx->pc = 0x230FA0u;
    SET_GPR_U32(ctx, 31, 0x230FA8u);
    ctx->pc = 0x230FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230FA0u;
    // 0x230fa4: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234350u, 0x230FA0u, 0x230FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230FA8u;
label_230fa8:
    // 0x230fa8: 0x8f8482d0  lw          $a0, -0x7D30($gp)
    ctx->pc = 0x230fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
    // 0x230fac: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x230facu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
    // 0x230fb0: 0x34211210  ori         $at, $at, 0x1210
    ctx->pc = 0x230fb0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4624);
    // 0x230fb4: 0xc08c7c6  jal         func_231F18
    ctx->pc = 0x230FB4u;
    SET_GPR_U32(ctx, 31, 0x230FBCu);
    ctx->pc = 0x230FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230FB4u;
    // 0x230fb8: 0x242021  addu        $a0, $at, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231F18u, 0x230FB4u, 0x230FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230FBCu;
label_230fbc:
    // 0x230fbc: 0x16c0000a  bnez        $s6, . + 4 + (0xA << 2)
    ctx->pc = 0x230FBCu;
    {
        const bool branch_taken_0x230fbc = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x230fbc) {
            ctx->pc = 0x230FE8u;
            goto label_230fe8;
        }
    }
    ctx->pc = 0x230FC4u;
    // 0x230fc4: 0xc08cd34  jal         func_2334D0
    ctx->pc = 0x230FC4u;
    SET_GPR_U32(ctx, 31, 0x230FCCu);
    ctx->pc = 0x230FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230FC4u;
    // 0x230fc8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2334D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2334D0u, 0x230FC4u, 0x230FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230FCCu;
label_230fcc:
    // 0x230fcc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x230fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x230fd0: 0x1443ff77  bne         $v0, $v1, . + 4 + (-0x89 << 2)
    ctx->pc = 0x230FD0u;
    {
        const bool branch_taken_0x230fd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x230fd0) {
            ctx->pc = 0x230DB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_230db0;
        }
    }
    ctx->pc = 0x230FD8u;
    // 0x230fd8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x230FD8u;
    {
        const bool branch_taken_0x230fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x230fd8) {
            ctx->pc = 0x230FE8u;
            goto label_230fe8;
        }
    }
    ctx->pc = 0x230FE0u;
label_230fe0:
    // 0x230fe0: 0xc08c42e  jal         func_2310B8
    ctx->pc = 0x230FE0u;
    SET_GPR_U32(ctx, 31, 0x230FE8u);
    ctx->pc = 0x2310B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310B8u, 0x230FE0u, 0x230FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230FE8u;
label_230fe8:
    // 0x230fe8: 0xc08cd5c  jal         func_233570
    ctx->pc = 0x230FE8u;
    SET_GPR_U32(ctx, 31, 0x230FF0u);
    ctx->pc = 0x230FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230FE8u;
    // 0x230fec: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233570u, 0x230FE8u, 0x230FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230FF0u;
label_230ff0:
    // 0x230ff0: 0x1040fffb  beqz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x230FF0u;
    {
        const bool branch_taken_0x230ff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230FF0u;
        // 0x230ff4: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230ff0) {
            ctx->pc = 0x230FE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_230fe0;
        }
    }
    ctx->pc = 0x230FF8u;
    // 0x230ff8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x230FF8u;
    {
        const bool branch_taken_0x230ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x230ff8) {
            ctx->pc = 0x231008u;
            goto label_231008;
        }
    }
    ctx->pc = 0x231000u;
label_231000:
    // 0x231000: 0xc08c42e  jal         func_2310B8
    ctx->pc = 0x231000u;
    SET_GPR_U32(ctx, 31, 0x231008u);
    ctx->pc = 0x2310B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310B8u, 0x231000u, 0x231008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231008u;
label_231008:
    // 0x231008: 0xc08cd90  jal         func_233640
    ctx->pc = 0x231008u;
    SET_GPR_U32(ctx, 31, 0x231010u);
    ctx->pc = 0x23100Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231008u;
    // 0x23100c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233640u, 0x231008u, 0x231010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231010u;
label_231010:
    // 0x231010: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x231010u;
    {
        const bool branch_taken_0x231010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x231014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231010u;
        // 0x231014: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231010) {
            ctx->pc = 0x231028u;
            goto label_231028;
        }
    }
    ctx->pc = 0x231018u;
    // 0x231018: 0xc08cd34  jal         func_2334D0
    ctx->pc = 0x231018u;
    SET_GPR_U32(ctx, 31, 0x231020u);
    ctx->pc = 0x2334D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2334D0u, 0x231018u, 0x231020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231020u;
label_231020:
    // 0x231020: 0x1450fff7  bne         $v0, $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x231020u;
    {
        const bool branch_taken_0x231020 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x231020) {
            ctx->pc = 0x231000u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_231000;
        }
    }
    ctx->pc = 0x231028u;
label_231028:
    // 0x231028: 0xc08db50  jal         func_236D40
    ctx->pc = 0x231028u;
    SET_GPR_U32(ctx, 31, 0x231030u);
    ctx->pc = 0x23102Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231028u;
    // 0x23102c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236D40u, 0x231028u, 0x231030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231030u;
label_231030:
    // 0x231030: 0xc08d7f6  jal         func_235FD8
    ctx->pc = 0x231030u;
    SET_GPR_U32(ctx, 31, 0x231038u);
    ctx->pc = 0x231034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231030u;
    // 0x231034: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235FD8u, 0x231030u, 0x231038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231038u;
label_231038:
    // 0x231038: 0xc08d0e8  jal         func_2343A0
    ctx->pc = 0x231038u;
    SET_GPR_U32(ctx, 31, 0x231040u);
    ctx->pc = 0x2343A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2343A0u, 0x231038u, 0x231040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231040u;
label_231040:
    // 0x231040: 0x8f8482d0  lw          $a0, -0x7D30($gp)
    ctx->pc = 0x231040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
    // 0x231044: 0x3c010009  lui         $at, 0x9
    ctx->pc = 0x231044u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)9 << 16));
    // 0x231048: 0x34211210  ori         $at, $at, 0x1210
    ctx->pc = 0x231048u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4624);
    // 0x23104c: 0xc08c7d8  jal         func_231F60
    ctx->pc = 0x23104Cu;
    SET_GPR_U32(ctx, 31, 0x231054u);
    ctx->pc = 0x231050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23104Cu;
    // 0x231050: 0x242021  addu        $a0, $at, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231F60u, 0x23104Cu, 0x231054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231054u;
label_231054:
    // 0x231054: 0x8f8282d0  lw          $v0, -0x7D30($gp)
    ctx->pc = 0x231054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935248)));
    // 0x231058: 0x3c030009  lui         $v1, 0x9
    ctx->pc = 0x231058u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)9 << 16));
    // 0x23105c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23105cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x231060: 0x8c631290  lw          $v1, 0x1290($v1)
    ctx->pc = 0x231060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4752)));
    // 0x231064: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x231064u;
    {
        const bool branch_taken_0x231064 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x231068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231064u;
        // 0x231068: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231064) {
            ctx->pc = 0x231070u;
            goto label_231070;
        }
    }
    ctx->pc = 0x23106Cu;
    // 0x23106c: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x23106cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_231070:
    // 0x231070: 0x2a0182d  daddu       $v1, $s5, $zero
    ctx->pc = 0x231070u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231074: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x231074u;
    {
        const bool branch_taken_0x231074 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x231078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231074u;
        // 0x231078: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231074) {
            ctx->pc = 0x231088u;
            goto label_231088;
        }
    }
    ctx->pc = 0x23107Cu;
    // 0x23107c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x23107cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x231080: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x231080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x231084: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x231084u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_231088:
    // 0x231088: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x231088u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23108c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x23108cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x231090: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x231090u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x231094: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x231094u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x231098: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x231098u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23109c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x23109cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2310a0: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x2310a0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2310a4: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x2310a4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2310a8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2310a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    ctx->pc = 0x2310acu;
}
