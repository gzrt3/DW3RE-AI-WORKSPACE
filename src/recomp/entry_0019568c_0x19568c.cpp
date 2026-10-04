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

// Function: entry_0019568c
// Address: 0x19568c - 0x1956a4
void entry_0019568c_0x19568c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019568c_0x19568c");
#endif

    ctx->pc = 0x19568cu;

    // 0x19568c: 0x0  nop
    ctx->pc = 0x19568cu;
    // NOP
    // 0x195690: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x195690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x195694: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x195694u;
    {
        const bool branch_taken_0x195694 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x195694) {
            ctx->pc = 0x1956A4u;
            return;
        }
    }
    ctx->pc = 0x19569Cu;
    // 0x19569c: 0xc070038  jal         func_1C00E0
    ctx->pc = 0x19569Cu;
    SET_GPR_U32(ctx, 31, 0x1956A4u);
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x19569Cu, 0x1956A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1956A4u;
}
