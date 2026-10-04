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

// Function: entry_00114060
// Address: 0x114060 - 0x114068
void entry_00114060_0x114060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114060_0x114060");
#endif

    ctx->pc = 0x114060u;

    // 0x114060: 0xc045950  jal         func_116540
    ctx->pc = 0x114060u;
    SET_GPR_U32(ctx, 31, 0x114068u);
    ctx->pc = 0x114064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114060u;
    // 0x114064: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116540u, 0x114060u, 0x114068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114068u;
}
