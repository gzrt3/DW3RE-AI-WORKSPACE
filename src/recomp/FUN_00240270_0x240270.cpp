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

// Function: FUN_00240270
// Address: 0x240270 - 0x240290
void FUN_00240270_0x240270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00240270_0x240270");
#endif

    ctx->pc = 0x240270u;

    // 0x240270: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x240270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x240274: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x240274u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x240278: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x240278u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x24027c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24027cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x240280: 0x24841300  addiu       $a0, $a0, 0x1300
    ctx->pc = 0x240280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4864));
    // 0x240284: 0x24a5b2a0  addiu       $a1, $a1, -0x4D60
    ctx->pc = 0x240284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947488));
    // 0x240288: 0xc08e93e  jal         func_23A4F8
    ctx->pc = 0x240288u;
    SET_GPR_U32(ctx, 31, 0x240290u);
    ctx->pc = 0x24028Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240288u;
    // 0x24028c: 0x24063800  addiu       $a2, $zero, 0x3800 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A4F8u, 0x240288u, 0x240290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240290u;
}
