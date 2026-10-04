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

// Function: entry_00196f44
// Address: 0x196f44 - 0x196f5c
void entry_00196f44_0x196f44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00196f44_0x196f44");
#endif

    ctx->pc = 0x196f44u;

    // 0x196f44: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x196f44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x196f48: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x196f48u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x196f4c: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x196F4Cu;
    {
        const bool branch_taken_0x196f4c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x196F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196F4Cu;
        // 0x196f50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196f4c) {
            ctx->pc = 0x196F5Cu;
            return;
        }
    }
    ctx->pc = 0x196F54u;
    // 0x196f54: 0xc0658b0  jal         func_1962C0
    ctx->pc = 0x196F54u;
    SET_GPR_U32(ctx, 31, 0x196F5Cu);
    ctx->pc = 0x1962C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1962C0u, 0x196F54u, 0x196F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196F5Cu;
}
