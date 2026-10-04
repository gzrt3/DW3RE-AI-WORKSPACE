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

// Function: FUN_001a58c8
// Address: 0x1a58c8 - 0x1a58e0
void FUN_001a58c8_0x1a58c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a58c8_0x1a58c8");
#endif

    ctx->pc = 0x1a58c8u;

    // 0x1a58c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a58c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a58cc: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1a58ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1a58d0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1a58d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a58d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a58d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a58d8: 0xc069314  jal         func_1A4C50
    ctx->pc = 0x1A58D8u;
    SET_GPR_U32(ctx, 31, 0x1A58E0u);
    ctx->pc = 0x1A58DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A58D8u;
    // 0x1a58dc: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4C50u, 0x1A58D8u, 0x1A58E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A58E0u;
}
