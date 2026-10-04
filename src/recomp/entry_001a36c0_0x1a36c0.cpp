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

// Function: entry_001a36c0
// Address: 0x1a36c0 - 0x1a36d8
void entry_001a36c0_0x1a36c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a36c0_0x1a36c0");
#endif

    switch (ctx->pc) {
        case 0x1a36d4u: goto label_1a36d4;
        default: break;
    }

    ctx->pc = 0x1a36c0u;

    // 0x1a36c0: 0x3c060028  lui         $a2, 0x28
    ctx->pc = 0x1a36c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)40 << 16));
    // 0x1a36c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a36c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a36c8: 0x24c65a40  addiu       $a2, $a2, 0x5A40
    ctx->pc = 0x1a36c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 23104));
    // 0x1a36cc: 0xc068eb2  jal         func_1A3AC8
    ctx->pc = 0x1A36CCu;
    SET_GPR_U32(ctx, 31, 0x1A36D4u);
    ctx->pc = 0x1A36D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A36CCu;
    // 0x1a36d0: 0x3c055000  lui         $a1, 0x5000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20480 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3AC8u, 0x1A36CCu, 0x1A36D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A36D4u;
label_1a36d4:
    // 0x1a36d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a36d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1a36d8u;
}
