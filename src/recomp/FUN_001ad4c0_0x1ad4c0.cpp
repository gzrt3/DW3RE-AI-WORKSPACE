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

// Function: FUN_001ad4c0
// Address: 0x1ad4c0 - 0x1ad4e4
void FUN_001ad4c0_0x1ad4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001ad4c0_0x1ad4c0");
#endif

    ctx->pc = 0x1ad4c0u;

    // 0x1ad4c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1ad4c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1ad4c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ad4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ad4c8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1ad4c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1ad4cc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1ad4ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad4d0: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x1ad4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x1ad4d4: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x1ad4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x1ad4d8: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x1ad4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x1ad4dc: 0xc069208  jal         func_1A4820
    ctx->pc = 0x1AD4DCu;
    SET_GPR_U32(ctx, 31, 0x1AD4E4u);
    ctx->pc = 0x1AD4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD4DCu;
    // 0x1ad4e0: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4820u, 0x1AD4DCu, 0x1AD4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AD4E4u;
}
