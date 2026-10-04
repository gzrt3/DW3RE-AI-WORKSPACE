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

// Function: FUN_00115e10
// Address: 0x115e10 - 0x115eb0
void FUN_00115e10_0x115e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00115e10_0x115e10");
#endif

    switch (ctx->pc) {
        case 0x115e2cu: goto label_115e2c;
        case 0x115e50u: goto label_115e50;
        case 0x115e88u: goto label_115e88;
        default: break;
    }

    ctx->pc = 0x115e10u;

    // 0x115e10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x115e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x115e14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x115e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x115e18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x115e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x115e1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x115e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x115e20: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x115e20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115e24: 0xc0457b0  jal         func_115EC0
    ctx->pc = 0x115E24u;
    SET_GPR_U32(ctx, 31, 0x115E2Cu);
    ctx->pc = 0x115E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115E24u;
    // 0x115e28: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115EC0u, 0x115E24u, 0x115E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115E2Cu;
label_115e2c:
    // 0x115e2c: 0x2a210029  slti        $at, $s1, 0x29
    ctx->pc = 0x115e2cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x115e30: 0x1020001e  beqz        $at, . + 4 + (0x1E << 2)
    ctx->pc = 0x115E30u;
    {
        const bool branch_taken_0x115e30 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x115E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115E30u;
        // 0x115e34: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115e30) {
            ctx->pc = 0x115EACu;
            goto label_115eac;
        }
    }
    ctx->pc = 0x115E38u;
    // 0x115e38: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x115e38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115e3c: 0x3c06002f  lui         $a2, 0x2F
    ctx->pc = 0x115e3cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)47 << 16));
    // 0x115e40: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x115e40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x115e44: 0x24c62490  addiu       $a2, $a2, 0x2490
    ctx->pc = 0x115e44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9360));
    // 0x115e48: 0x24050039  addiu       $a1, $zero, 0x39
    ctx->pc = 0x115e48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x115e4c: 0xc71021  addu        $v0, $a2, $a3
    ctx->pc = 0x115e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_115e50:
    // 0x115e50: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x115e50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x115e54: 0x10450009  beq         $v0, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x115E54u;
    {
        const bool branch_taken_0x115e54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x115e54) {
            ctx->pc = 0x115E7Cu;
            goto label_115e7c;
        }
    }
    ctx->pc = 0x115E5Cu;
    // 0x115e5c: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x115E5Cu;
    {
        const bool branch_taken_0x115e5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x115e5c) {
            ctx->pc = 0x115E6Cu;
            goto label_115e6c;
        }
    }
    ctx->pc = 0x115E64u;
    // 0x115e64: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x115E64u;
    {
        const bool branch_taken_0x115e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115E64u;
        // 0x115e68: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115e64) {
            ctx->pc = 0x115E7Cu;
            goto label_115e7c;
        }
    }
    ctx->pc = 0x115E6Cu;
label_115e6c:
    // 0x115e6c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x115e6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x115e70: 0x28e2001a  slti        $v0, $a3, 0x1A
    ctx->pc = 0x115e70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)26) ? 1 : 0);
    // 0x115e74: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x115E74u;
    {
        const bool branch_taken_0x115e74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x115E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115E74u;
        // 0x115e78: 0xc71021  addu        $v0, $a2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115e74) {
            ctx->pc = 0x115E50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_115e50;
        }
    }
    ctx->pc = 0x115E7Cu;
label_115e7c:
    // 0x115e7c: 0x0  nop
    ctx->pc = 0x115e7cu;
    // NOP
    // 0x115e80: 0xc044f58  jal         func_113D60
    ctx->pc = 0x115E80u;
    SET_GPR_U32(ctx, 31, 0x115E88u);
    ctx->pc = 0x113D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113D60u, 0x115E80u, 0x115E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115E88u;
label_115e88:
    // 0x115e88: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x115e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x115e8c: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x115e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x115e90: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x115e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x115e94: 0xae030028  sw          $v1, 0x28($s0)
    ctx->pc = 0x115e94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
    // 0x115e98: 0x8604003c  lh          $a0, 0x3C($s0)
    ctx->pc = 0x115e98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x115e9c: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x115e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x115ea0: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x115ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x115ea4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x115ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x115ea8: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x115ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
label_115eac:
    // 0x115eac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x115eacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x115eb0u;
}
