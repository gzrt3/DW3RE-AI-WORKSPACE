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

// Function: entry_0022af58
// Address: 0x22af58 - 0x22afbc
void entry_0022af58_0x22af58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022af58_0x22af58");
#endif

    switch (ctx->pc) {
        case 0x22af90u: goto label_22af90;
        case 0x22af9cu: goto label_22af9c;
        case 0x22afa8u: goto label_22afa8;
        case 0x22afb4u: goto label_22afb4;
        default: break;
    }

    ctx->pc = 0x22af58u;

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
            return;
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
}
