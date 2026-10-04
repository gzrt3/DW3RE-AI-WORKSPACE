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

// Function: entry_0024aa04
// Address: 0x24aa04 - 0x24aa30
void entry_0024aa04_0x24aa04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024aa04_0x24aa04");
#endif

    switch (ctx->pc) {
        case 0x24aa20u: goto label_24aa20;
        default: break;
    }

    ctx->pc = 0x24aa04u;

    // 0x24aa04: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x24aa04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x24aa08: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x24aa08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x24aa0c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x24aa0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24aa10: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x24AA10u;
    {
        const bool branch_taken_0x24aa10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x24aa10) {
            ctx->pc = 0x24AA30u;
            return;
        }
    }
    ctx->pc = 0x24AA18u;
    // 0x24aa18: 0xc070038  jal         func_1C00E0
    ctx->pc = 0x24AA18u;
    SET_GPR_U32(ctx, 31, 0x24AA20u);
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x24AA18u, 0x24AA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AA20u;
label_24aa20:
    // 0x24aa20: 0x8f8292fc  lw          $v0, -0x6D04($gp)
    ctx->pc = 0x24aa20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
    // 0x24aa24: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x24aa24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x24aa28: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x24aa28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x24aa2c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x24aa2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    ctx->pc = 0x24aa30u;
}
