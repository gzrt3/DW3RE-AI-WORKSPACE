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

// Function: FUN_001a3dc0
// Address: 0x1a3dc0 - 0x1a3dd4
void FUN_001a3dc0_0x1a3dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a3dc0_0x1a3dc0");
#endif

    ctx->pc = 0x1a3dc0u;

    // 0x1a3dc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a3dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a3dc4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a3dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a3dc8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a3dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a3dcc: 0xc06b518  jal         func_1AD460
    ctx->pc = 0x1A3DCCu;
    SET_GPR_U32(ctx, 31, 0x1A3DD4u);
    ctx->pc = 0x1A3DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3DCCu;
    // 0x1a3dd0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD460u, 0x1A3DCCu, 0x1A3DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3DD4u;
}
