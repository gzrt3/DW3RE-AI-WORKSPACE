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

// Function: FUN_0011bd10
// Address: 0x11bd10 - 0x11bd84
void FUN_0011bd10_0x11bd10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0011bd10_0x11bd10");
#endif

    switch (ctx->pc) {
        case 0x11bd34u: goto label_11bd34;
        case 0x11bd4cu: goto label_11bd4c;
        case 0x11bd68u: goto label_11bd68;
        case 0x11bd74u: goto label_11bd74;
        case 0x11bd80u: goto label_11bd80;
        default: break;
    }

    ctx->pc = 0x11bd10u;

    // 0x11bd10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11bd10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11bd14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11bd14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11bd18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x11bd18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x11bd1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x11bd1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x11bd20: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11bd20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bd24: 0x6200016  bltz        $s1, . + 4 + (0x16 << 2)
    ctx->pc = 0x11BD24u;
    {
        const bool branch_taken_0x11bd24 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x11BD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BD24u;
        // 0x11bd28: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bd24) {
            ctx->pc = 0x11BD80u;
            goto label_11bd80;
        }
    }
    ctx->pc = 0x11BD2Cu;
    // 0x11bd2c: 0xc0713b0  jal         func_1C4EC0
    ctx->pc = 0x11BD2Cu;
    SET_GPR_U32(ctx, 31, 0x11BD34u);
    ctx->pc = 0x1C4EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4EC0u, 0x11BD2Cu, 0x11BD34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BD34u;
label_11bd34:
    // 0x11bd34: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x11bd34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x11bd38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11bd38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11bd3c: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11BD3Cu;
    {
        const bool branch_taken_0x11bd3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x11BD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BD3Cu;
        // 0x11bd40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bd3c) {
            ctx->pc = 0x11BD60u;
            goto label_11bd60;
        }
    }
    ctx->pc = 0x11BD44u;
    // 0x11bd44: 0xc0713b0  jal         func_1C4EC0
    ctx->pc = 0x11BD44u;
    SET_GPR_U32(ctx, 31, 0x11BD4Cu);
    ctx->pc = 0x11BD48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BD44u;
    // 0x11bd48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4EC0u, 0x11BD44u, 0x11BD4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BD4Cu;
label_11bd4c:
    // 0x11bd4c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x11bd4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x11bd50: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x11bd50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11bd54: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11BD54u;
    {
        const bool branch_taken_0x11bd54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x11BD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BD54u;
        // 0x11bd58: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bd54) {
            ctx->pc = 0x11BD6Cu;
            goto label_11bd6c;
        }
    }
    ctx->pc = 0x11BD5Cu;
    // 0x11bd5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11bd5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11bd60:
    // 0x11bd60: 0xc048e8c  jal         func_123A30
    ctx->pc = 0x11BD60u;
    SET_GPR_U32(ctx, 31, 0x11BD68u);
    ctx->pc = 0x11BD64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BD60u;
    // 0x11bd64: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123A30u, 0x11BD60u, 0x11BD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BD68u;
label_11bd68:
    // 0x11bd68: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11bd68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11bd6c:
    // 0x11bd6c: 0xc071390  jal         func_1C4E40
    ctx->pc = 0x11BD6Cu;
    SET_GPR_U32(ctx, 31, 0x11BD74u);
    ctx->pc = 0x11BD70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BD6Cu;
    // 0x11bd70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4E40u, 0x11BD6Cu, 0x11BD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BD74u;
label_11bd74:
    // 0x11bd74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11bd74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bd78: 0xc0713a8  jal         func_1C4EA0
    ctx->pc = 0x11BD78u;
    SET_GPR_U32(ctx, 31, 0x11BD80u);
    ctx->pc = 0x11BD7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BD78u;
    // 0x11bd7c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4EA0u, 0x11BD78u, 0x11BD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BD80u;
label_11bd80:
    // 0x11bd80: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11bd80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->pc = 0x11bd84u;
}
