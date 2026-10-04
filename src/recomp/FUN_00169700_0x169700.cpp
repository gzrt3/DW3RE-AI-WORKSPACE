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

// Function: FUN_00169700
// Address: 0x169700 - 0x169718
void FUN_00169700_0x169700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00169700_0x169700");
#endif

    switch (ctx->pc) {
        case 0x169714u: goto label_169714;
        default: break;
    }

    ctx->pc = 0x169700u;

    // 0x169700: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x169700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x169704: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x169704u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169708: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x169708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16970c: 0xc066972  jal         func_19A5C8
    ctx->pc = 0x16970Cu;
    SET_GPR_U32(ctx, 31, 0x169714u);
    ctx->pc = 0x169710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16970Cu;
    // 0x169710: 0x8f8487b0  lw          $a0, -0x7850($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936496)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19A5C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19A5C8u, 0x16970Cu, 0x169714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169714u;
label_169714:
    // 0x169714: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x169714u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x169718u;
}
