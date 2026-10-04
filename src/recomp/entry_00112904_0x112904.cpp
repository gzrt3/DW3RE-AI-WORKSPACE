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

// Function: entry_00112904
// Address: 0x112904 - 0x11291c
void entry_00112904_0x112904(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112904_0x112904");
#endif

    ctx->pc = 0x112904u;

    // 0x112904: 0x0  nop
    ctx->pc = 0x112904u;
    // NOP
    // 0x112908: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x112908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x11290c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11290Cu;
    {
        const bool branch_taken_0x11290c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x11290c) {
            ctx->pc = 0x11291Cu;
            return;
        }
    }
    ctx->pc = 0x112914u;
    // 0x112914: 0xc070038  jal         func_1C00E0
    ctx->pc = 0x112914u;
    SET_GPR_U32(ctx, 31, 0x11291Cu);
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x112914u, 0x11291Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11291Cu;
}
