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

// Function: entry_00152370
// Address: 0x152370 - 0x152384
void entry_00152370_0x152370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00152370_0x152370");
#endif

    ctx->pc = 0x152370u;

    // 0x152370: 0x8e0400d0  lw          $a0, 0xD0($s0)
    ctx->pc = 0x152370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x152374: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x152374u;
    {
        const bool branch_taken_0x152374 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x152374) {
            ctx->pc = 0x152384u;
            return;
        }
    }
    ctx->pc = 0x15237Cu;
    // 0x15237c: 0xc070038  jal         func_1C00E0
    ctx->pc = 0x15237Cu;
    SET_GPR_U32(ctx, 31, 0x152384u);
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x15237Cu, 0x152384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152384u;
}
