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

// Function: FUN_0010dad0
// Address: 0x10dad0 - 0x10dae0
void FUN_0010dad0_0x10dad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_0010dad0_0x10dad0");
#endif

    ctx->pc = 0x10dad0u;

    // 0x10dad0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10dad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10dad4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10dad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10dad8: 0xc070038  jal         func_1C00E0
    ctx->pc = 0x10DAD8u;
    SET_GPR_U32(ctx, 31, 0x10DAE0u);
    ctx->pc = 0x10DADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DAD8u;
    // 0x10dadc: 0x8f8484d0  lw          $a0, -0x7B30($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935760)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x10DAD8u, 0x10DAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DAE0u;
}
