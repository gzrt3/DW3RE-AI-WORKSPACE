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

// Function: FUN_001581e0
// Address: 0x1581e0 - 0x158200
void FUN_001581e0_0x1581e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001581e0_0x1581e0");
#endif

    ctx->pc = 0x1581e0u;

    // 0x1581e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1581e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1581e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1581e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1581e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1581e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1581ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1581ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1581f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1581f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1581f4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1581f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1581f8: 0xc070120  jal         func_1C0480
    ctx->pc = 0x1581F8u;
    SET_GPR_U32(ctx, 31, 0x158200u);
    ctx->pc = 0x1581FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1581F8u;
    // 0x1581fc: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0480u, 0x1581F8u, 0x158200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158200u;
}
