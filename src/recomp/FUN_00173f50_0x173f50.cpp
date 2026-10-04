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

// Function: FUN_00173f50
// Address: 0x173f50 - 0x173f68
void FUN_00173f50_0x173f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00173f50_0x173f50");
#endif

    switch (ctx->pc) {
        case 0x173f60u: goto label_173f60;
        default: break;
    }

    ctx->pc = 0x173f50u;

    // 0x173f50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x173f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x173f54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x173f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x173f58: 0xc072f90  jal         func_1CBE40
    ctx->pc = 0x173F58u;
    SET_GPR_U32(ctx, 31, 0x173F60u);
    ctx->pc = 0x1CBE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBE40u, 0x173F58u, 0x173F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173F60u;
label_173f60:
    // 0x173f60: 0xc070038  jal         func_1C00E0
    ctx->pc = 0x173F60u;
    SET_GPR_U32(ctx, 31, 0x173F68u);
    ctx->pc = 0x173F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173F60u;
    // 0x173f64: 0x8f84874c  lw          $a0, -0x78B4($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936396)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x173F60u, 0x173F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173F68u;
}
