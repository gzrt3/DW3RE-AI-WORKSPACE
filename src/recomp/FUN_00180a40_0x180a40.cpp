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

// Function: FUN_00180a40
// Address: 0x180a40 - 0x180a50
void FUN_00180a40_0x180a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00180a40_0x180a40");
#endif

    ctx->pc = 0x180a40u;

    // 0x180a40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x180a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x180a44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x180a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x180a48: 0xc069218  jal         func_1A4860
    ctx->pc = 0x180A48u;
    SET_GPR_U32(ctx, 31, 0x180A50u);
    ctx->pc = 0x180A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180A48u;
    // 0x180a4c: 0x8f848304  lw          $a0, -0x7CFC($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935300)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4860u, 0x180A48u, 0x180A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180A50u;
}
