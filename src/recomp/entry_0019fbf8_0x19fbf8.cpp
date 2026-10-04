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

// Function: entry_0019fbf8
// Address: 0x19fbf8 - 0x19fc4c
void entry_0019fbf8_0x19fbf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019fbf8_0x19fbf8");
#endif

    switch (ctx->pc) {
        case 0x19fc00u: goto label_19fc00;
        case 0x19fc0cu: goto label_19fc0c;
        case 0x19fc28u: goto label_19fc28;
        case 0x19fc30u: goto label_19fc30;
        case 0x19fc40u: goto label_19fc40;
        case 0x19fc48u: goto label_19fc48;
        default: break;
    }

    ctx->pc = 0x19fbf8u;

label_19fbf8:
    // 0x19fbf8: 0xc067d96  jal         func_19F658
label_19fbfc:
    if (ctx->pc == 0x19FBFCu) {
        ctx->pc = 0x19FC00u;
        goto label_19fc00;
    }
    ctx->pc = 0x19FBF8u;
    SET_GPR_U32(ctx, 31, 0x19FC00u);
    ctx->pc = 0x19F658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F658u, 0x19FBF8u, 0x19FC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FC00u;
label_19fc00:
    // 0x19fc00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19fc00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19fc04:
    // 0x19fc04: 0xc067dd2  jal         func_19F748
label_19fc08:
    if (ctx->pc == 0x19FC08u) {
        ctx->pc = 0x19FC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FC04u;
        // 0x19fc08: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FC0Cu;
        goto label_19fc0c;
    }
    ctx->pc = 0x19FC04u;
    SET_GPR_U32(ctx, 31, 0x19FC0Cu);
    ctx->pc = 0x19FC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FC04u;
    // 0x19fc08: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F748u, 0x19FC04u, 0x19FC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FC0Cu;
label_19fc0c:
    // 0x19fc0c: 0x242182b  sltu        $v1, $s2, $v0
    ctx->pc = 0x19fc0cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_19fc10:
    // 0x19fc10: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x19fc10u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_19fc14:
    // 0x19fc14: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19fc14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_19fc18:
    // 0x19fc18: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x19fc18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_19fc1c:
    // 0x19fc1c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19fc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_19fc20:
    // 0x19fc20: 0x40f809  jalr        $v0
label_19fc24:
    if (ctx->pc == 0x19FC24u) {
        ctx->pc = 0x19FC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FC20u;
        // 0x19fc24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FC28u;
        goto label_19fc28;
    }
    ctx->pc = 0x19FC20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19FC28u);
        ctx->pc = 0x19FC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FC20u;
        // 0x19fc24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19FC20u, 0x19FC28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19FC28u;
label_19fc28:
    // 0x19fc28: 0xc067e26  jal         func_19F898
label_19fc2c:
    if (ctx->pc == 0x19FC2Cu) {
        ctx->pc = 0x19FC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FC28u;
        // 0x19fc2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FC30u;
        goto label_19fc30;
    }
    ctx->pc = 0x19FC28u;
    SET_GPR_U32(ctx, 31, 0x19FC30u);
    ctx->pc = 0x19FC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FC28u;
    // 0x19fc2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F898u, 0x19FC28u, 0x19FC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FC30u;
label_19fc30:
    // 0x19fc30: 0x10000006  b           . + 4 + (0x6 << 2)
label_19fc34:
    if (ctx->pc == 0x19FC34u) {
        ctx->pc = 0x19FC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FC30u;
        // 0x19fc34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FC38u;
        goto label_19fc38;
    }
    ctx->pc = 0x19FC30u;
    {
        const bool branch_taken_0x19fc30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19FC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FC30u;
        // 0x19fc34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19fc30) {
            ctx->pc = 0x19FC4Cu;
            return;
        }
    }
    ctx->pc = 0x19FC38u;
label_19fc38:
    // 0x19fc38: 0xc067d96  jal         func_19F658
label_19fc3c:
    if (ctx->pc == 0x19FC3Cu) {
        ctx->pc = 0x19FC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FC38u;
        // 0x19fc3c: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FC40u;
        goto label_19fc40;
    }
    ctx->pc = 0x19FC38u;
    SET_GPR_U32(ctx, 31, 0x19FC40u);
    ctx->pc = 0x19FC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FC38u;
    // 0x19fc3c: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F658u, 0x19FC38u, 0x19FC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FC40u;
label_19fc40:
    // 0x19fc40: 0xc067e26  jal         func_19F898
label_19fc44:
    if (ctx->pc == 0x19FC44u) {
        ctx->pc = 0x19FC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FC40u;
        // 0x19fc44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19FC48u;
        goto label_19fc48;
    }
    ctx->pc = 0x19FC40u;
    SET_GPR_U32(ctx, 31, 0x19FC48u);
    ctx->pc = 0x19FC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19FC40u;
    // 0x19fc44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F898u, 0x19FC40u, 0x19FC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19FC48u;
label_19fc48:
    // 0x19fc48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19fc48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19fc4cu;
}
