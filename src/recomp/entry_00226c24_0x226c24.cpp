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

// Function: entry_00226c24
// Address: 0x226c24 - 0x226c34
void entry_00226c24_0x226c24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00226c24_0x226c24");
#endif

    ctx->pc = 0x226c24u;

    // 0x226c24: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x226c24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x226c28: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x226c28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x226c2c: 0xc044934  jal         func_1124D0
    ctx->pc = 0x226C2Cu;
    SET_GPR_U32(ctx, 31, 0x226C34u);
    ctx->pc = 0x226C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226C2Cu;
    // 0x226c30: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1124D0u, 0x226C2Cu, 0x226C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226C34u;
}
