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

// Function: entry_001a5c64
// Address: 0x1a5c64 - 0x1a5c80
void entry_001a5c64_0x1a5c64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a5c64_0x1a5c64");
#endif

    ctx->pc = 0x1a5c64u;

    // 0x1a5c64: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1a5c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1a5c68: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A5C68u;
    {
        const bool branch_taken_0x1a5c68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5c68) {
            ctx->pc = 0x1A5C80u;
            return;
        }
    }
    ctx->pc = 0x1A5C70u;
    // 0x1a5c70: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x1a5c70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x1a5c74: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x1a5c74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1a5c78: 0xc069a22  jal         func_1A6888
    ctx->pc = 0x1A5C78u;
    SET_GPR_U32(ctx, 31, 0x1A5C80u);
    ctx->pc = 0x1A5C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5C78u;
    // 0x1a5c7c: 0x2484a540  addiu       $a0, $a0, -0x5AC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6888u, 0x1A5C78u, 0x1A5C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5C80u;
}
