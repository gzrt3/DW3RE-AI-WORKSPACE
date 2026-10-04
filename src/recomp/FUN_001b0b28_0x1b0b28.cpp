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

// Function: FUN_001b0b28
// Address: 0x1b0b28 - 0x1b0b48
void FUN_001b0b28_0x1b0b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b0b28_0x1b0b28");
#endif

    ctx->pc = 0x1b0b28u;

    // 0x1b0b28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b0b28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b0b2c: 0x3c080037  lui         $t0, 0x37
    ctx->pc = 0x1b0b2cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)55 << 16));
    // 0x1b0b30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b0b30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b0b34: 0x250861d8  addiu       $t0, $t0, 0x61D8
    ctx->pc = 0x1b0b34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 25048));
    // 0x1b0b38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b0b38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0b3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b0b3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0b40: 0xc06c38e  jal         func_1B0E38
    ctx->pc = 0x1B0B40u;
    SET_GPR_U32(ctx, 31, 0x1B0B48u);
    ctx->pc = 0x1B0B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0B40u;
    // 0x1b0b44: 0x24070009  addiu       $a3, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0E38u, 0x1B0B40u, 0x1B0B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0B48u;
}
