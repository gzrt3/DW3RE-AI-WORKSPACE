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

// Function: entry_00187900
// Address: 0x187900 - 0x187914
void entry_00187900_0x187900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187900_0x187900");
#endif

    ctx->pc = 0x187900u;

    // 0x187900: 0x86230224  lh          $v1, 0x224($s1)
    ctx->pc = 0x187900u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 548)));
    // 0x187904: 0x1c600003  bgtz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x187904u;
    {
        const bool branch_taken_0x187904 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x187904) {
            ctx->pc = 0x187914u;
            return;
        }
    }
    ctx->pc = 0x18790Cu;
    // 0x18790c: 0xc061e50  jal         func_187940
    ctx->pc = 0x18790Cu;
    SET_GPR_U32(ctx, 31, 0x187914u);
    ctx->pc = 0x187940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187940u, 0x18790Cu, 0x187914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187914u;
}
