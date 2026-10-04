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

// Function: FUN_00144e70
// Address: 0x144e70 - 0x144e90
void FUN_00144e70_0x144e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00144e70_0x144e70");
#endif

    ctx->pc = 0x144e70u;

    // 0x144e70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x144e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x144e74: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x144e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x144e78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x144e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x144e7c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x144e7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144e80: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x144e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x144e84: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x144e84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x144e88: 0xc070120  jal         func_1C0480
    ctx->pc = 0x144E88u;
    SET_GPR_U32(ctx, 31, 0x144E90u);
    ctx->pc = 0x144E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144E88u;
    // 0x144e8c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0480u, 0x144E88u, 0x144E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144E90u;
}
