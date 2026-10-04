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

// Function: FUN_0023f590
// Address: 0x23f590 - 0x23f5b0
void FUN_0023f590_0x23f590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0023f590_0x23f590");
#endif

    ctx->pc = 0x23f590u;

    // 0x23f590: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x23f590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23f594: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23f594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23f598: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23f598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23f59c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x23f59cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x23f5a0: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x23f5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x23f5a4: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x23f5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x23f5a8: 0xc069208  jal         func_1A4820
    ctx->pc = 0x23F5A8u;
    SET_GPR_U32(ctx, 31, 0x23F5B0u);
    ctx->pc = 0x23F5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23F5A8u;
    // 0x23f5ac: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4820u, 0x23F5A8u, 0x23F5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23F5B0u;
}
