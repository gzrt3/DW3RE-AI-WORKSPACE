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

// Function: entry_00114028
// Address: 0x114028 - 0x114030
void entry_00114028_0x114028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00114028_0x114028");
#endif

    ctx->pc = 0x114028u;

    // 0x114028: 0xc045950  jal         func_116540
    ctx->pc = 0x114028u;
    SET_GPR_U32(ctx, 31, 0x114030u);
    ctx->pc = 0x11402Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114028u;
    // 0x11402c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116540u, 0x114028u, 0x114030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x114030u;
}
