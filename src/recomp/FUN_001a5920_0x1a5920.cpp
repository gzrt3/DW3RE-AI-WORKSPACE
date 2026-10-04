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

// Function: FUN_001a5920
// Address: 0x1a5920 - 0x1a5938
void FUN_001a5920_0x1a5920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a5920_0x1a5920");
#endif

    ctx->pc = 0x1a5920u;

    // 0x1a5920: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a5920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a5924: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1a5924u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x1a5928: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1a5928u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a592c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a592cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a5930: 0xc069314  jal         func_1A4C50
    ctx->pc = 0x1A5930u;
    SET_GPR_U32(ctx, 31, 0x1A5938u);
    ctx->pc = 0x1A5934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5930u;
    // 0x1a5934: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4C50u, 0x1A5930u, 0x1A5938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5938u;
}
