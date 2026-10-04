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

// Function: entry_001b6fd8
// Address: 0x1b6fd8 - 0x1b6fec
void entry_001b6fd8_0x1b6fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6fd8_0x1b6fd8");
#endif

    switch (ctx->pc) {
        case 0x1b6fe0u: goto label_1b6fe0;
        default: break;
    }

    ctx->pc = 0x1b6fd8u;

    // 0x1b6fd8: 0xc06df82  jal         func_1B7E08
    ctx->pc = 0x1B6FD8u;
    SET_GPR_U32(ctx, 31, 0x1B6FE0u);
    ctx->pc = 0x1B7E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7E08u, 0x1B6FD8u, 0x1B6FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6FE0u;
label_1b6fe0:
    // 0x1b6fe0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1b6fe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1b6fe4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1b6fe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1b6fe8: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x1b6fe8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    ctx->pc = 0x1b6fecu;
}
