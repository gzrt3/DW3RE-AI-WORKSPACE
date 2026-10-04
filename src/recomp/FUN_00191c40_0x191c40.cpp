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

// Function: FUN_00191c40
// Address: 0x191c40 - 0x191c54
void FUN_00191c40_0x191c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00191c40_0x191c40");
#endif

    switch (ctx->pc) {
        case 0x191c50u: goto label_191c50;
        default: break;
    }

    ctx->pc = 0x191c40u;

    // 0x191c40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x191c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x191c44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x191c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x191c48: 0xc064720  jal         func_191C80
    ctx->pc = 0x191C48u;
    SET_GPR_U32(ctx, 31, 0x191C50u);
    ctx->pc = 0x191C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191C48u;
    // 0x191c4c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191C80u, 0x191C48u, 0x191C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191C50u;
label_191c50:
    // 0x191c50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x191c50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x191c54u;
}
