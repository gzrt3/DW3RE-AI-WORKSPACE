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

// Function: FUN_001b0b58
// Address: 0x1b0b58 - 0x1b0b78
void FUN_001b0b58_0x1b0b58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001b0b58_0x1b0b58");
#endif

    ctx->pc = 0x1b0b58u;

    // 0x1b0b58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b0b58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b0b5c: 0x3c080037  lui         $t0, 0x37
    ctx->pc = 0x1b0b5cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)55 << 16));
    // 0x1b0b60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b0b60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b0b64: 0x250861d8  addiu       $t0, $t0, 0x61D8
    ctx->pc = 0x1b0b64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 25048));
    // 0x1b0b68: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b0b68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0b6c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b0b6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0b70: 0xc06c38e  jal         func_1B0E38
    ctx->pc = 0x1B0B70u;
    SET_GPR_U32(ctx, 31, 0x1B0B78u);
    ctx->pc = 0x1B0B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0B70u;
    // 0x1b0b74: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0E38u, 0x1B0B70u, 0x1B0B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0B78u;
}
