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

// Function: entry_00232a28
// Address: 0x232a28 - 0x232ac0
void entry_00232a28_0x232a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00232a28_0x232a28");
#endif

    switch (ctx->pc) {
        case 0x232a54u: goto label_232a54;
        case 0x232aacu: goto label_232aac;
        default: break;
    }

    ctx->pc = 0x232a28u;

label_232a28:
    // 0x232a28: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x232a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x232a2c: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x232a2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
    // 0x232a30: 0x0  nop
    ctx->pc = 0x232a30u;
    // NOP
    // 0x232a34: 0x0  nop
    ctx->pc = 0x232a34u;
    // NOP
    // 0x232a38: 0x0  nop
    ctx->pc = 0x232a38u;
    // NOP
    // 0x232a3c: 0x0  nop
    ctx->pc = 0x232a3cu;
    // NOP
    // 0x232a40: 0x0  nop
    ctx->pc = 0x232a40u;
    // NOP
    // 0x232a44: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x232A44u;
    {
        const bool branch_taken_0x232a44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x232a44) {
            ctx->pc = 0x232A28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_232a28;
        }
    }
    ctx->pc = 0x232A4Cu;
    // 0x232a4c: 0xc08c8f2  jal         func_2323C8
    ctx->pc = 0x232A4Cu;
    SET_GPR_U32(ctx, 31, 0x232A54u);
    ctx->pc = 0x232A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232A4Cu;
    // 0x232a50: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2323C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2323C8u, 0x232A4Cu, 0x232A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232A54u;
label_232a54:
    // 0x232a54: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x232a54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x232a58: 0x3442b010  ori         $v0, $v0, 0xB010
    ctx->pc = 0x232a58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45072);
    // 0x232a5c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x232a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x232a60: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x232a60u;
    SET_GPR_S32(ctx, 4, (int32_t)runtime->Load32(rdram, ctx, 0x1000B010u));
    // 0x232a64: 0x3463b020  ori         $v1, $v1, 0xB020
    ctx->pc = 0x232a64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)45088);
    // 0x232a68: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x232a68u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x232a6c: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x232a6cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x232a70: 0xae04002c  sw          $a0, 0x2C($s0)
    ctx->pc = 0x232a70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 4));
    // 0x232a74: 0x34c6b000  ori         $a2, $a2, 0xB000
    ctx->pc = 0x232a74u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)45056);
    // 0x232a78: 0x34e72020  ori         $a3, $a3, 0x2020
    ctx->pc = 0x232a78u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8224);
    // 0x232a7c: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x232a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x232a80: 0x8c680000  lw          $t0, 0x0($v1)
    ctx->pc = 0x232a80u;
    SET_GPR_S32(ctx, 8, (int32_t)runtime->Load32(rdram, ctx, 0x1000B020u));
    // 0x232a84: 0x34a52010  ori         $a1, $a1, 0x2010
    ctx->pc = 0x232a84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8208);
    // 0x232a88: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x232a88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x232a8c: 0xae080030  sw          $t0, 0x30($s0)
    ctx->pc = 0x232a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 8));
    // 0x232a90: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x232a90u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x1000B000u));
    // 0x232a94: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x232a94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    // 0x232a98: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x232a98u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10002020u));
    // 0x232a9c: 0xae030038  sw          $v1, 0x38($s0)
    ctx->pc = 0x232a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
    // 0x232aa0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x232aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u));
    // 0x232aa4: 0xc069210  jal         func_1A4840
    ctx->pc = 0x232AA4u;
    SET_GPR_U32(ctx, 31, 0x232AACu);
    ctx->pc = 0x232AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232AA4u;
    // 0x232aa8: 0xae02003c  sw          $v0, 0x3C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4840u, 0x232AA4u, 0x232AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232AACu;
label_232aac:
    // 0x232aac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x232aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x232ab0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x232ab0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x232ab4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x232ab4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x232ab8: 0x3e00008  jr          $ra
    ctx->pc = 0x232AB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x232ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232AB8u;
        // 0x232abc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x232AB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x232AC0u;
}
