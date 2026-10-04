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

// Function: entry_00127f5c
// Address: 0x127f5c - 0x127f68
void entry_00127f5c_0x127f5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00127f5c_0x127f5c");
#endif

    ctx->pc = 0x127f5cu;

    // 0x127f5c: 0x26060330  addiu       $a2, $s0, 0x330
    ctx->pc = 0x127f5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 816));
    // 0x127f60: 0xc066e02  jal         func_19B808
    ctx->pc = 0x127F60u;
    SET_GPR_U32(ctx, 31, 0x127F68u);
    ctx->pc = 0x127F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127F60u;
    // 0x127f64: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B808u, 0x127F60u, 0x127F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127F68u;
}
