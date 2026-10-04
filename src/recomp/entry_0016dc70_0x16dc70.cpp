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

// Function: entry_0016dc70
// Address: 0x16dc70 - 0x16e0f8
void entry_0016dc70_0x16dc70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016dc70_0x16dc70");
#endif

    switch (ctx->pc) {
        case 0x16dcb0u: goto label_16dcb0;
        case 0x16dd20u: goto label_16dd20;
        case 0x16dd54u: goto label_16dd54;
        case 0x16dd6cu: goto label_16dd6c;
        case 0x16de48u: goto label_16de48;
        case 0x16de60u: goto label_16de60;
        case 0x16df4cu: goto label_16df4c;
        case 0x16e000u: goto label_16e000;
        case 0x16e0f0u: goto label_16e0f0;
        default: break;
    }

    ctx->pc = 0x16dc70u;

    // 0x16dc70: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x16dc70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x16dc74: 0x8f8286fc  lw          $v0, -0x7904($gp)
    ctx->pc = 0x16dc74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936316)));
    // 0x16dc78: 0x8c2666c0  lw          $a2, 0x66C0($at)
    ctx->pc = 0x16dc78u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x2566C0u));
    // 0x16dc7c: 0x3c010025  lui         $at, 0x25
    ctx->pc = 0x16dc7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)37 << 16));
    // 0x16dc80: 0x8c2766c4  lw          $a3, 0x66C4($at)
    ctx->pc = 0x16dc80u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x2566C4u));
    // 0x16dc84: 0x2c41000a  sltiu       $at, $v0, 0xA
    ctx->pc = 0x16dc84u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x16dc88: 0x1020011b  beqz        $at, . + 4 + (0x11B << 2)
    ctx->pc = 0x16DC88u;
    {
        const bool branch_taken_0x16dc88 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DC88u;
        // 0x16dc8c: 0x3c03002d  lui         $v1, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dc88) {
            ctx->pc = 0x16E0F8u;
            return;
        }
    }
    ctx->pc = 0x16DC90u;
    // 0x16dc90: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16dc90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16dc94: 0x24639640  addiu       $v1, $v1, -0x69C0
    ctx->pc = 0x16dc94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940224));
    // 0x16dc98: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16dc98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16dc9c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x16dc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16dca0: 0x400008  jr          $v0
    ctx->pc = 0x16DCA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16DCA8u: goto label_16dca8;
            case 0x16DD18u: goto label_16dd18;
            case 0x16DD40u: goto label_16dd40;
            case 0x16DD64u: goto label_16dd64;
            case 0x16DE38u: goto label_16de38;
            case 0x16DE58u: goto label_16de58;
            case 0x16DF2Cu: goto label_16df2c;
            case 0x16DFF4u: goto label_16dff4;
            case 0x16E0B0u: goto label_16e0b0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16DCA0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x16DCA8u;
label_16dca8:
    // 0x16dca8: 0xc08d72c  jal         func_235CB0
    ctx->pc = 0x16DCA8u;
    SET_GPR_U32(ctx, 31, 0x16DCB0u);
    ctx->pc = 0x235CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235CB0u, 0x16DCA8u, 0x16DCB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DCB0u;
label_16dcb0:
    // 0x16dcb0: 0x4400007  bltz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16DCB0u;
    {
        const bool branch_taken_0x16dcb0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x16DCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DCB0u;
        // 0x16dcb4: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dcb0) {
            ctx->pc = 0x16DCD0u;
            goto label_16dcd0;
        }
    }
    ctx->pc = 0x16DCB8u;
    // 0x16dcb8: 0x8f8386fc  lw          $v1, -0x7904($gp)
    ctx->pc = 0x16dcb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936316)));
    // 0x16dcbc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16dcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16dcc0: 0xaf828700  sw          $v0, -0x7900($gp)
    ctx->pc = 0x16dcc0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936320), GPR_U32(ctx, 2));
    // 0x16dcc4: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x16dcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x16dcc8: 0x1000010b  b           . + 4 + (0x10B << 2)
    ctx->pc = 0x16DCC8u;
    {
        const bool branch_taken_0x16dcc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DCC8u;
        // 0x16dccc: 0xaf8286fc  sw          $v0, -0x7904($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936316), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dcc8) {
            ctx->pc = 0x16E0F8u;
            return;
        }
    }
    ctx->pc = 0x16DCD0u;
label_16dcd0:
    // 0x16dcd0: 0x10430109  beq         $v0, $v1, . + 4 + (0x109 << 2)
    ctx->pc = 0x16DCD0u;
    {
        const bool branch_taken_0x16dcd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x16dcd0) {
            ctx->pc = 0x16E0F8u;
            return;
        }
    }
    ctx->pc = 0x16DCD8u;
    // 0x16dcd8: 0x8f828178  lw          $v0, -0x7E88($gp)
    ctx->pc = 0x16dcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934904)));
    // 0x16dcdc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x16DCDCu;
    {
        const bool branch_taken_0x16dcdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DCDCu;
        // 0x16dce0: 0x3c010028  lui         $at, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dcdc) {
            ctx->pc = 0x16DD0Cu;
            goto label_16dd0c;
        }
    }
    ctx->pc = 0x16DCE4u;
    // 0x16dce4: 0x2402ffef  addiu       $v0, $zero, -0x11
    ctx->pc = 0x16dce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x16dce8: 0x8c231eb0  lw          $v1, 0x1EB0($at)
    ctx->pc = 0x16dce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7856)));
    // 0x16dcec: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x16dcecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x16dcf0: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16dcf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16dcf4: 0xac221eb0  sw          $v0, 0x1EB0($at)
    ctx->pc = 0x16dcf4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x281EB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x281EB0u, _value); } while (0);
    // 0x16dcf8: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16dcf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16dcfc: 0x8c221eb0  lw          $v0, 0x1EB0($at)
    ctx->pc = 0x16dcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x281EB0u));
    // 0x16dd00: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x16dd00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x16dd04: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16dd04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16dd08: 0xac221eb0  sw          $v0, 0x1EB0($at)
    ctx->pc = 0x16dd08u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x281EB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x281EB0u, _value); } while (0);
label_16dd0c:
    // 0x16dd0c: 0xaf8086fc  sw          $zero, -0x7904($gp)
    ctx->pc = 0x16dd0cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936316), GPR_U32(ctx, 0));
    // 0x16dd10: 0x10000100  b           . + 4 + (0x100 << 2)
    ctx->pc = 0x16DD10u;
    {
        const bool branch_taken_0x16dd10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DD10u;
        // 0x16dd14: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dd10) {
            ctx->pc = 0x16E114u;
            return;
        }
    }
    ctx->pc = 0x16DD18u;
label_16dd18:
    // 0x16dd18: 0xc05aef0  jal         func_16BBC0
    ctx->pc = 0x16DD18u;
    SET_GPR_U32(ctx, 31, 0x16DD20u);
    ctx->pc = 0x16BBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16BBC0u, 0x16DD18u, 0x16DD20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DD20u;
label_16dd20:
    // 0x16dd20: 0x30430009  andi        $v1, $v0, 0x9
    ctx->pc = 0x16dd20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)9);
    // 0x16dd24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16dd24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16dd28: 0x106200f3  beq         $v1, $v0, . + 4 + (0xF3 << 2)
    ctx->pc = 0x16DD28u;
    {
        const bool branch_taken_0x16dd28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x16dd28) {
            ctx->pc = 0x16E0F8u;
            return;
        }
    }
    ctx->pc = 0x16DD30u;
    // 0x16dd30: 0x8f8286fc  lw          $v0, -0x7904($gp)
    ctx->pc = 0x16dd30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936316)));
    // 0x16dd34: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16dd34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x16dd38: 0x100000ef  b           . + 4 + (0xEF << 2)
    ctx->pc = 0x16DD38u;
    {
        const bool branch_taken_0x16dd38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DD38u;
        // 0x16dd3c: 0xaf8286fc  sw          $v0, -0x7904($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936316), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dd38) {
            ctx->pc = 0x16E0F8u;
            return;
        }
    }
    ctx->pc = 0x16DD40u;
label_16dd40:
    // 0x16dd40: 0x712c2  srl         $v0, $a3, 11
    ctx->pc = 0x16dd40u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 11));
    // 0x16dd44: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16dd44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16dd48: 0x8d2700d0  lw          $a3, 0xD0($t1)
    ctx->pc = 0x16dd48u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 208)));
    // 0x16dd4c: 0xc08d69a  jal         func_235A68
    ctx->pc = 0x16DD4Cu;
    SET_GPR_U32(ctx, 31, 0x16DD54u);
    ctx->pc = 0x16DD50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DD4Cu;
    // 0x16dd50: 0x24480001  addiu       $t0, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235A68u, 0x16DD4Cu, 0x16DD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DD54u;
label_16dd54:
    // 0x16dd54: 0x8f8286fc  lw          $v0, -0x7904($gp)
    ctx->pc = 0x16dd54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936316)));
    // 0x16dd58: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16dd58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x16dd5c: 0x100000e6  b           . + 4 + (0xE6 << 2)
    ctx->pc = 0x16DD5Cu;
    {
        const bool branch_taken_0x16dd5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DD5Cu;
        // 0x16dd60: 0xaf8286fc  sw          $v0, -0x7904($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936316), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dd5c) {
            ctx->pc = 0x16E0F8u;
            return;
        }
    }
    ctx->pc = 0x16DD64u;
label_16dd64:
    // 0x16dd64: 0xc08d72c  jal         func_235CB0
    ctx->pc = 0x16DD64u;
    SET_GPR_U32(ctx, 31, 0x16DD6Cu);
    ctx->pc = 0x16DD68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DD64u;
    // 0x16dd68: 0xaf808710  sw          $zero, -0x78F0($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235CB0u, 0x16DD64u, 0x16DD6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DD6Cu;
label_16dd6c:
    // 0x16dd6c: 0x4400019  bltz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x16DD6Cu;
    {
        const bool branch_taken_0x16dd6c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x16DD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DD6Cu;
        // 0x16dd70: 0x2403fffc  addiu       $v1, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dd6c) {
            ctx->pc = 0x16DDD4u;
            goto label_16ddd4;
        }
    }
    ctx->pc = 0x16DD74u;
    // 0x16dd74: 0x8f838700  lw          $v1, -0x7900($gp)
    ctx->pc = 0x16dd74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936320)));
    // 0x16dd78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16dd78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16dd7c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16DD7Cu;
    {
        const bool branch_taken_0x16dd7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x16dd7c) {
            ctx->pc = 0x16DD94u;
            goto label_16dd94;
        }
    }
    ctx->pc = 0x16DD84u;
    // 0x16dd84: 0x8f8286fc  lw          $v0, -0x7904($gp)
    ctx->pc = 0x16dd84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936316)));
    // 0x16dd88: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16dd88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x16dd8c: 0x100000da  b           . + 4 + (0xDA << 2)
    ctx->pc = 0x16DD8Cu;
    {
        const bool branch_taken_0x16dd8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DD8Cu;
        // 0x16dd90: 0xaf8286fc  sw          $v0, -0x7904($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936316), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dd8c) {
            ctx->pc = 0x16E0F8u;
            return;
        }
    }
    ctx->pc = 0x16DD94u;
label_16dd94:
    // 0x16dd94: 0x8f828178  lw          $v0, -0x7E88($gp)
    ctx->pc = 0x16dd94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934904)));
    // 0x16dd98: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x16DD98u;
    {
        const bool branch_taken_0x16dd98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DD98u;
        // 0x16dd9c: 0x3c010028  lui         $at, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dd98) {
            ctx->pc = 0x16DDC8u;
            goto label_16ddc8;
        }
    }
    ctx->pc = 0x16DDA0u;
    // 0x16dda0: 0x2402ffef  addiu       $v0, $zero, -0x11
    ctx->pc = 0x16dda0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x16dda4: 0x8c231eb0  lw          $v1, 0x1EB0($at)
    ctx->pc = 0x16dda4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7856)));
    // 0x16dda8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x16dda8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x16ddac: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16ddacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16ddb0: 0xac221eb0  sw          $v0, 0x1EB0($at)
    ctx->pc = 0x16ddb0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x281EB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x281EB0u, _value); } while (0);
    // 0x16ddb4: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16ddb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16ddb8: 0x8c221eb0  lw          $v0, 0x1EB0($at)
    ctx->pc = 0x16ddb8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x281EB0u));
    // 0x16ddbc: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x16ddbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x16ddc0: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16ddc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16ddc4: 0xac221eb0  sw          $v0, 0x1EB0($at)
    ctx->pc = 0x16ddc4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x281EB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x281EB0u, _value); } while (0);
label_16ddc8:
    // 0x16ddc8: 0xaf8086fc  sw          $zero, -0x7904($gp)
    ctx->pc = 0x16ddc8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936316), GPR_U32(ctx, 0));
    // 0x16ddcc: 0x100000d1  b           . + 4 + (0xD1 << 2)
    ctx->pc = 0x16DDCCu;
    {
        const bool branch_taken_0x16ddcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DDCCu;
        // 0x16ddd0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ddcc) {
            ctx->pc = 0x16E114u;
            return;
        }
    }
    ctx->pc = 0x16DDD4u;
label_16ddd4:
    // 0x16ddd4: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x16DDD4u;
    {
        const bool branch_taken_0x16ddd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x16ddd4) {
            ctx->pc = 0x16DDECu;
            goto label_16ddec;
        }
    }
    ctx->pc = 0x16DDDCu;
    // 0x16dddc: 0x8f8286fc  lw          $v0, -0x7904($gp)
    ctx->pc = 0x16dddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936316)));
    // 0x16dde0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x16dde0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x16dde4: 0x100000c4  b           . + 4 + (0xC4 << 2)
    ctx->pc = 0x16DDE4u;
    {
        const bool branch_taken_0x16dde4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DDE4u;
        // 0x16dde8: 0xaf8286fc  sw          $v0, -0x7904($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936316), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dde4) {
            ctx->pc = 0x16E0F8u;
            return;
        }
    }
    ctx->pc = 0x16DDECu;
label_16ddec:
    // 0x16ddec: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16ddecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16ddf0: 0x104300c1  beq         $v0, $v1, . + 4 + (0xC1 << 2)
    ctx->pc = 0x16DDF0u;
    {
        const bool branch_taken_0x16ddf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x16ddf0) {
            ctx->pc = 0x16E0F8u;
            return;
        }
    }
    ctx->pc = 0x16DDF8u;
    // 0x16ddf8: 0x8f828178  lw          $v0, -0x7E88($gp)
    ctx->pc = 0x16ddf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934904)));
    // 0x16ddfc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x16DDFCu;
    {
        const bool branch_taken_0x16ddfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DDFCu;
        // 0x16de00: 0x3c010028  lui         $at, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ddfc) {
            ctx->pc = 0x16DE2Cu;
            goto label_16de2c;
        }
    }
    ctx->pc = 0x16DE04u;
    // 0x16de04: 0x2402ffef  addiu       $v0, $zero, -0x11
    ctx->pc = 0x16de04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x16de08: 0x8c231eb0  lw          $v1, 0x1EB0($at)
    ctx->pc = 0x16de08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7856)));
    // 0x16de0c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x16de0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x16de10: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16de10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16de14: 0xac221eb0  sw          $v0, 0x1EB0($at)
    ctx->pc = 0x16de14u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x281EB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x281EB0u, _value); } while (0);
    // 0x16de18: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16de18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16de1c: 0x8c221eb0  lw          $v0, 0x1EB0($at)
    ctx->pc = 0x16de1cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x281EB0u));
    // 0x16de20: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x16de20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x16de24: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16de24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16de28: 0xac221eb0  sw          $v0, 0x1EB0($at)
    ctx->pc = 0x16de28u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x281EB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x281EB0u, _value); } while (0);
label_16de2c:
    // 0x16de2c: 0xaf8086fc  sw          $zero, -0x7904($gp)
    ctx->pc = 0x16de2cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936316), GPR_U32(ctx, 0));
    // 0x16de30: 0x100000b8  b           . + 4 + (0xB8 << 2)
    ctx->pc = 0x16DE30u;
    {
        const bool branch_taken_0x16de30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DE30u;
        // 0x16de34: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16de30) {
            ctx->pc = 0x16E114u;
            return;
        }
    }
    ctx->pc = 0x16DE38u;
label_16de38:
    // 0x16de38: 0x8d2700d4  lw          $a3, 0xD4($t1)
    ctx->pc = 0x16de38u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 212)));
    // 0x16de3c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x16de3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16de40: 0xc08d6d0  jal         func_235B40
    ctx->pc = 0x16DE40u;
    SET_GPR_U32(ctx, 31, 0x16DE48u);
    ctx->pc = 0x16DE44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DE40u;
    // 0x16de44: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235B40u, 0x16DE40u, 0x16DE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DE48u;
label_16de48:
    // 0x16de48: 0x8f8286fc  lw          $v0, -0x7904($gp)
    ctx->pc = 0x16de48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936316)));
    // 0x16de4c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16de4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x16de50: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x16DE50u;
    {
        const bool branch_taken_0x16de50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DE50u;
        // 0x16de54: 0xaf8286fc  sw          $v0, -0x7904($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936316), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16de50) {
            ctx->pc = 0x16E0F8u;
            return;
        }
    }
    ctx->pc = 0x16DE58u;
label_16de58:
    // 0x16de58: 0xc08d72c  jal         func_235CB0
    ctx->pc = 0x16DE58u;
    SET_GPR_U32(ctx, 31, 0x16DE60u);
    ctx->pc = 0x16DE5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DE58u;
    // 0x16de5c: 0xaf808710  sw          $zero, -0x78F0($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235CB0u, 0x16DE58u, 0x16DE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DE60u;
label_16de60:
    // 0x16de60: 0x4400019  bltz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x16DE60u;
    {
        const bool branch_taken_0x16de60 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x16DE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DE60u;
        // 0x16de64: 0x2403fffc  addiu       $v1, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16de60) {
            ctx->pc = 0x16DEC8u;
            goto label_16dec8;
        }
    }
    ctx->pc = 0x16DE68u;
    // 0x16de68: 0x8f838700  lw          $v1, -0x7900($gp)
    ctx->pc = 0x16de68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936320)));
    // 0x16de6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16de6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16de70: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16DE70u;
    {
        const bool branch_taken_0x16de70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x16de70) {
            ctx->pc = 0x16DE88u;
            goto label_16de88;
        }
    }
    ctx->pc = 0x16DE78u;
    // 0x16de78: 0x8f8286fc  lw          $v0, -0x7904($gp)
    ctx->pc = 0x16de78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936316)));
    // 0x16de7c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16de7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x16de80: 0x1000009d  b           . + 4 + (0x9D << 2)
    ctx->pc = 0x16DE80u;
    {
        const bool branch_taken_0x16de80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DE80u;
        // 0x16de84: 0xaf8286fc  sw          $v0, -0x7904($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936316), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16de80) {
            ctx->pc = 0x16E0F8u;
            return;
        }
    }
    ctx->pc = 0x16DE88u;
label_16de88:
    // 0x16de88: 0x8f828178  lw          $v0, -0x7E88($gp)
    ctx->pc = 0x16de88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934904)));
    // 0x16de8c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x16DE8Cu;
    {
        const bool branch_taken_0x16de8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DE8Cu;
        // 0x16de90: 0x3c010028  lui         $at, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16de8c) {
            ctx->pc = 0x16DEBCu;
            goto label_16debc;
        }
    }
    ctx->pc = 0x16DE94u;
    // 0x16de94: 0x2402ffef  addiu       $v0, $zero, -0x11
    ctx->pc = 0x16de94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x16de98: 0x8c231eb0  lw          $v1, 0x1EB0($at)
    ctx->pc = 0x16de98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7856)));
    // 0x16de9c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x16de9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x16dea0: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16dea0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16dea4: 0xac221eb0  sw          $v0, 0x1EB0($at)
    ctx->pc = 0x16dea4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x281EB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x281EB0u, _value); } while (0);
    // 0x16dea8: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16dea8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16deac: 0x8c221eb0  lw          $v0, 0x1EB0($at)
    ctx->pc = 0x16deacu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x281EB0u));
    // 0x16deb0: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x16deb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x16deb4: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16deb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16deb8: 0xac221eb0  sw          $v0, 0x1EB0($at)
    ctx->pc = 0x16deb8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x281EB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x281EB0u, _value); } while (0);
label_16debc:
    // 0x16debc: 0xaf8086fc  sw          $zero, -0x7904($gp)
    ctx->pc = 0x16debcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936316), GPR_U32(ctx, 0));
    // 0x16dec0: 0x10000094  b           . + 4 + (0x94 << 2)
    ctx->pc = 0x16DEC0u;
    {
        const bool branch_taken_0x16dec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DEC0u;
        // 0x16dec4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dec0) {
            ctx->pc = 0x16E114u;
            return;
        }
    }
    ctx->pc = 0x16DEC8u;
label_16dec8:
    // 0x16dec8: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x16DEC8u;
    {
        const bool branch_taken_0x16dec8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x16dec8) {
            ctx->pc = 0x16DEE0u;
            goto label_16dee0;
        }
    }
    ctx->pc = 0x16DED0u;
    // 0x16ded0: 0x8f8286fc  lw          $v0, -0x7904($gp)
    ctx->pc = 0x16ded0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936316)));
    // 0x16ded4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x16ded4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x16ded8: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x16DED8u;
    {
        const bool branch_taken_0x16ded8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DED8u;
        // 0x16dedc: 0xaf8286fc  sw          $v0, -0x7904($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936316), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ded8) {
            ctx->pc = 0x16E0F8u;
            return;
        }
    }
    ctx->pc = 0x16DEE0u;
label_16dee0:
    // 0x16dee0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16dee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16dee4: 0x10430084  beq         $v0, $v1, . + 4 + (0x84 << 2)
    ctx->pc = 0x16DEE4u;
    {
        const bool branch_taken_0x16dee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x16dee4) {
            ctx->pc = 0x16E0F8u;
            return;
        }
    }
    ctx->pc = 0x16DEECu;
    // 0x16deec: 0x8f828178  lw          $v0, -0x7E88($gp)
    ctx->pc = 0x16deecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934904)));
    // 0x16def0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x16DEF0u;
    {
        const bool branch_taken_0x16def0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DEF0u;
        // 0x16def4: 0x3c010028  lui         $at, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16def0) {
            ctx->pc = 0x16DF20u;
            goto label_16df20;
        }
    }
    ctx->pc = 0x16DEF8u;
    // 0x16def8: 0x2402ffef  addiu       $v0, $zero, -0x11
    ctx->pc = 0x16def8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x16defc: 0x8c231eb0  lw          $v1, 0x1EB0($at)
    ctx->pc = 0x16defcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7856)));
    // 0x16df00: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x16df00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x16df04: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16df04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16df08: 0xac221eb0  sw          $v0, 0x1EB0($at)
    ctx->pc = 0x16df08u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x281EB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x281EB0u, _value); } while (0);
    // 0x16df0c: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16df0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16df10: 0x8c221eb0  lw          $v0, 0x1EB0($at)
    ctx->pc = 0x16df10u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x281EB0u));
    // 0x16df14: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x16df14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x16df18: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16df18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16df1c: 0xac221eb0  sw          $v0, 0x1EB0($at)
    ctx->pc = 0x16df1cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x281EB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x281EB0u, _value); } while (0);
label_16df20:
    // 0x16df20: 0xaf8086fc  sw          $zero, -0x7904($gp)
    ctx->pc = 0x16df20u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936316), GPR_U32(ctx, 0));
    // 0x16df24: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x16DF24u;
    {
        const bool branch_taken_0x16df24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DF24u;
        // 0x16df28: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16df24) {
            ctx->pc = 0x16E114u;
            return;
        }
    }
    ctx->pc = 0x16DF2Cu;
label_16df2c:
    // 0x16df2c: 0x8d2600d4  lw          $a2, 0xD4($t1)
    ctx->pc = 0x16df2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 212)));
    // 0x16df30: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16df30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16df34: 0x8d2700d0  lw          $a3, 0xD0($t1)
    ctx->pc = 0x16df34u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 208)));
    // 0x16df38: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x16df38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x16df3c: 0x914a0014  lbu         $t2, 0x14($t2)
    ctx->pc = 0x16df3cu;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 20)));
    // 0x16df40: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x16df40u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16df44: 0xc08d290  jal         func_234A40
    ctx->pc = 0x16DF44u;
    SET_GPR_U32(ctx, 31, 0x16DF4Cu);
    ctx->pc = 0x16DF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DF44u;
    // 0x16df48: 0x24090064  addiu       $t1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234A40u, 0x16DF44u, 0x16DF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16DF4Cu;
label_16df4c:
    // 0x16df4c: 0x4410011  bgez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x16DF4Cu;
    {
        const bool branch_taken_0x16df4c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x16df4c) {
            ctx->pc = 0x16DF94u;
            goto label_16df94;
        }
    }
    ctx->pc = 0x16DF54u;
    // 0x16df54: 0x8f828178  lw          $v0, -0x7E88($gp)
    ctx->pc = 0x16df54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934904)));
    // 0x16df58: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x16DF58u;
    {
        const bool branch_taken_0x16df58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DF58u;
        // 0x16df5c: 0x3c010028  lui         $at, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16df58) {
            ctx->pc = 0x16DF88u;
            goto label_16df88;
        }
    }
    ctx->pc = 0x16DF60u;
    // 0x16df60: 0x2402ffef  addiu       $v0, $zero, -0x11
    ctx->pc = 0x16df60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x16df64: 0x8c231eb0  lw          $v1, 0x1EB0($at)
    ctx->pc = 0x16df64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7856)));
    // 0x16df68: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x16df68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x16df6c: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16df6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16df70: 0xac221eb0  sw          $v0, 0x1EB0($at)
    ctx->pc = 0x16df70u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x281EB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x281EB0u, _value); } while (0);
    // 0x16df74: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16df74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16df78: 0x8c221eb0  lw          $v0, 0x1EB0($at)
    ctx->pc = 0x16df78u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x281EB0u));
    // 0x16df7c: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x16df7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x16df80: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16df80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16df84: 0xac221eb0  sw          $v0, 0x1EB0($at)
    ctx->pc = 0x16df84u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x281EB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x281EB0u, _value); } while (0);
label_16df88:
    // 0x16df88: 0xaf8086fc  sw          $zero, -0x7904($gp)
    ctx->pc = 0x16df88u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936316), GPR_U32(ctx, 0));
    // 0x16df8c: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x16DF8Cu;
    {
        const bool branch_taken_0x16df8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DF8Cu;
        // 0x16df90: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16df8c) {
            ctx->pc = 0x16E114u;
            return;
        }
    }
    ctx->pc = 0x16DF94u;
label_16df94:
    // 0x16df94: 0x8f838700  lw          $v1, -0x7900($gp)
    ctx->pc = 0x16df94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936320)));
    // 0x16df98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16df98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16df9c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16DF9Cu;
    {
        const bool branch_taken_0x16df9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x16df9c) {
            ctx->pc = 0x16DFB4u;
            goto label_16dfb4;
        }
    }
    ctx->pc = 0x16DFA4u;
    // 0x16dfa4: 0x8f8286fc  lw          $v0, -0x7904($gp)
    ctx->pc = 0x16dfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936316)));
    // 0x16dfa8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16dfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x16dfac: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x16DFACu;
    {
        const bool branch_taken_0x16dfac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DFACu;
        // 0x16dfb0: 0xaf8286fc  sw          $v0, -0x7904($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936316), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dfac) {
            ctx->pc = 0x16E0F8u;
            return;
        }
    }
    ctx->pc = 0x16DFB4u;
label_16dfb4:
    // 0x16dfb4: 0x8f828178  lw          $v0, -0x7E88($gp)
    ctx->pc = 0x16dfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934904)));
    // 0x16dfb8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x16DFB8u;
    {
        const bool branch_taken_0x16dfb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DFB8u;
        // 0x16dfbc: 0x3c010028  lui         $at, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dfb8) {
            ctx->pc = 0x16DFE8u;
            goto label_16dfe8;
        }
    }
    ctx->pc = 0x16DFC0u;
    // 0x16dfc0: 0x2402ffef  addiu       $v0, $zero, -0x11
    ctx->pc = 0x16dfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x16dfc4: 0x8c231eb0  lw          $v1, 0x1EB0($at)
    ctx->pc = 0x16dfc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7856)));
    // 0x16dfc8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x16dfc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x16dfcc: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16dfccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16dfd0: 0xac221eb0  sw          $v0, 0x1EB0($at)
    ctx->pc = 0x16dfd0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x281EB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x281EB0u, _value); } while (0);
    // 0x16dfd4: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16dfd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16dfd8: 0x8c221eb0  lw          $v0, 0x1EB0($at)
    ctx->pc = 0x16dfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x281EB0u));
    // 0x16dfdc: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x16dfdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x16dfe0: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16dfe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16dfe4: 0xac221eb0  sw          $v0, 0x1EB0($at)
    ctx->pc = 0x16dfe4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x281EB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x281EB0u, _value); } while (0);
label_16dfe8:
    // 0x16dfe8: 0xaf8086fc  sw          $zero, -0x7904($gp)
    ctx->pc = 0x16dfe8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936316), GPR_U32(ctx, 0));
    // 0x16dfec: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x16DFECu;
    {
        const bool branch_taken_0x16dfec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16DFECu;
        // 0x16dff0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dfec) {
            ctx->pc = 0x16E114u;
            return;
        }
    }
    ctx->pc = 0x16DFF4u;
label_16dff4:
    // 0x16dff4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16dff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16dff8: 0xc08d232  jal         func_2348C8
    ctx->pc = 0x16DFF8u;
    SET_GPR_U32(ctx, 31, 0x16E000u);
    ctx->pc = 0x16DFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16DFF8u;
    // 0x16dffc: 0xaf808710  sw          $zero, -0x78F0($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2348C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2348C8u, 0x16DFF8u, 0x16E000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E000u;
label_16e000:
    // 0x16e000: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x16E000u;
    {
        const bool branch_taken_0x16e000 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16E004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E000u;
        // 0x16e004: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e000) {
            ctx->pc = 0x16E068u;
            goto label_16e068;
        }
    }
    ctx->pc = 0x16E008u;
    // 0x16e008: 0x8f838700  lw          $v1, -0x7900($gp)
    ctx->pc = 0x16e008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936320)));
    // 0x16e00c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16e00cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16e010: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16E010u;
    {
        const bool branch_taken_0x16e010 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x16e010) {
            ctx->pc = 0x16E028u;
            goto label_16e028;
        }
    }
    ctx->pc = 0x16E018u;
    // 0x16e018: 0x8f8286fc  lw          $v0, -0x7904($gp)
    ctx->pc = 0x16e018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936316)));
    // 0x16e01c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16e01cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x16e020: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x16E020u;
    {
        const bool branch_taken_0x16e020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E020u;
        // 0x16e024: 0xaf8286fc  sw          $v0, -0x7904($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936316), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e020) {
            ctx->pc = 0x16E0F8u;
            return;
        }
    }
    ctx->pc = 0x16E028u;
label_16e028:
    // 0x16e028: 0x8f828178  lw          $v0, -0x7E88($gp)
    ctx->pc = 0x16e028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934904)));
    // 0x16e02c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x16E02Cu;
    {
        const bool branch_taken_0x16e02c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E02Cu;
        // 0x16e030: 0x3c010028  lui         $at, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e02c) {
            ctx->pc = 0x16E05Cu;
            goto label_16e05c;
        }
    }
    ctx->pc = 0x16E034u;
    // 0x16e034: 0x2402ffef  addiu       $v0, $zero, -0x11
    ctx->pc = 0x16e034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x16e038: 0x8c231eb0  lw          $v1, 0x1EB0($at)
    ctx->pc = 0x16e038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7856)));
    // 0x16e03c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x16e03cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x16e040: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16e040u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16e044: 0xac221eb0  sw          $v0, 0x1EB0($at)
    ctx->pc = 0x16e044u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x281EB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x281EB0u, _value); } while (0);
    // 0x16e048: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16e048u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16e04c: 0x8c221eb0  lw          $v0, 0x1EB0($at)
    ctx->pc = 0x16e04cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x281EB0u));
    // 0x16e050: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x16e050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x16e054: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16e054u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16e058: 0xac221eb0  sw          $v0, 0x1EB0($at)
    ctx->pc = 0x16e058u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x281EB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x281EB0u, _value); } while (0);
label_16e05c:
    // 0x16e05c: 0xaf8086fc  sw          $zero, -0x7904($gp)
    ctx->pc = 0x16e05cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936316), GPR_U32(ctx, 0));
    // 0x16e060: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x16E060u;
    {
        const bool branch_taken_0x16e060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E060u;
        // 0x16e064: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e060) {
            ctx->pc = 0x16E114u;
            return;
        }
    }
    ctx->pc = 0x16E068u;
label_16e068:
    // 0x16e068: 0x10430023  beq         $v0, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x16E068u;
    {
        const bool branch_taken_0x16e068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x16e068) {
            ctx->pc = 0x16E0F8u;
            return;
        }
    }
    ctx->pc = 0x16E070u;
    // 0x16e070: 0x8f828178  lw          $v0, -0x7E88($gp)
    ctx->pc = 0x16e070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934904)));
    // 0x16e074: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x16E074u;
    {
        const bool branch_taken_0x16e074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E074u;
        // 0x16e078: 0x3c010028  lui         $at, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e074) {
            ctx->pc = 0x16E0A4u;
            goto label_16e0a4;
        }
    }
    ctx->pc = 0x16E07Cu;
    // 0x16e07c: 0x2402ffef  addiu       $v0, $zero, -0x11
    ctx->pc = 0x16e07cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x16e080: 0x8c231eb0  lw          $v1, 0x1EB0($at)
    ctx->pc = 0x16e080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 7856)));
    // 0x16e084: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x16e084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x16e088: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16e088u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16e08c: 0xac221eb0  sw          $v0, 0x1EB0($at)
    ctx->pc = 0x16e08cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x281EB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x281EB0u, _value); } while (0);
    // 0x16e090: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16e090u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16e094: 0x8c221eb0  lw          $v0, 0x1EB0($at)
    ctx->pc = 0x16e094u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x281EB0u));
    // 0x16e098: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x16e098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x16e09c: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16e09cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16e0a0: 0xac221eb0  sw          $v0, 0x1EB0($at)
    ctx->pc = 0x16e0a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x281EB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x281EB0u, _value); } while (0);
label_16e0a4:
    // 0x16e0a4: 0xaf8086fc  sw          $zero, -0x7904($gp)
    ctx->pc = 0x16e0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936316), GPR_U32(ctx, 0));
    // 0x16e0a8: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x16E0A8u;
    {
        const bool branch_taken_0x16e0a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E0A8u;
        // 0x16e0ac: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e0a8) {
            ctx->pc = 0x16E114u;
            return;
        }
    }
    ctx->pc = 0x16E0B0u;
label_16e0b0:
    // 0x16e0b0: 0x8f828178  lw          $v0, -0x7E88($gp)
    ctx->pc = 0x16e0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934904)));
    // 0x16e0b4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x16E0B4u;
    {
        const bool branch_taken_0x16e0b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E0B4u;
        // 0x16e0b8: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e0b4) {
            ctx->pc = 0x16E0E8u;
            goto label_16e0e8;
        }
    }
    ctx->pc = 0x16E0BCu;
    // 0x16e0bc: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16e0bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16e0c0: 0x2402ffef  addiu       $v0, $zero, -0x11
    ctx->pc = 0x16e0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x16e0c4: 0x8c231eb0  lw          $v1, 0x1EB0($at)
    ctx->pc = 0x16e0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x281EB0u));
    // 0x16e0c8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x16e0c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x16e0cc: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16e0ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16e0d0: 0xac221eb0  sw          $v0, 0x1EB0($at)
    ctx->pc = 0x16e0d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x281EB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x281EB0u, _value); } while (0);
    // 0x16e0d4: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16e0d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16e0d8: 0x8c221eb0  lw          $v0, 0x1EB0($at)
    ctx->pc = 0x16e0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x281EB0u));
    // 0x16e0dc: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x16e0dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x16e0e0: 0x3c010028  lui         $at, 0x28
    ctx->pc = 0x16e0e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)40 << 16));
    // 0x16e0e4: 0xac221eb0  sw          $v0, 0x1EB0($at)
    ctx->pc = 0x16e0e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x281EB0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x281EB0u, _value); } while (0);
label_16e0e8:
    // 0x16e0e8: 0xc05b5ac  jal         func_16D6B0
    ctx->pc = 0x16E0E8u;
    SET_GPR_U32(ctx, 31, 0x16E0F0u);
    ctx->pc = 0x16E0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E0E8u;
    // 0x16e0ec: 0xaf8086fc  sw          $zero, -0x7904($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936316), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D6B0u, 0x16E0E8u, 0x16E0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E0F0u;
label_16e0f0:
    // 0x16e0f0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x16E0F0u;
    {
        const bool branch_taken_0x16e0f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E0F0u;
        // 0x16e0f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e0f0) {
            ctx->pc = 0x16E114u;
            return;
        }
    }
    ctx->pc = 0x16E0F8u;
}
