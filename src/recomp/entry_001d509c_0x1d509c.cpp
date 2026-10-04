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

// Function: entry_001d509c
// Address: 0x1d509c - 0x1d50a4
void entry_001d509c_0x1d509c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d509c_0x1d509c");
#endif

    ctx->pc = 0x1d509cu;

    // 0x1d509c: 0xc045a10  jal         func_116840
    ctx->pc = 0x1D509Cu;
    SET_GPR_U32(ctx, 31, 0x1D50A4u);
    ctx->pc = 0x1D50A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D509Cu;
    // 0x1d50a0: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116840u, 0x1D509Cu, 0x1D50A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D50A4u;
}
