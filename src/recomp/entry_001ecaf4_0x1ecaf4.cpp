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

// Function: entry_001ecaf4
// Address: 0x1ecaf4 - 0x1ecbb0
void entry_001ecaf4_0x1ecaf4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ecaf4_0x1ecaf4");
#endif

    switch (ctx->pc) {
        case 0x1ecafcu: goto label_1ecafc;
        case 0x1ecb04u: goto label_1ecb04;
        case 0x1ecb0cu: goto label_1ecb0c;
        case 0x1ecb14u: goto label_1ecb14;
        case 0x1ecb2cu: goto label_1ecb2c;
        case 0x1ecb40u: goto label_1ecb40;
        case 0x1ecb4cu: goto label_1ecb4c;
        case 0x1ecb68u: goto label_1ecb68;
        case 0x1ecb98u: goto label_1ecb98;
        default: break;
    }

    ctx->pc = 0x1ecaf4u;

    // 0x1ecaf4: 0xc07b33c  jal         func_1ECCF0
    ctx->pc = 0x1ECAF4u;
    SET_GPR_U32(ctx, 31, 0x1ECAFCu);
    ctx->pc = 0x1ECAF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECAF4u;
    // 0x1ecaf8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ECCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ECCF0u, 0x1ECAF4u, 0x1ECAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECAFCu;
label_1ecafc:
    // 0x1ecafc: 0xc07b520  jal         func_1ED480
    ctx->pc = 0x1ECAFCu;
    SET_GPR_U32(ctx, 31, 0x1ECB04u);
    ctx->pc = 0x1ECB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECAFCu;
    // 0x1ecb00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED480u, 0x1ECAFCu, 0x1ECB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECB04u;
label_1ecb04:
    // 0x1ecb04: 0xc060258  jal         func_180960
    ctx->pc = 0x1ECB04u;
    SET_GPR_U32(ctx, 31, 0x1ECB0Cu);
    ctx->pc = 0x1ECB08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECB04u;
    // 0x1ecb08: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x1ECB04u, 0x1ECB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECB0Cu;
label_1ecb0c:
    // 0x1ecb0c: 0xc060258  jal         func_180960
    ctx->pc = 0x1ECB0Cu;
    SET_GPR_U32(ctx, 31, 0x1ECB14u);
    ctx->pc = 0x180960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180960u, 0x1ECB0Cu, 0x1ECB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECB14u;
label_1ecb14:
    // 0x1ecb14: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1ecb14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ecb18: 0x1622000e  bne         $s1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1ECB18u;
    {
        const bool branch_taken_0x1ecb18 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1ECB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECB18u;
        // 0x1ecb1c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecb18) {
            ctx->pc = 0x1ECB54u;
            goto label_1ecb54;
        }
    }
    ctx->pc = 0x1ECB20u;
    // 0x1ecb20: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1ecb20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecb24: 0xc07b2ec  jal         func_1ECBB0
    ctx->pc = 0x1ECB24u;
    SET_GPR_U32(ctx, 31, 0x1ECB2Cu);
    ctx->pc = 0x1ECB28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECB24u;
    // 0x1ecb28: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ECBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ECBB0u, 0x1ECB24u, 0x1ECB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECB2Cu;
label_1ecb2c:
    // 0x1ecb2c: 0x8f838590  lw          $v1, -0x7A70($gp)
    ctx->pc = 0x1ecb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935952)));
    // 0x1ecb30: 0x2402fbff  addiu       $v0, $zero, -0x401
    ctx->pc = 0x1ecb30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966271));
    // 0x1ecb34: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1ecb34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1ecb38: 0xc043ab8  jal         func_10EAE0
    ctx->pc = 0x1ECB38u;
    SET_GPR_U32(ctx, 31, 0x1ECB40u);
    ctx->pc = 0x1ECB3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECB38u;
    // 0x1ecb3c: 0xaf828590  sw          $v0, -0x7A70($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935952), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10EAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10EAE0u, 0x1ECB38u, 0x1ECB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECB40u;
label_1ecb40:
    // 0x1ecb40: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1ecb40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecb44: 0xc07b33c  jal         func_1ECCF0
    ctx->pc = 0x1ECB44u;
    SET_GPR_U32(ctx, 31, 0x1ECB4Cu);
    ctx->pc = 0x1ECB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECB44u;
    // 0x1ecb48: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ECCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ECCF0u, 0x1ECB44u, 0x1ECB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECB4Cu;
label_1ecb4c:
    // 0x1ecb4c: 0x1000ffeb  b           . + 4 + (-0x15 << 2)
    ctx->pc = 0x1ECB4Cu;
    {
        const bool branch_taken_0x1ecb4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ecb4c) {
            ctx->pc = 0x1ECAFCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ecafc;
        }
    }
    ctx->pc = 0x1ECB54u;
label_1ecb54:
    // 0x1ecb54: 0x0  nop
    ctx->pc = 0x1ecb54u;
    // NOP
    // 0x1ecb58: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ecb58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ecb5c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ecb5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecb60: 0xc07b2ec  jal         func_1ECBB0
    ctx->pc = 0x1ECB60u;
    SET_GPR_U32(ctx, 31, 0x1ECB68u);
    ctx->pc = 0x1ECB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECB60u;
    // 0x1ecb64: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ECBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ECBB0u, 0x1ECB60u, 0x1ECB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECB68u;
label_1ecb68:
    // 0x1ecb68: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1ECB68u;
    {
        const bool branch_taken_0x1ecb68 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ECB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECB68u;
        // 0x1ecb6c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecb68) {
            ctx->pc = 0x1ECB80u;
            goto label_1ecb80;
        }
    }
    ctx->pc = 0x1ECB70u;
    // 0x1ecb70: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ecb70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ecb74: 0x16020009  bne         $s0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1ECB74u;
    {
        const bool branch_taken_0x1ecb74 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1ECB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECB74u;
        // 0x1ecb78: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecb74) {
            ctx->pc = 0x1ECB9Cu;
            goto label_1ecb9c;
        }
    }
    ctx->pc = 0x1ECB7Cu;
    // 0x1ecb7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ecb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ecb80:
    // 0x1ecb80: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ECB80u;
    {
        const bool branch_taken_0x1ecb80 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1ECB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECB80u;
        // 0x1ecb84: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecb80) {
            ctx->pc = 0x1ECB90u;
            goto label_1ecb90;
        }
    }
    ctx->pc = 0x1ECB88u;
    // 0x1ecb88: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ECB88u;
    {
        const bool branch_taken_0x1ecb88 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ecb88) {
            ctx->pc = 0x1ECB98u;
            goto label_1ecb98;
        }
    }
    ctx->pc = 0x1ECB90u;
label_1ecb90:
    // 0x1ecb90: 0xc040318  jal         func_100C60
    ctx->pc = 0x1ECB90u;
    SET_GPR_U32(ctx, 31, 0x1ECB98u);
    ctx->pc = 0x100C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C60u, 0x1ECB90u, 0x1ECB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECB98u;
label_1ecb98:
    // 0x1ecb98: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1ecb98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ecb9c:
    // 0x1ecb9c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1ecb9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ecba0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ecba0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ecba4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ecba4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ecba8: 0x3e00008  jr          $ra
    ctx->pc = 0x1ECBA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ECBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECBA8u;
        // 0x1ecbac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ECBA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ECBB0u;
}
