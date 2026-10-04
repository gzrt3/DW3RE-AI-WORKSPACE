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

// Function: FUN_00117ca0
// Address: 0x117ca0 - 0x117cb0
void FUN_00117ca0_0x117ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00117ca0_0x117ca0");
#endif

    ctx->pc = 0x117ca0u;

    // 0x117ca0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x117ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x117ca4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x117ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x117ca8: 0xc0478ec  jal         func_11E3B0
    ctx->pc = 0x117CA8u;
    SET_GPR_U32(ctx, 31, 0x117CB0u);
    ctx->pc = 0x117CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117CA8u;
    // 0x117cac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E3B0u, 0x117CA8u, 0x117CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117CB0u;
}
