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

// Function: entry_0024aa30
// Address: 0x24aa30 - 0x24aa60
void entry_0024aa30_0x24aa30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024aa30_0x24aa30");
#endif

    switch (ctx->pc) {
        case 0x24aa50u: goto label_24aa50;
        default: break;
    }

    ctx->pc = 0x24aa30u;

    // 0x24aa30: 0x8f8292fc  lw          $v0, -0x6D04($gp)
    ctx->pc = 0x24aa30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
    // 0x24aa34: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x24aa34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x24aa38: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x24aa38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x24aa3c: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x24aa3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x24aa40: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x24AA40u;
    {
        const bool branch_taken_0x24aa40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x24aa40) {
            ctx->pc = 0x24AA60u;
            return;
        }
    }
    ctx->pc = 0x24AA48u;
    // 0x24aa48: 0xc070038  jal         func_1C00E0
    ctx->pc = 0x24AA48u;
    SET_GPR_U32(ctx, 31, 0x24AA50u);
    ctx->pc = 0x1C00E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C00E0u, 0x24AA48u, 0x24AA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24AA50u;
label_24aa50:
    // 0x24aa50: 0x8f8292fc  lw          $v0, -0x6D04($gp)
    ctx->pc = 0x24aa50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939388)));
    // 0x24aa54: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x24aa54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x24aa58: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x24aa58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x24aa5c: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x24aa5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    ctx->pc = 0x24aa60u;
}
