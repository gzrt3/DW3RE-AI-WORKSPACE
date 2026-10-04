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

// Function: entry_00112974
// Address: 0x112974 - 0x112988
void entry_00112974_0x112974(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112974_0x112974");
#endif

    ctx->pc = 0x112974u;

    // 0x112974: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x112974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x112978: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x112978u;
    {
        const bool branch_taken_0x112978 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x112978) {
            ctx->pc = 0x112988u;
            return;
        }
    }
    ctx->pc = 0x112980u;
    // 0x112980: 0xc070038  jal         func_1C00E0
    ctx->pc = 0x112980u;
    SET_GPR_U32(ctx, 31, 0x112988u);
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x112980u, 0x112988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112988u;
}
