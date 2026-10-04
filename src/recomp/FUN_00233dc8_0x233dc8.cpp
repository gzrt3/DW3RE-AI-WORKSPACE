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

// Function: FUN_00233dc8
// Address: 0x233dc8 - 0x233ddc
void FUN_00233dc8_0x233dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00233dc8_0x233dc8");
#endif

    ctx->pc = 0x233dc8u;

    // 0x233dc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x233dc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x233dcc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x233dccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x233dd0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x233dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x233dd4: 0xc06b518  jal         func_1AD460
    ctx->pc = 0x233DD4u;
    SET_GPR_U32(ctx, 31, 0x233DDCu);
    ctx->pc = 0x233DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233DD4u;
    // 0x233dd8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD460u, 0x233DD4u, 0x233DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233DDCu;
}
