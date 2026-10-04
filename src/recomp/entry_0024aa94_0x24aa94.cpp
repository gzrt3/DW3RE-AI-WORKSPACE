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

// Function: entry_0024aa94
// Address: 0x24aa94 - 0x24aac0
void entry_0024aa94_0x24aa94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024aa94_0x24aa94");
#endif

    switch (ctx->pc) {
        case 0x24aab4u: goto label_24aab4;
        default: break;
    }

    ctx->pc = 0x24aa94u;

    // 0x24aa94: 0x0  nop
    ctx->pc = 0x24aa94u;
    // NOP
    // 0x24aa98: 0x8f8292fc  lw          $v0, -0x6D04($gp)
    ctx->pc = 0x24aa98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
    // 0x24aa9c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x24aa9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x24aaa0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x24aaa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24aaa4: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x24AAA4u;
    {
        const bool branch_taken_0x24aaa4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x24aaa4) {
            ctx->pc = 0x24AAC0u;
            return;
        }
    }
    ctx->pc = 0x24AAACu;
    // 0x24aaac: 0xc070038  jal         func_1C00E0
    ctx->pc = 0x24AAACu;
    SET_GPR_U32(ctx, 31, 0x24AAB4u);
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x24AAACu, 0x24AAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AAB4u;
label_24aab4:
    // 0x24aab4: 0x8f8292fc  lw          $v0, -0x6D04($gp)
    ctx->pc = 0x24aab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
    // 0x24aab8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x24aab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x24aabc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x24aabcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x24aac0u;
}
