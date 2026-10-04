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

// Function: entry_00112a38
// Address: 0x112a38 - 0x112a4c
void entry_00112a38_0x112a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112a38_0x112a38");
#endif

    ctx->pc = 0x112a38u;

    // 0x112a38: 0x8e0400c0  lw          $a0, 0xC0($s0)
    ctx->pc = 0x112a38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x112a3c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x112A3Cu;
    {
        const bool branch_taken_0x112a3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x112a3c) {
            ctx->pc = 0x112A4Cu;
            return;
        }
    }
    ctx->pc = 0x112A44u;
    // 0x112a44: 0xc070038  jal         func_1C00E0
    ctx->pc = 0x112A44u;
    SET_GPR_U32(ctx, 31, 0x112A4Cu);
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x112A44u, 0x112A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112A4Cu;
}
