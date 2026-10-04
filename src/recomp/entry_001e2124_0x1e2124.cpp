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

// Function: entry_001e2124
// Address: 0x1e2124 - 0x1e2150
void entry_001e2124_0x1e2124(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e2124_0x1e2124");
#endif

    ctx->pc = 0x1e2124u;

    // 0x1e2124: 0x8f838d70  lw          $v1, -0x7290($gp)
    ctx->pc = 0x1e2124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937968)));
    // 0x1e2128: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e2128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e212c: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E212Cu;
    {
        const bool branch_taken_0x1e212c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1e212c) {
            ctx->pc = 0x1E2150u;
            return;
        }
    }
    ctx->pc = 0x1E2134u;
    // 0x1e2134: 0x8f828d68  lw          $v0, -0x7298($gp)
    ctx->pc = 0x1e2134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937960)));
    // 0x1e2138: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x1e2138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x1e213c: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x1e213cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1e2140: 0x1100a  movz        $v0, $zero, $at
    ctx->pc = 0x1e2140u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x1e2144: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E2144u;
    {
        const bool branch_taken_0x1e2144 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E2148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2144u;
        // 0x1e2148: 0xaf828d68  sw          $v0, -0x7298($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937960), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2144) {
            ctx->pc = 0x1E2150u;
            return;
        }
    }
    ctx->pc = 0x1E214Cu;
    // 0x1e214c: 0xaf808d70  sw          $zero, -0x7290($gp)
    ctx->pc = 0x1e214cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937968), GPR_U32(ctx, 0));
    ctx->pc = 0x1e2150u;
}
