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

// Function: entry_0019f9c0
// Address: 0x19f9c0 - 0x19f9f8
void entry_0019f9c0_0x19f9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019f9c0_0x19f9c0");
#endif

    switch (ctx->pc) {
        case 0x19f9c8u: goto label_19f9c8;
        case 0x19f9d4u: goto label_19f9d4;
        default: break;
    }

    ctx->pc = 0x19f9c0u;

label_19f9c0:
    // 0x19f9c0: 0xc067e26  jal         func_19F898
    ctx->pc = 0x19F9C0u;
    SET_GPR_U32(ctx, 31, 0x19F9C8u);
    ctx->pc = 0x19F9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F9C0u;
    // 0x19f9c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F898u, 0x19F9C0u, 0x19F9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F9C8u;
label_19f9c8:
    // 0x19f9c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19f9c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f9cc: 0xc067dd2  jal         func_19F748
    ctx->pc = 0x19F9CCu;
    SET_GPR_U32(ctx, 31, 0x19F9D4u);
    ctx->pc = 0x19F9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F9CCu;
    // 0x19f9d0: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F748u, 0x19F9CCu, 0x19F9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F9D4u;
label_19f9d4:
    // 0x19f9d4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x19f9d4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f9d8: 0x1075000d  beq         $v1, $s5, . + 4 + (0xD << 2)
    ctx->pc = 0x19F9D8u;
    {
        const bool branch_taken_0x19f9d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 21));
        ctx->pc = 0x19F9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F9D8u;
        // 0x19f9dc: 0x2c6201b4  sltiu       $v0, $v1, 0x1B4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)436) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f9d8) {
            ctx->pc = 0x19FA10u;
            return;
        }
    }
    ctx->pc = 0x19F9E0u;
    // 0x19f9e0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x19F9E0u;
    {
        const bool branch_taken_0x19f9e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f9e0) {
            ctx->pc = 0x19F9F8u;
            return;
        }
    }
    ctx->pc = 0x19F9E8u;
    // 0x19f9e8: 0x10740011  beq         $v1, $s4, . + 4 + (0x11 << 2)
    ctx->pc = 0x19F9E8u;
    {
        const bool branch_taken_0x19f9e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        if (branch_taken_0x19f9e8) {
            ctx->pc = 0x19FA30u;
            return;
        }
    }
    ctx->pc = 0x19F9F0u;
    // 0x19f9f0: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x19F9F0u;
    {
        const bool branch_taken_0x19f9f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19f9f0) {
            ctx->pc = 0x19F9C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19f9c0;
        }
    }
    ctx->pc = 0x19F9F8u;
}
