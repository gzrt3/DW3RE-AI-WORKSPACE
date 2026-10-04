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

// Function: FUN_001c4fb0
// Address: 0x1c4fb0 - 0x1c4fcc
void FUN_001c4fb0_0x1c4fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001c4fb0_0x1c4fb0");
#endif

    ctx->pc = 0x1c4fb0u;

    // 0x1c4fb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c4fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c4fb4: 0x3c040047  lui         $a0, 0x47
    ctx->pc = 0x1c4fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)71 << 16));
    // 0x1c4fb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c4fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c4fbc: 0x24843940  addiu       $a0, $a0, 0x3940
    ctx->pc = 0x1c4fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14656));
    // 0x1c4fc0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c4fc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4fc4: 0xc08e9ac  jal         func_23A6B0
    ctx->pc = 0x1C4FC4u;
    SET_GPR_U32(ctx, 31, 0x1C4FCCu);
    ctx->pc = 0x1C4FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4FC4u;
    // 0x1c4fc8: 0x24060fe0  addiu       $a2, $zero, 0xFE0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A6B0u, 0x1C4FC4u, 0x1C4FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4FCCu;
}
