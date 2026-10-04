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

// Function: entry_001e6cbc
// Address: 0x1e6cbc - 0x1e6ccc
void entry_001e6cbc_0x1e6cbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e6cbc_0x1e6cbc");
#endif

    ctx->pc = 0x1e6cbcu;

    // 0x1e6cbc: 0x8f848e74  lw          $a0, -0x718C($gp)
    ctx->pc = 0x1e6cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938228)));
    // 0x1e6cc0: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1e6cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1e6cc4: 0xc070ea8  jal         func_1C3AA0
    ctx->pc = 0x1E6CC4u;
    SET_GPR_U32(ctx, 31, 0x1E6CCCu);
    ctx->pc = 0x1E6CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6CC4u;
    // 0x1e6cc8: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3AA0u, 0x1E6CC4u, 0x1E6CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6CCCu;
}
