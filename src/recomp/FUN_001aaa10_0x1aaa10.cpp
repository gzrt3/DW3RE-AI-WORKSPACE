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

// Function: FUN_001aaa10
// Address: 0x1aaa10 - 0x1aaa20
void FUN_001aaa10_0x1aaa10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001aaa10_0x1aaa10");
#endif

    ctx->pc = 0x1aaa10u;

    // 0x1aaa10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1aaa10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1aaa14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1aaa14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1aaa18: 0xc06a65c  jal         func_1A9970
    ctx->pc = 0x1AAA18u;
    SET_GPR_U32(ctx, 31, 0x1AAA20u);
    ctx->pc = 0x1AAA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAA18u;
    // 0x1aaa1c: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9970u, 0x1AAA18u, 0x1AAA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAA20u;
}
