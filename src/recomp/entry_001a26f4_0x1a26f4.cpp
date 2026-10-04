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

// Function: entry_001a26f4
// Address: 0x1a26f4 - 0x1a2710
void entry_001a26f4_0x1a26f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a26f4_0x1a26f4");
#endif

    switch (ctx->pc) {
        case 0x1a2708u: goto label_1a2708;
        default: break;
    }

    ctx->pc = 0x1a26f4u;

    // 0x1a26f4: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1A26F4u;
    {
        const bool branch_taken_0x1a26f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A26F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A26F4u;
        // 0x1a26f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a26f4) {
            ctx->pc = 0x1A2738u;
            return;
        }
    }
    ctx->pc = 0x1A26FCu;
    // 0x1a26fc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a26fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2700: 0xc068636  jal         func_1A18D8
    ctx->pc = 0x1A2700u;
    SET_GPR_U32(ctx, 31, 0x1A2708u);
    ctx->pc = 0x1A2704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2700u;
    // 0x1a2704: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A18D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A18D8u, 0x1A2700u, 0x1A2708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2708u;
label_1a2708:
    // 0x1a2708: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1A2708u;
    {
        const bool branch_taken_0x1a2708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A270Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2708u;
        // 0x1a270c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2708) {
            ctx->pc = 0x1A2738u;
            return;
        }
    }
    ctx->pc = 0x1A2710u;
}
