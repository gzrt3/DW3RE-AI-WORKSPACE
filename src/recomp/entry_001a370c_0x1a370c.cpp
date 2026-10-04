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

// Function: entry_001a370c
// Address: 0x1a370c - 0x1a3720
void entry_001a370c_0x1a370c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a370c_0x1a370c");
#endif

    ctx->pc = 0x1a370cu;

    // 0x1a370c: 0x3c060028  lui         $a2, 0x28
    ctx->pc = 0x1a370cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)40 << 16));
    // 0x1a3710: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a3710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3714: 0x24c65a80  addiu       $a2, $a2, 0x5A80
    ctx->pc = 0x1a3714u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 23168));
    // 0x1a3718: 0xc068eb2  jal         func_1A3AC8
    ctx->pc = 0x1A3718u;
    SET_GPR_U32(ctx, 31, 0x1A3720u);
    ctx->pc = 0x1A371Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3718u;
    // 0x1a371c: 0x3c055800  lui         $a1, 0x5800 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)22528 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3AC8u, 0x1A3718u, 0x1A3720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3720u;
}
