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

// Function: entry_001e6c6c
// Address: 0x1e6c6c - 0x1e6c84
void entry_001e6c6c_0x1e6c6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e6c6c_0x1e6c6c");
#endif

    switch (ctx->pc) {
        case 0x1e6c7cu: goto label_1e6c7c;
        default: break;
    }

    ctx->pc = 0x1e6c6cu;

    // 0x1e6c6c: 0x8f848e74  lw          $a0, -0x718C($gp)
    ctx->pc = 0x1e6c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938228)));
    // 0x1e6c70: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1e6c70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1e6c74: 0xc070ea8  jal         func_1C3AA0
    ctx->pc = 0x1E6C74u;
    SET_GPR_U32(ctx, 31, 0x1E6C7Cu);
    ctx->pc = 0x1E6C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E6C74u;
    // 0x1e6c78: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3AA0u, 0x1E6C74u, 0x1E6C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E6C7Cu;
label_1e6c7c:
    // 0x1e6c7c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1E6C7Cu;
    {
        const bool branch_taken_0x1e6c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e6c7c) {
            ctx->pc = 0x1E6CCCu;
            return;
        }
    }
    ctx->pc = 0x1E6C84u;
}
