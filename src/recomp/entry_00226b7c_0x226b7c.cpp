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

// Function: entry_00226b7c
// Address: 0x226b7c - 0x226b8c
void entry_00226b7c_0x226b7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00226b7c_0x226b7c");
#endif

    ctx->pc = 0x226b7cu;

    // 0x226b7c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x226b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x226b80: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x226b80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x226b84: 0xc044934  jal         func_1124D0
    ctx->pc = 0x226B84u;
    SET_GPR_U32(ctx, 31, 0x226B8Cu);
    ctx->pc = 0x226B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226B84u;
    // 0x226b88: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1124D0u, 0x226B84u, 0x226B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226B8Cu;
}
