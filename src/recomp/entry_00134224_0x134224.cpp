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

// Function: entry_00134224
// Address: 0x134224 - 0x134240
void entry_00134224_0x134224(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00134224_0x134224");
#endif

    ctx->pc = 0x134224u;

    // 0x134224: 0x3c010031  lui         $at, 0x31
    ctx->pc = 0x134224u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49 << 16));
    // 0x134228: 0x8c23a3e0  lw          $v1, -0x5C20($at)
    ctx->pc = 0x134228u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x30A3E0u));
    // 0x13422c: 0x30630200  andi        $v1, $v1, 0x200
    ctx->pc = 0x13422cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x134230: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x134230u;
    {
        const bool branch_taken_0x134230 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x134230) {
            ctx->pc = 0x134240u;
            return;
        }
    }
    ctx->pc = 0x134238u;
    // 0x134238: 0xc04e334  jal         func_138CD0
    ctx->pc = 0x134238u;
    SET_GPR_U32(ctx, 31, 0x134240u);
    ctx->pc = 0x138CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138CD0u, 0x134238u, 0x134240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134240u;
}
