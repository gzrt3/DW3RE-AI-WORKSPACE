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

// Function: entry_00112a10
// Address: 0x112a10 - 0x112a24
void entry_00112a10_0x112a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112a10_0x112a10");
#endif

    ctx->pc = 0x112a10u;

    // 0x112a10: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x112a10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x112a14: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x112A14u;
    {
        const bool branch_taken_0x112a14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x112a14) {
            ctx->pc = 0x112A24u;
            return;
        }
    }
    ctx->pc = 0x112A1Cu;
    // 0x112a1c: 0xc070038  jal         func_1C00E0
    ctx->pc = 0x112A1Cu;
    SET_GPR_U32(ctx, 31, 0x112A24u);
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x112A1Cu, 0x112A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112A24u;
}
