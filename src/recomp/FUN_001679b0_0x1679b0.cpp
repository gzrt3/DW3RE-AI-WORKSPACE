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

// Function: FUN_001679b0
// Address: 0x1679b0 - 0x1679c8
void FUN_001679b0_0x1679b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001679b0_0x1679b0");
#endif

    ctx->pc = 0x1679b0u;

    // 0x1679b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1679b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1679b4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1679b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1679b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1679b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1679bc: 0x278486b8  addiu       $a0, $gp, -0x7948
    ctx->pc = 0x1679bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294936248));
    // 0x1679c0: 0xc08e93e  jal         func_23A4F8
    ctx->pc = 0x1679C0u;
    SET_GPR_U32(ctx, 31, 0x1679C8u);
    ctx->pc = 0x1679C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1679C0u;
    // 0x1679c4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A4F8u, 0x1679C0u, 0x1679C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1679C8u;
}
