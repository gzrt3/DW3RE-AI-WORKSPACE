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

// Function: FUN_0022aed0
// Address: 0x22aed0 - 0x22afc0
void FUN_0022aed0_0x22aed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0022aed0_0x22aed0");
#endif

    switch (ctx->pc) {
        case 0x22af08u: goto label_22af08;
        case 0x22af50u: goto label_22af50;
        case 0x22af90u: goto label_22af90;
        case 0x22af9cu: goto label_22af9c;
        case 0x22afa8u: goto label_22afa8;
        case 0x22afb4u: goto label_22afb4;
        case 0x22afbcu: goto label_22afbc;
        default: break;
    }

    ctx->pc = 0x22aed0u;

    // 0x22aed0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22aed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x22aed4: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x22aed4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x22aed8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x22aed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x22aedc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x22aedcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22aee0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22aee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22aee4: 0x9025a3ea  lbu         $a1, -0x5C16($at)
    ctx->pc = 0x22aee4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)FAST_READ8(0x30A3EAu));
    // 0x22aee8: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x22AEE8u;
    {
        const bool branch_taken_0x22aee8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x22AEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AEE8u;
        // 0x22aeec: 0x8c900060  lw          $s0, 0x60($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22aee8) {
            ctx->pc = 0x22AEF8u;
            goto label_22aef8;
        }
    }
    ctx->pc = 0x22AEF0u;
    // 0x22aef0: 0x14a00007  bnez        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x22AEF0u;
    {
        const bool branch_taken_0x22aef0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x22aef0) {
            ctx->pc = 0x22AF10u;
            goto label_22af10;
        }
    }
    ctx->pc = 0x22AEF8u;
label_22aef8:
    // 0x22aef8: 0x9202009c  lbu         $v0, 0x9C($s0)
    ctx->pc = 0x22aef8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x22aefc: 0x304200df  andi        $v0, $v0, 0xDF
    ctx->pc = 0x22aefcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)223);
    // 0x22af00: 0xc0591f4  jal         func_1647D0
    ctx->pc = 0x22AF00u;
    SET_GPR_U32(ctx, 31, 0x22AF08u);
    ctx->pc = 0x22AF04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AF00u;
    // 0x22af04: 0xa202009c  sb          $v0, 0x9C($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 156), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x22AF00u, 0x22AF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AF08u;
label_22af08:
    // 0x22af08: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x22AF08u;
    {
        const bool branch_taken_0x22af08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AF08u;
        // 0x22af0c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22af08) {
            ctx->pc = 0x22AFC0u;
            return;
        }
    }
    ctx->pc = 0x22AF10u;
label_22af10:
    // 0x22af10: 0x94860014  lhu         $a2, 0x14($a0)
    ctx->pc = 0x22af10u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x22af14: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x22af14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x22af18: 0x246352f4  addiu       $v1, $v1, 0x52F4
    ctx->pc = 0x22af18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21236));
    // 0x22af1c: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x22af1cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x22af20: 0xa63023  subu        $a2, $a1, $a2
    ctx->pc = 0x22af20u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x22af24: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x22af24u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x22af28: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x22af28u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x22af2c: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x22af2cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x22af30: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x22af30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x22af34: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x22af34u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22af38: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x22AF38u;
    {
        const bool branch_taken_0x22af38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22af38) {
            ctx->pc = 0x22AF58u;
            goto label_22af58;
        }
    }
    ctx->pc = 0x22AF40u;
    // 0x22af40: 0x9202009c  lbu         $v0, 0x9C($s0)
    ctx->pc = 0x22af40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x22af44: 0x304200df  andi        $v0, $v0, 0xDF
    ctx->pc = 0x22af44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)223);
    // 0x22af48: 0xc0591f4  jal         func_1647D0
    ctx->pc = 0x22AF48u;
    SET_GPR_U32(ctx, 31, 0x22AF50u);
    ctx->pc = 0x22AF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AF48u;
    // 0x22af4c: 0xa202009c  sb          $v0, 0x9C($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 156), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1647D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1647D0u, 0x22AF48u, 0x22AF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AF50u;
label_22af50:
    // 0x22af50: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x22AF50u;
    {
        const bool branch_taken_0x22af50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22af50) {
            ctx->pc = 0x22AFBCu;
            goto label_22afbc;
        }
    }
    ctx->pc = 0x22AF58u;
label_22af58:
    // 0x22af58: 0x8c83005c  lw          $v1, 0x5C($a0)
    ctx->pc = 0x22af58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x22af5c: 0x8c6301b0  lw          $v1, 0x1B0($v1)
    ctx->pc = 0x22af5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 432)));
    // 0x22af60: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x22AF60u;
    {
        const bool branch_taken_0x22af60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22af60) {
            ctx->pc = 0x22AFBCu;
            goto label_22afbc;
        }
    }
    ctx->pc = 0x22AF68u;
    // 0x22af68: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x22af68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x22af6c: 0x3c017000  lui         $at, 0x7000
    ctx->pc = 0x22af6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)28672 << 16));
    // 0x22af70: 0x8c223ffc  lw          $v0, 0x3FFC($at)
    ctx->pc = 0x22af70u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x70003FFCu));
    // 0x22af74: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x22af74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x22af78: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x22af78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x22af7c: 0x24a21280  addiu       $v0, $a1, 0x1280
    ctx->pc = 0x22af7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4736));
    // 0x22af80: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22af80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22af84: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x22af84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22af88: 0xc066e2a  jal         func_19B8A8
    ctx->pc = 0x22AF88u;
    SET_GPR_U32(ctx, 31, 0x22AF90u);
    ctx->pc = 0x22AF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AF88u;
    // 0x22af8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B8A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B8A8u, 0x22AF88u, 0x22AF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AF90u;
label_22af90:
    // 0x22af90: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x22af90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x22af94: 0xc066e26  jal         func_19B898
    ctx->pc = 0x22AF94u;
    SET_GPR_U32(ctx, 31, 0x22AF9Cu);
    ctx->pc = 0x22AF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AF94u;
    // 0x22af98: 0x26050030  addiu       $a1, $s0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x22AF94u, 0x22AF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AF9Cu;
label_22af9c:
    // 0x22af9c: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x22af9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x22afa0: 0xc066e26  jal         func_19B898
    ctx->pc = 0x22AFA0u;
    SET_GPR_U32(ctx, 31, 0x22AFA8u);
    ctx->pc = 0x22AFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AFA0u;
    // 0x22afa4: 0x26050030  addiu       $a1, $s0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x22AFA0u, 0x22AFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AFA8u;
label_22afa8:
    // 0x22afa8: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x22afa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x22afac: 0xc066e26  jal         func_19B898
    ctx->pc = 0x22AFACu;
    SET_GPR_U32(ctx, 31, 0x22AFB4u);
    ctx->pc = 0x22AFB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AFACu;
    // 0x22afb0: 0x26050030  addiu       $a1, $s0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x22AFACu, 0x22AFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AFB4u;
label_22afb4:
    // 0x22afb4: 0xc05ff64  jal         func_17FD90
    ctx->pc = 0x22AFB4u;
    SET_GPR_U32(ctx, 31, 0x22AFBCu);
    ctx->pc = 0x22AFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AFB4u;
    // 0x22afb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17FD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17FD90u, 0x22AFB4u, 0x22AFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AFBCu;
label_22afbc:
    // 0x22afbc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22afbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->pc = 0x22afc0u;
}
