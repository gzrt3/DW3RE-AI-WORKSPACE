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

// Function: entry_001ec8a0
// Address: 0x1ec8a0 - 0x1ec8b4
void entry_001ec8a0_0x1ec8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ec8a0_0x1ec8a0");
#endif

    ctx->pc = 0x1ec8a0u;

    // 0x1ec8a0: 0x24060083  addiu       $a2, $zero, 0x83
    ctx->pc = 0x1ec8a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
    // 0x1ec8a4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ec8a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec8a8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ec8a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec8ac: 0xc066c72  jal         func_19B1C8
    ctx->pc = 0x1EC8ACu;
    SET_GPR_U32(ctx, 31, 0x1EC8B4u);
    ctx->pc = 0x1EC8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EC8ACu;
    // 0x1ec8b0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B1C8u, 0x1EC8ACu, 0x1EC8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC8B4u;
}
