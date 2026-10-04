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

// Function: FUN_00191c60
// Address: 0x191c60 - 0x191c74
void FUN_00191c60_0x191c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00191c60_0x191c60");
#endif

    switch (ctx->pc) {
        case 0x191c70u: goto label_191c70;
        default: break;
    }

    ctx->pc = 0x191c60u;

    // 0x191c60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x191c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x191c64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x191c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x191c68: 0xc064720  jal         func_191C80
    ctx->pc = 0x191C68u;
    SET_GPR_U32(ctx, 31, 0x191C70u);
    ctx->pc = 0x191C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191C68u;
    // 0x191c6c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191C80u, 0x191C68u, 0x191C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191C70u;
label_191c70:
    // 0x191c70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x191c70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x191c74u;
}
