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

// Function: entry_002261b8
// Address: 0x2261b8 - 0x2261f4
void entry_002261b8_0x2261b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002261b8_0x2261b8");
#endif

    switch (ctx->pc) {
        case 0x2261d4u: goto label_2261d4;
        case 0x2261ecu: goto label_2261ec;
        default: break;
    }

    ctx->pc = 0x2261b8u;

label_2261b8:
    // 0x2261b8: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x2261b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
    // 0x2261bc: 0x2442ede0  addiu       $v0, $v0, -0x1220
    ctx->pc = 0x2261bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962656));
    // 0x2261c0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2261c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2261c4: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x2261c4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2261c8: 0x90450001  lbu         $a1, 0x1($v0)
    ctx->pc = 0x2261c8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x2261cc: 0xc044934  jal         func_1124D0
    ctx->pc = 0x2261CCu;
    SET_GPR_U32(ctx, 31, 0x2261D4u);
    ctx->pc = 0x2261D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2261CCu;
    // 0x2261d0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1124D0u, 0x2261CCu, 0x2261D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2261D4u;
label_2261d4:
    // 0x2261d4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2261d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2261d8: 0x2a02002d  slti        $v0, $s0, 0x2D
    ctx->pc = 0x2261d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)45) ? 1 : 0);
    // 0x2261dc: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2261DCu;
    {
        const bool branch_taken_0x2261dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2261E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2261DCu;
        // 0x2261e0: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2261dc) {
            ctx->pc = 0x2261B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2261b8;
        }
    }
    ctx->pc = 0x2261E4u;
    // 0x2261e4: 0xc06e45c  jal         func_1B9170
    ctx->pc = 0x2261E4u;
    SET_GPR_U32(ctx, 31, 0x2261ECu);
    ctx->pc = 0x2261E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2261E4u;
    // 0x2261e8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9170u, 0x2261E4u, 0x2261ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2261ECu;
label_2261ec:
    // 0x2261ec: 0xc05dd08  jal         func_177420
    ctx->pc = 0x2261ECu;
    SET_GPR_U32(ctx, 31, 0x2261F4u);
    ctx->pc = 0x177420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177420u, 0x2261ECu, 0x2261F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2261F4u;
}
