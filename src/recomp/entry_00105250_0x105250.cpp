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

// Function: entry_00105250
// Address: 0x105250 - 0x105268
void entry_00105250_0x105250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00105250_0x105250");
#endif

    ctx->pc = 0x105250u;

    // 0x105250: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x105250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x105254: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x105254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x105258: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x105258u;
    {
        const bool branch_taken_0x105258 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x105258) {
            ctx->pc = 0x105268u;
            return;
        }
    }
    ctx->pc = 0x105260u;
    // 0x105260: 0xc070038  jal         func_1C00E0
    ctx->pc = 0x105260u;
    SET_GPR_U32(ctx, 31, 0x105268u);
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x105260u, 0x105268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x105268u;
}
