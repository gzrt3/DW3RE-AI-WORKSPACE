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

// Function: FUN_001000f0
// Address: 0x1000f0 - 0x10010c
void FUN_001000f0_0x1000f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001000f0_0x1000f0");
#endif

    switch (ctx->pc) {
        case 0x100100u: goto label_100100;
        default: break;
    }

    ctx->pc = 0x1000f0u;

    // 0x1000f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1000f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1000f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1000f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1000f8: 0xc06def6  jal         func_1B7BD8
    ctx->pc = 0x1000F8u;
    SET_GPR_U32(ctx, 31, 0x100100u);
    ctx->pc = 0x1B7BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7BD8u, 0x1000F8u, 0x100100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100100u;
label_100100:
    // 0x100100: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x100100u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x100104: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x100104u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x100108: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x100108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    ctx->pc = 0x10010cu;
}
