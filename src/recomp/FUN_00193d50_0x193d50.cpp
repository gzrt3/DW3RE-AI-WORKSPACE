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

// Function: FUN_00193d50
// Address: 0x193d50 - 0x193d68
void FUN_00193d50_0x193d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00193d50_0x193d50");
#endif

    ctx->pc = 0x193d50u;

    // 0x193d50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x193d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x193d54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x193d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x193d58: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x193d58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193d5c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x193d5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193d60: 0xc066e1a  jal         func_19B868
    ctx->pc = 0x193D60u;
    SET_GPR_U32(ctx, 31, 0x193D68u);
    ctx->pc = 0x19B868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B868u, 0x193D60u, 0x193D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193D68u;
}
