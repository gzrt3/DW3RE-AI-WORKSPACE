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

// Function: FUN_00233e88
// Address: 0x233e88 - 0x233e9c
void FUN_00233e88_0x233e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00233e88_0x233e88");
#endif

    ctx->pc = 0x233e88u;

    // 0x233e88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x233e88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x233e8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x233e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x233e90: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x233e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x233e94: 0xc08cf9e  jal         func_233E78
    ctx->pc = 0x233E94u;
    SET_GPR_U32(ctx, 31, 0x233E9Cu);
    ctx->pc = 0x233E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233E94u;
    // 0x233e98: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x233E78u, 0x233E94u, 0x233E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233E9Cu;
}
