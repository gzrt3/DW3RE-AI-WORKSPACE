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

// Function: entry_001add5c
// Address: 0x1add5c - 0x1add70
void entry_001add5c_0x1add5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001add5c_0x1add5c");
#endif

    ctx->pc = 0x1add5cu;

    // 0x1add5c: 0x8c437214  lw          $v1, 0x7214($v0)
    ctx->pc = 0x1add5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29204)));
    // 0x1add60: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ADD60u;
    {
        const bool branch_taken_0x1add60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ADD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADD60u;
        // 0x1add64: 0x3c04002d  lui         $a0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1add60) {
            ctx->pc = 0x1ADD70u;
            return;
        }
    }
    ctx->pc = 0x1ADD68u;
    // 0x1add68: 0xc08ee2e  jal         func_23B8B8
    ctx->pc = 0x1ADD68u;
    SET_GPR_U32(ctx, 31, 0x1ADD70u);
    ctx->pc = 0x1ADD6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ADD68u;
    // 0x1add6c: 0x2484a7f8  addiu       $a0, $a0, -0x5808 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23B8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B8B8u, 0x1ADD68u, 0x1ADD70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ADD70u;
}
