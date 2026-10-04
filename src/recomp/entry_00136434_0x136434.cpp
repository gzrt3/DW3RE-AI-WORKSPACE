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

// Function: entry_00136434
// Address: 0x136434 - 0x136444
void entry_00136434_0x136434(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136434_0x136434");
#endif

    ctx->pc = 0x136434u;

    // 0x136434: 0x3c040031  lui         $a0, 0x31
    ctx->pc = 0x136434u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49 << 16));
    // 0x136438: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x136438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x13643c: 0xc066e26  jal         func_19B898
    ctx->pc = 0x13643Cu;
    SET_GPR_U32(ctx, 31, 0x136444u);
    ctx->pc = 0x136440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13643Cu;
    // 0x136440: 0x2484a3f0  addiu       $a0, $a0, -0x5C10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B898u, 0x13643Cu, 0x136444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136444u;
}
